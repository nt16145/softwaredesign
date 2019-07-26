package tree;

public class MyBinTreeNode {
    private Object value; // 値
    private MyBinTreeNode parent; // 親
    private MyBinTreeNode left; // 左の子
    private MyBinTreeNode right; // 右の子

    // コンストラクタ：空の二分探索木を生成
    public MyBinTreeNode(Object v) {
        value = v;
        parent = null;
        left = null;
        right = null;
    }

    // valueのゲッター
    public Object getValue() {
        return value;
    }

    // valueのセッター
    public void setValue(Object v) {
        value = v;
    }

    // parentのゲッター
    public MyBinTreeNode getParent() {
        return parent;
    }

    // leftのゲッター
    public MyBinTreeNode getLeft() {
        return left;
    }

    // rightのゲッター
    public MyBinTreeNode getRight() {
        return right;
    }

    // leftのセッター
    public boolean setLeft(MyBinTreeNode n) {
        left = n;
        n.parent = this; // 自分自身(this)と同じクラスなので、privateメンバにアクセスできる
        return true;
    }

    // rightのセッター
    public boolean setRight(MyBinTreeNode n) {
        right = n;
        n.parent = this;
        return true;
    }
}