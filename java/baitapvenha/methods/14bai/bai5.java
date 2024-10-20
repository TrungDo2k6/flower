public class bai5 {
    public static void thongtin(String ten, int tuoi, String diachi, String mail, int sdt){
        System.out.println("Ten:"+ten);
        System.out.println("Tuoi:"+tuoi);
        System.out.println("Dia chi:"+diachi);
        System.out.println("Mail:"+mail);
        System.out.println("Sdt:"+sdt);
    }
    public static void main(String[] args) {
        String ten = "Trung";
        int tuoi = 18;
        String diachi = "Quang Nam";
        String mail = "trung@1234";
        int sdt = 12345;
        thongtin(ten,tuoi,diachi,mail,sdt);
    }
}
