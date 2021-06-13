#include <iostream>

using namespace std;

int main()
{
    int n,m,v[10][10],i,j;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    for(i=1 ; i<=m ; i++)
        for(j=1 ; j<=n ; j++)
    {
        cout<<"v["<<i<<"]["<<j<<"]=";
        cin>>v[i][j];

    }
    for(i=1 ; i<=m ; i++)
    {
        int maxi=0;
        for(j=1 ; j<=n ; j++)
            if(v[i][j]>maxi)
            maxi=v[i][j];
            if(maxi<21)
                cout<<maxi<<endl;
            else
                cout<<"NU EXISTA"<<endl;
    }
    return 0;
}
