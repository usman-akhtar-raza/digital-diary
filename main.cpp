#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std ;

class front {   // this class is for front end
public:
	void fn()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout << "\t\t\t\t\t@@ _____________________________ @@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|-------------------------------------------------------------------------------------  |@@\n";
		cout << "\t\t\t\t\t@@|-------------------------------------------------------------------------------------  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout << "\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                          	 YOUR PERSONAL DAIRY                          			     |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
		cout << "\t\t\t\t\t@@|---------------------------------------------------------------------------------------|@@\n";
		cout << "\t\t\t\t\t@@|---------------------------------------------------------------------------------------|@@\n";
		cout << "\t\t\t\t\t@@|_____________________________|@@\n";
		cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
		system("pause");
		system("cls");


		cout << endl << endl << "Read The Description Carefully:" << endl;
		cout << endl;
		system("color E4");
		cout << "1)Don't froget the passwword:" << endl;
		cout << "------------------------------------" << endl;
		cout << "2)Don't press any other key except which is asked:" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "3)Contact no: 041-345647829" << endl;
		cout << "---------------------------" << endl;
		cout << "4)Email :HASEEB.IQBAL!@GMAIL.COM" << endl;
		cout << "--------------------------------" << endl;
		cout << "                          Press any key to continue:";
		char a;
		a = getche();
	}
	void password()
	{
		system("CLS");
		cout<<endl<<endl<<"Enter the Password :";
		string password;cin>>password;
		ifstream pass("password.txt");string line;
		if(pass.is_open())
		{
			
			while(getline(pass,line))
			{
				pass>>line;
			}
		}
		else{
			cout<<endl<<"file not open"<<endl;
		}
		int result=line.compare(password);
		if(result==1)
		{
			system("CLS");
			cout<<endl<<endl<<"Password match";
			system("PAUSE");
			system("CLS");
			int a=menu();
		}
		else{
			cout<<endl<<"password not match :"<<endl;
		}
		
	}
	int menu()
	{
		
	system("CLS");
	system("color E7");
	cout<<endl<<endl<<"Bundles off option are here:"<<endl<<endl;
	cout << ">>		Press [1] for Add a content:" << endl;
	cout << ">>     Press [2] for Read a content:" << endl;
	cout << ">>		Press [3] for update  content:" << endl;
	cout << ">>		Press [4] for dalete  content:" << endl;
	cout << ">>		Press [5] for change password:" << endl;
	cout << "Press [6] to Exit:" << endl;
	char h;
	cout << "----------------------" << endl;
	cout << "----------------------" << endl;
	cout << "Select the Option >> "; h = _getche();
	int g = h;
	while (g < 49 || g>55)
	{
		cout << endl << "you enter wrong enter again:";
		h = getche();
		g = h;
	}
	if (g == 56)
	{
		exit(0);
	}
	return g;




}
};
int main()
{
		system("color E5");
	front f;
	f.fn();
	
	f.password();
}