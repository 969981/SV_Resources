/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021da2ec; name: FUN_021da2ec
 */


long FUN_021da2ec(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_026f7244();
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1 - (ulong)*(byte *)((long)plVar1 + 0xd);
  }
  return lVar2;
}


