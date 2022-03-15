#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

int moonsUmbrella(items){
    return 0;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int i=1; i <= t; ++i){

        int temp;
        string line;
        vector<int> items;

        getline(std::cin, line);
        istringstream ss(line);

        while (ss >> temp)
            items.push_back(temp);

        cout << "Case #" << i << ": " << moonsUmbrella(items) << endl;

        std::cin.clear();
    }
    
}
