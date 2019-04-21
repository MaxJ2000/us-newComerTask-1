//
// Created by john on 4/16/19.
//

#ifndef INC_1_SORTTEMPLATE_H
#define INC_1_SORTTEMPLATE_H
#include <iostream>
using namespace std;
void getArray(int a[], int n) {
    int i = 0;
    cin >> a[i++];
    while (getchar() != '\n') {
        cin >> a[i++];
    }
}

void printArray(int a[], int n) {
    cout << "array[" << n << "]:";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

#endif //INC_1_SORTTEMPLATE_H

