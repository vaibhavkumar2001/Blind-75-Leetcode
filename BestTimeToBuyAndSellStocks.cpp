#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int BuyPrice = prices[0]; // Buy Price toh pehle din se hi dhekhega naa buy krne ko
    int SellPrice = 0;
    for(int i = 0;i < prices.size();i++) {
        if(BuyPrice > prices[i]) {
            BuyPrice = prices[i];
        }
        SellPrice = max(SellPrice,prices[i] - BuyPrice);
    }
    return SellPrice;
}

int main() {

  vector<int> Arr  ={7,1,5,3,6,4};

  cout<<"The maximum profit by selling the stock is "<<maxProfit(Arr);
}