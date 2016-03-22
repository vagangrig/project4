/*
 * CSc103 Project 4: Triangles
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 * https://confluence.atlassian.com/.../basic-git-commands-77663...
 * http://www.cplusplus.com/reference/vector/vector/
 * http://www.cplusplus.com/reference/cmath/
 *
 * Finally, please indicate approximately how many hours you spent on this:
 * #hours:
 * 	Vagan: 1
		Areesha: 1
		Jedidah: 1
 */

#include "triangles.h" // import the prototypes for our triangle class.
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

// note the "triangle::" part.  We need to specify the function's
// FULL name to avoid confusion.  Else, the compiler will think we
// are just defining a new function called "perimeter"
unsigned long triangle::perimeter() {
	return s1+s2+s3;
}

unsigned long triangle::area() {
	// TODO: write this function.
	// Note: why is it okay to return an integer here?  Recall that
	// all of our triangles have integer sides, and are right triangles...
	unsigned long sides[3] = {s1, s2, s3};
	sort(sides, sides + 3);
	return (sides[0] * sides[1]) / 2;
}

void triangle::print() {
	cout << "[" << s1 << "," << s2 << "," << s3 << "]";
}

bool congruent(triangle t1, triangle t2) {
	// TODO: write this function.
	unsigned long sides1[3] = {t1.s1, t1.s2, t1.s3};
	sort(sides1, sides1 + 3);
	unsigned long sides2[3] = {t2.s1, t2.s2, t2.s3};
	sort(sides2, sides2 + 3);
	if(sides1[0] == sides2[0] && sides1[1] == sides2[1] && sides1[2] == sides2[2])
		return true;
	return false;
}

bool similar(triangle t1, triangle t2) {
	// TODO: write this function.
	unsigned long sides1[3] = {t1.s1, t1.s2, t1.s3};
	sort(sides1, sides1 + 3);
	unsigned long sides2[3] = {t2.s1, t2.s2, t2.s3};
	sort(sides2, sides2 + 3);
	double c1 = (double)sides1[0] / (double)sides2[0];
	double c2 = (double)sides1[1] / (double)sides2[1];
	double c3 = (double)sides1[2] / (double)sides2[2];
	if(c1 == c2 && c2 == c3)
		return true;
	return false;
}

vector<triangle> findRightTriangles(unsigned long l, unsigned long h) {
	// TODO: find all the right triangles with integer sides,
	// subject to the perimeter bigger than l and less than h
	vector<triangle> retval; // storage for return value.
	return retval;
}

