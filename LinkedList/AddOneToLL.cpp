class Solution
{
public:
  Node *reverse(Node *head)
  {
    if (head == NULL || head->next == NULL)
      return head;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
      Node *nxt = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nxt;
    }
    return prev;
  }

  Node *addOne(Node *head)
  {
    if (head == NULL)
      return head;
    Node *start = reverse(head);
    Node *rev = start;
    Node *end = NULL;
    int carry = 1, sum = 0;
    while (rev != NULL)
    {
      sum = rev->data + carry;
      rev->data = sum % 10;
      carry = sum / 10;
      end = rev;
      rev = rev->next;
    }
    if (carry)
    {
      Node *temp = new Node(carry);
      end->next = temp;
      temp->next = NULL;
    }
    return reverse(start);
  }
};
