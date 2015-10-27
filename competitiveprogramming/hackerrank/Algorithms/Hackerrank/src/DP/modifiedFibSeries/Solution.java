/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.modifiedFibSeries;

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
        long first=sc.nextLong();
        long second=sc.nextLong();
        long nth=sc.nextLong();
        nth=nth-2;
        long third=0;
        while(nth > 1)
        {
           third=(long) (Math.pow(second,2)+1);
           first=second;
           second=third;
           nth--;
           
        }
        System.out.println(third);
        
    }
    
}
