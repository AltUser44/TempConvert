/*
 * CS 210 - Module Five Assignment
 * Author: Jaeyy Nkese
 * Date: 10/02/2025
 
 * Purpose of Program:
 *  - Read city and average annual temperature (°F) from FahrenheitTemperature.txt
 *  - Convert each temperature to Celsius using:  (F - 32) * 5 / 9
 *  - Write "City CelsiusTemp" to CelsiusTemperature.txt, one city per line
 */

#include <iostream>
#include <fstream>      // ifstream, ofstream
#include <string>       // std::string
#include <cmath>        // std::lround
#include <iomanip>      // (kept if you prefer formatting tweaks later)

int main() {
    // --- File names ---
    const std::string kInputFile = "FahrenheitTemperature.txt";
    const std::string kOutputFile = "CelsiusTemperature.txt";

    // --- Open input file for reading ---
    std::ifstream fin(kInputFile);
    if (!fin) {
        std::cerr << "Error: Could not open input file '" << kInputFile << "'.\n";
        return 1;
    }

    // --- Open output file for writing ---
    std::ofstream fout(kOutputFile);
    if (!fout) {
        std::cerr << "Error: Could not open output file '" << kOutputFile << "'.\n";
        fin.close();
        return 1;
    }

    // --- Read each record, convert, and write ---
    std::string city;
    int tempF = 0;

    // Read until EOF: each line is "<City> <Fahrenheit>"
    while (fin >> city >> tempF) {
        // Convert to Celsius; round to nearest integer for clean output
        // Formula: (F - 32) * 5 / 9
        int tempC = static_cast<int>(std::lround((tempF - 32) * 5.0 / 9.0));

        // Write "City Celsius" on its own line (with a space between them)
        fout << city << ' ' << tempC << '\n';
    }

    // --- Clean up ---
    fin.close();
    fout.close();

    // Optional: confirmation to console (not required by rubric)
    // std::cout << "Conversion complete. Wrote output to '" << kOutputFile << "'.\n";

    return 0;
}
