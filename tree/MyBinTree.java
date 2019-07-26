package tree;

import tree.MyBinTreeNode;

public class MyBinTree {
    private MyBinTreeNode root;

    public MyBinTree() {
        root = null;
    }

    public MyBinTreeNode getRoot() {
        return root;
    }

    public boolean isEmpty() {
        return root == null;
    }

    public boolean setRoot(MyBinTreeNode r) {
        if (isEmpty()) {
            root = r;
            return true;
        } else {
            return false;
        }
    }
    //深さ優先探索
    public MyBinTreeNode dfs(Object value, int type) {
        return dfs(value, type, root);
    }

    private MyBinTreeNode dfs(Object value, int type, MyBinTreeNode node) {
        if(type = 0) {
            System.out.println(node.getValue());
            if (node.getValue().equals(value)) {
                return node;
            } //if(!node.getLeft().equals(null))
        }
            if(node.getLeft() != null) {
                MyBinTreeNode reault = dfs(value,type,node.getLeft())
                if(result != null) {
                    return result;
                }
            }
            if(type == 1) {
                System.out.println(node.getValue();)
                result = dfs(value,type,node.getRight());
                if(result != null) {
                    return result;
                }
                
            }
            if(type == 2) {
                System.out.println(node.getValue());
                if(node.getValue().equals(value)) {
                    return node;
                }
            }
            return null;
        }
    }

    public MyBinTreeNode bfs(Object value) {

    }
}