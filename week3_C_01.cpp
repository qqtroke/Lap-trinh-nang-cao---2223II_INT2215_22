#include<iostream>
#include<algorithm>
using namespace std;
bool containsDuplicate(int arr[], int size) {
    bool flag = false;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if(flag == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    int size;
    cin >> size;
    int arr[size];

    if(containsDuplicate(arr,size))
    {
        cout<<"Yes" << endl;
    }
    else
    {
        cout<<"No" << endl;
    }
    return 0;
}
