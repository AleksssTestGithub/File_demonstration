#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//считывание файла

	char buffer[100]; //буфер для считывания информации из файла
	ifstream inputFile("E:\\temp\\test.txt");
	if (inputFile.is_open())
	{
		while (!inputFile.eof())
		{
			inputFile >> buffer;
			cout << buffer << endl;
		}
		inputFile.close();
	}
	cout << endl;
	//демонстрация ate
	//переводит указатель в конец файла
	ifstream inputFileate("E:\\temp\\test.txt",ios_base::in|ios_base::ate);
	if (inputFileate.is_open())
	{
		while (!inputFileate.eof())
		{
			inputFileate >> buffer;
			cout << buffer << endl;
		}
		inputFileate.close();
	}

	cout << endl;
	//демонстрация app
	fstream appFile("E:\\temp\\test.txt", ios_base::in | ios_base::out|ios_base::app);
	if (appFile.is_open())
	{
		//appFile << "Some text";
		/*while (!appFile.eof())
		{
			appFile >> buffer;
			cout << buffer << endl;
		}*/
		appFile.close();
	}

	//открыть файл, которого нет
	fstream emptFile("E:\\temp\\test.txt",ios_base::in|ios_base::out|ios_base::trunc);
	if (emptFile.is_open())
	{
		while (emptFile.eof())
		{
			emptFile >> buffer;
			cout << buffer << endl;
		}
		emptFile.close();
	}
	
	_getch();
	return 0;
}