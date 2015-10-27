/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.Candies;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


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
        int n=sc.nextInt();
        Long[] arr=new Long[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextLong();
        }
        
        int ct=1;
        long prev=arr[0];
        long cancost=1;
        long lastcost=1;
        
        for(int i=1;i<arr.length;i++)
        {
            long curr=arr[i];
            
            if(curr < prev)
            {
                if(lastcost > 1)
                {
                    cancost++;
                    ct=1;
                }
                else
                {
                    cancost+=ct*1+1;
                    ct++;
                }
                lastcost=1;
                
                prev=curr;
                //System.out.println(curr+" "+cancost);
            }
            else
                if(curr > prev)
                {
                    cancost+=lastcost+1;
                    lastcost++;
                    ct=1;
                    prev=curr;
                    //System.out.println(curr+" "+cancost);
                }
            else
                    if(curr==prev)
                    {
                        cancost++;
                        ct=1;
                        prev=curr;
                        lastcost=1;
                    }
        }
        
        System.out.println(cancost);
        
        
    }
    
}

