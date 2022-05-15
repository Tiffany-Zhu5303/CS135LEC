#include <iostream>

int main(){
  

  return 0;
}

/*
OPP -> Abstraction, Encapsulation, Information hiding

#ifndef SOME_CLASS_H_
#define SOME_CLASS_H_
- tells linker "include only if it has not been included already by some module"
- to prevent redefinition

Same function names with different parameters are different

Inheritance: taking functionalities from one class to use in another
-inherited members are public.
-inherited members could be private or public
-base class (superclass) -> derived class (subclasses)

ex:
class Printer{
public:

void whatever;

private:

};

class BatchPrinter : public Printer{
public:

void addDocument(const string& document);
void printAllDocuments();

private:
vector<string> documents;
};

This is ok because BatchPrinter inherited Printer objects
void initializePrinter(Printer& p);
BatchPrinter batch;
initializePrinter(batch);

Overloading(independent of inheritance): define new function with
same name but different parameter list (different signature or prototype)

int someFunction(){}
int someFunction(string some_string){}

Overriding: rewrite function with same signature in derived class

protected: protected members available to class members and derived classes

*/
