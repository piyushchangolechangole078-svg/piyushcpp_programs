#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    int roomNo;
    string name;
    int age;
    string phone;
    int days;
    bool booked;

public:

    Hotel()
    {
        booked = false;
    }

    void addCustomer()
    {
        cout << "\nEnter Room Number : ";
        cin >> roomNo;

        cin.ignore();

        cout << "Enter Customer Name : ";
        getline(cin, name);

        cout << "Enter Age : ";
        cin >> age;

        cin.ignore();

        cout << "Enter Phone Number : ";
        getline(cin, phone);

        cout << "Enter Number of Days : ";
        cin >> days;

        booked = true;

        cout << "\nRoom Booked Successfully.\n";
    }

    void display()
    {
        if(booked)
        {
            cout << "\n----------------------------";
            cout << "\nRoom Number : " << roomNo;
            cout << "\nCustomer Name : " << name;
            cout << "\nAge : " << age;
            cout << "\nPhone : " << phone;
            cout << "\nDays : " << days;
            cout << "\n----------------------------\n";
        }
    }

    bool searchRoom(int room)
    {
        return booked && roomNo == room;
    }

    void showCustomer()
    {
        display();
    }

    void checkout()
    {
        if(booked)
        {
            int bill = days * 1500;

            cout << "\nCustomer Name : " << name;
            cout << "\nRoom Number : " << roomNo;
            cout << "\nTotal Bill : Rs. " << bill << endl;

            booked = false;

            cout << "\nCheckout Successful.\n";
        }
    }

    bool isBooked()
    {
        return booked;
    }
};

int main()
{
    Hotel customer[100];

    int count = 0;
    int choice;

    while(true)
    {
        cout << "\n========== HOTEL MANAGEMENT ==========\n";
        cout << "1. Add Customer\n";
        cout << "2. Display Customers\n";
        cout << "3. Search Customer\n";
        cout << "4. Checkout Customer\n";
        cout << "5. Exit\n";

        cout << "Enter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(count < 100)
                {
                    customer[count].addCustomer();
                    count++;
                }
                else
                {
                    cout << "Hotel Record Full.\n";
                }
                break;
            }

            case 2:
            {
                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(customer[i].isBooked())
                    {
                        customer[i].display();
                        found = true;
                    }
                }

                if(!found)
                {
                    cout << "No Customer Found.\n";
                }

                break;
            }

            case 3:
            {
                int room;
                cout << "Enter Room Number : ";
                cin >> room;

                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(customer[i].searchRoom(room))
                    {
                        customer[i].showCustomer();
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Customer Not Found.\n";
                }

                break;
            }

            case 4:
            {
                int room;
                cout << "Enter Room Number : ";
                cin >> room;

                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(customer[i].searchRoom(room))
                    {
                        customer[i].checkout();
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Customer Not Found.\n";
                }

                break;
            }

            case 5:
                cout << "Thank You.\n";
                return 0;

            default:
                cout << "Invalid Choice.\n";
        }
    }

    return 0;
}