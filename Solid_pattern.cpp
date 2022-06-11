#include<iostream>//Solid Pattern
using namespace std;
int main()
{
    int m = 4;
    int n = 4;

    //Outer Loop(Row Ke liye)
    for(int i = 1; i <= m; i++)
    {
        //Inner Loop(Col ke liye)
        for(int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}