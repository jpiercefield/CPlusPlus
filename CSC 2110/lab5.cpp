
//Logan Piercefield and Landon Michael


/*--- lab5.cpp -------------------------------------------------------

  A study of STL's vector container

  Lab #5

  Add your name(s) here and other info requested by your instructor.

 --------------------------------------------------------------------------*/


#include <iostream>
#include <vector>
using namespace std;

template <typename T>
ostream & operator<<(ostream & out, const vector<T> & v)
/*-------------------------------------------------------------------------
  Overloaded output operator for vector<T>s.

  Precondition:  ostream out is open.
  Postcondition: Elements of v have been output to out and out is returned.
 --------------------------------------------------------------------------*/
{
   for (int i = 0; i < v.size(); i++)
      out << v[i] << "  ";
   return out;
}

int main()
{
   // Declare 6 vectors v1, v2, v3, v4, v5, v6 to illustrate the
   // various types of declarations (and constructors)
   vector<int> v1;
   vector<int> v2(4);
   int numInts;
   cout << "Enter capacity of v3: ";
   cin >> numInts;
   vector<int> v3(numInts);
   vector<int> v4(3, 50);
   // The preceding declaration should work, but it may not in some
   // versions of some compilers. The following is a work-around:
   // vector<int> v4(2);
   // for (int i = 0; i < 2; i++)  v4[i] = 50;
   //--- End of work-around

   int a[] = {1, 12, 30, 52, 66};
   vector<int> v5(a, a + 5);
   vector<int> v6;

   //--- 1 --- Add:
   // Statements to display the capacity and size of each vector<int>
   // and whether it is empty
    cout << v1.capacity() << " " << v1.size() << " " << v1.empty() << endl;
    cout << v2.capacity() << " " << v2.size() << " " << v2.empty() << endl;
    cout << v3.capacity() << " " << v3.size() << " " << v3.empty() << endl;
    cout << v4.capacity() << " " << v4.size() << " " << v4.empty() << endl;
    cout << v5.capacity() << " " << v5.size() << " " << v5.empty() << endl;
    cout << v6.capacity() << " " << v6.size() << " " << v6.empty() << endl;
    


   //--- 2 --- Add:
   // Statement to display the maximum capacity of a vector<int>
    
    cout << "Max size for V1 is: " << v1.max_size() << endl;


   //--- 3 --- Add:
   // Statements to see the effect of the reserve() member function

    v4.reserve(6);
    cout << "Capacity of v4: " << v4.capacity() << " size:" << v4.size() << endl;

   //--- 4 --- Add:
   // Output statements of the form   cout << vector-variable << endl;
   // to display the contents of each vector
    cout << "V1 Elements: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }
    cout << endl;
    
    cout << "V2 Elements: ";
    for(int i=0; i<v2.size();i++)
    {
        cout << v2[i] << " ";
        
    }
    cout << endl;
    
    cout << "V3 Elements: ";
    for(int i=0; i<v3.size();i++)
    {
        cout << v3[i] << " ";
        
    }
    cout << endl;
    
    cout << "V4 Elements: ";
    for(int i=0; i<v4.size();i++)
    {
        cout << v4[i] << " ";
        
    }
    cout << endl;
    
    
    cout << "V5 Elements: ";
    for(int i=0; i<v5.size();i++)
    {
        cout << v5[i] << " ";
        
    }
    cout << endl;


   //--- 5 --- Add:
   // Statements to append 111 to v2 and then output v2's size and contents
   //               append 222 to v2 and then output v2's size and contents
   //               append 333 to v2 and then output v2's size and contents
   //               remove the last element of v2 and then output v2's size
   //and contents

    v2.push_back(111);
    cout << "V2 Size: " << v2.size() << endl;
    cout << "V2 Elements: ";
    for(int i=0; i<v2.size();i++)
    {
        cout << v2[i] << " ";
        
    }
    cout << endl;
    v2.push_back(222);
    cout << "V2 Size: " << v2.size() << endl;
    cout << "V2 Elements: ";
    for(int i=0; i<v2.size();i++)
    {
        cout << v2[i] << " ";
        
    }
    cout << endl;
    v2.push_back(333);
    cout << "V2 Size: " << v2.size() << endl;
    cout << "V2 Elements: ";
    for(int i=0; i<v2.size();i++)
    {
        cout << v2[i] << " ";
        
    }
    cout << endl;
    
    v2.pop_back();
    cout << "V2 Size: " << v2.size() << endl;
    cout << "V2 Elements: ";
    for(int i=0; i<v2.size();i++)
    {
        cout << v2[i] << " ";
        
    }
    cout << endl;
    

   //--- 6 --- Statements to investigate how capacities grow
   // Add statements to append 99 to v1 and then output v1's capacity, size,
   // and contents
    
    v1.push_back(99);
    cout << "V1 cap: " << v1.capacity() << "; size:" << v1.size() << endl;
    cout << "Contents of V1: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }


   //--- 7 --- Statements to investigate how capacities grow
   // Add statements to append 101, 202, 303, 404, and 505 to v1 and output
   // v1's capacity, size, and contents after each value is appended
    
    v1.push_back(101);
    cout << "V1 cap: " << v1.capacity() << "; size:" << v1.size() << endl;
    cout << "Contents of V1: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }
    cout << endl;
    
    v1.push_back(202);
    cout << "V1 cap: " << v1.capacity() << "; size:" << v1.size() << endl;
    cout << "Contents of V1: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }
    cout << endl;
    
    v1.push_back(303);
    cout << "V1 cap: " << v1.capacity() << "; size:" << v1.size() << endl;
    cout << "Contents of V1: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }
    cout << endl;
    
    v1.push_back(404);
    cout << "V1 cap: " << v1.capacity() << "; size:" << v1.size() << endl;
    cout << "Contents of V1: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }
    cout << endl;
    
    v1.push_back(505);
    cout << "V1 cap: " << v1.capacity() << "; size:" << v1.size() << endl;
    cout << "Contents of V1: ";
    for(int i=0; i<v1.size();i++)
    {
        cout << v1[i] << " ";
        
    }
    cout << endl;
    
    
    
    //--- 8 --- Statements to investigate how capacities grow
   // Remove the comment delimiters from the following:

   int oldCapacity = v1.capacity();
   cout << "(old) v1.capacity() = " << oldCapacity << endl;
   for (int i = v1.size() + 1; i <= 2500; i++)
   {
      v1.push_back(99);
      if (v1.capacity() == v1.size())
         cout << "\n*** v1 is full with " << v1.size() << " elements\n";
      if (v1.capacity() > oldCapacity)
      {
         cout << "Adding additional one element increases capacity from "
              << oldCapacity << " to " << v1.capacity() << endl;
         oldCapacity = v1.capacity();
      }
   }


   //--- 9 --- Statements to see if element type affects how capacities grow
   // Add:
   //    A declaration of an empty vector<double> v0;
   //    A loop like the preceding but with v1 replaced by v0
   //
    
    vector<double> v0;
    oldCapacity = v0.capacity();
    cout << "(old) v0.capacity() = " << oldCapacity << endl;
    for(int i=v0.size()+1;i<=2500;i++)
    {
        v0.push_back(99);
        if (v0.capacity() == v0.size())
            cout << "\n*** v1 is full with " << v0.size() << " elements\n";
        if (v0.capacity() > oldCapacity)
        {
            cout << "Adding additional one element increases capacity from "
                 << oldCapacity << " to " << v0.capacity() << endl;
            oldCapacity = v0.capacity();
        }
    }


   //--- 10 --- Statements to see how initial capacity affects
   //           how capacities grow
   //
   // Uncomment the following line:
   //cout << "Initial capacity of v4 is " << v4.capacity() << endl;

   // Add a loop like that in 9 but output changes in v4's capacity
    
    oldCapacity = v4.capacity();
    cout << "(old) v4.capacity() = " << oldCapacity << endl;
    for(int i=v4.size()+1;i<=2500;i++)
    {
        v4.push_back(99);
        if (v4.capacity() == v4.size())
            cout << "\n*** v4 is full with " << v4.size() << " elements\n";
        if (v4.capacity() > oldCapacity)
        {
            cout << "Adding additional one element increases capacity from "
            << oldCapacity << " to " << v4.capacity() << endl;
            oldCapacity = v4.capacity();
        }
    }
    cout << endl;

   //--- 11 --- Statements to access the ends of a vector

   // Uncomment the following line:
   cout << "Original contents of v5: " << v5 << endl;

   // Add statements to:

   //    Output the first and last elements of v5

   //    Change the first element to 787 and the last element to 878

   //    Output the contents of v5
    
    cout << "First element of V5: " << v5.front() << " last: " << v5.back();
    cout << endl;

    v5.front() = 787;
    v5.back() = 878;
    
    cout << "New v5 front: " << v5.front() << " new back: " << v5.back();

}
