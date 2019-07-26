package linkedlist;

public class MylinkedListMain {
    private Mynode head;
    private Mynode tail;

    public void MylinkedList() {
    head = null;
    tail = null;
}

    public void add(Object v) {
        Mynode n = new MyNode(v,null);
        if(head == null) {
            head = n;
            tail = n;
        }
        else {
            tail.setNext(n);
        }
        tail = n;
    }

    public boolean isEmpty() {
        return head = null;
    }

    public static void main(String[] args) {
        System.out.Println(testWhenListCreated()?"o":"x");
    }

    public static void testWhenListCreated() {
        MylinkedList l = new MylinkedList();
        return l.isEmpty();
    }

    public static boolean testGetHeadVal() {
        MylinkedList l = new MylinkedList();
        l.add("A"); l.add("B");
        return l.testGetHeadVal.equals("A");
    }

    public static boolean testGetTailVal() {
        MylinkedList l = new MylinkedList();
        l.add("A"); l.add("B");
        return l.testGetTailVal.equals("B");
    }

    public static boolean WhenAddNode() {
        MylinkedList l = new MylinkedList();
        l.add("A");
        return !l.isEmpty() && l.getHeadVal().equals("A") && l.getTailVal("A");
    }

    public static boolean testWhenCall() {
        MylinkedList l = new MylinkedList();
        try {
            getHeadVal();
        } catch (IndexOutOfException e) {
            //TODO: handle exception
            return true;
        }
        return false;
    }
}

public static void testprintList    
