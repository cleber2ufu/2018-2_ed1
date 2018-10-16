/*
    This file contains the function prototypes to deal with Set of Integers (SOI).

    by Autran 2018
*/

typedef void* SOI; // Set of Integers

// setCard
// -------
// Return the cardinality (number of elements) of s
int setCard (SOI s);

// setCreate
// ---------
// Create a SOI.
// Return a pointer to a SOI or return NULL, in the case of error
SOI setCreate ();

// setDiff
// -------
// Create a SOI whose content is the difference between a and b.
// Return the resulting SOI or return NULL, in the case of error
SOI setDiff (SOI a, SOI b);

// setErase
// --------
// Erase s.
void setErase (SOI s);

// setIns
// ------
// Insert e into s.
// The return value is 0 (e was inserted into s);
// or 23 (s is full - there is no room for e);
// or 25 (e is already exists in s);
// or 27 (s does not exist).
int setIns (int e, SOI s);

// setInter
// --------
// Create a SOI whose content is the intersection between a and b.
// Return the resulting SOI or return NULL, in the case of error
SOI setInter (SOI a, SOI b);

// setMax
// ------
// Return the maximum capacity of a SoI.
int setMax ();

// setRem
// ------
// Remove e from s.
// The return value is 0 (e was removed from s);
// or 13 (s is empty);
// or 15 (e does not exist in s);
// or 17 (s does not exist).
int setRem (int e, SOI s);

// setShow
// -------
// Show the content of s.
void setShow (SOI s);

// setUnion
// --------
// Create a SOI whose content is the union of a and b.
// Return the resulting SOI or return NULL, in the case of error.
SOI setUnion (SOI a, SOI b);
