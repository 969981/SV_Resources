/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015684d0; name: FUN_015684d0
 */


byte FUN_015684d0(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x4a8);
  if (*(int *)(lVar1 + 0x1c) == 0) {
    uVar2 = *param_2 + *(int *)(lVar1 + 0xc) * param_2[1];
  }
  else {
    uVar2 = param_2[1] + *(int *)(lVar1 + 0x10) * *param_2;
  }
  if (((int)uVar2 < *(int *)(lVar1 + 0x10) * *(int *)(lVar1 + 0xc)) &&
     (lVar1 = *(long *)(*(long *)(lVar1 + 0x40) + 0x20),
     **(char **)(lVar1 + (ulong)uVar2 * 0x28 + 8) != '\0')) {
    return *(byte *)(lVar1 + (ulong)uVar2 * 0x28 + 0x20) & 1;
  }
  return 0;
}


