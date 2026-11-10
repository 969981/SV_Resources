/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353c700; name: frexp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double frexp(double __x,int *__exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_frexp_047c9c78)();
  return dVar1;
}


