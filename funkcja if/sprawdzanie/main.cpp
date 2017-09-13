#include <iostream>

using namespace std;
int wiek;


int main()
{
    cout << "Witaj, podaj ile masz lat" << endl;
    cin >> wiek;

    if (wiek<18)
    {
        cout<< "Jestes niepelnoletni";
    }
    else if ((wiek >=18)&&(wiek<=34))
    {
        cout<< "Jestes pelnoletni ale nie mozesz zostac prezydentem";
    }

    else
    {
        cout<<endl<< "Jestes pelnoletni i mozesz zostac prezydentem ";
    }
    return 0;
}
