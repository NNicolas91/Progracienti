f(x)=(1+9.8)*x+98*log(1-x/10)
set xlabel "x" font "Arial, 26"
set ylabel "f(x)" font "Arial, 26"
set xrange [0:10]
set yrange [0:10]
set xtics -10,1,10 font "Arial,18"
set ytics -10,1,10 font "Arial,18"
set grid
plot f(x) lw 2 lc rgb "red",0 lw 2 lc rgb "blue"
pause -1
