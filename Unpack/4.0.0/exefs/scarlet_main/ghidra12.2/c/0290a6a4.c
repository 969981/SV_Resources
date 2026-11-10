/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290a6a4; name: FUN_0290a6a4
 */


uint FUN_0290a6a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar5 = *(long **)(param_1 + 0x30);
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*plVar5 + 0x1c0))(plVar5,*(undefined4 *)(param_1 + 0x98));
    if (((uVar4 & 1) == 0) ||
       (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar3 < 0x47
       )) {
      uVar1 = 0;
      goto LAB_0290a6e4;
    }
    plVar5 = *(long **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x32);
LAB_0290a6e4:
  uVar1 = uVar1 & 1;
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),1);
  if ((uVar4 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar1 = (uVar2 & 1) + uVar1;
  }
  iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  if (iVar3 == 1) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    if (((uVar4 & 1) != 0) &&
       (iVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4)), 0x46 < iVar3
       )) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      uVar1 = uVar1 + (uVar2 & 1);
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),1);
    if ((uVar4 & 1) != 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
      uVar1 = uVar1 + (uVar2 & 1);
    }
  }
  return uVar1;
}


