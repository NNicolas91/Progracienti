f(x)=exp(x) - x*x	
set xlabel "x" font "Arial, 26"
set ylabel "f(x)" font "Arial, 26"
set xrange [-1:0]
set yrange [-2:2]
set xtics -1,0.2,0 font "Arial,18"
set ytics -2,0.5,2 font "Arial,18"
set grid
plot f(x) lw 2 lc rgb "red",0 lw 2 lc rgb "blue"
pause -1
