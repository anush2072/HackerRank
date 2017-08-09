/*
You are given an array A of n integers and a positive integer. Find and print the number of (i,j) pairs where i<j  and  A[i]+A[j]  is divisible by k.

Input Format
The first line contains 2 integers, n and k, respectively separated by space.
The second line contains n space-separated integers .

Output Format
Print the number of  pairs where  and  +  is evenly divisible by .

Sample Input
6 3
1 3 2 6 1 2

Sample Output
5

*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int divisibleSumPairs(int n, int k, int[] ar) {
        // Complete this function
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((ar[i] + ar[j]) % k == 0)
                    count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for (int ar_i = 0; ar_i < n; ar_i++) {
            ar[ar_i] = in.nextInt();
        }
        int result = divisibleSumPairs(n, k, ar);
        System.out.println(result);
    }
}
