/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.CoinChange;

import java.util.Scanner;

/**
 *
 * @author SashankAlladi
 */
public class Solution {

    /**
     * @param args the command line arguments
     * 
     */
    
    public static long count=0;
    
    public static void solve(int sum,Integer[] arr)
    {
        if(sum==0)
            count++;
        else
        {
            for(int i=0;i<arr.length;i++)
            {
                if(sum-arr[i]>=0)
                    solve(sum-arr[i],arr);
            }
        }
    }
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc=new Scanner(System.in);
        
        int amt=sc.nextInt();
        int ncoin=sc.nextInt();
        Integer[] arr=new Integer[ncoin];
        
        for(int i=0;i<ncoin;i++)
            arr[i]=sc.nextInt();
        solve(amt,arr);
        System.out.println(count);
        
        
        
        
        
        
    }
    
}
