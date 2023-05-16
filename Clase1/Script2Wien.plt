f(x)=(x-5)*exp(x) + 5 
set key off
set xlabel "x" font "Arial, 16"
set ylabel "f(x)" font "Arial, 16"
set xrange [3:6]
set yrange [-50:50]
set xtics 3,0.5,6 font "Arial,18"
set ytics -50,10,50 font "Arial,18"
set grid
plot f(x) lw 2 lc rgb "red",0 lw 2 lc rgb "blue"
pause -1
