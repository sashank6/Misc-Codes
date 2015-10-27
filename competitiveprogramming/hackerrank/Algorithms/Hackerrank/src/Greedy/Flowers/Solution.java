/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Greedy.Flowers;

import static java.lang.Math.ceil;
import static java.util.Arrays.sort;
import java.util.Collections;
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
       int n,k;
       n=sc.nextInt();
       k=sc.nextInt();
       Long[] arr=new Long[n];
       for(int i=0;i<n;i++)
           arr[i]=sc.nextLong();
       long cost=0;
       int f=0;
       sort(arr,Collections.reverseOrder());
       for(int i=0;i<n;i++)
       {
           cost+=arr[i]*(f++/k+1);
       }
       System.out.println(cost);
       
       
       
    }
    
}
