#! /bin/bash

#Author - Mr.Brinth
#Date   - 27 Aug 2020
#Objective - Bash shell script to list all the .elf file and Print list with
#            size in ascending order 

#Command = ls (list directory command)
#Arguments
# [$1/*.elf]-> $1 catch first argument in command line and append /*.elf
#              to search for all the .elf files in that folder
# -lSrh     -> l - list
#	    -> S - Sort by size
#	    -> r - reverse order
#	    -> h - human readable

ls $1/*.elf -lSrh
