#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int moonsUmbrella(int x, int y, string s){

    for(int i = 1; i < s.size(); i++){
        if(s[i-1] == 'J' && s[i] == '?')
            s[i] = 'J';
        else if(s[i-1] == 'C' && s[i] == '?')
            s[i] = 'C';
    }

    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == 'J' && s[i-1] == '?')
            s[i-1] = 'J';
        else if(s[i] == 'C' && s[i-1] == '?')
            s[i-1] = 'C';
    }
    
    int cost = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == 'J' && s[i-1] == 'C')
            cost += x;
        else if(s[i] == 'C' && s[i-1] == 'J')
            cost += y;
    }
    return cost;
}

int moonsUmbrellaExtraSample(int x, int y, string s){

    int lastC = 0, lastJ = 0;
    const int INF = 1e9 + 5;
    for(int i = 0; i < s.size(); i++){
        
        int newLastC = INF;
        int newLastJ = INF;

        if(s[i] == 'C' || s[i] == '?')
            newLastC = min(lastC, lastJ + y);

        if(s[i] == 'J' || s[i] == '?')
            newLastJ = min(lastJ, lastC + x);        

        lastC = newLastC;
        lastJ = newLastJ;
    }
    return min(lastC,lastJ);
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

        cout << "Case #" << i << ": " << moonsUmbrellaExtraSample(x, y, s) << endl;
        std::cin.clear();
    }
    
}
