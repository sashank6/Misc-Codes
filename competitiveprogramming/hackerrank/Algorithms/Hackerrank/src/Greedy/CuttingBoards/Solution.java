/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Greedy.CuttingBoards;

import java.util.Collections;
import java.util.PriorityQueue;
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
        int tc;
        tc=sc.nextInt();
        while(tc>0)
        {
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        m--;n--;
        PriorityQueue pqm=new PriorityQueue(m,Collections.reverseOrder());
        PriorityQueue pqn=new PriorityQueue(n,Collections.reverseOrder());
        for(int i=0;i<m;i++)
            pqm.add(sc.nextInt());
        for(int i=0;i<n;i++)
            pqn.add(sc.nextInt());
        
         int h=1,v=1;
         long cost=0;
         
         
         while(!pqm.isEmpty() && !pqn.isEmpty())
         {
             int x=(int) pqm.element();
             int y=(int) pqn.element();
             //System.out.println(x+","+y);
             
             if(x > y)
             {
                 cost+=(x*h)%1000000007;
                 v++;
                 pqm.remove();
             }
             else
             {
                 cost+=(y*v)%1000000007;
                 h++;
                 pqn.remove();
             }
             
         }
        
         while(!pqm.isEmpty())
         {
             cost+=((int)pqm.element()*h)%1000000007;
             v++;
             pqm.remove();
         }
         while(!pqn.isEmpty())
         {
             cost+=((int)pqn.element()*v)%1000000007;
             h++;
             pqn.remove();
         }
         
         
         
         
         System.out.println(cost);
         tc--;
        }
        
    }
    
}
