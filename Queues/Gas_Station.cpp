#include <bits.stdc++.h>
using namespace std;

int gasStation(vector<int> &gas, vector<int> &cost){
    int TotalGas = 0 , TotalCost = 0;

    for(int val : gas){
        TotalGas += val;
    }

    for(int val : cost){
        TotalCost += val;
    }

    if(TotalGas < TotalCost){
        return -1;
    }
     int start = 0, CG = 0 ;

    for(int i = 0 ; i < gas.size();i++){

        CG += (gas[i] - cost[i]);

        if(CG < 0){
            start = i + 1;
            CG = 0;
        }
    }

    return start;
}

int main(){

    return 0;
}