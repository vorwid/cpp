#include <iostream>

using namespace std;

string login;
string haslo;

int main()
{
    cout << "Witaj, podaj swoj login" << endl;
    cin >> login;
    cout << "Podaj haslo"<<endl;
    cin >> haslo;
    if ((login=="luke")&&(haslo=="3286"))
    {
        cout << "Podano prawidlowe dane";
        cout <<endl<< "Witaj na swoim koncie";
    }
    else
    {
        cout <<endl<< "Podano zle dane";
    }

    return 0;
}
