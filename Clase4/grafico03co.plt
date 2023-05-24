#set term pngcairo size 500,500
#set output "figura.png"
#set term postscript color
#set output "figura.eps"

set grid
set key off
set xlabel "x" offset 0,-1.5 font "Arial, 15"
set ylabel "y" offset -1.5,0 font "Arial, 15"
set xrange [0:36]
set yrange [4.4:5.6]
set xtics 0,2,40 font "Arial,15"
set ytics 4,0.1,6 font "Arial,15"
#set label 1 "-1.979,-0.287" at -2.4,2 font "Arial, 15"
#set arrow from 25,0 to 25,1 nohead lc rgb "blue"
plot "datos1.dat" pt 13 ps 2 lc rgb "blue", "datos1.dat" with lines lw 2 ,"datos2.dat" pt 13 ps 2 lc rgb "red", "datos2.dat" with lines lw 2
pause -1
