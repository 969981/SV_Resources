/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02906d20; name: FUN_02906d20
 */


int FUN_02906d20(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar1 < 9) {
    iVar1 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar1 = -(uVar2 & 1);
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (7 < iVar3) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar1 = iVar1 - (uVar2 & 1);
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar3 = iVar1;
  if (((iVar4 == 6) &&
      (iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x46 < iVar4)
      ) && (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x7f),
           (uVar5 & 1) != 0)) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar3 = iVar1 + 2;
    if ((uVar5 & 1) == 0) {
      iVar3 = iVar1;
    }
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar6 = *(long **)(param_1 + 0x30);
  if (iVar1 < 0x28) {
    uVar5 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x5a);
    iVar1 = iVar3 + -2;
    if ((uVar5 & 1) == 0) {
      iVar1 = iVar3;
    }
  }
  else {
    iVar4 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
    iVar1 = iVar3;
    if (iVar4 < 0x46) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
      iVar1 = iVar3 + -2;
      if ((uVar5 & 1) == 0) {
        iVar1 = iVar3;
      }
    }
  }
  return iVar1;
}


