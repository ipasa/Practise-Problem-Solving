#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Test Unit
// Create a tree for test
//            1
//           / \
//          2  3
//         / \  \
//        4  5  6
//       / \
//      7  8
//        /
//       9

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p && q) return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        else return !p && !q;
    }
};

int main() {
    TreeNode root1(1);
    TreeNode root2(1);
    TreeNode c1(1);
    TreeNode c2(2);
    TreeNode c3(3);

    // TEST CASE - 1
    // =============
    root1.left = &c2;
    root1.right = &c3;

    root2.left = &c2;
    root2.right = &c3;

    // TEST CASE - 2
    // =============
    // root1.left = &c2;
    // root2.right = &c2;

    // TEST CASE - 3
    // =============
    // root1.left = &c2;
    // root1.right = &c1;

    // root2.left = &c1;
    // root2.right = &c2;


    Solution s;
    std::cout << s.isSameTree(&root1, &root2) << std::endl;

    return 0;
}