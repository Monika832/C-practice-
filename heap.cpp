/***K’th Smallest/Largest Element in Unsorted Array 
HEAP SORT 
MAX HEAP ***/

#include <bits/stdc++.h>
using namespace std;

int delet(vector<int> &v, int &i)
{
    int a = v[1];
    swap(v[i], v[1]);
    i--;
    int temp = 1;
    while (temp * 2 <= i || temp * 2 + 1 <= i)
    {
        int flag = 0;
        int lval = INT_MIN, rval = INT_MIN;
        if (temp * 2 <= i)
        {
            lval = v[temp * 2];
        }
        if (temp * 2 + 1 <= i)
        {
            rval = v[temp * 2 + 1];
        }
        if (lval > rval)
            flag = 1;
        else
            flag = 2;

        if (flag == 1 && lval > v[temp])
        {
            swap(v[temp], v[temp * 2]);
            temp = temp * 2;
        }
        else if (flag == 2 && rval > v[temp])
        {
            swap(v[temp], v[temp * 2 + 1]);
            temp = temp * 2 + 1;
        }
        else
        {
            break;
        }
    }
    return a;
}

void insert(vector<int> &v, int &i, int val)
{
    i++;
    v[i] = val;
    int temp = i;
    while (temp > 1 && v[temp / 2] < v[temp])
    {
        swap(v[temp / 2], v[temp]);
        temp /= 2;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    int i = 0;
    for (int k = 1; k <= n; k++)
    {
        int no;
        cin >> no;
        insert(v, i, no);
    }

    for (auto it = v.begin()+1; it != v.end();it++)
        cout << *it << " ";

    cout << endl;
    vector<int> arr;
    while (i > 0)
    {
        int a = delet(v, i);
        //cout << a << " ";
        arr.push_back(a);
    }
    for (auto it = arr.end()-1; it >= arr.begin(); it--)
        cout << *it << " ";
    
    int p=arr.size();

    int t;
    cin>>t;
    for (int i=0;i<p;i++){
        if(t==i){
            cout<<arr[i+1];
        }
    }
}