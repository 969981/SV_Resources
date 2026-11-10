/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293daa4; name: FUN_0293daa4
 */


int FUN_0293daa4(long param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 < *(byte *)(param_1 + 0x30)) {
    iVar2 = 0;
    uVar3 = (ulong)param_2;
    do {
      uVar1 = (**(code **)(**(long **)(param_1 + uVar3 * 8) + 0x208))();
      iVar2 = iVar2 + (uVar1 & 1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x30));
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


