#reset
#set term png enhanced lw 2 font "Times,18"
#set output "implicit.png"
set contour
set key off
set cntrparam levels discrete 0
set view map
unset surface
set isosamples 1000,1000
set xrange [-3:3]
set yrange [-3:3]
set xlabel "x"
set ylabel "y"
#set label 1 "x^2+y^2-4" at 2,2,0 right
#set label 2 "e^x - 3y -1" at 2,1,0 right
f(x,y) = x**2+y**2-4
g(x,y) = exp(x) - 3*y -1
splot f(x,y), g(x,y)
pause -1
