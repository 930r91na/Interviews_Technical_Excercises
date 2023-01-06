/*

Given a list containing future price predictions of two different stocks for the next n–days, find the maximum profit earned by selling the stocks with a constraint that the second stock can be sold, only if no transaction happened on the previous day for any of the stock.

Assume that the given prices are relative to the buying price. Each day, we can either sell a single share of the first stock or a single share of the second stock or sell nothing.

Input: X = [5, 3, 4, 6, 3], Y = [8, 4, 3, 5, 10]

Day	 Price(X)  Price(Y)
1		5		 8
2		3		 4
3		4		 3
4		6		 5
5		3		 10

Output: 25

Explanation:

Day 1: Sell stock Y at a price of 8
Day 2: Sell stock X at a price of 3
Day 3: Sell stock X at a price of 4
Day 4: Don't sell anything
Day 5: Sell stock Y at a price of 10

Conditon:
**second stock can be sold, only if no transaction happened on the previous day for any of the stock.
You can only buy from the second if is the first day or yo choose not doing any transaction
sell notsell
i = 0 1
Day	 Price(X)  Price(Y) 					if price y > x{
0		5 		 8      	8			if day== 1 sell y 
1		3		 4      	4			else 
										if x + [x next] > [y next] sell x
											else dont sell
2		4		 3         4				else sell x
3		6		 5      
4		3		 10       10
i=4210

15 19
1  18

20
*/

class Solution
{
public:
	int findMaximumProfit(vector<int> const &X, vector<int> const &Y)
	{
		int i, profit = 0;
		
		for (i = (int)X.size() - 1; i > 0; i--){
			if (Y[i] > X[i] + X[i - 1]){
				profit += Y[i];
				i --;
			}else{
				//cout<<X[i]<<endl;
				profit += X[i];
			}

		}
		cout<<profit;
		if (i == 0){
			//cout<< max(X[0],Y[0]);
			profit += max(X[0],Y[0]);
		}
		
		return profit;
	}
};
