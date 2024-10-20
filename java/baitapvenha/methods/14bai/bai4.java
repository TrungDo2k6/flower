import java.util.Scanner;
public class bai4 {

    public static void ktr(int n){
        if(n%2==1)
        System.out.println("La so le");
        }
    public static void main(String[] args) {
        Scanner jv = new Scanner(System.in);
        System.out.println("Nhap n:");
        int n = jv.nextInt();
        ktr(n);
    }
}