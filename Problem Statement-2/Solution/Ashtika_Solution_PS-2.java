

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{


	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		
		int n= Integer.parseInt(sc.nextLine());
		String s= sc.nextLine();
		int count =0;
		
		while(  s.length() > 1 )
		{  
		   
		    if(s.length()%2 != 0 || ispalindrome(s)==false)
		    s=longestPalindrome(s);
		    
		    else{s=s.substring(0 , s.length()/2 );
		    count++;}
		}
		
		System.out.println(count);
		System.out.println(s);
		
		
	}
	public static boolean ispalindrome( String str)
	{
	    int i=0, j= str.length()-1;
	    
	    while(i<j)
	    {
	        if(str.charAt(i) != str.charAt(j) )
	          return false;
	         
	        i++;
	        j--;
	    }
	    
	    return true;
	}
	
	 public static String longestPalindrome(String s) {
       
        if (s.length()==0) return "";
        
        int start=0;   
        int end=0;     
    
        
        for(int i=0; i<s.length();i++)
        {
            int l1 = expandAroundCenter(s, i, i);  
            int l2 = expandAroundCenter(s,i,i+1);  
            
            int l= Math.max(l1,l2);
            
            if(l > end - start)   
            {
                
                start = i - (l-1)/2 ;
                end= i + (l)/2 ;
            }
       }
     
        
     return s.substring(start,end+1);   
    } 
        
    public static int expandAroundCenter(String s, int L, int R){
        
        int left= L;
        int right=R;
        
        while(left >=0 && right < s.length() && s.charAt(left) == s.charAt(right) )
        {
            left--;  
            right++; 
        }
        
        return right-left -1;   
        
    }
    
	
}