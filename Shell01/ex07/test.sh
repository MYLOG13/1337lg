#!/bin/sh
cat /etc/passwd | grep -v "#" | awk 'NR%2==0' | awk -F ':' '{print $1}' | sed -n "${FT_LINE1},${FT_LINE2}p" | rev | sort -r  | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
