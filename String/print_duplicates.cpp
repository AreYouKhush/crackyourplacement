#include<bits/stdc++.h>
using namespace std;

using namespace std;
void printDups(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        if(str[i] != ' ')
            count[str[i]]++;
    }
    for (auto it : count) {
        cout << it.first << ", count = " << it.second<< "\n";
    }
}
/* Driver code*/
int main()
{
    string str = "test string";
    printDups(str);
    return 0;
}
