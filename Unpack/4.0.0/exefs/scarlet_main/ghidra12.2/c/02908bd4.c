/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02908bd4; name: FUN_02908bd4
 */


int FUN_02908bd4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (0x50 < iVar1) {
    iVar4 = -5;
    goto LAB_02908c04;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((0x3c < iVar1) &&
     ((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0)), (uVar3 & 1) != 0 ||
      (*(short *)(param_1 + 0x9e) == 0x9e)))) {
    iVar4 = -4;
    goto LAB_02908c04;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (iVar1 < 0x32) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar4 = 2;
    if ((uVar3 & 1) == 0) {
      iVar4 = 0;
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((iVar1 < 8) &&
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8))
    {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      iVar1 = iVar4;
      if (iVar2 < 8) goto LAB_02908d18;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar1 = iVar4 + 2;
    if ((uVar3 & 1) == 0) {
      iVar1 = iVar4;
    }
  }
  else {
    iVar1 = 0;
  }
LAB_02908d18:
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x121);
  iVar4 = iVar1;
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar4 = iVar1 + -2;
    if ((uVar3 & 1) == 0) {
      iVar4 = iVar1;
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x240b99f40359d329);
  if (((((uVar3 & 1) == 0) &&
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           0x6cc64681f251afb0), (uVar3 & 1) == 0)) &&
      (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xd6),
      (uVar3 & 1) == 0)) &&
     ((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0xad),
      (uVar3 & 1) == 0 &&
      (((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8
        || (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)),
           iVar1 < 8)) ||
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 8)))
      ))) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar1 = iVar4 + -2;
    if ((uVar3 & 1) == 0) {
      iVar1 = iVar4;
    }
    return iVar1;
  }
LAB_02908c04:
  return iVar4;
}


