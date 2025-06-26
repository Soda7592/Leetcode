#!/bin/bash

folder_name=$(echo "$@" | tr '.' '_')
folder_name=$(echo "$folder_name" | tr ' ' '_') 
folder_name=$(echo "$folder_name" | sed -E 's/__+/_/g')

mkdir -p "$folder_name"
touch ./$folder_name/sol.cpp
touch ./$folder_name/README.md
echo "#Description" >> ./$folder_name/README.md
echo "#Approach" >> ./$folder_name/README.md
