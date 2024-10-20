import java.util.Scanner;
public class bai3 {
    public static void ktr(int n){
        if(n%2==0)
        System.out.println("La so chan");
    }
    public static void main(String[] args) {
        Scanner jv = new Scanner(System.in);
        System.out.println("Nhap n:");
        int n = jv.nextInt();
        ktr(n);
    }
}
