/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078cdcc; name: FUN_0078cdcc
 */


undefined4 FUN_0078cdcc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_03cbf600 + (long)(int)uVar1 * 4);
  }
  return 0;
}


