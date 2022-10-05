package Java;

import java.util.*;
class knapsack{
    public static int solution(int W, int wt[], int val[], int n) {
        int i, w;
        int dp[][] = new int[n + 1][W + 1];
        // i represents the number of items we have considered
        // w represents the weight we have to fill
        // Example dp[1][2] means we have 1 item and we have to fill weight of 2
        for (i = 0; i <= n; i++) {
            for (w = 0; w <= W; w++) {
                if (i == 0 || w == 0) {
                    // When we have 0 items or 0 weights we will always have 0 value
                    dp[i][w] = 0;
                }
                else if (wt[i - 1] > w) {
                dp[i][w] = dp[i - 1][w];
                }
                else {
                // Ensures we are having max value each time
                dp[i][w] = Math.max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
                } 
            }
        }
        // We have returned dp[n][w] as from the explanation provided above
        // it is clear that it would return answer when we consider the total number of items n
        // and the total weight W we need to fill
        return dp[n][W];
    }
    public static void main(String[] args) {
        Scanner s1=new Scanner(System.in);
        int n=3;
        int weight[]={1,2,3}; // Weight array
        int value[]={5,9,10}; //value array
        int W=5;
        System.out.println(solution(W,weight,value,n));
    }
}