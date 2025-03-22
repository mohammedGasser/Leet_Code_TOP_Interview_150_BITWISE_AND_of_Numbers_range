class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
   
  int res=left;
  int r=right;
  
       for( ;r>left ;  )
              { 
                       {
    	  //this like
    	  //this mean r-- is copy of r and arfte & operation
    	  //will be assigned to r
    	  //6&=5
    	  //4
                 r &= (r--);

             
                       }
      
//    while(right>left){
//             right&=(right-1);
//         }
 

   return r; 
  
    }
};
