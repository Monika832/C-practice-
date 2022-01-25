//https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1#

class Solution
{
    public:
   
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
       priority_queue<int> pq;
       vector<int> v;
       
       for(int i = 0; i < K; i++)
       {
           for(int j = 0; j < K; j++)
           {
               pq.push((-1)*arr[i][j]);
           }
       }
       
       while(!pq.empty())
       {
           v.push_back((-1)*pq.top());
           pq.pop();
       }
       
       return v;
    }
};
