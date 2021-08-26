#include <iostream>
using namespace std;
int main()
{
int input; 
cout << "Enter any number : ";
cin >> input ;
int num = input +1;
for(int i =1; i <=input; i++)
{
    for(int j = 1; j <= input; j++) 
        if(j == 1 || i == 1 || i == input || j == input || i == j || j+ i == num)
        cout << "# ";
        else 
        cout << "  ";
    
         
        cout << endl;
}



}
/*
  1 2 3 4 5 
1 * * * * *
2 * *   * *
3 *   *   *
4 * *   * *
5 * * * * *  
 

*/