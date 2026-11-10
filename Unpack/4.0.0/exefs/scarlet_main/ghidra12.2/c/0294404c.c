/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294404c; name: FUN_0294404c
 */


int FUN_0294404c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(param_1 + uVar3 * 8) + 0x200))();
      iVar2 = iVar2 + (uVar1 & 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x30));
  }
  return iVar2;
}


