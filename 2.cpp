/*  
    2. Write a C/C++ program that reads text from a file, then count and prints the number of line exist in the inputted text file.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define vvi vector<vi>
#define imr_an ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

void solve(){
    ifstream inputFile("input.txt");
    if(!inputFile){
        cout<<"file not found"<<endl;
        return;
    }
    string s;
    int line=0;
    while(getline(inputFile,s))line++;
    cout<<line<<endl;
    inputFile.close();
}

int main()
{
    imr_an
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}