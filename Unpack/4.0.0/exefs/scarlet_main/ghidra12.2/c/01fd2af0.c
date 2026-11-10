/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


