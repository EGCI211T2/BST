#include <iostream>
using namespace std;

#include "BST.h"
int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold random values
   BST b;

   
	b.root= NULL;  b.size=0;// tree initially empty
        for ( i = 1; i < argc; ++i ) {
       insertNode( &b, atoi(argv[i]));
    // insertNode(&b.root,atoi(argv[i]) );
  } // end for
   // traverse the tree preOrder
   /*printf("\n\nThe preOrder traversal is\n") ;
   preOrder( rootPtr );*/

   // traverse the tree inOrder
    /*printf("\n\nThe inOrder traversal is\n") ;*/
   inOrder( b.root );
/*
   // traverse the tree postOrder
 /*printf("\n\nThe postOrder traversal is\n") ;
   postOrder( rootPtr );
*/
} // end main

