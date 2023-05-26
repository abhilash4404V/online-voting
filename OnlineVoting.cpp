#include <iostream>
using namespace std;

int digitCheaker(long long number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

int main()
{
    cout << "Hello Everyone, Welcome to our online voting platform.Register yourself to get ready with us.\nDisclaimer: No step is reversible here, If mistaken, You have to Run the code from starting." << endl;
    system("pause");
    system("cls");

    char name[30];
    string password, rpassword, passwd;
    long long mobile_number, aadhar_number, generate_usrid, usrid, j = 0;
    cout << "Write your Name : ";
    gets(name);
    cout << endl;
    cout << "Enter your mobile number : ";
    cin >> mobile_number;
    int p = digitCheaker(mobile_number);
    if (p == 10)
    {
        cout << endl;
        cout << "Enter Your Aadhar Number : ";
        cin >> aadhar_number;
        int q = digitCheaker(aadhar_number);
        if (q == 12)
        {
            cout << endl;
            cout << "Create New Password(Recommended strings only) : ";
            cin >> password;
            cout << endl;
            cout << "Rewrite the Password : ";
            cin >> rpassword;
            system("cls");

            if (password == rpassword)
            {
                generate_usrid = rand();
                cout << "Your System generated user id is :" << generate_usrid << endl;
                cout << "Congratulations! You have successfully registered...\n....alert....\nRemember the system generated userid for further progress\n....alert...." << endl;
                system("pause");
                system("cls");

                cout << "Enter UserId : ";
                cin >> usrid;
                cout << "your password : ";
                cin >> passwd;
                if (usrid == generate_usrid && passwd == password)
                {
                    cout << "successfully logged in..." << endl;
                    system("pause");
                    system("cls");
                    cout << "Whom do you want to vote : " << endl;
                    cout << "press 1 for Jrinomul" << endl;
                    cout << "press 2 for GPAM" << endl;
                    cout << "press 3 for DJP" << endl;
                    cout << "press 4 for Bongress" << endl;
                    cout << "press 5 for Nirdol" << endl;
                    cout << "your input : ";
                    int input;
                    cin >> input;
                    if (input == 1)
                        cout << "you voted for Jrinomul";
                    else if (input == 2)
                        cout << "you voted for GPAM";
                    else if (input == 3)
                        cout << "you voted for DJP";
                    else if (input == 4)
                        cout << "you voted for Bongress";
                    else if (input == 5)
                        cout << "you voted for Nirdol";
                    else
                        cout << "Enter correct Number !!!";
                    cout << endl;
                    cout << "Thank you, for using online voting service..Dont forget to clear the screen.....";
                    system("pause");
                    system("cls");
                    cout << endl;
                    cout << "Your screen has been cleared....have a nice day";
                }
                else
                {
                    cout << "Invalid user id or password";
                }
            }
            else
            {
                cout << "password not matched";
            }
        }
        else
        {
            cout << "Write 12 digit aadhar number.";
        }
    }
    else
    {
        cout << "Write a valid mobile number";
    }

    return 0;
}