#include<stdio.h>
#include"huffman.c"
#include"encode.c"
#include"decode.c"

int main(){
    return 0;
    // What are we supposed to do here?
    // First we need a method to convert text to a dictionary of characters and 
    // their frequencies
    // This brings us to an interesting first problem. C does not have native 
    // dictionary or hash tables

    // TODO - Implement a dictionary with either hash table or red-black trees

    // Then we need to parse the string and store the frequency of characters in
    // the dictionary
    // Then we build the Huffman tree

    // Finally to encode, we parse the string and traverse the Huffman tree 
    // using DFS and use the path to encode the string

    // We also need a decode function that takes the bit string and the Huffman 
    // tree and returns the original text.
}