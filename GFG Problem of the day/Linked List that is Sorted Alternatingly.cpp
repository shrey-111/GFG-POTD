class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         if(head == nullptr || *head == nullptr){
          return ; //Base Case
       } 
       
       vector<int> dataVector;
       Node* curr = *head;
       while(curr != nullptr){
           dataVector.push_back(curr->data);
           curr = curr->next;
       }
       
       std::sort(dataVector.begin(), dataVector.end()); //Use function
       
       curr = * head; //Update 
       for(int i = 0; i < dataVector.size(); ++i){
           curr-> data = dataVector[i];
           curr = curr->next;
       }
    }
};