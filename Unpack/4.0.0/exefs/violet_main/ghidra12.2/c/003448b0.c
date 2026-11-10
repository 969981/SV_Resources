/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003448b0; name: FUN_003448b0
 */


void FUN_003448b0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0038c7b0(0x78);
  plVar1[6] = (long)plVar1;
  plVar1[7] = 0;
  *plVar1 = (long)(plVar1 + 5);
  plVar1[5] = (long)plVar1;
  plVar1[1] = (long)(plVar1 + 5);
  plVar1[2] = 0;
  return;
}


