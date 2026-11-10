/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353c5d0; name: ferror
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_047c9be0)((int)__stream);
  return iVar1;
}


