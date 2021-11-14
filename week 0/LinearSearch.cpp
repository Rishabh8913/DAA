#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key =0;
        cin>>key;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                cout<<endl<<"PRESENT "<<i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<endl<<"NOT PRESENT";
        }
        t--;
    }
    return 0;
}
