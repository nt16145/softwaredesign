package linkedlist;

public class MyNodeMain {
  public static void main(String[] args) {
    System.out.println((testGetValueWhenNew()?"o":"x") + " : testGetValueWhenNew");
    System.out.println((testGetValueWhenSetValue()?"o":"x") + " : testGetValueWhenSetValue");
    System.out.println((testGetNextWhenNewSecondNode()?"o":"x") + " : testGetNextWhenNewSecondNode");
    System.out.println((testHasNextAndGetNextWhenSetNext()?"o":"x") + " : testHasNextAndGetNextWhenSetNext");
  }

  public static boolean testGetValueWhenNew() {
    MyNode n = new MyNode("A", null);
    
    return n.getValue().equals("A");
  }
  
  public static boolean testGetValueWhenSetValue() {
    MyNode n = new MyNode("A", null);
    n.setValue("B");
    
    return n.getValue().equals("B");
  }
  
  public static boolean testGetNextWhenNewSecondNode() {
    MyNode n1 = new MyNode("A", null);
    MyNode n2 = new MyNode("B", n1);
    
    return n2.getNext() == n1;
  }
  
  public static boolean testHasNextAndGetNextWhenSetNext() {
    MyNode n1 = new MyNode("A", null);
    MyNode n2 = new MyNode("B", null);
    n2.setNext(n1);
    
    return n2.hasNext() && (n2.getNext() == n1);
  }
}