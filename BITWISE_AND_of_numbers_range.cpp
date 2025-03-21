class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
   
  int res=left;
  int r=right;
//    if( (left+1)!=(right) )
//    {     
       for( ;r>left ;  )
              { 
                 r &= (r--);
                   
                //    if(1 != ))
                //     break;
              }
            
//    }
//    else{
//     res&=right;
//    }
             

  
//    while(right>left){
//             right&=(right-1);
//         }
//    while(left<right){
//             left&=(left+1);
//         }

   return r; 
  
    }
};
