/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290a97c; name: FUN_0290a97c
 */


int FUN_0290a97c(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x17);
  if ((uVar1 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar2 = -2;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x22);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar3 = iVar2 + -2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x217);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar2 = iVar3 + -2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x230);
  iVar3 = iVar2;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar3 = iVar2 + -2;
    if ((uVar1 & 1) == 0) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x197);
  iVar2 = iVar3;
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
    iVar2 = iVar3 + -2;
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar3;
    }
  }
  FUN_02907170(param_1);
  return iVar2;
}


