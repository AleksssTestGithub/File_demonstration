#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdio>

using namespace std;

int main()
{
	fstream fin("E:\\temp\\in",ios_base::in|ios_base::binary);
	char buffer[100];
	if (fin.is_open())
	{
		int i = 0;
		fin.seekg(4, ios_base::beg);
		while (!fin.eof())
		{
			fin.read((buffer + i), 1);
			cout << buffer[i] << endl;
			i++;			
		}
		fin.close();

	}
	fstream fout("E:\\temp\\in", ios_base::out | ios_base::binary | ios_base::app);
		if (fout.is_open())
		{
			buffer[0] = 127;
			fout.write(buffer, 1);
			fout.close();
		}
		//удаление файла
		//remove("E:\\temp\\test1.txt");
	_getch();
	return 0;
}