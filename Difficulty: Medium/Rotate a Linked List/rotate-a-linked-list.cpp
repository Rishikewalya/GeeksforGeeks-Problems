//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
//basically mje list ko circular bana k head redefine krna h 
        // left se k bar rotate krna h to right se n-k bar rotate krne pr aayga 
        if(head==NULL||head->next==NULL)return head;
       
        Node * curr=head;
        int length=1;
        while(curr->next!=NULL){
            curr=curr->next;
            length++;
        }
        
        curr->next=head;
        k=k%length;
        Node* lasthead=head;
        while(k>0){
            head=head->next;
            k--;
        }
        Node *temp=head;
        while(length>1){
           temp=temp->next;
           length--; 
        }
        temp->next=NULL;
        return head;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
        cout << "~\n";
    }
    return 1;
}

// } Driver Code Ends