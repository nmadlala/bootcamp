#!/bin/bash
#

echo Files 
for item in *
do
ls -1 | wc -l
done

echo Directories
for item in *
do
	$find -type d 2> /dev/null | wc -l
done
