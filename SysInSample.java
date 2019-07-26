import java.io.*;
public class SysInSample {
    public static void main(String[] args) {
        int x = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            String a = br.readLine();
            x = Integer.parseInt(a);
        } catch(IOException e) {
            e.printStackTrace();
        }
    System.out.println("入力された値の2倍は" + (x*2) + "です");
    }
}