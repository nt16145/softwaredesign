import java.io.*;

public class Filesample {
    public static void main() {
        File file = new File("./Bclass.java");
        System.out.println(file.getAbsolutepath());
        if(file.exists()) {
            System.out.println("このファイルは存在します");
        } else {
            System.out.println("このファイルは存在しません");
        }
    }
}