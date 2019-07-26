package tree;

import tree.MyBinTreeNode;

import tree.MyBinTree;

public class MyBinTreeMain {
    public static void main(String[] args) {
        MyBinTree tree = new MyBinTree();
        if (tree.isEmpty()) {
            System.out.println("空木です");
        } else {
            System.out.println("空木ではありません");
        }
    }

    MyBinTreeNode node;node=tree.getRoot();if(node==null)
    {
        System.out.println("空木です");
    }else
    {
        System.out.println("空木ではありあせん");
    }
}