# Temperature Converter

A C++ program that converts temperatures from Fahrenheit to Celsius for different cities.

## Description

This program reads city names and their temperatures in Fahrenheit from an input file (`FahrenheitTemperature.txt`), converts the temperatures to Celsius, and writes the results to an output file (`CelsiusTemperature.txt`).

### Features

- Reads city and temperature data from a text file
- Converts temperatures from Fahrenheit to Celsius using the formula: (°F - 32) * 5/9
- Writes converted temperatures to a new file
- Handles multiple cities and temperatures
- Uses proper error handling for file operations

## Input Format

The input file (`FahrenheitTemperature.txt`) should contain city names and temperatures in the following format:
```
CityName Temperature
```

Example:
```
Toronto 47
Lima 66
Istanbul 57
Lagos 81
Shanghai 61
Sydney 64
```

## Output Format

The program creates an output file (`CelsiusTemperature.txt`) with the following format:
```
CityName ConvertedTemperature
```

Example:
```
Toronto 8
Lima 19
Istanbul 14
Lagos 27
Shanghai 16
Sydney 18
```

## How to Run

1. Make sure you have the input file `FahrenheitTemperature.txt` in the same directory as the executable
2. Run the program `TempConvert.exe`
3. The program will create `CelsiusTemperature.txt` with the converted temperatures

## Error Handling

The program includes error handling for:
- Missing input file
- Unable to create output file
- File permission issues

## Technical Details

- Language: C++
- Compiler: Visual Studio 2022
- Author: Jaeyy Nkese
- Date: October 2025