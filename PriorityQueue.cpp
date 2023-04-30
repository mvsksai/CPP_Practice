#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //priority_queue<int, vector<int>, less<int>> pq; //output : 54321
    priority_queue<int, vector<int>, greater<int>> pq; //output : 01234
    int arr[] = { 0, 1, 2, 3, 4, 5 };
    for (int i : arr)
        pq.push(i);
    for(int i = 0; i < 5 ; i++)
    {
        int k = pq.top();
        cout << k;
        pq.pop();
    }
}