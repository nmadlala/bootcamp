#!/bin/bash
#

echo Files 
for item in *
do
	$find -type f 2> /dev/null | wc -l
done

echo Directories
for item in *
do
	$find -type d 2> /dev/null | wc -l
done
