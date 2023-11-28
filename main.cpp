#include <iostream>
#include<string>

#include <fstream>
#include <conio.h>
using namespace std;

class front
{ // this class is for front end
public:
    void fn()
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
        cout << "\t\t\t\t\t@@ _ @@\n";
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
        cout << "\t\t\t\t\t@@|_|@@\n";
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
        a = _getche();
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
Node* newnode = NULL;
Node* next = NULL;
Node* head = NULL;
string arr[365];
class Node
{
    string date;
    string data;
    string moment;
    string reminder;
    Node* prev;
    Node* next;
    int i = 1;

public:
    Node()
    {
    }
    Node(string d, string m, string r,string dd)
    {
        data = d;
        moment = m;
        reminder = r;
        date = dd;
    }

    void password()
    {
    out:
        front e;
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

            getline(pass, line);
            while(!pass.eof())
            {
                getline(pass, line);
            }
        }
        else
        {
            cout << endl
                << "file not open" << endl;
        }
        if (line == password)
        {
            int result = line.compare(password);
            if (result == 0)
            {
                system("CLS");
                cout << endl
                    << endl
                    << "Password match";
                system("PAUSE");
                system("CLS");
                thing:
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
                    bool yes;
                    string userInput;
                    string store2 = "";
                    string date;
                    string reminder;
                    string MOD;
                    int j = 1;
                    cout << endl
                        << endl
                        << "Enter the date of your notes in that in that dd/mm '.' is compury ";
                    
                   
                    cin >> date;
                    
                    int k = 0;
                    while (k < 365)
                    {
                        int match = arr[k].compare(date);
                        if (match == 1)
                        {
                            cout << "you dont enter the correct date,this date is availbl:";

                            goto thing;
                        }
                        else
                        {
                            yes = true;
                        }k++;
                    }
                    if (yes == true)
                    {
                        arr[i] = date;
                    }
                    int esc = 0;
                    do
                    {
                        cout << "Line " << j << " :";
                        getline(cin, userInput);
                        store2 = store2 + "\n" + userInput;
                        cout << "press enter to go to next line:" << endl;
                        cout << "press esc to go to next page";
                        int y; j++;
                        cout << endl;
                        y = _getche();
                        while (y != 27 && y != 13)
                        {
                            cout << endl << "you enter wrong ,enter again"; cout << endl; y = _getche();
                        }
                        if (y == 27) {
                            break;
                        }


                    } while (esc != 27);

                    cout << endl
                        << "Entr the remainder of the day:";
                    cin >> reminder;
                    cout << endl
                        << "Entr the moment of the day:";
                    cin >> MOD;
                    int e = 10;
                    e = e - j;
                    for (int l = 0; l < e; l++)
                    {
                        store2 = store2 + "\n";
                    }
                    ofstream writ("examples.txt", ios::app);
                    if (writ.is_open())
                    {
                        writ << "\n" << date  <<"\n"<< store2 <<"\n" << MOD <<"\n" << reminder;
                        cout << endl << "your data i saved successfully";
                    }
                    else {
                        cout<<endl<<"file i not open";

                    }
                   
                    writ.close();


                    if (head == nullptr)
                    {
                        newnode = new Node(store2, MOD, reminder,date);
                        newnode->next = nullptr;
                        newnode->prev = nullptr;
                    }
                    else
                    {
                        Node* temp = head;
                        while (temp != nullptr)
                        {
                            temp = temp->next;
                        }
                        newnode = new Node(store2, MOD, reminder,date);
                        temp->next = newnode;
                        newnode->prev = temp;
                        newnode->next = nullptr;
                    }
                 goto thing;
                }
                else if (a == 50)
                {

                    Node* current = head;
                    while (current != nullptr)
                    {
                        cout << endl << "Dates;" << current->date<<endl<<endl<<current->data<<endl<<endl<<"Moment Of Day:"<<current->moment<<"\t\t\t\t\t\t\t\t"<<"Reminder"<<current->reminder;
                        cout << current->data << endl;

                        int g;

                        cout << "Press [1] to view the next page..." << endl;
                        cout << "Press [2] to view the prev page..." << endl;
                        cin >> g;
                        if (g == 1)
                        {
                            current = current->next;
                        }

                        else
                        {
                            current = current->prev;
                        }
                        cin.ignore();
                        // Wait for
                        system("CLS");
                    }
                   goto thing;
                }
            }
        }
            else
            {
                cout << endl
                    << "password not match :" << endl;
                cout << "If you want to again press [1];";
                cout << "If you want to exit press [2];";
                int a; cin >> a;
                if (a == 1)
                {
                    goto out;
                }
                else {
                    exit(0);
                }
               
            }
        
    }
    void autoo()
    {
        string line;
        string store;
        string re;
        string mo;
        string datee;
        ifstream data("examples.txt");
        int line_num = 1;
        if (data.is_open())
        {
            int li = 1;
            while (getline(data, line))
            {

                if (line_num == 1)
                {

                    int l = 0;
                    datee = line;
                    arr[l] = datee;
                    l++;
                    i++;
                }

                if (line_num > 1 && line_num <= 11)
                {
                    store = store + "\n" + line;
                }
                if (line_num == 12)
                {
                    re = line;
                }
                if (line_num == 13)
                {
                    mo = line;
                }
                if (line_num % 13 == 0)
                {

                    if (head == NULL)
                    {
                        newnode = new Node(store, re, mo,datee);
                        newnode->next = NULL;
                        newnode->prev = NULL;
                    }
                    else
                    {
                        Node* temp = head;
                        while (temp != NULL)
                        {
                            temp = temp->next;
                        }
                        newnode = new Node(store, re, mo,datee);
                        temp->next = newnode;
                        newnode->prev = temp;
                        newnode->next = NULL;
                    }
                }
                li++;
                line_num = li % 13;
            }

        }
        else
        {
            cout << endl
                << "file not open" << endl;
        }
        Node* temp2 = head;
        while (temp2 != NULL)
        {
            cout << temp2->data << endl
                << temp2->moment << endl
                << temp2->reminder << endl
                << endl;
        }
    }
};

int main()
{
    system("color E5");
    front f;
    f.fn();

    Node dairy;
    dairy.password();
    dairy.autoo();
}