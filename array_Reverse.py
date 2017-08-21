#!/bin/python

import sys


n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))

print '\n'
print "Using Array index from -1"
b = arr[::-1]
for i in b:
    print i,
print '\n'

print "Using reversed method"
for i in reversed(arr):
    print str(i) ,
print '\n'

print "Using Array reverse method"
arr.reverse()
for i in arr:
    print i,