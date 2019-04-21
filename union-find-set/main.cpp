#include <iostream>

int find(int pre[], int x);

void join(int pre[], int x, int y);

void merge(int height[], int pre[], int x, int y);

int main() {
    int pre[1000], height[1000];
    return 0;
}

int find(int pre[], int x) {
    int r = x, father, first = x;
    while (pre[r] != r) {
        r = pre[r];
    }
    while (first != r) {
        father = pre[first];
        pre[first] = r;
        first = father;
    }
    return r;
}

void join(int pre[], int x, int y) {
    int fx = find(pre, x), fy = find(pre, y);
    if (fx != fy) {
        pre[fx] = fy;
    }
}

void merge(int height[], int pre[], int x, int y) {
    int fx = find(pre, x), fy = find(pre, y);
    if (fx == fy) {
        return;
    }
    if (height[fx] > height[fy]) {
        pre[fy] = fx;
    } else {
        pre[fx] = fy;
        if (height[fx] == height[fy]) {
            height[fy]++;
        }
    }
}