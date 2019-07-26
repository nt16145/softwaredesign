import java.io.*;

public class FileRead {
    public static void main() {
        File file = new File("./Bclass.java");
        FileReader fr = null;
        try {
            fr = new FileReader(file);
        } catch (FileNotFoundException e) {
            //TODO: handle exception
            e.printStackTrace();
        } finally {
            fr.close();
        }
        try {
            if(fr != null) {
            fr.close(file);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}