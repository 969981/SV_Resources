/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02908150; name: FUN_02908150
 */


int FUN_02908150(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 < 8) {
    iVar1 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar1 = -(uVar2 & 1);
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  iVar5 = iVar1;
  if (iVar3 < 5) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar5 = iVar1 + -2;
    if ((uVar4 & 1) == 0) {
      iVar5 = iVar1;
    }
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 < 0x32) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar5 = iVar5 - (uVar2 & 1);
  }
  return iVar5;
}


