Node* sortList(Node *head) {
    Node* temp = head;
    int zero = 0, ones = 0, twos = 0;
    
    // Count occurrences of 0s, 1s, and 2s
    while (temp != NULL) {
        if (temp->data == 0)
            zero++;
        else if (temp->data == 1)
            ones++;
        else
            twos++;
        temp = temp->next;
    }
    
    // Update nodes with sorted values
    temp = head;
    while (temp != NULL) {
        if (zero > 0) {
            temp->data = 0;
            zero--;
        } else if (ones > 0) {
            temp->data = 1;
            ones--;
        } else if (twos > 0) {
            temp->data = 2;
            twos--;
        }
        temp = temp->next;
    }
    return head;
}
