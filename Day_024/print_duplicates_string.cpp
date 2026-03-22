// JavaScript Code to print duplicate characters 
// and their counts using Hashing

// Function to print duplicate characters with their count
function printDuplicates(s) {

    // Hash map to store frequency of each character
    let freq = {};

    // Count frequency of each character
    for (let c of s) {
        if (freq[c]) {
            freq[c]++;
        } else {
            freq[c] = 1;
        }
    }

    // Traverse the map and print characters with count > 1
    for (let key in freq) {
        if (freq[key] > 1) {
            console.log(["" + key, freq[key]]);
        }
    }
}

// Driver Code
let s = "geeksforgeeks";

printDuplicates(s);