//if activities are sorted 


Activity Selection Problem

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

----------------------------------------------------------
using sorting algorithm bcz when activities are not sorted 
----------------------------------------------------------


Activity Selection Problem
--------------------------

#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

struct Activity
{
  int start,finish;  
};

static bool nulliCompare(Activity s1,Activity s2)
{
    if(s1.finish==s2.finish)
    {
        return (s1.start<s2.start);
    }
    
    return (s1.finish<s2.finish);
}


int printactivity(Activity arr[],int n)
{
   
   sort(arr, arr+n,nulliCompare);
   
   int i=0;
   int count=1;
   int j;
   for(j=1;j<n;j++)
   {
       if(arr[j].start>arr[i].finish)
       {
           count++;
           i=j;
           
       }
   }
   
   return count;
   
  
}


int main()
{
 Activity arr[]={{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}};
 
 int size=sizeof(arr)/sizeof(arr[0]);
 
 cout<<"The No of meetings that can be taken :"<<endl;
 cout<<printactivity(arr,size);
  
 

    return 0;
}


========================================================

 ----------------
 Using stl in CPP
 ----------------
     
#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;



static bool nulliCompare(pair<int,int> s1,pair<int,int> s2)
{
    if(s1.second==s2.second)
    {
        return (s1.first<s2.first);
    }
    
    return (s1.second<s2.second);
}


int printactivity(int s[],int f[],int n)
{
    
    vector<pair<int,int> > v(n);
    for(int i=0;i<n;i++)
    {
        v[i]={s[i],f[i]};
    }
   
   sort(v.begin(),v.end(),nulliCompare);
   
   int i=0;
   int count=1;
   int j;
   for(j=1;j<n;j++)
   {
       if(v[j].first>v[i].second)
       {
           count++;
           i=j;
           
       }
   }
   
   return count;
   
  
}


int main()
{
  int s[]={1,3,0,5,8,5};
  int f[]={2,4,6,7,9,9};
  
 
 int size=sizeof(s)/sizeof(s[0]);
 
 cout<<"The No of meetings that can be taken :"<<endl;
 cout<<printactivity(s,f,size);
  
 

    return 0;
}

    
    
    


