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

int budgetTracker(int* expenses, int n, int budget) {
    int prefix_sum = 0;
    int periods = 0;
    
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = NULL;
    }

    insert(0, 1);  // Important: empty prefix at start

    for (int i = 0; i < n; i++) {
        prefix_sum += expenses[i];
        
        Node* temp = search(prefix_sum - budget);
        if (temp != NULL) {
            periods += temp->value;
        }
        
        temp = search(prefix_sum);
        if (temp != NULL) {
            temp->value += 1;
        } else {
            insert(prefix_sum, 1);
        }
    }

    return periods;
}

int main() {
    int expenses[] = {10, 2, 8, 5, 5};
    int n = sizeof(expenses) / sizeof(expenses[0]);
    int budget = 10;

    int result = budgetTracker(expenses, n, budget);

    printf("\nUser's Target Budget: %d\n", budget);
    printf("Daily Expenses: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", expenses[i]);
    }
    printf("\nTotal valid continuous spending periods: %d\n", result);

    return 0;
}
