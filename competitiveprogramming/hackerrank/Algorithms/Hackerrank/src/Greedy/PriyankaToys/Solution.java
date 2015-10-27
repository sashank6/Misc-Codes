/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Greedy.PriyankaToys;

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
        int n;
        n=sc.nextInt();
        Long[] arr=new Long[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextLong();
        sort(arr);
        
        long fw=-1;
        long units=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=fw)
                continue;
            units++;
            fw=arr[i]+4;
        }
        
        System.out.println(units);
        
    }
    
}
