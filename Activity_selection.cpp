---------------------------
Standard activity selection
---------------------------
#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

void activity(int s[],int f[],int size)
{
    
    cout<<"The activity of the selection is in order :"<<endl;
    int i=0;
    int j;
    cout<<" "<<i;
    
    for(j=1;j<size;j++)
    {
        //if condition true then activity is selected
        if(s[j]>=f[i])
        {
            cout<<" "<<j;
            i=j;
        }
        
    }
    
}



int main()
{
    cout<<"Activity selection problem :";
    int s[]={1,3,0,5,8,5};
    int f[]={2,4,6,7,9,9};
    int size=sizeof(s)/sizeof(s[0]);
    
    activity(s,f,size);

    return 0;
}
