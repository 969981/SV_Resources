/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fd2af0; name: FUN_01fd2af0
 */


int FUN_01fd2af0(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return -1;
  }
  iVar1 = *(int *)(&DAT_03d30718 + (long)*(int *)(*(long *)(param_1 + 0x78) + 0x2a0) * 0x1c);
  if (iVar1 - 3U < 3) {
    iVar1 = *(int *)(&DAT_03d306f4 + (long)(int)(iVar1 - 3U) * 4);
  }
  return iVar1;
}


