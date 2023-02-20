#include <stdio.h>
#include <stdlib.h>
// Declaration of node of tree
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
// declaring root node
struct node *root = NULL;
struct node *getNewNode(int data)
{ // initialises and allocates memory for newNode
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Q12 Delete
struct node *findMin(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
// Q12, 13, 14, 15 Insert
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    { // when tree is empty
        root = getNewNode(data);
        return root;
    }
    if (data <= root->data)
    {
        // inserting in left subtree
        root->left = insert(root->left, data);
    }
    else
    { // inserting in right subtree
        root->right = insert(root->right, data);
    } // returning original root of the tree
    return root;
}
// Q 12 Delete
struct node *delete (struct node *root, int val)
{
    if (root == NULL)
    { // empty tree
        return root;
    }
    else if (val < root->data)
    { // finding node in left sub-tree
        root->left = delete (root->left, val);
    }
    else if (val > root->data)
    { // finding node in right sub-tree
        root->right = delete (root->right, val);
    }
    else
    { // found the node
        if (root->right == NULL && root->left == NULL)
        { // deleting leaf node
            free(root);
            root = NULL;
        }
        else if (root->right == NULL)
        { // deleting a node with only left sub-tree
            struct node *temp = root;
            root = root->left;
            free(temp);
        }
        else if (root->left == NULL)
        { // deleting a node with only right sub-tree
            struct node *temp = root;
            root = root->right;
            free(temp);
        }
        else
        { // deleting nodes with two sub-trees
            // storing address of node with min value in right sub-tree
            struct node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
    return root;
}
// Q 13 Height
int height(struct node *root)
{
    int leftHeight, rightHeight;
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        leftHeight = height(root->left);
        rightHeight = height(root->right);
        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }
}
// Q14 Total No.of Nodes
int countAllNodes(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return countAllNodes(root->left) + countAllNodes(root->right) + 1;
    }
}
// Q15 Mirror
void mirrorTree(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    struct node *temp = root;
    // get to all nodes of tree
    mirrorTree(root->left);
    mirrorTree(root->right);
    // swap the pointers
    temp = root->left;
    root->left = root->right;
    root->right = temp;
}
// Q12, 13, 14, 15 PreOrder
void preOrderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    } // print the data of the node
    printf("%d ", root->data);
    // recursion on left sub-tree
    preOrderTraversal(root->left);
    // recursion on right sub-tree
    preOrderTraversal(root->right);
}
// Q12, 13, 14, 15 InOrder
void inOrderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    } // recursion on left sub-tree
    inOrderTraversal(root->left);
    // print the data of the node
    printf("%d ", root->data);
    // recursion on right sub-tree
    inOrderTraversal(root->right);
}
// Q 12, 13, 14, 15 PostOrder
void postOrderTraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    } // recursion on left sub-tree
    postOrderTraversal(root->left);
    // recursion on right sub-tree
    postOrderTraversal(root->right);
    // print the data of the node
    printf("%d ", root->data);
}
// maybe for mirror
void printTree(struct node *root, int space)
{
    // Base case
    if (root == NULL)
        return;
    // Increase distance between levels
    space += 5;
    // Process right child first
    printTree(root->right, space);
    // Print current node after space
    printf("\n");
    for (int i = 5; i < space; i++)
    {
        printf(" ");
    }
    printf("%d\n", root->data);
    // Process left child
    printTree(root->left, space);
}
// MAIN PROGRAM
int main()
{
    struct node *temp;
    int data, i, choice, val;
    printf("\n**********************************");
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Height");
    printf("\n4. INORDER");
    printf("\n5. PREORDER");
    printf("\n6. POSTORDER");
    printf("\n7. TOTAL number of nodes");
    printf("\n8. Mirror");
    printf("\n9. Display");
    printf("\n10. EXIT");
    printf("\n**********************************");
    do
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter data to insert: ");
            scanf("%d", &data);
            root = insert(root, data);
            printf("\n%d is inserted!", data);
            break;
        case 2:
            printf("\nEnter a value to delete: ");
            scanf("%d", &val);
            root = delete (root, val);
            printf("\n%d is deleted!", val);
            break;
        case 3:
            printf("\nHeight of tree is: %d", height(root));
            break;
        case 4:
            printf("\nIN-ORDER: ");
            inOrderTraversal(root);
            break;
        case 5:
            printf("\nPRE-ORDER: ");
            preOrderTraversal(root);
            break;
        case 6:
            printf("\nPOST-ORDER: ");
            postOrderTraversal(root);
            break;
        case 7:
            printf("\nTotal number of nodes: %d", countAllNodes(root));
            break;
        case 8:
            printf("\n***MIRROR***\n");
            mirrorTree(root);
            printTree(root, 0);
            break;
        case 9:
            printTree(root, 0);
            break;
        case 10:
            printf("\nExiting...\n");
            exit(1);
            break;
        default:
            printf("\nInvalid...");
        }
    } while (choice != 10);
    return 0;
}