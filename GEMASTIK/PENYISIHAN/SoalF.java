package soalf;
import java.util.Scanner;

public class SoalF {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String coba1 = scan.nextLine();
        int k1 = scan.nextInt();
        SoalFClass1 f1 = new SoalFClass1(coba1, k1);
        System.out.println(f1.getResult());
    }
}

class SoalFClass1 {
    private String word;
    private String result="";
    private int shifter;
    
    public SoalFClass1(String word, int k){
        this.word = word;
        this.shifter = k;
        process();
    }
    
    private int toASCII(char c){
        return (int)c;
    }
    private char toChar(int i){
        return (char)i;
    }
    private void process(){
        for(int i=0;i<word.length();i++){
            int ASCII = toASCII(word.charAt(i));
            if(ASCII > 96 && ASCII < 123){
                if(ASCII + shifter > 122) ASCII = 95 + shifter;
                else if(ASCII + shifter < 97) ASCII = 122 + shifter + (ASCII-96);
                else ASCII += shifter;
                result = result + toChar(ASCII);
            } else if (ASCII > 64 && ASCII < 91){
                if(ASCII + shifter > 90) ASCII = 63 + shifter;
                else if(ASCII + shifter < 65) ASCII = 90 + shifter + ( ASCII - 64);
                else ASCII += shifter;
                result = result + toChar(ASCII);
            }
            else{
                result = result + word.charAt(i);
            }
        }
    }
    public String getWord(){
        return word;
    }
    public String getResult(){
        return result;
    }
}
