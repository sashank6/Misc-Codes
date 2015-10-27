/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DP.modif_NIM;

/**
 *
 * @author SashankAlladi
 */
public class Solution {

    /**
     * @param args the command line arguments
     */
    
    public static void solve(int p1,int p2,int p3,char play1,char play2,String str )
    {
       
        if(p1==0 && p2==0 && (p3==0 || p3==1))
        {
            System.out.println("Winner: "+play2);
            System.out.println(str);
        }
        else
        {
            //System.out.println(p1+","+p2+","+p3+","+play1);
            if(p1>0)
            solve(p1-1,p2,p3,play2,play1,str+play1+"-"+"P1"+"-"+"1"+"-");
            if(p2>0)
            solve(p1,p2-1,p3,play2,play1,str+play1+"-"+"P2"+"-"+"1"+"-");
            if(p2>1)
                solve(p1,p2-2,p3,play2,play1,str+play1+"-"+"P2"+"-"+"2"+"-");
            if(p3>2)
                solve(p1,p2,p3-3,play2,play1,str+play1+"-"+"P3"+"-"+"3"+"-");
            if(p3>1)
                solve(p1,p2,p3-2,play2,play1,str+play1+"-"+"P3"+"-"+"2"+"-");
        }
        
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
        solve(44,12,71,'A','B',"Game");
    }
    
}
