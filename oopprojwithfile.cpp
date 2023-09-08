#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
double password = 2648;
static int count;

struct node
{
    char name[20], auther[20];
    int id, w_date;
    struct node *next;
};
struct node *start = NULL;

struct node1
{
    char name[20], branch[20];
    int roll_no, semister;
    struct node1 *next1;
};
struct node1 *start1 = NULL;

struct node3
{
    char name[30];
    struct node *neext;
};
struct node *starrt = NULL;

class book
{
    long int id, w_date;
    char name[20], auther[20];
    struct node *nn, *temp;

public:
    void get_bdata()
    {
        ofstream bout;
        bout.open("Book");

        nn = ((struct node *)malloc(sizeof(struct node)));
        cout << "\n =============================================================================";
        cout << "\n \t !!!*************** WELCOME TO BOOK ADDING SYSTEM ***************!!!";
        cout << "\n =============================================================================\n";

        cout << "\n Enter Book Id:";
        cin >> nn->id;
        cout << "\n Enter Book Name:";
        cin >> nn->name;
        cout << "\n Enter Book Auther:";
        cin >> nn->auther;
        cout << "\n Enter Book Written Date:";
        cin >> nn->w_date;

         
        bout<<nn->id<<"\n";
        bout<<nn->name<<"\n";
        bout<<nn->auther<<"\n";
        bout<<nn->w_date<<"\n";

        nn->next = NULL;
        if (start == NULL)
        {
            start = nn;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = nn;
        }
        cout << "\n------------------------------------------------------------------------------\n\n\n";
        bout.close();
    }

    void put_bdata()
    {
        if (start == NULL)
        {
            cout << "\n \t\t\t !!!!! ********** SORRRY YOU ARE NOT ENTERED ANY BOOK DETAILS ********** !!!!!";
            cout << "\n \t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
        }
        else
        {
            ifstream bin;
            bin.open("Book");
            temp = start;
            cout << "\n =============================================================================";
            cout << "\n\t!!!*************** WELCOME TO YOUR *OWN BOOK STORE ***************!!!";
            cout << "\n =============================================================================";
            while (temp != NULL)
            {
                cout << "\n\t Book ID:" << temp->id << "\n";
                cout << "\n\t Book Name:" << temp->name << "\n";
                cout << "\n\t Book Auther:" << temp->auther << "\n";
                cout << "\n\t Book Written date:" << temp->w_date << "\n";
                temp = temp->next;
                cout << "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
                
            }
            bin.close();
        }

    }
};

class change_p
{
    double change_p;

public:
    void get_password()
    {
        // ofstream pout;
        // pout.open("password");

        cout << "\n =============================================================================";
        cout << "\n \t ********* WELCOME TO PASSWORD CHANGING SYSTEM  *********";
        cout << "\n -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
        cout << "\n\n\t  Enter New password:";
        cin >> change_p;
        password = change_p;
        // pout<<"Your Password is:"<<password;
        // pout.close();

        // ifstream pin;
        // pin.open("password");
        // pin>>password;
        cout << "\n\t ***********!!!! YOUR PASSWORD IS CHANGED SUCCESSFULLY !!!!************* \n";
        cout << "\n\t___________________________________________";
        cout << "\n\t||\t####Your New Password is :" << password << "  ||";
        cout << "\n\t-------------------------------------------\n\n";
        cout << "\n -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
        // pin.close();
    }
};

class view_book : public change_p
{
    int ch;

public:
    void view()
    {
        cout << "\n =============================================================================";
        cout << "\n \t ************** Welcome to Library Book Store **************";
        cout << "\n =============================================================================\n";
        cout << "\n Enter  1: Historical Book details \n 2: Biography Book Details \n 3: horror book details \n Your choice ....:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n \t \t \t    !! ************** Welcome to Historical Book Store ************** !!\n";
            cout << "\n    \t \t||  BOOK_ID \t \tBOOK_NAME \t \t BOOK_AUTHER \t \t   WRITTEN_DATE ||";
            cout << "\n \t \t||--------------------------------------------------------------------------------------||";
            cout << "\n \t \t||  1012 \t \t Yayati \t \t Vishnu Khandekar \t \t1959 \t||";
            cout << "\n \t \t||  1014 \t \t Panipat \t \t Vishwas Patil \t \t\t1988 \t||";
            cout << "\n \t \t||  1016 \t \t Swami \t \t \t Ranjit Desai \t \t\t1962 \t||";
            cout << "\n \t \t||  1018 \t \t Chava \t \t \t Shivaji Sawant \t \t2009 \t||";
            cout << "\n \t \t||  1020 \t \t Budhbhushan \t Chatrapati Sambhaji Raje Bhosle \t-----\t||";
            cout << "\n \t \t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
            break;
        case 2:
            cout << "\n \t \t||\t !!************** Welcome to Biography Book Store **************!!     ||\n";
            cout << "\n    \t \t||  BOOK_ID \t \t BOOK_NAME \t \tBOOK_AUTHER \t WRITTEN_DATE  ||";
            cout << "\n \t \t||-----------------------------------------------------------------------------||";
            cout << "\n \t \t||  1022 \t \t alexander Hamilton \t ghi \t \t\t1999   ||";
            cout << "\n \t \t||  1024 \t \t John adams \t \t hrgui \t \t\t1788   ||";
            cout << "\n \t \t||  1026 \t \t Steve Jobs \t \t aoif \t \t\t1978   ||";
            cout << "\n \t \t||  1028 \t \t Into the world \t alkoa \t \t\t1945   ||";
            cout << "\n \t \t||  1030 \t \t Wings of fire \t \t lskd \t \t\t1966   ||";
            cout << "\n \t \t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
            break;
        case 3:
            cout << "\n \t \t||\t!!************** Welcome to Horror Book Store **************!!\t    ||\n";
            cout << "\n \t \t||  Book_id \t\tBook_Name \t \t Book_Auther \t written_date||";
            cout << "\n \t \t||---------------------------------------------------------------------------||";
            cout << "\n \t \t||  1012 \t \t Dracula \t \t Bram Stoker \t \t 1897||";
            cout << "\n \t \t||  1014 \t \t The Shining \t \t Jack torrance \t \t 1970||";
            cout << "\n \t \t||  1016 \t \t Carrie \t \t Stephen king \t \t 1974||";
            cout << "\n \t \t||  1018 \t \t Gothic tales\t \t Elizabeth Gaskell \t 1764||";
            cout << "\n \t \t||  1012 \t \t I am legend\t \t Richard Matheson \t 1950||";
            cout << "\n \t \t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
            break;

        default:
            cout << "\n \t\t\t !!! Please, Enter Valid choice !!!";
            cout << "\n \t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
        }
    }
};

class his_book
{
    char book_name[20];

public:
    void get_book()
    {
        cout << "\n Enter Book name you want to buy:";
        cin >> book_name;

        if (strcmp(book_name, "Yayati") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Panipath") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Swami") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Chhava") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Budhbhushan") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else
        {
            cout << "\n\t >>>>>>>>>>> Sorry, You entered book is not available in the library <<<<<<<<<<<<<";
            cout << "\n //////////////// Goto the Main site of the library And check the book details in the library to buy !!!!";
        }
    };
};

class boi_book
{
    char book_name[20];

public:
    void get_book2()
    {
        cout << "\n Enter Book name you want to buy:";
        cin >> book_name;

        if (strcmp(book_name, "John_adams") == 0)
        {
            cout << "\n \t\t********* !! YOU SUCCESSFULLY BUY THE BOOK !!\n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<<";
            cout << "\n=----------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "alexander_Hamilton") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< *********";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Steve_jobs") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Into_the_world") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Wings_of_fire") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else
        {
            cout << "\n\t >>>>>>>>>>> Sorry, You entered book is not available in the library <<<<<<<<<<<<<";
            cout << "\n //////////////// Goto the Main site of the library And check the book details in the library to buy !!!!";
        }
    }
};

class hor_book
{
    char book_name[20];

public:
    void get_book3()
    {
        cout << "\n Enter Book name you want to buy:";
        cin >> book_name;

        if (strcmp(book_name, "Dracula") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK *********\n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<<";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "The Shining") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Carrie") == 0)
        {
            cout << "\n \t\t********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "Gothic tales") == 0)
        {
            cout << "\n \t\t ********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n=------------------------------------------------------------------------=";
            count++;
        }
        else if (strcmp(book_name, "I am legend") == 0)
        {
            cout << "\n \t\t ********* YOU SUCCESSFULLY BUY THE BOOK !! \n \t\t >>>>>>>>!!!!!!! Th@nk You !!!!!!<<<<<<< ";
            cout << "\n\t=------------------------------------------------------------------------=";
            count++;
        }
        else
        {
            cout << "\n\t >>>>>>>>>>> Sorry, You entered book is not available in the library <<<<<<<<<<<<<";
            cout << "\n //////////////// Goto the Main site of the library And check the book details in the library to buy !!!!";
        }
    }
};

class buy_book : public his_book, public boi_book, public hor_book
{

    int ch, day, money;
    char b_name[20];
    struct node1 *temp1;

public:
    void buy_b()
    {
        int r_no;
        cout << "\n \t \t===============================================================================";
        cout << "\n \t\t\t   >>>>>>>>>>>>>> WELCOME TO BOOK BUYING SYSTEM <<<<<<<<<<<<<<";
        cout << "\n \t \t===============================================================================\n";
        cout << "\n \n\t\t\t Instructions: When you cross the  book returning days limit ! \n \t\t\t Then You have to pay the fine *1Rs./day !!!!!!!!!!";
        cout << "\n\t\t---------------------------------------------------------------------------------------";
        cout << " \n\t\t\t >>>>>>>>..Follow the below commands to buy a book!!!";
        cout << "\n\t\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
        cout << "\n \n\t\tEnter 1: Historical book \n \t\t2: Biographycal book \n \t\t3: Horror book\n \t\t4: Exit\n \t\t Your choice....:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            get_book();
            break;
        case 2:
            get_book2();
            break;
        case 3:
            get_book3();
            break;
        default:
            cout << "\n \t\t\t>>>>>>>>> Enter Valid choice !!!!!!!";
            cout << "\n\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
        }
    }

    void return_book()
    {
        if (count == 0)
        {
            cout << "\n\t\t ^^^.....Sorry, You are Not taken any book!!!";
            cout << "\n\n\t\t*******...Th@nk You !!!";
            cout << "\n\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
        }
        cout << "\n Enter name of book You have to return:";
        cin >> b_name;
        cout << "\n Enter days, You are used the book:";
        cin >> day;

        if (day >= 15)
        {
            money = day - 15;
            cout << "\n \t*******// Sorry,You are crossed the day limit So, You are able to pay the *Fine //********";
            cout << "\n \tGoto to fine section and pay the *FINE";
            cout << "\n\n\t\t>>>>>>>>>>>Your Fine is:*" << money << " Rs. \n";
            cout << "\n\t\t\t>>>>>>>>>>> !!! Th@nk You !!! <<<<<<<<<<<<<<<";
            cout << "\n\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
        }
        else
        {
            cout << "\n \t \t>>>>>>>>>>>>>>> CONGRATULATIONS <<<<<<<<<<<<<<<<<<";
            cout << "\n \tYou Successfully Returned the book without any *Charges!!!!!!!";
            cout << "\n\t\t >>>>>>>>>>>>>>>>> Th@nk You........!";
            cout << "\n\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
        }
    }
};

class student : public view_book, public buy_book
{
    int roll_no, semister;
    char name[20], branch[20];
    struct node1 *nn1, *temp1;
    int ch;

public:
    void get_stud()
    {
        nn1 = ((struct node1 *)malloc(sizeof(struct node1)));
        cout << "\n\t-------------------------------------------------------------------------";
        cout << "\n \t    ************** WELCOME TO STUDENT SECTION **************";
        cout << "\n\t-------------------------------------------------------------------------\n";

        cout << "\n Enter Your name:";
        cin >> name;
        cout << "\n Enter Roll No:";
        cin >> roll_no;
        cout << "\n Enter Your branch name:";
        cin >> branch;
        cout << "\n Enter Semister:";
        cin >> semister;
        nn1->roll_no = roll_no;
        strcpy(nn1->name, name);
        strcpy(nn1->branch, branch);
        nn1->semister = semister;
        nn1->next1 = NULL;
        if (start1 == NULL)
        {
            start1 = nn1;
        }
        else
        {
            temp1 = start1;
            while (temp1->next1 != NULL)
            {
                temp1 = temp1->next1;
            }
            temp1->next1 = nn1;
        }
        cout << "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
        cout << "\n \t\t\t>>>>>>>  Registretion successfull !!!";
        cout << "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
    }
    void put_stud()
    {
        if (start1 == NULL)
        {
            cout << "\n\n\n \t \t\t***********!! SORRY,THERE ARE NO ANY STUDENT INFORMATION !!***********";
            cout << "\n \t\t -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n\n";
        }
        else
        {
            cout << "  -------------------------------------------------------------------------";
            cout << "\n \t ************** WELCOME TO STUDENT SECTION **************";
            cout << "\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
            temp1 = start1;
            while (temp1 != NULL)
            {
                cout << "\n\t Name:" << temp1->name << "\n";
                cout << "\n\t Roll No:" << temp1->roll_no << "\n";
                cout << "\n\t Branch:" << temp1->branch << "\n";
                cout << "\n\t Semister:" << temp1->semister << "\n";
                temp1 = temp1->next1;
                cout << "\n=======================================================================\n\n";
            }
        }
    }

    void stud_con()
    {
        int r_no;
        cout << "\n Enter Your Roll no to continue Student login process:";
        cin >> r_no;

        if (start1 == NULL)
        {
            cout << "\n\t\t ******** Sorry, There is no any student registered !!!!!!!";
            cout << "\n\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
        }
        temp1 = start1;
        while (temp1 != NULL)
        {
            if (r_no == temp1->roll_no)
            {
                cout << "\n\n\t\t\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
                cout << "\n\t\t\t\t >>>>>>>>>>> Welcome " << temp1->name << " to student Login !!! <<<<<<<<<<<<<<<<";
                cout << "\n\t\t\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
                do{
                cout << "\n \tEnter 1: Buy Book \n \t\t 2: Return book \n \t\t 3: view book info in library !!! \n \t\t 4: Exit \n \tYour choice....:";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    buy_b();
                    break;
                case 2:
                    return_book();
                    break;
                case 3:
                    view();
                    break;
                default:
                    cout << "\n Enter valid choice!!!";
                }
                } while (ch != 4);
           }
            else
            {
                cout << "\n\n >>>>>>>>>> Sorry, This Roll_no is does not exists !!!";
            }

            temp1 = temp1->next1;
        }
    }
};

class libraryan : public student, public book
{
    double password1;
    char name[20];
    int ch;

public:
    void get_lidata()
    {
        cout << "\n Enter your Name:";
        cin >> name;

        cout << "\n Enter Password:";
        cin >> password1;
        if (password1 == password)
        {
            cout << "\n \t==============================================================";
            cout << "\n \t    !!! Welcome " << name << " in Library Management System !!!";
            cout << "\n \t==============================================================\n";
            do
            {
                cout << "\n Enter 1: Add Book Details !! \n\n 2: view You Entered book details !!\n\n 3: View book details in library !! \n\n 4: change password !!\n\n 5: view student details !!\n\n 6: Exit\n\n Choice ....:";
                cin >> ch;
                switch (ch)
                {
                case 1:
                    get_bdata();
                    break;
                case 2:
                    put_bdata();
                    break;
                case 3:
                    view();
                    break;
                case 4:
                    get_password();
                    break;
                case 5:
                    put_stud();
                    break;
                default:
                    cout << "\n \t\t\t\t!!!! Enter choice among five numbers!!!!";
                    cout << "\n\t-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
                }
            } while (ch != 6);
        }
        else
        {
            cout << "\n \t -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            cout << "\n \t\t\t\t!!!! Please Enter Correct Password !!!!";
            cout << "\n \t -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";
        }
    }
};

int main()
{
    libraryan l;
    student st;
    int ch;

    do
    {
        cout << "\n\n \t==============================================================================";
        cout << "\n\t \t *********** WELCOME TO LIBRARY MANAGEMENT SYSTEMS *Main site***********";
        cout << "\n   \t==============================================================================";
        cout << "\n\t Enter 1: Libraryan Login !!! \n\t \t2: Student registration !!\n\t \t3:Student Login \n\t \t4: Exit From Library system\n\t Choice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            l.get_lidata();
            break;
        case 2:
            st.get_stud();
            break;
        case 3:
            st.stud_con();
            break;
        default:
            cout << "\n\n\n\t >>>>>>>>>>> TH@NK YOU !!!....\n\n ";
        }
    } while (ch != 4);
}