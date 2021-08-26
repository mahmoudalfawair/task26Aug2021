#include <iostream>
using namespace std;
int main()
{
int input ;
cout << "Enter any number : ";
cin >> input ;
int temp = input;
for(int i =1; i <=input; i++)
{
    for(int j = 1; j<= input ; j++)
    {
        if(j == 1 || i == 1 || i == input || j == input )
            cout << "# ";
        else 
        cout << "  ";

    }        
        cout << endl;

    
}



}