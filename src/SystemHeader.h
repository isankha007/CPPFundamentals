#ifndef SYSTEMHEADER
#define SYSTEMHEADER
#endif

//int printMax(int n){
//	int r=0;
//	while(n>1){
//		r+=n;
//		n=n-1;
//	}
//	return r;
//}

#define  printMax(n,k){ \
	while(n>1){ \
		k+=n; \
		n=n-1; \
	  } \
	}\

