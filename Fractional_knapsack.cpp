#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

struct Item
{
    int value; // value of the item  
    int weight; // weight of the item 
};


double fractionalKnapsack(int w,Item arr[],int n)
{
    
    vector< pair <double,int> > v; // vector pair 

    for(int i=0;i<n;i++)
    {
        double x = (arr[i].value*1.0)/(arr[i].weight*1.0);
        v.push_back({x,i});
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<endl;
        cout<<v[i].second<<endl;
    } 
    //sorting greatest to smallest
    sort(v.begin(),v.end(),greater<pair<double,int>>());
      
    int wei=0; //weight of the material
    int max_prof=0; //value of the material
    
    for(int i=0;i<v.size();i++)
    {
      if(wei+arr[v[i].second].weight<w)
      {
         wei += arr[v[i].second].weight;
         max_prof +=arr[v[i].second].value;
      }
      else
      {
          double x=(w-wei)*1.0;
          max_prof +=x*v[i].first;
          break;
      }
    }
    return max_prof;
    
    
}

int main()
{
int n,w;
cout<<"Knap sack problem in greedy algorithm :";
cout<<"Enter the size of item and weight :";
cin>>n;
cout<<"Enter the weight of the array :";
cin>>w;
Item arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i].value;//value
    cin>>arr[i].weight;//weight
}
cout<<"the max profit";
cout<<fractionalKnapsack(w,arr,n);//calling the function of knapsack 




    return 0;
}
