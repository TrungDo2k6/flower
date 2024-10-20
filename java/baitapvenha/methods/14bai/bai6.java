import java.util.Scanner;

public class bai6 {
   public static boolean ktr(int n){
    if(n<=0){
    return false;
   }
   for (int i = 2; i<=Math.sqrt(n);i++){
    if(n%i==0){
        return false;
    }
   }
   return true;
  }
  public static void main(String[] args) {
    Scanner jv = new Scanner(System.in);
    System.out.println("Nhap n:");
    int n = jv.nextInt();
    ktr(n);
    if(ktr(n)){
        System.out.println("La so nguyen to");
    }else
    System.out.println("Khong phai la so nguyen to");
  }
}
