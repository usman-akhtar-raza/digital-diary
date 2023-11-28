#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

class front
{ // this class is for front end
public:
    void fn()
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout << "\t\t\t\t\t@@ _____ @@\n";
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
        cout << "\t\t\t\t\t@@|_____|@@\n";
        cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
        system("pause");
        system("cls");

        cout << endl
             << endl
             << "Read The Description Carefully:" << endl;
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

    int menu()
    {

        system("CLS");
        system("color E9");
        cout << endl
             << endl
             << "Bundles off option are here:" << endl
             << endl;
        cout << ">>		Press [1] for Add a content:" << endl;
        cout << ">>     		Press [2] for Read a content:" << endl;
        cout << ">>		Press [3] for update  content:" << endl;
        cout << ">>		Press [4] for dalete  content:" << endl;
        cout << ">>		Press [5] for change password:" << endl;
        cout << "Press [6] to Exit:" << endl;
        char h;
        cout << "----------------------" << endl;
        cout << "----------------------" << endl;
        cout << "Select the Option >> ";
        h = _getche();
        int g = h;
        while (g < 49 || g > 55)
        {
            cout << endl
                 << "you enter wrong enter again:";
            h = _getche();
            g = h;
        }
        if (g == 56)
        {
            exit(0);
        }
        return g;
    }
};
class Node;
Node *newnode = NULL;
Node *next = NULL;
Node *head = NULL;
class Node
{
    string data;
    string moment;
    string reminder;
    Node *prev;
    Node *next;

public:
    Node()
    {
    }
    Node(string d, string m, string r)
    {
        data = d;
        moment = m;
        reminder = r;
    }
    void password()
    {
        system("CLS");
        string password;
        string line;
        cout << endl
             << endl
             << "Enter the Password :";
        cin >> password;
        ifstream pass("password.txt");
        if (pass.is_open())
        {

            while (getline(pass, line))
            {
            }
        }
        else
        {
            cout << endl
                 << "file not open" << endl;
        }

        int result = line.compare(password);
        if (result == 0)
        {
            system("CLS");
            cout << endl
                 << endl
                 << "Password match";
            system("PAUSE");
            system("CLS");
            front e;
            int a = e.menu();

            if (a == 53)
            {
                string passwo;
                system("CLS");
                cout << endl
                     << endl
                     << "=============>>>>     Enter your previou password:";
                cin >> passwo;
                int re = 0;
                while (re == 0)
                {
                    int re = line.compare(passwo);
                    if (re == 1)
                    {
                        cout << endl
                             << "password not match" << endl;
                        cout << "Enter agian:";
                        cin >> passwo;
                    }
                    else
                    {
                        break;
                    }
                }
                pass.close();
                ofstream change("password.txt");
                cout << endl
                     << endl
                     << "Enter a new password";
                cin >> passwo;
                change << passwo;
                change.close();
            }
            else if (a == 49)
            {
            }
        }
        else
        {
            cout << endl
                 << "password not match :" << endl;
        }
    }
    void autoo()
{
    ifstream data("example.txt");
    string line;
    Node *current = nullptr;
    int lineCount = 0;
    int pageNum = 1;  // Page number

    while (getline(data, line))
    {
        if (lineCount % 13 == 0)
        {
            if (head == nullptr)
            {
                head = new Node("", "", "");
                current = head;
            }
            else
            {
                current->next = new Node("", "", "");
                current->next->prev = current;
                current = current->next;
            }

          
        }

        if (lineCount % 13 < 11)
        {
            current->data += line + "\n";
        }
        if (lineCount % 13 == 11)
        {
            current->reminder = line;
        }
        if (lineCount % 13 == 12)
        {
            current->moment = line;
        }

        lineCount++;
    }

    // Display the content
    Node *temp = head;
      if (lineCount > 0 && lineCount % 12 == 0)
            {
                cout << "Page  no is " << pageNum << endl;
                pageNum++ ;
            }
    while (temp != nullptr)
    {
        cout << temp->data << temp->moment << temp->reminder << endl;
        temp = temp->next;
    }
}

};

int main()
{
    system("color E5");
    // front f;
    // f.fn();

    Node dairy;
    // dairy.password();
    dairy.autoo();
}