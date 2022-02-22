/*
 * Program to demo some useful C++ features: pairs, tuples, sorting, and maps
 *
 * Author: Tom Horton, horton@virginia.edu
 * License: © 2022. This work is licensed under a CC BY-SA 4.0 license:  https://creativecommons.org/licenses/by-sa/4.0/
 *
 * Requires at least C++11, so set that in your IDE or CMake config file, or if using
 * the command line, use this option: -std=c++11
 * Note: works with more recent C++ standards too, up to C++20.  (2011 was a long time ago!)
 */

#include <iostream>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

// Helper function prototypes. Full definitions at end of this file
void print_points(vector<pair<int, int> > point_vector);
void print_tuples(vector<tuple<int, int, string>> tuple_vector);
bool sort_pair_by_second(const pair<int, int> &a, const pair<int, int> &b);
bool sort_tuple_by_second(const tuple<int, int, string> &a, const tuple<int, int, string> &b);

void demo_pairs_and_sorting(const int x_vals[], const int y_vals[], int n);
void demo_tuples_and_sorting(const int x_vals[], const int y_vals[], const string names[], int n);
void demo_maps(const string names[], int n);

int main() {
    int x_vals[] = {3, 1, 7, 9, 5};
    int y_vals[] = {6, 4, 10, 8, 2};
    string names[] = {"Bob", "Cathy", "Art", "David", "Ed"};
    int n = sizeof(x_vals) / sizeof(x_vals[0]);

    // demo C++'s pair class, and how to sort lists of pairs
    demo_pairs_and_sorting(x_vals, y_vals, n);

    // demo C++'s tuple class, and how to sort lists of tuples
    demo_tuples_and_sorting(x_vals, y_vals, names, n);

    // demo C++'s map class, and how add and lookup items
    demo_maps(names, n);
}

/****************************
 * A function to demo C++'s pair class and how to sort vector of pairs using comparator.
 *   See the helper functions at end to see how to access each item in pair.
 *   Confused, want to learn more?  Search the web; maybe start with these:
 *   https://www.geeksforgeeks.org/pair-in-cpp-stl/
 *   https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/
 * C++ sort() function takes the range of vector to sort as first two parameters, and optionally
 *   a comparator function as a 3rd argument, which works like Java's comparators to show
 *   how to compare two vector-items inside the sort.
 */
void demo_pairs_and_sorting(const int x_vals[], const int y_vals[], int n) {
    cout << "\n*** Demoing pairs and how to sort a vector of pairs:" << endl;

    // The pair class is a template defined with the types of its two parts.
    // Of course you can use a pair like any object, e.g. as the element-type for a vector
    vector< pair<int, int> > points;
    for (int i = 0; i < n; ++i)  // let's make a vector of point objects
        // make_pair() is one way to create a pair object
        points.push_back(make_pair(x_vals[i], y_vals[i]));
    cout << "Initial list: ";
    print_points(points); // use helper function to print vector

    sort(points.begin(), points.end()); // by default sort() uses first item in pair
    cout << "Sorted by first value: ";
    print_points(points); // use helper function to print vector

    // to sort differently, pass comparator function we've written as 3rd argument
    sort(points.begin(), points.end(), sort_pair_by_second);
    cout << "Sorted by second value: ";
    print_points(points); // use helper function to print vector
}

/****************************
 * A function to demo C++'s tuple class and how to sort vector of tuples using comparator.
 *   See the helper functions at end to see how to access each item in the tuple.
 *   Confused, want to learn more?  Search the web; maybe start with this:
 *      https://www.geeksforgeeks.org/tuples-in-c/
 * The comparator function works like previous example.  If you want to know more about
 * lambda functions in C++, here's a page:
 *      https://www.geeksforgeeks.org/lambda-expression-in-c/
 */
 void demo_tuples_and_sorting(const int x_vals[], const int y_vals[], const string names[], int n) {
    cout << "\n*** Demoing tuples and how to sort a vector of tuples:" << endl;

    // The tuple class is a template defined with the types of its parts, and you can have
    // as many parts as you need. Of course you can use a pair like any object, e.g. as the
    // element-type for a vector.
    vector< tuple<int, int, string> > tuple_list;
    for (int i = 0; i < n; ++i) // let's make a vector of tuple objects
        // make_tuple() is one way to create a tuple object
        tuple_list.push_back( make_tuple(x_vals[i], y_vals[i], names[i]) );
    cout << "List of Tuples: ";
    print_tuples(tuple_list);  // use helper function to print vector

    // to sort by 2nd value, pass comparator function we've written as 3rd argument
    sort(tuple_list.begin(), tuple_list.end(), sort_tuple_by_second);
    cout << "Sorted by second value:";
    print_tuples(tuple_list); // use helper function to print vector

    // C++ has lambda-functions like Python and other languages. (Like Java anonymous class objects)
    sort(tuple_list.begin(), tuple_list.end(),
            // next is the lambda function for a comparator, defined right here as the 3rd parameter
         [](const tuple<int, int, string> &a, const tuple<int, int, string> &b) {
             return (get<2>(a) < get<2>(b));
         }
    );
    cout << "Sorted by third value:";
    print_tuples(tuple_list); // use helper function to print vector
}

/****************************
 * A function to demo C++'s map class and how to add key/value pairs and lookup values.
 *   The map class implements a balanced BST tree, and the very similar unordered_map class
 *     implements a hash table.  You know these data structures, so read on the web to learn more
 *     about these classes.
 *   Confused, want to learn more?  Search the web; maybe start with these:
 *      https://thispointer.com/stdmap-tutorial-part-1-usage-detail-with-examples/
 *      https://www.techiedelight.com/check-given-key-exists-map-cpp/
 *      https://www.geeksforgeeks.org/map-vs-unordered_map-c/
 */
void demo_maps(const string names[], int n) {
    cout << "\n*** Demoing maps and how to add and lookup items:" << endl;

    // Our first map object maps a string (the key) to its length (the value)
    map<string, int> name_length_map;
    for (int i = 0; i < n; ++i)  // use each string names[i] as the key
        name_length_map[names[i]] = names[i].length(); // operator [] is used to access value in map

    cout << "Contents of the map name_length_map:" << endl;  // let's print out what's in our map next
    // C++11 and later supports the following way of iterating over any collection, and each item
    //    in this map is a C++ key-value pair, here a pair<const string, int>
    for (auto p: name_length_map)
        cout << "  key=" << p.first << ", value=" << p.second << endl;

    // Our second map object maps stores how many strings in the vector have the same length
    map<int, int> length_count_map;
    for (int i = 0; i < n; ++i) {  // look at each name in the array
        int n_len = names[i].length(); // get the length of that string to use as map's key
        if (0 == length_count_map.count(n_len)) // map.count() returns 1 if key in map, and 0 if not
            length_count_map[n_len] = 1; // initialize key's value (the counter) to 1
        else
            length_count_map[n_len] += 1; // increment key's value (the counter) by 1
    }

    // Let's look at a range of int values and see if they're in our map
    cout << "\nCheck for key/value pairs in length_count_map:" << endl;
    for (int i = 0; i < 8; ++i)
        if (1 == length_count_map.count(i))  // is this in a key in the map?
            cout << "  Found: key=" << i << ", value=" << length_count_map[i] << endl;
        else
            cout << "  Not found: key=" << i << endl;
}

//*** Helper functions ****************************************

//***  for pair code below, note use of first and second to access items in pair
void print_points(vector< pair<int, int> > point_vector) {
    cout << "[";
    for (auto p: point_vector) // C++11 and later supports the following way of iterating over any collection
        cout << "(" << p.first << "," << p.second << "), ";
    cout << "]" << endl;
}

bool sort_pair_by_second(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second < b.second);
}

//***  for tuple code below, note use of get<i>(a_tuple) to access item i in tuple object
void print_tuples(vector< tuple<int, int, string> > tuple_vector) {
    cout << "[";
    for (auto t: tuple_vector) // C++11 and later supports the following way of iterating over any collection
        cout << "(" << get<0>(t) << "," << get<1>(t) << "," << get<2>(t) << "), ";
    cout << "]" << endl;
}

bool sort_tuple_by_second(const tuple<int, int, string> &a, const tuple<int, int, string> &b) {
    return (get<1>(a) < get<1>(b));
}

