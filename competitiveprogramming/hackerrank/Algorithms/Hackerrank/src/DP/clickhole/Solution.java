/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.clickhole;

import java.util.Scanner;

/**
 *
 * @author SashankAlladi
 */
public class Solution {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        Long[] arr=new Long[n];
        
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextLong();
        }
        
        long max_sum_current=arr[0];
        long max_sum_sofar=arr[0];
        int start=0,end=0,mstart=0,mend=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>max_sum_current+arr[i])
            {
                start=i;
                end=i;
                max_sum_current=arr[i];
            }
            else
            {
                max_sum_current+=arr[i];
                        end++;
            }
            
            if(max_sum_sofar<max_sum_current)
            {
                max_sum_sofar=max_sum_current;
                mstart=start;
                mend=end;
            }
            
            
        }
        
        System.out.println(max_sum_sofar+" "+mstart+" "+mend);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
}
