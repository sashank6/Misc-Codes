/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Greedy.LargestPermutation;

import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author SashankAlladi
 */
public class Solution {

    /**
     * @param args the command line arguments
     * 
     * 
     */
    public static Long[] max(Long[] arr,int start)
    {
        long max=0;
        long index = start;
        for(int i=start;i<arr.length;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
                index=i;
            }
        }
        Long[] l=new Long[2];
        l[0]=max;
        l[1]=index;
        return l;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc=new Scanner(System.in);
        int n,swaps;
        n=sc.nextInt();
        swaps=sc.nextInt();
        Long[] arr=new Long[n];
        
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextLong();
            
        }
           
      for(int i=0;i<n-1 && swaps>0;i++)
      {
        Long[] id=max(arr,i+1);
        long max=id[0];
        long index=id[1];
        if(max > arr[i])
        {
            long t=arr[i];
            arr[i]=arr[(int)index];
            arr[(int)index]=t;
            swaps--;
        }
        
        
        
      }
      
      for(int i=0;i<arr.length;i++)
      {
          System.out.print(arr[i]+" ");
      }
        
        
        
        
        
        
    }
    
}
