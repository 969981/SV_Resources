/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353c7e0; name: clock
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

clock_t clock(void)

{
  clock_t cVar1;
  
  cVar1 = (*(code *)PTR_clock_047c9ce8)();
  return cVar1;
}


