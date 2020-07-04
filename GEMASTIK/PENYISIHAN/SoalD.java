package soald;
import java.util.Scanner;
public class SoalD {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x = scan.nextInt();
        int y = scan.nextInt();
        String langkah = scan.next();
        SoalDClass1 d = new SoalDClass1(x,y,langkah);
        d.getX0Y0();
    }
}

class SoalDClass1 {
    private int x,y;
    private int x0,y0;
    private String langkah;
            
    public SoalDClass1(int x,int y, String langkah){
        this.x = x;
        this.y = y;
        x0 = x;
        y0 = y;
        this.langkah = langkah;
        process();
    }
    private void translate(char c){
        if(c == 'u') y0--;
        else if(c == 's') y0++;
        else if(c == 't') x0--;
        else x0++;
    }
    private void process(){
        for(int i=langkah.length()-1; i>=0;i--){
            translate(langkah.charAt(i));
        }
    }
    public void getXY(){
        System.out.println(x+" "+y);
    }
    public void getX0Y0(){
        System.out.println(x0+" "+y0);
    }
}

