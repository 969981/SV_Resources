/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029095a8; name: FUN_029095a8
 */


int FUN_029095a8(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if ((uVar3 & 1) == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar4 = -3;
    if ((uVar1 & 1) == 0) {
      iVar4 = -2;
    }
    if (0x1d < iVar2) {
      iVar4 = -(uVar1 & 1);
    }
  }
  FUN_029076e8(param_1);
  return iVar4;
}


