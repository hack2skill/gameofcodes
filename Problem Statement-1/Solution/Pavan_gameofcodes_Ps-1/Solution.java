import java.util.Scanner;


public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int nu_of_testcases = sc.nextInt();

        while (nu_of_testcases != 0) {
            int no_of_problems = sc.nextInt();
            int divisor_a = sc.nextInt();
            int divisor_b = sc.nextInt();
            int solvemininum = sc.nextInt();

            int anvisolve = 0;
            int problem = 1;
            while (problem != no_of_problems) {
                if (problem % divisor_a != 0 && problem % divisor_b != 0) {
                    if (problem % divisor_a == 0 && problem % divisor_b != 0) {
                        anvisolve++;
                    }

                    if (problem % divisor_a != 0 && problem % divisor_b == 0) {
                        anvisolve++;
                    }

                }
                
                problem++;
            }
            nu_of_testcases--;
            if(solvemininum >= anvisolve) {
                System.out.println("Win");
            
            } else {
                System.out.println("Lose");
        
            }
        } 
    }
}