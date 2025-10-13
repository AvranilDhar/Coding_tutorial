# Insertion in Binary Search Tree
```c
insert(tree,val)
step1 : if tree = NULL 
        allocate memory for tree
        set tree->data = val
        set tree->left = tree->right = NULL
        else
           if val < tree->data
                insert(tree->left , val)
           else 
                insert(tree->right , val)
step2 : end
```
# Searching Algorithm in BST
```c
searchElement(tree , val)

step1 : if val = tree->data or tree = NULL
            return tree
            goto exit
step2 : if val < tree->data 
            return searchElement(tree->left , val)
        else 
            return searchElement(tree->right , val)
step3 : end
```
# Deletion Algorithm in BST
```c
delete(tree, val)
step1: if tree = NULL
        write "val not found in tree"
       else if val < tree->data
        delete(tree->left,data)
       else if val > tree->data
        delete(tree->right,data)
       else if tree->left and tree->right
        set temp = findLargestNode(tree->left)
        set tree->data = temp->data
        delete(tree->left , temp->data)
       else
        set temp = tree
        if tree->left = NULL and tree->right = NULL
        set  tree = NULL
        else if tree->left != NULL
               set tree = tree->left
        else
              set tree = tree->right
        free temp
step2 : end
```
# Height Algorithm in BST
```c
height(tree)
step1 : if(tree = NULL)
            return 0
        else
            set leftHeight = height(tree->left)
            set rightHeight = height(tree->right)
            if leftHeight > rightHeight
                return leftHeight + 1
            else
                return rightHeight + 1
step2 : end
```
# Total Internal Node Algorithm in BST
```c
totalInternalNodes(tree)
step1 : if tree = NULL
           return 0
        else if tree->left = NULL and tree->right = NULL
           return 0
        else
           return totalInternalNodes(tree->left) + totalInternalNodes(tree->right) + 1
step2 : end
```
# Total External Node Algorithm in BST
```c
totalExternalNodes(tree)
step1 : if tree = NULL
           return 0
        else if tree->left = NULL and tree->right = NULL
           return 1
        else
           return totalExternalNodes(tree->left) + totalExternalNodes(tree->right)
step2 : end
```
# Mirror Image Algorithm in BST
```c
mirrorImage(tree)
step1 : if tree != NULL
           mirrorImage(tree->left)
           mirrorImage(tree->right)
           set temp = tree->left
           set tree->left = tree->right
           set tree-right = temp
step2 : end
```
# Delete Tree Algorithm in BST
```c
deleteTree(tree)
step1 : if tree != NULL
        deleteTree(tree->left)
        deleteTree(tree->right)
        free(tree)
step2 : end
```
# Find Smallest Element Algorithm in BST
```c
findSmallestElement(tree)
step1 : if tree = NULL or tree->left = NULL
            return tree
        else
            return findSmallestElement(tree->left)
step2 : end
```
# Find Largest Element Algorithm in BST
```c
findLargestElement(tree)
step1 : if tree = NULL or tree->right = NULL
            return tree
        else
            return findLargestElement(tree->right)
step2 : end
```