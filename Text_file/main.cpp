#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//���������� �����

	char buffer[100]; //����� ��� ���������� ���������� �� �����
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
	//������������ ate
	//��������� ��������� � ����� �����
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
	//������������ app
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

	//������� ����, �������� ���
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