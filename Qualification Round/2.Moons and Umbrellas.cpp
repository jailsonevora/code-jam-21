#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

int moonsUmbrella(int x, int y, string s){
    for(int i = 0; i < s.size()-1; i++){
        if(s[i-1] == 'J' && s[i] == '?')
           s[i] = 'J';
        else if(s[i-1] == 'C' && s[i] == '?')
            s[i] = 'C';
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, x, y;
    string s;
    cin>>t;
    for(int i=1; i <= t; ++i){

        cin >> x >> y >> s;

        cout << "Case #" << i << ": " << moonsUmbrella(x, y, s) << endl;
        std::cin.clear();
    }
    
}
