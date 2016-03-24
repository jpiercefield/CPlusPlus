/* BST.h contains the declaration of class template BST.
   Basic operations:
     Constructor: Constructs an empty BST
     empty:       Checks if a BST is empty
     search:      Search a BST for an item
     insert:      Inserts a value into a BST
     remove:      Removes a value from a BST
     inorder:     Inorder traversal of a BST -- output the data values
     graph:       Output a grapical representation of a BST
   Private utility helper operations:
     search2:     Used by delete
     inorderAux:  Used by inorder
     graphAux:    Used by graph
  Other operations described in the exercises:
     destructor
     copy constructor
     assignment operator
     preorder, postorder, and level-by-level traversals
     level finder
--------------------------------------------------------------------------*/

#include <iostream>

#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

template <typename DataType>
class BST
{
 private:
  /***** Node structure *****/
  class BinNode 
  {
   public:
    DataType data;
    BinNode * left;
    BinNode *  right;

    // BinNode constructors
    // Default -- data part undefined; both links null
    BinNode()
    : left(0), right(0)
    {}

    // Explicit Value -- data part contains item; both links null
    BinNode(DataType item)
    : data(item), left(0), right(0)
    {}
  };

  typedef BinNode * BinNodePointer; 

 public:
  /***** Function Members *****/
  BST();
  /*------------------------------------------------------------------------
    Construct a BST object.

    Precondition:  None.
    Postcondition: An empty BST has been constructed.
   -----------------------------------------------------------------------*/

  bool empty() const;
  /*------------------------------------------------------------------------
    Check if BST is empty.

    Precondition: None.
    Postcondition: Returns true if BST is empty and false otherwise.
   -----------------------------------------------------------------------*/

  bool search(const DataType & item) const; 
  /*------------------------------------------------------------------------
    Search the BST for item.

    Precondition:  None.
    Postcondition: Returns true if item found, and false otherwise.
   -----------------------------------------------------------------------*/

   void insert(const DataType & item);
  /*------------------------------------------------------------------------
    Insert item into BST.

    Precondition:  None.
    Postcondition: BST has been modified with item inserted at proper 
        position to maintain BST property. 
  ------------------------------------------------------------------------*/

  void remove(const DataType & item);
  /*------------------------------------------------------------------------
    Remove item from BST.

    Precondition:  None.
    Postcondition: BST has been modified with item removed (if present);
        BST property is maintained.
    Note: remove uses auxiliary function search2() to locate the node
          containing item and its parent.
 ------------------------------------------------------------------------*/

  void inorder(ostream & out);
  void preorder(ostream & out);
  void postorder(ostream & out);
  /*------------------------------------------------------------------------
    Inorder traversal of BST.

    Precondition:  ostream out is open.
    Postcondition: BST has been inorder traversed and values in nodes 
        have been output to out.
    Note: inorder uses private auxiliary function inorderAux().
 ------------------------------------------------------------------------*/

  void graph(ostream & out);
  /*------------------------------------------------------------------------
    Graphic output of BST.

    Precondition:  ostream out is open.
    Postcondition: Graphical representation of BST has been output to out.
    Note: inorder uses private auxiliary function graphAux().
 ------------------------------------------------------------------------*/

 private:
  /***** Private Function Members *****/
  void search2(const DataType & item, bool & found,
               BinNodePointer & locptr, BinNodePointer & parent);
 /*------------------------------------------------------------------------
   Locate a node containing item and its parent.
 
   Precondition: None.
   Postcondition: locptr points to node containing item or is null if 
       not found, and parent points to its parent
 ------------------------------------------------------------------------*/

  void inorderAux(ostream & out, BinNodePointer subtreePtr);
  void preorderAux(ostream & out, BinNodePointer subtreePtr);
  void postorderAux(ostream & out, BinNodePointer subtreePtr);
  /*------------------------------------------------------------------------
    Inorder traversal auxiliary function.

    Precondition:  ostream out is open; subtreePtr points to a subtree 
        of this BST.
    Postcondition: Subtree of this BST with subtreePtr as root has been
        output to out.
 ------------------------------------------------------------------------*/

  void graphAux(ostream & out, int indent, BinNodePointer subtreeRoot);
  /*------------------------------------------------------------------------
    Graph auxiliary function.

    Precondition:  ostream out is open; subtreePtr points to a subtree 
        of this BST.
    Postcondition: Graphical representation of subtree of this BST with 
        subtreePtr as root has been output to out, indented indent spaces.
 ------------------------------------------------------------------------*/

 /***** Data Members *****/
  BinNodePointer myRoot; 

}; // end of class template declaration


//--- Definition of constructor
template <typename DataType>
inline BST<DataType>::BST()
: myRoot(0)
{}

//--- Definition of empty()
template <typename DataType>
inline bool BST<DataType>::empty() const
{ return myRoot == 0; }

//--- Definition of search()
template <typename DataType>
bool BST<DataType>::search(const DataType & item) const
{
  BinNodePointer locptr = myRoot;
  bool found = false;

  // FILL IN THIS CODE

  return found;
}

//--- Definition of insert()
template <class DataType>
inline void BST<DataType>::insert(const DataType & item)
{
   BinNodePointer 
        locptr = myRoot,   // search pointer
        parent = 0;        // pointer to parent of current node
   bool found = false;     // indicates if item already in BST

   // FILL IN THIS CODE
}

//--- Definition of remove()
template <class DataType>
void BST<DataType>::remove(const DataType & item)
{
   bool found;                      // signals if item is found
   BinNodePointer 
      x,                            // points to node containing
      parent;                       //    "    " parent of x and xSucc
   search2(item, found, x, parent);

   if (!found)
   {
      cout << "Item not in the BST\n";
      return;
   }
   //else
   if (x->left != 0 && x->right != 0)
   {                                // node has 2 children
      // Find x's inorder successor and its parent
      BinNodePointer xSucc = x->right;
      parent = x;
      while (xSucc->left != 0)       // descend left
      {
         parent = xSucc;
         xSucc = xSucc->left;
      }

     // Move contents of xSucc to x and change x 
     // to point to successor, which will be removed.
     x->data = xSucc->data;
     x = xSucc;
   } // end if node has 2 children

   // Now proceed with case where node has 0 or 2 child
   BinNodePointer 
      subtree = x->left;             // pointer to a subtree of x
   if (subtree == 0)
      subtree = x->right;
   if (parent == 0)                  // root being removed
      myRoot = subtree;
   else if (parent->left == x)       // left child of parent
      parent->left = subtree; 
   else                              // right child of parent
      parent->right = subtree;
   delete x;
}

//--- Definition of inorder()
template <class DataType>
inline void BST<DataType>::inorder(ostream & out)
{ 
   inorderAux(out, myRoot); 
}

template <class DataType>
inline void BST<DataType>::preorder(ostream & out)
{ 
   preorderAux(out, myRoot); 
}

template <class DataType>
inline void BST<DataType>::postorder(ostream & out)
{ 
   postorderAux(out, myRoot); 
}


//--- Definition of graph()
template <class DataType>
inline void BST<DataType>::graph(ostream & out)
{ graphAux(out, 0, myRoot); }

//--- Definition of search2()
template <class DataType>
void BST<DataType>::search2(const DataType & item, bool & found,
                            BST<DataType>::BinNodePointer & locptr, 
			    BST<DataType>::BinNodePointer & parent)
{
   locptr = myRoot;
   parent = 0;
   found = false;
   while (!found && locptr != 0)
   {
      if (item < locptr->data)       // descend left
      {
         parent = locptr;
         locptr = locptr->left;
      }
      else if (locptr->data < item)  // descend right
      {
         parent = locptr;
         locptr = locptr->right;
      }
      else                           // item found
         found = true;
   }
}

//--- Definition of Aux()
template <class DataType>
void BST<DataType>::inorderAux(ostream & out, 
                               BST<DataType>::BinNodePointer subtreeRoot)
{
   if (subtreeRoot != 0)
   {
      inorderAux(out, subtreeRoot->left);    // L operation
      out << subtreeRoot->data << "  ";      // V operation
      inorderAux(out, subtreeRoot->right);   // R operation
   }
}

template <class DataType>
void BST<DataType>::preorderAux(ostream & out, 
                               BST<DataType>::BinNodePointer subtreeRoot)
{
   if (subtreeRoot != 0)
   {
      out << subtreeRoot->data << "  ";  
      preorderAux(out, subtreeRoot->left);    // L operation    
      preorderAux(out, subtreeRoot->right);   
   }
}

template <class DataType>
void BST<DataType>::postorderAux(ostream & out, 
                               BST<DataType>::BinNodePointer subtreeRoot)
{
   if (subtreeRoot != 0)
   {
      postorderAux(out, subtreeRoot->left);
      postorderAux(out, subtreeRoot->right);  // L operation
      out << subtreeRoot->data << "  ";      // V operation   
   }
}

//--- Definition of graphAux()
#include <iomanip>

template <class DataType>
void BST<DataType>::graphAux(ostream & out, int indent, 
                             BST<DataType>::BinNodePointer subtreeRoot)
{
  if (subtreeRoot != 0)
    {
      graphAux(out, indent + 8, subtreeRoot->right);
      out << setw(indent) << " " << subtreeRoot->data << endl;
      graphAux(out, indent + 8, subtreeRoot->left);
    }
}


#endif 
