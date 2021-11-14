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
        int l=0;
        int hi=n-1;
        int flag=0;
        while(l<=hi)
        {
            int mid=(l+hi)/2;

            if(a[mid]==key)
            {
                cout<<endl<<"PRESENT "<<mid+1;
                flag=1;
                break;
            }
            else if(a[mid]<key)
            {
                l=mid+1;
            }
            else
            {
                hi=mid-1;
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
