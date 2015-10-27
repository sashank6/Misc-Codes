/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.stockMaximize;

import java.util.Scanner;

/**
 *
 * @author SashankAlladi
 */
public class Solution {

    /**
     * @param args the command line arguments
     */
    
    public static long maxvalue(Long[] arr,int start)
    {
        long max=0;
        for(int i=start;i<arr.length;i++)
            max=max<arr[i]?arr[i]:max;
        return max;
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc=new Scanner(System.in);
        int tc=sc.nextInt();
        while(tc>0)
        {
        int n=sc.nextInt();
        Long[] arr=new Long[n];
        
        for(int i=0;i<n;i++)
            arr[i]=sc.nextLong();
        long money=0;
        long shares=0;
        long maxcost=0;
        
        for(int i=n-1;i>=0;i--)
        {
            
            
            if(maxcost>arr[i])
            {
                shares++;
                money-=arr[i];
            }
            else
            {
                money=money+shares*maxcost;
                shares=0;
                maxcost=arr[i];
            }
        }
        if(shares!=0)
            money+=shares*maxcost;
        System.out.println(money);
        tc--;
        }
    }
    
}
