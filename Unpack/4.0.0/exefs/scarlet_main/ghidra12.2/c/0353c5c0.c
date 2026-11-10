/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353c5c0; name: freopen
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * freopen(char *__filename,char *__modes,FILE *__stream)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_freopen_047c9bd8)();
  return pFVar1;
}


