class Solution {
public:
    long long unsigned int decimalValue(Node *head)
    {
        long long unsigned int out = 0, mod = 1e9 + 7;
        Node* temp = head;

        while (temp) {
            out = (out << 1) % mod;
            out = (out + temp->data) % mod;
            temp = temp->next;
        }

        return out;
    }
};
