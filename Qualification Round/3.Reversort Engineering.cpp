#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

int reversortEng(vector<int> L){

    return 0;
}

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
        vector<int> items;

        getline(std::cin, line);
        istringstream ss(line);

        while (ss >> temp)
            items.push_back(temp);

        cout << "Case #" << i << ": " << reversortEng(items) << endl;

        std::cin.clear();
    }
    return 0;
}