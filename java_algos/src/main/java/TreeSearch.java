import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

/**
 * Created by sasakikai on 8/17/15.
 */
public class TreeSearch {
    public static class TreeNode {
        public int data;
        public List<TreeNode> adjacents = new LinkedList<TreeNode>();
        public boolean visited = false;

        public TreeNode(int data) {
            this.data = data;
        }

        public void addAdjacent(TreeNode node) {
            adjacents.add(node);
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

        node1.addAdjacent(node2);
        node1.addAdjacent(node3);
        node1.addAdjacent(node4);
        node2.addAdjacent(node5);
        node2.addAdjacent(node6);
        node3.addAdjacent(node7);

        return node1;
    }

    public static void dfs(TreeNode root) {
        System.out.println(root.data);
        root.visited = true;
        for (TreeNode node : root.adjacents) {
            if (!node.visited) {
                dfs(node);
            }
        }
    }

    public static void bfs(TreeNode root) {
        System.out.println(root.data);
        root.visited = true;

        Queue<TreeNode> q = new LinkedList<TreeNode>();
        q.add(root);
        while (!q.isEmpty()) {
            TreeNode node = q.poll();
            for (TreeNode n : node.adjacents) {
                if (!n.visited) {
                    System.out.println(n.data);
                    n.visited = true;
                    q.add(n);
                }
            }
        }
    }

    public static void main(String[] args) {
        TreeNode root = constructTree();

//        dfs(root);

        bfs(root);
    }
}
