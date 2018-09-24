#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *searchBST(TreeNode *root, int val) {
        if (!root) return NULL;
        else if (root && root->val == val) return root;
        else if (root->val > val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
    }
};

int main() {
    TreeNode root(4);
    TreeNode c2(2);
    TreeNode c7(7);
    TreeNode c1(1);
    TreeNode c3(3);

    // TEST CASE - 1
    // =============
    root.left = &c2;
    root.right = &c7;
    c2.left = &c1;
    c2.right = &c3;

    Solution solution;
    cout << solution.searchBST(&root, 7) << endl;
    return 0;
}