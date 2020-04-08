#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	while (true)
	{
		cout << "Show data press 1" << endl;
		cout << "Write data  press 2" << endl;
		cout << "Exit press 3" << endl;
		int choice;
		cin >> choice;

		if (choice == 1) {
			char s[80];
			char s1[80];
			char s2[80];
			int a[10];


			ifstream infile;
			infile.open("C:\\labscode\\file.txt");
			ifstream infile1;
			infile1.open("C:\\labscode\\file_copy.txt");
			cout << setw(3) << "Address:" << setw(15) << "Surname:" << setw(15) << "The sum:" << endl;
			while (!infile.eof())
			{
				infile >> s;
				infile >> s1;
				infile >> s2;


				if (!infile.eof()) {
					cout.width(3);
					cout << s;
					cout.width(5);
					cout << s1;
					cout.width(3);
					cout << s2 << endl;

				}
			}
			while (!infile1.eof())
			{
				infile1 >> s;
				infile1 >> s1;
				infile1 >> s2;
				if (!infile1.eof()) {
					cout << s;
					cout << endl;
					cout << s1;
					cout << s2;
					cout << endl;

				}
			}

		}
		if (choice == 2) {
			ofstream fout("C:\\labscode\\file.txt");
			ofstream fout1("C:\\labscode\\file_copy.txt");
			char s[80];
			char s1[80];
			char s2[80];
			cout << "Enter your surname:" << endl;
			cin >> s;
			cout << "Enter your address:" << endl;
			cin >> s1 >> s2;
			cout << "Your surname:" << s << endl;
			cout << "Your address:" << s1 << " " << s2 << endl;
			int a[10];
			cout << "Enter the digits of your phone number:" << endl;
			int sum = 0;
			for (int i = 0; i < 10; i++)
				cin >> a[i];
			cout << "Your digits:" << endl;
			for (int i = 0; i < 10; i++)
				cout << a[i];
			cout << endl;
			for (int i = 0; i < 10; i++)
				sum += a[i];
			cout << "The sum:" << sum << endl;
			fstream outfile("C:\\labscode\\file.txt");
			outfile << s;
			outfile << s1 << " " << s2;
			outfile << sum;
			outfile.close();

		}
		{
			if (choice == 3)
			{
				break;
			}
		}
		system("pause");
	}
	_getch();
	return 0;

}