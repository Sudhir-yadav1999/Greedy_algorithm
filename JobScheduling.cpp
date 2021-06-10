
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    static bool comp(Job s1,Job s2)
    {
        return (s1.profit>s2.profit);
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
    sort(arr,arr+n,comp);
     
    bool ar[n]={0};
    
    int profit=0,total_jobs=0;
    for(int i=0;i<n;i++)
    {
        for(int j= min(n,arr[i].dead-1);j>=0;j--) //jobs from the point -1 to greater than 0 ;
        {
            if(ar[j] == false)
            {
              total_jobs +=1;
              profit += arr[i].profit;
              ar[j] = true;
              break;
            }
        }
    }
     return {total_jobs,profit};
        
    } 
};
