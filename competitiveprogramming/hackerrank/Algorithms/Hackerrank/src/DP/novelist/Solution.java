/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.novelist;

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
    
    public static Long[] book=new Long[100];
    
    public static void solve(int low,int up,Long[] arr,int volnumber)
    {
        if(volnumber==0 || arr.length==0)
            return;
        long sum=0;
        for(int i=low;i<up;i++)
            sum+=arr[i];
        long avg=sum/volnumber;
        System.out.println(avg);
        int chapindex=low;
        book[volnumber]=0L;
        
        for(chapindex=low;chapindex<up;)
        {
            if(book[volnumber]+arr[chapindex] >=avg)
            {
                if(book[volnumber]+arr[chapindex]<2*avg)
                {
                    book[volnumber]+=arr[chapindex++];
                    break;
                }
            }
            else
                book[volnumber]+=arr[chapindex++];
        }
        solve(chapindex,up,arr,volnumber-1);
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc=new Scanner(System.in);
        int n,k;
        n=sc.nextInt();
        k=sc.nextInt();
        
        Long[] arr=new Long[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextLong();
        
        solve(0,arr.length,arr,k);
        
        for(int i=0;i<=k;i++)
            System.out.println(book[i]);
        
        
        
        
        
        
    }
    
}
