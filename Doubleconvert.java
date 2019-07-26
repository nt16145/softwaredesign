import java.io.*;
public class Doubleconvert {
public static void main(String[] args) {
 
    InputStreamReader isr = new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(isr);

    System.out.println("キーボードから入力してください");


    String str = null;
    try {
        str = br.readLine();
        br.close();
    } catch (IOException e) {
        e.printStackTrace();
    }

    double out =  Double.parseDouble(str);
    System.out.println("double型では" + out + "です");

}

}