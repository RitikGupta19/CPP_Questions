class Solution
{
public:
  Node *divide(int N, Node *head)
  {
    if (head == NULL || head->next == NULL)
      return head;
    Node *es = NULL, *ee = NULL, *os = NULL, *oe = NULL;
    Node *ptr = head;
    while (ptr != NULL)
    {
      if (ptr->data % 2 == 0)
      {
        if (es == NULL)
        {
          es = ptr;
          ee = es;
        }
        else
        {
          ee->next = ptr;
          ee = ee->next;
        }
      }
      else
      {
        if (os == NULL)
        {
          os = ptr;
          oe = os;
        }
        else
        {
          oe->next = ptr;
          oe = oe->next;
        }
      }
      ptr = ptr->next;
    }
    if (os == NULL || es == NULL)
      return head;
    ee->next = os;
    oe->next = NULL;
    // cout<<es->data<<ee->data;
    return es;
  }
};
