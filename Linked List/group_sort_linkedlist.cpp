#include <iostream>
#include <map>
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
    
    // Group sort: Create separate lists for each value and connect them
    void groupSort() {
        if (head == NULL || head->next == NULL) {
            return; // Empty or single node list
        }
        
        // Map to store head and tail for each value
        map<int, pair<Node*, Node*>> groups;
        
        Node* current = head;
        
        // Separate elements into groups
        while (current != NULL) {
            Node* nextNode = current->next;
            current->next = NULL; // Disconnect current node
            
            int value = current->data;
            
            if (groups.find(value) == groups.end()) {
                // First occurrence of this value
                groups[value] = make_pair(current, current);
            } else {
                // Add to existing group
                groups[value].second->next = current;
                groups[value].second = current;
            }
            
            current = nextNode;
        }
        
        // Connect all groups in order
        Node* newHead = NULL;
        Node* newTail = NULL;
        
        for (auto& group : groups) {
            if (newHead == NULL) {
                newHead = group.second.first;
                newTail = group.second.second;
            } else {
                newTail->next = group.second.first;
                newTail = group.second.second;
            }
        }
        
        head = newHead;
    }
    
    // Alternative approach: Using separate lists for each value
    void groupSortAlternative() {
        if (head == NULL || head->next == NULL) {
            return;
        }
        
        // Create separate heads for each value
        Node* head0 = NULL, *tail0 = NULL;
        Node* head1 = NULL, *tail1 = NULL;
        Node* head2 = NULL, *tail2 = NULL;
        // Add more heads as needed for other values
        
        Node* current = head;
        
        // Separate elements
        while (current != NULL) {
            Node* nextNode = current->next;
            current->next = NULL;
            
            if (current->data == 0) {
                if (head0 == NULL) {
                    head0 = current;
                    tail0 = current;
                } else {
                    tail0->next = current;
                    tail0 = current;
                }
            } else if (current->data == 1) {
                if (head1 == NULL) {
                    head1 = current;
                    tail1 = current;
                } else {
                    tail1->next = current;
                    tail1 = current;
                }
            } else if (current->data == 2) {
                if (head2 == NULL) {
                    head2 = current;
                    tail2 = current;
                } else {
                    tail2->next = current;
                    tail2 = current;
                }
            }
            // Add more conditions for other values as needed
            
            current = nextNode;
        }
        
        // Connect all groups: head0 -> head1 -> head2
        if (head0 != NULL) {
            head = head0;
            if (head1 != NULL) {
                tail0->next = head1;
                if (head2 != NULL) {
                    tail1->next = head2;
                }
            } else if (head2 != NULL) {
                tail0->next = head2;
            }
        } else if (head1 != NULL) {
            head = head1;
            if (head2 != NULL) {
                tail1->next = head2;
            }
        } else if (head2 != NULL) {
            head = head2;
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
    
    // Print with group information
    void displayWithGroups() {
        if (head == NULL) {
            cout << "Empty list" << endl;
            return;
        }
        
        Node* current = head;
        int currentGroup = current->data;
        cout << "Group " << currentGroup << ": ";
        
        while (current != NULL) {
            if (current->data != currentGroup) {
                currentGroup = current->data;
                cout << endl << "Group " << currentGroup << ": ";
            }
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
    cout << "=== Group Sort Linked List ===" << endl;
    
    // Test Case 1: Your example {0, 1, 0, 2, 2, 0, 1}
    cout << "\nTest Case 1: {0, 1, 0, 2, 2, 0, 1}" << endl;
    LinkedList list1;
    int arr1[] = {0, 1, 0, 2, 2, 0, 1};
    list1.createFromArray(arr1, 7);
    
    cout << "Original list: ";
    list1.display();
    
    list1.groupSort();
    cout << "After group sorting: ";
    list1.display();
    
    cout << "Grouped display:" << endl;
    list1.displayWithGroups();
    
    // Test Case 2: Using alternative method
    cout << "\nTest Case 2: {0, 1, 0, 2, 2, 0, 1} (Alternative method)" << endl;
    LinkedList list2;
    int arr2[] = {0, 1, 0, 2, 2, 0, 1};
    list2.createFromArray(arr2, 7);
    
    cout << "Original list: ";
    list2.display();
    
    list2.groupSortAlternative();
    cout << "After alternative group sorting: ";
    list2.display();
    
    // Test Case 3: Different values
    cout << "\nTest Case 3: {3, 1, 2, 1, 3, 2, 1}" << endl;
    LinkedList list3;
    int arr3[] = {3, 1, 2, 1, 3, 2, 1};
    list3.createFromArray(arr3, 7);
    
    cout << "Original list: ";
    list3.display();
    
    list3.groupSort();
    cout << "After group sorting: ";
    list3.display();
    
    // Test Case 4: Single value
    cout << "\nTest Case 4: {1, 1, 1, 1}" << endl;
    LinkedList list4;
    int arr4[] = {1, 1, 1, 1};
    list4.createFromArray(arr4, 4);
    
    cout << "Original list: ";
    list4.display();
    
    list4.groupSort();
    cout << "After group sorting: ";
    list4.display();
    
    return 0;
} 