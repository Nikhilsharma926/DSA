#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

/*  Mini ATM Project
    -> Check Balance
    -> Cash Withdraw
    -> User Detail  
    -> Update Mobile Number
*/

class atm{                          // class Atm
private:                            // Private memeber variable
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:                            // Memeber Function


    // setData function is setting tha Data into the private member variable
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a){

        account_No = account_No_a; // assigning the formal argument to private number variable's
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_No_a;
    }

    // getAccount function is returining the user's account no.
    long int getAccount(){
        
        return account_No;
    }

    // getName function return the name of User's
    string getName(){

        return name;
    }

    // getPin function  is returning the user's PIN
    int getPin(){

        return PIN;
    }

    // getBalance  is returning the user's Bank Balance
    double getBalance(){

        return balance;
    }

    // getMobile is returning the user's Mobile No.
    string getMobileNo(){

        return mobile_No;
    }

    // setMobile function is Updating the user Mobile no.
    void setMobile(string mob_prev, string mob_new){
        
        if(mob_prev == mobile_No){      // It will check the old Mobile No.
            mobile_No = mob_new;        // and update the new mobile no. if old mobile match
            cout << endl << "Successfully Updated Mobile no.";
            _getch();                   // getch  is hold the screen (untile user press any key)
        }
        else{                           // the prev_no doesn't matched and it will not update
                                        // the mobile no.
            cout<< endl << "Incorrect !!! Old Mobile no.";
            _getche();                  // getch  is hold the screen (untile user press any key)
        }

    }

    // cashWithdraw function is used to Withdraw the cash from ATM
    void cashWithdraw(int ammount_a){

        if(ammount_a > 0 && ammount_a < balance){   // check entered ammount validity

            balance -= ammount_a;                   // balance = balance - ammount_a
            cout << endl << "Please collect the Cash";
            cout << endl << "Available Balance: " << balance;
            _getch();               // getch  is hold the screen (untile user press any key)
        }
        else{

            cout << endl << "Invalid Input or Insufficient Balance";
            _getch();              // getch  is hold the screen (untile user press any key)
        }
    }
};

int main(){

    int choice = 0, enterPin;    // enterPin and enterAccountNo. ---> user Authentication
    long int enterAccountNo;

    system("cls");               // Use to clear the Screen

    // Create user ( Object )
    atm user1;
    // Set User Details ( into Object )   ( setting  Default Data )
    user1.setData(12345678, "Jack", 1234, 45000.9, "9087654321");

    do
    {
        system("cls");
        cout << endl << "**** Welcome to ATM ****" << endl;
        cout << endl << "Enter Your Account No. ";       // Asking user to enter account no
        cin >> enterAccountNo;

        cout << endl << "Enter PIN ";                   // Asking User to enter PIN
        cin >> enterPin; 

        // Checking  whether enter value is matched with User details
        if((enterAccountNo == user1.getAccount()) && (enterPin == user1.getPin())){

            do
            {
                
                int ammount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");
                //User Interface
                cout << endl << "**** Welcome to ATM ****" << endl;
                cout << endl << "Select Options";
                cout << endl << "1. Check Balance";
                cout << endl << "2. Cash Withdraw";
                cout << endl << "3. Show User Deatils";
                cout << endl << "4. Update Mobile No.";
                cout << endl << "5. Exit" << endl;
                cin >> choice;                      // Taking user Choice

                switch (choice)                     // Switch Condition
                {
                case 1:                             // if User press 1
                    cout << endl << "Your Balance is: "<< user1.getBalance();
                                                    //getBalance function called to getting the user Balance
                    _getch();
                    break;
                
                case 2:                              // if User press 2
                    cout << endl << "Enter the ammount ";
                    cin >> ammount;
                    user1.cashWithdraw(ammount);     // Calling Withdraw Function
                                                    // Passing the Withdraw ammount
                    break;

                case 3:                              // if User press 3
                    cout << endl << "**** Users Deatils are :- ";
                    cout << endl << "-> Account No. " << user1.getAccount();
                    cout << endl << "-> Name " << user1.getName();
                    cout << endl << "-> Balance " << user1.getBalance();
                    cout << endl << "-> Mobile No. " << user1.getMobileNo();
                                                    // Getting all the user detail and print it

                    _getch();
                    break;
                
                case 4:                             // if User press 4
                    cout << endl << "Enter the old Mobile No. ";
                    cin >> oldMobileNo;             // Take old Mobile no.
                    cout << endl << "Enter the new Mobile No. ";
                    cin >> newMobileNo;              // Take new Mobile no.

                    user1.setMobile(oldMobileNo, newMobileNo);  // setting new mobile no.
                    break;
                
                case 5:                            // if User press 5
                    exit(0);                       // Exit Application
                
                default:                            // Handling invalid  user input
                    cout << endl << "Enter the Valid Data";
                    break;
                }

            } while (1);  
                                      // MENU   
        }
        else
		{
			cout << endl << "User Details are Invalid !!! ";
			_getch();
		}
    } while (1);            // LOGIN   
    
    return 0;
}
