#!/bin/sh
cat /etc/passwd | sed '/^#/d' | tail -n +2  | sort -r | awk -F ':' '{print $1}' | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'  
