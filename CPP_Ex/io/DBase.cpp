// DBase.cpp: implementation of the DBase class.
//
//////////////////////////////////////////////////////////////////////

#include <string>
#include "DBase.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

template <class T>
DBase<T>::DBase()
{
	strcpy(versionTag, "Record");
}

template <class T>
DBase<T>::DBase(char * filename)
{
	strcpy(versionTag, "Record");
	this->filename = filename;
	this->recordCount = 0;
	this->recordSpace = 0;
}

template <class T>
DBase<T>::~DBase()
{

}

template <class T>
void DBase<T>::open()
{
	file.open(filename, ios::in | ios:: out | ios::binary | ios::ate);
	if (file.tellg() <= 0 )
	{
		file.close();
		create();
	} else
	{
	    readRecordHead();
	}
}

template <class T>
void DBase<T>::close()
{
	if (file.is_open())
	{
		file.close();
	}
}

template <class T>
void DBase<T>::create()
{
	file.open(filename, ios::in | ios:: out | ios::binary | ios::trunc);

	file.write(versionTag, 8);
	file.write((char *)&recordCount, sizeof(recordCount));
	file.write((char *)&recordSpace, sizeof(recordSpace));

	file.flush();
}

template <class T>
void DBase<T>::writeRecordHead()
{
	file.seekp(8, ios::beg);
	file.write((char *)&recordSpace, sizeof(recordCount));
	file.write((char *)&recordCount, sizeof(recordSpace));
}

template <class T>
void DBase<T>::readRecordHead()
{
	file.seekg(8, ios::beg);
	file.read((char *)&recordSpace, sizeof(recordCount));
	file.read((char *)&recordCount, sizeof(recordSpace));
}

template <class T>
int DBase<T>::getCount()
{
	return recordCount;
}

template <class T>
void DBase<T>::insert(T * s)
{
	int ri = 0;
	int flag = 0;

	if (recordCount < recordSpace)
	{
		// 寻找合适的位置保存数据
		for (; ri < recordSpace; ri ++)
		{
			file.seekg(DataOffset + ri * (sizeof(T) + 4), ios::beg);
			file.read((char *)&flag, sizeof(flag));
			if (flag == 0)
				break;
		}
	} else 
	{
		// 没有空余空间，则在文件末尾添加记录
		ri = recordSpace++;
	}
	cout << "RI:" << ri << " Space:" << recordSpace << endl;

	file.seekp(DataOffset + ri * (sizeof(T) + 4), ios::beg);

	flag = 1;
	file.write((char *)&flag, sizeof(flag));
	file.write((char *)s, sizeof(T));

	recordCount ++;
	writeRecordHead();

	file.flush();
}

template <class T>
bool DBase<T>::load(long no, T & data)
{
	int ri = 0;
	file.seekg(DataOffset, ios::beg);
	
	int flag = -1;
	T   temp;

	for (ri = 0; ri < recordSpace; ri ++)
	{
		file.read((char *)&flag, sizeof(int));
	    file.read((char *)&temp, sizeof(T));

		if (flag > 0 && temp.getNo() == no)
		{
			data = temp;
			return true;
		}
	}

	return false;
}

template <class T>
void DBase<T>::remove(long no)
{
	int ri = 0;
	int flag = -1;
	T  data;

    file.seekg(DataOffset, ios::beg);
	for (ri = 0; ri < recordSpace; ri ++)
	{
	    file.read((char *)&flag, sizeof(flag));
		if (flag <= 0)
			continue;

		file.read((char *)&data, sizeof(T));
		if (data.getNo() == no)
		{
			// 找到了
			cout << "Del:" << data.getNo() << " " << no << " Ri:" << ri << endl;
			flag = -1;

			//写记录标识
			file.seekp(DataOffset + ri * (sizeof(T) + 4), ios::beg);
			file.write((char *)&flag, sizeof(flag));

			recordCount --;
			writeRecordHead();

			break;
		}
	}

	file.flush();
}

template <class T>
T *  DBase<T>::loadAll()
{
	int ri = 0;
	file.seekg(DataOffset, ios::beg);
	
	int flag = -1;
	T   temp;

	T * datas = new T[recordCount];
	int index = 0;
	for (ri = 0; ri < recordSpace; ri ++)
	{
		file.read((char *)&flag, sizeof(int));
	    file.read((char *)&temp, sizeof(T));

		if (flag > 0)
		{
			datas[index ++] = temp;
		}
	}

	return datas;
}