void inOrder(struct Node *root, std::vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

float findMedian(struct Node *root) {
    if (root == NULL) {
        return 0;
    }
    std::vector<int> ans;
    inOrder(root, ans);

    int n = ans.size();
    int mid = n / 2;

    if (n % 2 == 0) {
        return (ans[mid - 1] + ans[mid]) / 2.0;
    } else {
        return ans[mid];
    }
}
