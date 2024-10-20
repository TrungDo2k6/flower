/**
 * bai1
 */
import java.util.Scanner;
public class bai1 {

    public static int[] mang(int n){
        Scanner jv=new Scanner(System.in);
        int[] mang= new int[n];
        for(int i=1;i<=n;i++){
            System.out.println("Nhap vao phan tu thu ["+i+"]");
            mang[i]=jv.nextInt();
        }
        return mang;
    }
    public static void main(String[] args) {
        Scanner jv=new Scanner(System.in);
        System.out.println("Nhap vao so luong phan tu cua mang:");
        int n=jv.nextInt();
        int[] mang = mang(n);
    }
}