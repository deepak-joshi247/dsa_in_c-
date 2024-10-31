// a code to find max occured character in a string 
 char getMaxOccuringChar(string str)
    {
        int arr[26]={0}; // this will be a array where we store all alpha count and intially all are assigned 0
        char ch;        // this will store a char from string 
        int number;     //this has the number that the ch store
        
        int ans  ;       // storing the max index number to return the max count char name at last
       
        for(int i=0;i<str.length();i++){
            ch=str[i];
            number=ch-'a'; // make number store the ASCII value of ch 
            arr[number]++ ;  /*number is acting as a index no. for our array and also where the ch is stored in arr 
                             it then increment that value indicating that ch occured once */
                             
        }
        
        int max=0 ;// this will store the greatest arr value
        
        // comparing and finding which arr element has greastest value
        for(int i=0;i<26;i++){
            if(max<arr[i]){
                max=arr[i];     //this will always update max value with the greatest
                ans=i;
            }
            
        }
        return ans+'a';
    }
