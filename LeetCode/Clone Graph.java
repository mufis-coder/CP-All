// Definition for a Node.

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Stack;

class Node {
    public int val;
    public List<Node> neighbors;

    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }

    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }

    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }

}

class Solution {

    public Node cloneGraph(Node node) {
        HashSet<Integer> haveVisited = new HashSet<Integer>();
        Stack<Node> pathNode = new Stack<Node>();
        HashMap<Integer, Node> helpNewNode = new HashMap<Integer, Node>();

        if (node == null)
            return node;

        pathNode.push(node);
        Node newNode = new Node(node.val);
        helpNewNode.put(node.val, newNode);

        while (!pathNode.empty()) {
            Node currNode = pathNode.pop();
            haveVisited.add(currNode.val);

            for (Node nodeNeigh : currNode.neighbors) {
                if (!haveVisited.contains(nodeNeigh.val)) {
                    haveVisited.add(nodeNeigh.val);
                    pathNode.push(nodeNeigh);
                    helpNewNode.put(nodeNeigh.val, new Node(nodeNeigh.val));
                }
                helpNewNode.get(currNode.val).neighbors.add(helpNewNode.get(nodeNeigh.val));
            }
        }
        return newNode;
    }
}