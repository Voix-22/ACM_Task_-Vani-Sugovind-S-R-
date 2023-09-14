#include <iostream>
using namespace std;
int main()
{
    int a[100],i,n,sum=0;
    cout<<"enter the no. of entries: ";
    cin>>n;
    
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]%2!=0)
        {
           sum=sum+a[i];
        }
    }
    cout<<"sum is"<<sum;
    return 0;
}