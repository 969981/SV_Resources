/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353c700; name: frexp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double frexp(double __x,int *__exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_frexp_047c9c78)();
  return dVar1;
}


