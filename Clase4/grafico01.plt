set term pngcairo size 500,500
set output "figura.png"
set term postscript color
set output "figura.eps"

set grid
set key off
f(x)=exp(x)*log(x)-x*x
set xlabel "x" font "Arial, 26"
set ylabel "f(x)" font "Arial, 26"
set xrange [0:3]
set yrange [-2:2]
set xtics 0,0.5,3 font "Arial,18"
set ytics -2,0.5,2 font "Arial,18"
set label "f(x)=e^xln(x)-x^2" at 0.5,1 font "arial,20" tc lt 7
plot f(x) lw 2 lc rgb "red",0 lw 2 lc rgb "blue"
pause -1
