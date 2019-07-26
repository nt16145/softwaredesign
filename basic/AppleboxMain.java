package basic;

public class AppleboxMain {
    public static void main(String[] args) {
        Applebox ab = new Applebox(3,"ab");
        System.out.println("The size of ab is"+ ab.getSize());
        ab.pull();
        ab.put();
        ab.pull();
        ab.put();
        ab.setSize(5);
        
    }
}