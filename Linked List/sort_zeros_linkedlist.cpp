#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;
    
public:
    LinkedList() {
        head = NULL;
    }
    
    // Insert at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        
        if (head == NULL) {
            head = newNode;
            return;
        }
        
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    
    // Create linked list from array
    void createFromArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            insertAtEnd(arr[i]);
        }
    }
    
    // Sort zeros to the end without replacing values
    void sortZeros() {
        if (head == NULL || head->next == NULL) {
            return; // Empty or single node list
        }
        
        // Create two dummy nodes for non-zero and zero lists
        Node* nonZeroHead = new Node(0); // Dummy node
        Node* zeroHead = new Node(0);    // Dummy node
        
        Node* nonZeroTail = nonZeroHead;
        Node* zeroTail = zeroHead;
        
        Node* current = head;
        
        // Separate non-zero and zero elements
        while (current != NULL) {
            Node* nextNode = current->next;
            
            if (current->data != 0) {
                // Add to non-zero list
                nonZeroTail->next = current;
                nonZeroTail = current;
                nonZeroTail->next = NULL;
            } else {
                // Add to zero list
                zeroTail->next = current;
                zeroTail = current;
                zeroTail->next = NULL;
            }
            
            current = nextNode;
        }
        
        // Connect non-zero list to zero list
        if (nonZeroHead->next != NULL) {
            head = nonZeroHead->next;
            nonZeroTail->next = zeroHead->next;
        } else {
            head = zeroHead->next;
        }
        
        // Clean up dummy nodes
        delete nonZeroHead;
        delete zeroHead;
    }
    
    // Alternative approach: In-place sorting using two pointers
    void sortZerosInPlace() {
        if (head == NULL || head->next == NULL) {
            return;
        }
        
        // Find the first non-zero node
        Node* current = head;
        while (current != NULL && current->data == 0) {
            current = current->next;
        }
        
        if (current == NULL) {
            return; // All zeros
        }
        
        // If first node is non-zero, we need to handle it
        if (current != head) {
            // Move first non-zero to head
            int temp = head->data;
            head->data = current->data;
            current->data = temp;
        }
        
        // Now use two pointers to move zeros to end
        Node* nonZeroPos = head;
        current = head->next;
        
        while (current != NULL) {
            if (current->data != 0) {
                nonZeroPos = nonZeroPos->next;
                if (nonZeroPos != current) {
                    // Swap values
                    int temp = nonZeroPos->data;
                    nonZeroPos->data = current->data;
                    current->data = temp;
                }
            }
            current = current->next;
        }
    }
    
    // Print the linked list
    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    cout << "=== Linked List Zero Sorting ===" << endl;
    
    // Test Case 1: Mixed zeros and non-zeros
    cout << "\nTest Case 1: {0, 1, 0, 3, 12}" << endl;
    LinkedList list1;
    int arr1[] = {0, 1, 0, 3, 12};
    list1.createFromArray(arr1, 5);
    
    cout << "Original list: ";
    list1.display();
    
    list1.sortZeros();
    cout << "After sorting: ";
    list1.display();
    
    // Test Case 2: Multiple consecutive zeros
    cout << "\nTest Case 2: {1, 2, 0, 0, 0, 3, 6}" << endl;
    LinkedList list2;
    int arr2[] = {1, 2, 0, 0, 0, 3, 6};
    list2.createFromArray(arr2, 7);
    
    cout << "Original list: ";
    list2.display();
    
    list2.sortZeros();
    cout << "After sorting: ";
    list2.display();
    
    // Test Case 3: All zeros at beginning
    cout << "\nTest Case 3: {0, 0, 0, 1, 2, 3}" << endl;
    LinkedList list3;
    int arr3[] = {0, 0, 0, 1, 2, 3};
    list3.createFromArray(arr3, 6);
    
    cout << "Original list: ";
    list3.display();
    
    list3.sortZeros();
    cout << "After sorting: ";
    list3.display();
    
    // Test Case 4: No zeros
    cout << "\nTest Case 4: {1, 2, 3, 4, 5}" << endl;
    LinkedList list4;
    int arr4[] = {1, 2, 3, 4, 5};
    list4.createFromArray(arr4, 5);
    
    cout << "Original list: ";
    list4.display();
    
    list4.sortZeros();
    cout << "After sorting: ";
    list4.display();
    
    // Test Case 5: All zeros
    cout << "\nTest Case 5: {0, 0, 0, 0}" << endl;
    LinkedList list5;
    int arr5[] = {0, 0, 0, 0};
    list5.createFromArray(arr5, 4);
    
    cout << "Original list: ";
    list5.display();
    
    list5.sortZeros();
    cout << "After sorting: ";
    list5.display();
    
    cout << "\n=== In-place Sorting Demo ===" << endl;
    
    // Demonstrate in-place sorting
    cout << "\nIn-place sorting: {0, 1, 0, 3, 12}" << endl;
    LinkedList list6;
    int arr6[] = {0, 1, 0, 3, 12};
    list6.createFromArray(arr6, 5);
    
    cout << "Original list: ";
    list6.display();
    
    list6.sortZerosInPlace();
    cout << "After in-place sorting: ";
    list6.display();
    
    return 0;
} 