package linkedlist;

public class MyNode {
  private Object value;//値
  private MyNode next;//後続
  
  //コンストラクタ
  public MyNode(Object v, MyNode n) {
    value = v;
    next = n;
  }
  
  //valueのゲッター
  public Object getValue() {
    return value;
  }
  
  //valueのセッター
  public void setValue(Object v) {
    value = v;
  }
  
  //nextのゲッター
  public MyNode getNext() {
    return next;
  }
  
  //nextのセッター
  public void setNext(MyNode n) {
    next = n;
  }
  
  //後続ノードがあるかどうか
  public boolean hasNext() {
    return (next != null);
  }
}