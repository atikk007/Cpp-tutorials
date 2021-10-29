#include <iostream>
#include <vector>

void display (const std::vector<int> &vec) {    // display vector using range based for loop

    std::cout<<"[ ";
    for (auto const &v1 : vec) {

        std::cout<<v1<<std::endl;
    }
    std::cout<<" ]"<<std::endl;

    
}

void test1 () {

    std::cout<<"============================================="<<std::endl;

    std::vector<int> nums1 {1,2,3,4,5};

/* Using iterators - beginning iterator - */

    std::vector<int> :: iterator it = nums1.begin(); // points to 1 
    std::cout<<*it<<std::endl;

/*  or auto it = nums1.begin();     //.begin will indicate to auto that we want to use iterator for this. */


    /* Remember it is not a pointer, its an object but the syntax and use is 
    very much like pointer and that's by default so. */

    it++; // points to 2
    std::cout<<*it<<std::endl;

    it+=2;  // points to 4
    std::cout<<*it<<std::endl;

    it-=2;   // points to 2
    std::cout<<*it<<std::endl;
    
    it = nums1.end() - 1;   // points to 5
    std::cout<<*it<<std::endl;

    /* nums1.end() points to one past the end of vector that is, if there are 5 
    elements in vector then it will point to 6th thats why nums1.end()-1 is used. */

}  

void test2 () {

  std::cout<<"============================================="<<std::endl;

    std::vector<int> nums1 {1,2,3,4,5};

/* Using iterators - beginning iterator - */

    auto it = nums1.begin(); // points to 1 
  
  // iterates through vector element  
    while ( it!=nums1.end() )
    {
        std::cout<<*it<<std::endl;

         it++;
    }
    
 // Changes vector elements

    std::cout<<"\nChanging vec element - Another way of 'iterating' thorugh vector\n"
    <<"this is what happens in range based for loop behind the scenes, used just to explain."<<std::endl;
    
    for(auto v1 = nums1.begin(); v1!=nums1.end(); v1++ ) {  // auto = vector <int> :: iterator v1

            *v1 = 0;    
            std::cout<<*v1<<std::endl;
    }
}
int main() {

    // test1();
    test2();
    // test3();
    // test4();
    // test5();

    return 0;

}