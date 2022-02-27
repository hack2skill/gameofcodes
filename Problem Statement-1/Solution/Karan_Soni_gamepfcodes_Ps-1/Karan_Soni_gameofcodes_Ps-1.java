import java.util.Scanner;

public class h2s {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_case = sc.nextInt();
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int k = sc.nextInt();
        int count = 0;
        for(int i = 1; i <= n ; i++){
            if(i % a == 0 && i % b == 0){
                continue;
            }
            if(i%a == 0){
                count++;
            }
            if(i%b == 0){
                count++;
            }
        }
        if(count>=k){
            System.out.println("Win");
        }
        else{
            System.out.println("Lose");
        }
    }
}
