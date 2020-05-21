#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countwords(string arr[], int n)
{
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {

        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    int n;
    std::cin >> n;
    string  arr[n] ;
    for(int i=0;i<n;i++)
    {
      getline(cin,arr[i]);
    }
    countwords(arr, n);
    return 0;
}
