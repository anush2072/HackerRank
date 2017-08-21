#!/bin/ruby

n = gets.strip.to_i
arr = gets.strip
arr = arr.split(' ').map(&:to_i)

b = arr.reverse
arr.each{|x| print x, " "}
puts "\n"
b.each{|x| print x, " "}

puts "\nUsing negative index from -1..1"
c = arr[-1..1]
b.each{|x| print x, " "}

puts "\nUsing ! will reverse in-line"
arr.reverse!
arr.each{|x| print x, " "}