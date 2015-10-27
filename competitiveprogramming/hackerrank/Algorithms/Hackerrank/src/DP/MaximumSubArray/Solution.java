/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.MaximumSubArray;

import static java.util.Arrays.sort;
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
        int tc=sc.nextInt();
        while(tc>0)
        {
        int n=sc.nextInt();
        Long[] arr=new Long[n];
        long nc=0;
        long c=0;
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextLong();
            nc+=(arr[i]>0)?arr[i]:0;
        }
        
        long me=arr[0];
        long mf=arr[0];
        
        for(int i=1;i<n;i++)
        {
            me=(me+arr[i]>0)?me+arr[i]:me;
            mf=(me>mf)?me:mf; 
        }
        tc--;
        if(nc>0)
        System.out.println(mf+" "+nc);
        else
        {
            sort(arr);
            System.out.println(mf+" "+arr[arr.length-1]);
        }
        }
        
        
    }
    
}
