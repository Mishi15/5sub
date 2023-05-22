#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Maths, physics, chemistry, biology, english ;
    cout << "Enter subjects marks\n";
    cin >> Maths>> physics>> chemistry >> biology >>english ;
    cout << "The percentage of the subjects will be \n" ;
    float percentage =((Maths + physics + chemistry + biology + english)) ;
    cout << percentage /500 * 100  <<"%"; 

}
