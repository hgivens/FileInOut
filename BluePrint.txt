~~~~~~~~~~~~~~~~~Menu function ~~~~~~~~~~~~~~
  (which allows you to choose between entering in grades, viewing grades, showing final grades

  while loop 0 to exit 
  if
  1 enter(
    funtction enter grades
  )
  if
  2 view(
    fucntion view 
  )
  if
  3 show average of all greades(
    function finalView
  )

~~~~~~~~~~~~~~~~~Enter grades function~~~~~~~~~~~~~~~
  This function should prompt user for students name (last name only) and 5 grades

  User should be able to enter any number of students

  Write these values to a text file called “grades.txt” (use the :ios::app) flag to append to the file

    Smith 95 80 92 100 89

    Jones 80 75 15 90 82

declare keepGoing
ofsteam gradeOut 

gradeOut.open grades.txt 

While loop keepGoing != n or N  then 
  if y or Y then 
  enter last name and last 5 grades
    input name and grades
  append ented to grades.txt 
  would you like to do another?
  keepGoing = Y or N 
  ELSE 
  Thank you

close grades.txt 
/****************** referance chap6InClass for help.*****************/

~~~~~~~~~~~~~~~View grades function~~~~~~~~~~~~~~
  Allows user to see student names and grades entered

  include fstream 

  ifstream grades
  grades.open grades.txt
  declare 2 var names, grade(x5)
  output var 
  close stream

~~~~~~~~~~~~~View final grades function~~~~~~~~~~~~
  Reads each item from the grades.txt file
  Displays each student and the average of their grades (sum of grades / 5)

ifstream gradesAvg
  grades.open grades.txt
  declare 2 var names, gradeFinal
  output var 
  close stream