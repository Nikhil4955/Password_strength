#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isStrong(string &password)
{
    if(password.length() < 8)
        return false;
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool spchar = false;
    for(char ch : password)
    {
        if(isupper(ch))
            upper = true;
        else if(islower(ch))
            lower = true;
        else if(isdigit(ch))
            digit = true;
        else if(ispunct(ch))
            spchar = true;
    }
    return upper && lower && digit && spchar;
}
int main()
{
    string password;
    cout << "Enter Password : ";
    cin >> password;
    if(isStrong(password))
        cout << "The Password is strong" << endl;
    else
    {
        cout << "The Password is weak" << endl;
        cout << "A strong password should be : " << endl;
        cout << "1. Atleast 8 characters long" << endl;
        cout << "2. Containing Uppercase letters" << endl;
        cout << "3. Containing Lowercase letters" << endl;
        cout << "4. Containing Special characters" << endl;
    }
}