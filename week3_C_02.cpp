#include<iostream>
#include<algorithm>
using namespace std;
bool containsDuplicate(string str, int size) {
    bool flag = true;

    for (int i = 0; i < size; i++) {
        cin >> str[i];
    }

    if (str.length() % 2 == 1) {
        for(int i = 0; i < (str.length() % 2); i++) {
            for(int j = (size - (1+i)); j > (j-1); j--) {
                if(str[i] != str[j]) {
                    flag = false;
                }
            }
        }
    }

    if (str.length() % 2 == 0) {
        for(int i = 0; i < (str.length() % 2); i++) {
            for(int j = (size - (1+i)); j > (j-1); j--) {
                if(str[i] != str[j]) {
                    flag = false;
                }
            }
        }
    }

    if(flag == false) {
        return false;
    }
    else {
        return true;
    }
}
int main() {
    int size;
    cin >> size;
    string str;

    if(containsDuplicate(str,size))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
