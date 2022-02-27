import java.util.*;
import java.lang.*;
class Problem2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=Integer.parseInt(sc.nextLine());
        String str=sc.nextLine();
        int c=0;
        while(str.length()>1)
        {
            if(str.length()%2!=0||isPalin(str)==false)
                str=longestPalindrome(str);
            else{str=str.substring(0,str.length()/2);
                c++;}
        }
        System.out.println(c);
        System.out.println(str);
    }
    public static boolean isPalin( String x)
    {
        int i=0,j=x.length()-1;
        while(i<j)
        {
            if(x.charAt(i)!=x.charAt(j) )
                return false;
            i++;
            j--;
        }
        return true;
    }
    public static String longestPalindrome(String a){
        if(a.length()==0)return "";
        int s=0;
        int e=0;
        for(int i=0;i<a.length();i++)
        {
            int x1=expandAroundCenter(a,i,i);
            int x2=expandAroundCenter(a,i,i+1);
            int x=Math.max(x1,x2);
            if(x>e-s)
            {
                s=i-(x-1)/2 ;
                e=i+(x)/2 ;
            }
        }
        return a.substring(s,e+1);
    }
    public static int expandAroundCenter(String x1,int left,int right){
        int l= left;
        int r=right;
        while(l>=0&&r<x1.length()&&x1.charAt(left)==x1.charAt(r))
        {
            l--;
            r++;
        }
        return r-l -1;
    }
}