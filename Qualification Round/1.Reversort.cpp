#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int i=1; i <= t; ++i){
        
        int n;
        cin>>n;
        std::cin.ignore();

        int temp;
        string line;
        vector<int> sequence;

        getline(std::cin, line);
        istringstream ss(line);

        while (ss >> temp)
            sequence.push_back(temp);

        std::cin.clear();
    }
    return 0;
}