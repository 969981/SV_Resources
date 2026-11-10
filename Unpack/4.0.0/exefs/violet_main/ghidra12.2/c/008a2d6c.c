/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a2d6c; name: FUN_008a2d6c
 */


long FUN_008a2d6c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(param_1 + 0x30);
}


