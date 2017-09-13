#include <iostream>

using namespace std;

int uczniowie,x;
int slodycze,y;

int main()
{
    cout << "Ilu uczniow jest w twojej klasie:";
    cin >> uczniowie;
    cout<< "Ile cukierkow kupila mama?:";
    cin >> slodycze;

    x = slodycze/(uczniowie-1);
    y = slodycze-x*(uczniowie-1);

    cout<< "Cukierkow dla kzdego ucznia:"<<x<<endl;
    cout<<"Dla Jasia na wieczor zostalo:"<<y;

    return 0;
}
