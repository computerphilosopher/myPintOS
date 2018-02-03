#define FIXEDPOINT 16384

#define INT_TO_FP(n) (n*FIXEDPOINT)
#define FP_TO_INT(x) (x/FIXEDPOINT)  
#define FP_TO_ROUNDED(x) (x>=0? ((x+FIXEDPOINT/2)/FIXEDPOINT) : (x-FIXEDPOINT/2/FIXEDPOINT))
#define MUL_FP(x,y) (((int64_t)x)*y/FIXEDPOINT)
#define MUL_INT(x,n) (x*n)
#define DIV_FP(x,y) (((int64_t)x)*FIXEDPOINT/y)
#define DIV_INT(x,n) x/n

typedef int fixed_t;


