/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015c610; name: FUN_0015c610
 */


byte * FUN_0015c610(long param_1,byte *param_2)

{
  int iVar1;
  
  *param_2 = (*(int *)(param_1 + 0x10) != 0) << 7 | (*(int *)(param_1 + 0xc) != 0) << 6 | 0xc;
  iVar1 = *(int *)(param_1 + 8) + 7;
  if (*(int *)(param_1 + 4) != 7) {
    iVar1 = *(int *)(param_1 + 4);
  }
  param_2[1] = (byte)iVar1 | (*(int *)(param_1 + 0x14) != 0) << 7;
  return param_2 + 2;
}


