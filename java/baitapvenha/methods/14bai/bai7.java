import java.util.Scanner;
public class bai7 {
    public static void ktr(int n){
        int i,daonguoc;
        daonguoc=n;
        for(i=0;n>0;n=n/10){
            i=i*10;
            i=i+(n%10);
        }
        if(daonguoc==i){
            System.out.println("La so thuan nghich");
        }else
        System.out.println("Khong phai la so thuan nghich");
    }
    public static void main(String[] args) {
        Scanner jv = new Scanner(System.in);
        System.out.println("Nhap n:");
        int n = jv.nextInt();
        ktr(n);
    }
}
