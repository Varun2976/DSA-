#include <iostream>
using namespace std;

struct node {
    int data;
    node *left, *right;
};

node* root = NULL;

// Insert into BST (correct version)
node* insert(node* root, int val) {
    if (root == NULL) {
        node* temp = new node;
        temp->data = val;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (val <= root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

#define MAX 100

void BFS(node* root) {
    if (root == NULL) return;

    node* queue[MAX];
    int front = 0, rear = 0;

    int visited[MAX];
    int vcount = 0;

    queue[rear++] = root;

    cout << "BFS Traversal with Fringe and Visited:\n\n";

    while (front < rear) {
        // Print Fringe
        cout << "Fringe: ";
        for (int i = front; i < rear; i++)
            cout << queue[i]->data << " ";
        cout << endl;

        // Visit node
        node* current = queue[front++];
        visited[vcount++] = current->data;

        // Print Visited
        cout << "Visited: ";
        for (int i = 0; i < vcount; i++)
            cout << visited[i] << " ";
        cout << endl << endl;

        // Enqueue children
        if (current->left)
            queue[rear++] = current->left;
        if (current->right)
            queue[rear++] = current->right;
    }

    // Final path
    cout << "Final BFS Path: ";
    for (int i = 0; i < vcount; i++)
        cout << visited[i] << " ";
    cout << endl;
}

int main() {
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 18);

    BFS(root);
    return 0;
}