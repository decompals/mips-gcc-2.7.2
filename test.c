
typedef struct Blah {
   int* a;
} Blah;

int* bloop(Blah a) {
   return *a.a * 3;
}
