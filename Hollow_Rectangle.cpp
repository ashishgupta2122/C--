#include<iostream>
using namespace std;
int main()
{
    int m = 5;
    int n = 5;

    //Outer loop ke liye
    for(int i = 1; i <= m; i++)
    {
        //Inner Loop(Column ke liye)
        for(int j = 1; j <= n; j++)
        {
            if(i == 1 || j == 1 || i == m || j == n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}