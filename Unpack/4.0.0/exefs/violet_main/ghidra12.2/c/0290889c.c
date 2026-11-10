/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290889c; name: FUN_0290889c
 */


int FUN_0290889c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  if ((((((uVar3 & 1) != 0) ||
        (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),6),
        (uVar3 & 1) != 0)) ||
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),7),
       (uVar3 & 1) != 0)) ||
      ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar1 < 6 ||
       (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 6 < iVar1)))
      ) && ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                               (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
            iVar1 < 0x46 &&
            (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                               (*(long **)(param_1 + 0x30),0x55), (uVar3 & 1) != 0)))) {
    iVar1 = 2;
    goto LAB_02908994;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (0x50 < iVar1) {
    iVar1 = -5;
    goto LAB_02908994;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((0x3c < iVar1) &&
     ((uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xb0)), (uVar3 & 1) != 0 ||
      (*(short *)(param_1 + 0x9e) == 0x9e)))) {
    iVar1 = -4;
    goto LAB_02908994;
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
      if (iVar2 < 8) goto LAB_02908aa8;
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
LAB_02908aa8:
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x121);
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar4 = iVar1 + -2;
    if ((uVar3 & 1) == 0) {
      iVar4 = iVar1;
    }
    return iVar4;
  }
LAB_02908994:
  return iVar1;
}


