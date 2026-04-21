#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string books[100];
    int totalBooks = 0;
    while (true)
    {
        // main header
        system("cls");
        cout << "---------------------------------------------------------------" << endl;
        cout << "-------------------Libary Management System--------------------" << endl;
        cout << "---------------------------------------------------------------" << endl;
        cout << "User Menu" << endl;
        cout << "1 Admin" << endl;
        cout << "2 Student" << endl;
        cout << "3 To Exit" << endl;
        cout << "Choose Option: " << endl;
        int userOption;
        cin >> userOption;

        cout << "You Choose: " << userOption << endl;
        if (userOption == 1)
        {
            while (true)
            {
                cout << "--------------- Admin Panel ---------------" << endl;
                cout << "1. Add Book" << endl;
                cout << "2. View Books" << endl;
                cout << "3. Delete Book" << endl;
                cout << "4. Back" << endl;
                cout << endl;

                cout << "Choose an option: ";
                int adminChoice;
                cin >> adminChoice;
                
                if (adminChoice == 1)
                {
                    system("cls");
                    cout << "Enter book name: ";
                    cin >> books[totalBooks];
                    totalBooks++;
                    cout << "\nBook added successfully!" << endl;
                    getch();
                }
                else if (adminChoice == 2)
                {
                    system("cls");
                    cout << "------ Book List ------" << endl;
                    if (totalBooks == 0)
                    {
                        cout << "No books available." << endl;
                    }
                    else
                    {
                        for (int i = 0; i < totalBooks; i++)
                        {
                            cout << i + 1 << ". " << books[i] << endl;
                        }
                    }
                    getch();
                }
                else if (adminChoice == 3)
                {
                    system("cls");
                    cout << "Enter book number to delete: ";
                    int num;
                    cin >> num;
                    if (num > 0 && num <= totalBooks)
                    {
                        for (int i = num - 1; i < totalBooks - 1; i++)
                        {
                            books[i] = books[i + 1];
                        }
                        totalBooks--;
                        cout << "\nBook removed successfully!" << endl;
                    }
                    else
                    {
                        cout << "\nInvalid number!" << endl;
                    }
                    getch();
                }
                else if (adminChoice == 4)
                {
                    break;
                }
                else
                {
                    cout << "\nWrong option, try again." << endl;
                    getch();
                }
            }
        }
        else if (userOption == 2)
        {
            while (true)
            {
                system("cls");
                cout << "--------------- Student Panel ---------------" << endl;
                cout << "1. View Books" << endl;
                cout << "2. Issue Book" << endl;
                cout << "3. Back" << endl;
                cout << endl;


                cout << "Choose an option: ";
                int studentChoice;
                cin >> studentChoice;
                if (studentChoice == 1)
                {
                    system("cls");

                    cout << "------ Available Books ------" << endl;

                    if (totalBooks == 0)
                    {
                        cout << "No books available." << endl;
                    }
                    else
                    {
                        for (int i = 0; i < totalBooks; i++)
                        {
                            cout << i + 1 << ". " << books[i] << endl;
                        }
                    }
                    getch();
                }
                else if (studentChoice == 2)
                {
                    system("cls");
                    cout << "Enter book number to issue: ";
                    int num;
                    cin >> num;
                    if (num > 0 && num <= totalBooks)
                    {
                        cout << "\nYou have issued: " << books[num - 1] << endl;
                    }
                    else
                    {
                        cout << "\nInvalid book number!" << endl;
                    }

                    getch();

                }
                else if (studentChoice == 3)
                {
                    break;
                }
                else
                {
                    cout << "\nWrong option, try again." << endl;

                    getch();

                }
            }
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "\nInvalid input! Please try again." << endl;

            getch();
        }
    }
    cout << "\nThanks for using the system!" <<endl;

       
}