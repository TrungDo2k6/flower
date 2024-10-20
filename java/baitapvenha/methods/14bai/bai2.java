
import java.util.Scanner;
public class bai2 {

    public static int[] mang(int n){
        Scanner sc=new Scanner(System.in);
        int[] mang= new int[n];
        for(int i=0;i<n;i++){
            System.out.println("Nhap vao phan tu thu ["+i+"]");
            mang[i]=sc.nextInt();
        }
        sc.close();
        return mang;
    }
    public static void xuatmang(int[] mang){
        System.out.println("Cac phan tu da nhap la:");
        for(int i=0;i<mang.length;i++){
            System.out.println(mang[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Nhap vao so luong phan tu cua mang:");
        int n=sc.nextInt();
        int[] mang=mang(n);
        xuatmang(mang);
        sc.close();
    }
}
