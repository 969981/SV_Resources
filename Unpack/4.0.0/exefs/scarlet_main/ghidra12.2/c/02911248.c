/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02911248; name: FUN_02911248
 */


int FUN_02911248(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 < 4) {
    iVar1 = 0;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar1 = -2;
    if ((uVar4 & 1) == 0) {
      iVar1 = 0;
    }
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (5 < iVar2) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar1 = iVar1 - (uVar3 & 1);
  }
  return iVar1;
}


