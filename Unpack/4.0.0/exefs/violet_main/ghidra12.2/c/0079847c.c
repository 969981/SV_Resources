/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079847c; name: FUN_0079847c
 */


ushort FUN_0079847c(long param_1)

{
  ushort uVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return 0;
  }
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x20) + 3);
  return uVar1 >> 8 | uVar1 << 8;
}


