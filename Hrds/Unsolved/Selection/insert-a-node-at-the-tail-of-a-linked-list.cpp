Node *head, *nextNode, *insert;

Node *Insert(Node* head, int data)
{
	insert = (Node*)malloc(sizeof(Node));
	nextNode = (Node*)malloc(sizeof(Node));
	
	insert -> data = data;
	insert -> next = nullptr;
	if(head == nullptr) return insert;
	else
	{
		nextNode = head;
		while(nextNode -> next != nullptr)
		{
			nextNode = nextNode -> next;
		}
		nextNode -> next = insert;
		return head;
	}	
}
