#include <iostream>
using namespace std;
// Asher Yisrael Kutswa ~ 137187
struct profile
{
    char firstname[50];
    char lastname[50];
    char favmeal [50];
    char favmovie [50];
};

int main()
{
    profile user;
    cout << "Enter First Name : ";
    cin >> user.firstname;
    cout << "---------------------\n\n";
    cout << "Enter Last Name : ";
    cin >> user.lastname;
    cout << "---------------------\n\n";
    cout << "What is your favorite meal ? ";
    cin >> user.favmeal;
    cout << "---------------------\n\n";
    cout << "What is your favorite movie ? ";
    cin >> user.favmovie;
    cout << "---------------------\n\n";
	cout << "\n";
    cout << "User Profile :" << endl;
    cout << "Your Name is - " << user.firstname << " ";
    cout << user.lastname<<endl;
    cout << "Your Favorite Meal is - " << user.favmeal << endl;
    cout << "Your Favorite Movie is - " << user.favmovie << endl;
    return 0;
}
