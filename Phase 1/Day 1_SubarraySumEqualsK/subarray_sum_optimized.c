#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

#define SIZE 1000 

Node* hashTable[SIZE];

int hash(int key) {
    return abs(key) % SIZE;
}

void insert(int key, int value) {
    int idx = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = hashTable[idx];
    hashTable[idx] = newNode;
}

Node* search(int key) {
    int idx = hash(key);
    Node* curr = hashTable[idx];
    while (curr != NULL) {
        if (curr->key == key)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

int subarraySum(int* arr, int n, int k) {
    int prefix_sum = 0;
    int count = 0;
    
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = NULL;
    }

    insert(0, 1);

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];
        
        Node* temp = search(prefix_sum - k);
        if (temp != NULL) {
            count += temp->value;
        }
        
        temp = search(prefix_sum);
        if (temp != NULL) {
            temp->value += 1;
        } else {
            insert(prefix_sum, 1);
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    printf("There are %d subarrays whose sum equals %d.\n", subarraySum(arr, n, k), k);

    return 0;
}
