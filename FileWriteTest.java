import java.io.*;

public class FileWriteTest {
    public static void main() {

    }
    public static void copyfile() {
        File f1,f2;
        f1 = new File("255.txt");
        f2 = new File("255copy.txt");
        FileReader fr = null;
        FileWriter fw = null;
        try {
            fr = new FileReader(f1);
            fw = new FileWriter(f2);
            int c;
            while ((c = fr.read()) != -1) {
                fw.write(c);
            }
        }
        catch (FileNotFoundException e) {
            //TODO: handle exception
            e.printStackTrace();
        }
        catch(IOException e) {
            
        }
    }
}