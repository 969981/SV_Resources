/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d9a7c; name: FUN_015d9a7c
 */


long FUN_015d9a7c(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if ((int)param_3 < 5 && param_2 < 10) {
    lVar1 = *(long *)(param_1 + 0xb0) + (ulong)param_2 * 0x78 + (ulong)param_3 * 0x18 + 8;
  }
  return lVar1;
}


