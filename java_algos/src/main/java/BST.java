import java.util.LinkedList;
import java.util.Queue;

/**
 * Created by sasakikai on 8/17/15.
 */
public class BST {
    public static class TreeNode {
        public int data;
        public TreeNode left = null;
        public TreeNode right = null;

        public TreeNode(int data) {
            this.data = data;
        }
    }

    public static void inOrderScan(TreeNode root) {
        if (root.left != null) {
            inOrderScan(root.left);
        }
        System.out.println(root.data);
        if (root.right != null) {
            inOrderScan(root.right);
        }
    }

    public static void preOrderScan(TreeNode root) {
        System.out.println(root.data);
        if (root.left != null) {
            preOrderScan(root.left);
        }
        if (root.right != null) {
            preOrderScan(root.right);
        }
    }

    public static void postOrderScan(TreeNode root) {
        if (root.left != null) {
            postOrderScan(root.left);
        }
        if (root.right != null) {
            postOrderScan(root.right);
        }
        System.out.println(root.data);
    }

    public static void bfs(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<TreeNode>();
        System.out.println(root.data);
        q.add(root);
        while (!q.isEmpty()) {
            TreeNode node = q.poll();
            if (node.left != null) {
                System.out.println(node.left.data);
                q.add(node.left);
            }
            if (node.right != null) {
                System.out.println(node.right.data);
                q.add(node.right);
            }
        }
    }

    public static TreeNode constructTree() {
        TreeNode node1 = new TreeNode(1);
        TreeNode node2 = new TreeNode(2);
        TreeNode node3 = new TreeNode(3);
        TreeNode node4 = new TreeNode(4);
        TreeNode node5 = new TreeNode(5);
        TreeNode node6 = new TreeNode(6);
        TreeNode node7 = new TreeNode(7);
        node1.left = node2;
        node1.right = node3;
        node2.left = node4;
        node2.right = node5;
        node3.left = node6;
        node3.right = node7;

        return node1;
    }

    public static void main(String[] args) {
        TreeNode root = constructTree();
        System.out.println("In Order Scanning");
        inOrderScan(root);
        System.out.println("Pre Order Scanning");
        preOrderScan(root);
        System.out.println("Post Order Scanning");
        postOrderScan(root);

        System.out.println("Bredth First Search");
        bfs(root);
    }
}
