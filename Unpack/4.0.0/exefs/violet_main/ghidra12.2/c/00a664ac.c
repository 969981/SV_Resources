/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a664ac; name: FUN_00a664ac
 */


uint FUN_00a664ac(long param_1,uint param_2)

{
  uint uVar1;
  
  if (2 < param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0xc);
  if ((uVar1 & 0x7fffffff) == 0) {
    return uVar1 >> 0x1f;
  }
  return 1;
}


