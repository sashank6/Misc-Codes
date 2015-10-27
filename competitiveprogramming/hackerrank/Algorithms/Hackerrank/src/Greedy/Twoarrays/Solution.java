package Greedy.Twoarrays;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author SashankAlladi
 */
import java.util.Arrays;
import static java.util.Arrays.sort;
import java.util.Collections;
import java.util.Scanner;
public class Solution {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int tc;
        Scanner sc=new Scanner(System.in);
        tc=sc.nextInt();
        
        while(tc>0)
        {
        int n;
        long k;
        n=sc.nextInt();
        k=sc.nextLong();
        Long[] arr1=new Long[n];
        Long[] arr2=new Long[n];
        for(int i=0;i<n;i++)
        {
            arr1[i]=sc.nextLong();
        }
        for(int i=0;i<n;i++)
        {
            arr2[i]=sc.nextLong();
        }
        sort(arr1);
        sort(arr2, Collections.reverseOrder());
        boolean answer=true;
        
        for(int i=0;i<n;i++)
        {
            answer=answer&(arr1[i]+arr2[i] >= k);
        }
        
        System.out.println(answer?"YES":"NO");
        tc--;
        }
        
    }
    
}
