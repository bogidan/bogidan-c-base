
#define STRING(a) a
#define WAVE_DEF(endian, offset, name, size) STRING(printf("%s: %.*s -- %s\n", name, size, buffer+offset, size, #endian );)
int main()
{
	WAVE_DEF( big, 0, "ChunkID", 4 );

	printf( WAVE_DEF( big,     0, "ChunkID",       4 ) );
   
   return 0;
}

