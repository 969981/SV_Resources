/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353c880; name: sin
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_sin_047c9d38)();
  return dVar1;
}


