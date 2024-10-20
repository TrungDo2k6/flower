import java.util.Scanner;
public class bai8 {
    public static boolean ktr(int n){
        if(n<=0){
            return false;
        }
        int sqrt = (int) Math.sqrt(n);
        return (sqrt*sqrt==n);
    }
    public static void main(String[] args) {
        Scanner jv = new Scanner(System.in);
        System.out.println("Nhap n:");
        int n = jv.nextInt();
        ktr(n);
        if(ktr(n)){
            System.out.println("La so chinh phuong ");
        }else
        System.out.println("Khong phai la so chinh phuong");
    }
}
