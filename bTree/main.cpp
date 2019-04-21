#include <iostream>
#include <stack>
#include <queue>

typedef struct BiNode {
    char data;
    struct BiNode *lchild, *rchild;
} BiNode, *BiTree;

void creatBiTree(BiTree *T);

void preOrdRecTraversal(BiTree T);

void preOrdTraversal(BiTree T);

void inOrdRecTraversal(BiTree T);

void inOrdTraversal(BiTree T);

void postOrdRecTraversal(BiTree T);

void postOrdTraversal(BiTree T);

void depthOrdTraversal(BiTree T);


int main() {
    BiTree headNode;
    creatBiTree(&headNode);
    printf("前序遍历：递归");
    preOrdRecTraversal(headNode);
    std::cout << std::endl;
    printf("前序遍历：非递归");
    preOrdTraversal(headNode);
    std::cout << std::endl;
    printf("中序遍历：递归");
    inOrdRecTraversal(headNode);
    std::cout << std::endl;
    printf("中序遍历：非递归");
    inOrdTraversal(headNode);
    std::cout << std::endl;
    printf("后序遍历：递归");
    postOrdRecTraversal(headNode);
    std::cout << std::endl;
    printf("后序遍历：非递归");
    postOrdTraversal(headNode);
    std::cout << std::endl;
    std::cout << "层次优先遍历:";
    depthOrdTraversal(headNode);
    std::cout << std::endl;
}

void creatBiTree(BiTree *T) {
    char c;
    scanf("%c", &c);
    if (c == '*') {
        *T = nullptr;
    } else {
        *T = (BiNode *) malloc(sizeof(BiNode));
        (*T)->data = c;
        creatBiTree(&((*T)->lchild));
        creatBiTree(&((*T)->rchild));
    }
}

void preOrdRecTraversal(BiTree T) {
    if (T != nullptr) {
        printf("%c", T->data);
        preOrdRecTraversal(T->lchild);
        preOrdRecTraversal(T->rchild);
    }
}

void preOrdTraversal(BiTree T) {
    std::stack<BiTree> stack;
    BiTree p = T;
    while (p != nullptr || !stack.empty()) {
        if (p != nullptr) {
            stack.push(p);
            printf("%c", p->data);
            p = p->lchild;
        } else {
            p = stack.top();
            stack.pop();
            p = p->rchild;
        }
    }
}

void inOrdRecTraversal(BiTree T) {
    if (T != nullptr) {
        inOrdRecTraversal(T->lchild);
        printf("%c", T->data);
        inOrdRecTraversal(T->rchild);
    }
}

void inOrdTraversal(BiTree T) {
    std::stack<BiTree> stack;
    BiTree p = T;
    while (p != nullptr || !stack.empty()) {
        if (p != nullptr) {
            stack.push(p);
            p = p->lchild;
        } else {
            p = stack.top();
            printf("%c", p->data);
            stack.pop();
            p = p->rchild;
        }
    }
}

void postOrdRecTraversal(BiTree T) {
    if (T != nullptr) {
        postOrdRecTraversal(T->lchild);
        postOrdRecTraversal(T->rchild);
        printf("%c", T->data);
    }
}

void postOrdTraversal(BiTree T) {
    std::stack<BiTree> stack;
    std::stack<int> haveVisit;
    BiTree p = T;
    stack.push(p);
    haveVisit.push(-1);
    p = p->lchild;
    int goRight = 0;
    while (p != nullptr || !stack.empty()) {
        if (haveVisit.top() != 1) {
            if (p != nullptr && goRight != 1) {
                stack.push(p);
                haveVisit.push(-1);
                p = p->lchild;
            } else {
                goRight = 0;
                p = stack.top()->rchild;
                int tmp = haveVisit.top();
                haveVisit.pop();
                haveVisit.push(tmp + 1);
            }
        } else {
            p = stack.top();
            std::cout << p->data;
            stack.pop();
            haveVisit.pop();
            if (stack.empty()) {
                return;
            }
            p = stack.top();
            goRight = 1;
        }
    }
    std::cout << std::endl;
}

void depthOrdTraversal(BiTree T) {
    std::queue<BiTree> Q;
    Q.push(T);
    do {
        BiTree node = Q.front();
        Q.pop();
        std::cout << node->data;
        if (node->lchild != nullptr) {
            Q.push(node->lchild);
        }
        if (node->rchild != nullptr) {
            Q.push(node->rchild);
        }
    } while (!Q.empty());
}