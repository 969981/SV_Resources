/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004770b0; name: FUN_004770b0
 */


undefined8 FUN_004770b0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0x10;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  if ((lVar2 != 0x10) && (lVar2 != 8)) {
    return 0;
  }
  iVar1 = 0x10;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  if (lVar2 != iVar1) {
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ 0xee;
    *(int *)(param_1 + 0x2c) = (int)lVar2;
  }
  return 1;
}


