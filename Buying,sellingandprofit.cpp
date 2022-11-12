#include<iostream>
using namespace std;

int main()
{
	float buyingPrice, sellingAmount, amount;
	
	cout << "\nPlease Enter the Actual Product Cost =  ";
	cin >> buyingPrice;
	
	cout << "\nPlease Enter the Selling Price =  ";
	cin >> sellingAmount;
	
	if (sellingAmount > buyingPrice)
  	{
  		amount = sellingAmount - buyingPrice;
  		cout << "\nProfit Amount  =  " << amount;
  	}
  	else if(buyingPrice > sellingAmount)
    {
    	amount = buyingPrice - sellingAmount;
  		cout << "\nLoss Amount  =  " << amount;
	}
  	else
    	cout << "\nNo Profit No Loss!";
		
 	return 0;
}