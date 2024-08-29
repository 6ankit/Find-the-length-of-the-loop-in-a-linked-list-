int countNodesinLoop(struct Node *head) {
        // Code here
        unordered_set<Node*> st;   //To check whether the loop exsits or not
        Node*temp=head;         //Temporary node to verify whether the loop is present or node
        Node*help;            //This node will help us to track the lenght of the loop
        int check=0;
        while(temp!=NULL)
        {
            if(st.find(temp)!=st.end())
            {
                check+=1;
                help=temp;
                break;
            }
            else 
            {
                st.insert(temp);
            }
            temp=temp->next;
        }
        if(check==0)          // If loop not exsits
        {
            return 0;   
        }
        Node*help2=help->next;          //This node will help us to track the lenght of the loop
        int len=1;                      //Maintains the current lenght of the loop
        while(help2!=help)
        {
            help2=help2->next;
            len+=1;                     //increaments itself to find out the actual lenght
        }
        return len;                     //Returns the lenght of the loop
    }int countNodesinLoop(struct Node *head) {
        // Code here
        unordered_set<Node*> st;   //To check whether the loop exsits or not
        Node*temp=head;         //Temporary node to verify whether the loop is present or node
        Node*help;            //This node will help us to track the lenght of the loop
        int check=0;
        while(temp!=NULL)
        {
            if(st.find(temp)!=st.end())
            {
                check+=1;
                help=temp;
                break;
            }
            else 
            {
                st.insert(temp);
            }
            temp=temp->next;
        }
        if(check==0)          // If loop not exsits
        {
            return 0;   
        }
        Node*help2=help->next;          //This node will help us to track the lenght of the loop
        int len=1;                      //Maintains the current lenght of the loop
        while(help2!=help)
        {
            help2=help2->next;
            len+=1;                     //increaments itself to find out the actual lenght
        }
        return len;                     //Returns the lenght of the loop
    }
