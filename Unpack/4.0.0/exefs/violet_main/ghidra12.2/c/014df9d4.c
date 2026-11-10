/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014df9d4; name: FUN_014df9d4
 */


long FUN_014df9d4(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if ((int)param_3 < 0x13 && param_2 < 2) {
    lVar1 = *(long *)(param_1 + 0x90) + (ulong)param_2 * 0x2f8 + (ulong)param_3 * 0x28 + 8;
  }
  return lVar1;
}


