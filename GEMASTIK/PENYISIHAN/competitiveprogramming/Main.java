package competitiveprogramming;
public class Main {
    public static void main(String[] args) {
        String coba1 = "Ayo Belajar Pemrograman pada Pukul 19.00!";
        int k1 = 5;
        SoalF f1 = new SoalF(coba1, k1);
        System.out.println(f1.getResult());
        String coba2 = "Pemrograman GEMASTIK 12, 2019.";
        int k2 = -5;
        SoalF f2 = new SoalF(coba2, k2);
        System.out.println(f2.getResult());
    }    
}
