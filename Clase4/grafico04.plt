#set term pngcairo size 500,500
#set output "figura.png"
#set term postscript color
#set output "figura.eps"

set grid
set key off
f(x,y)=(x-1)*(x-1)*exp(-y*y) + y*(y+2)*exp(-2*x*x)
#Quita la superficie de la grafica
#unset surface
#perspectiva 2D
#set view map
#g(x,y)=x*x+y*y-4
set isosamples 10,10
set contour base
set cntrparam level incremental 0, 1, 0
set xlabel "x" font "Arial, 26"
set ylabel "y" font "Arial, 26"
set xrange [-3:3]
set yrange [-3:3]
set xtics -3,0.5,3
set ytics -3,0.5,3
splot f(x,y)
pause -1
