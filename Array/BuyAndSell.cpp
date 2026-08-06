#include<iostream>
#include<vector>
using namespace std;


/* 
    Buy stock at lowest and sell at highest: 
*/
int maxProfit(vector<int>& prices){

    int maxProfit = 0, bestBuy = prices[0]; // let first element be bestbuy

    for(int i = 1; i < prices.size(); i++){

        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}

int main(){
    vector<int> prices ={7,1,5,3,6,4};

    cout << maxProfit(prices);

    return 0;
}
