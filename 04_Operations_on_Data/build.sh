
#!/bin/bash

filename="10_Some_More_Integral_Types.cpp"

outputname="10_Some_More_Integral_Types"

g++ "$filename" -o "$outputname"

if [ "$1" == "run" ]; then
    ./"$outputname"
fi
