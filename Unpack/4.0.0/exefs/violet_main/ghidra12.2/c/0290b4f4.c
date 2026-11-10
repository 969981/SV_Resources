/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290b4f4; name: FUN_0290b4f4
 */


uint FUN_0290b4f4(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((((7 < iVar1) ||
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 7 < iVar1))
       || (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 7 < iVar1
          )) || ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                 7 < iVar1 ||
                 (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x130))
                                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
                 7 < iVar1)))) ||
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x128))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 7 < iVar1)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    plVar4 = *(long **)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar4 + 0xf8))
                        (plVar4,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
      if (((uVar3 & 1) != 0) &&
         ((iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                             (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)),
          iVar1 < 0x47 ||
          (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                             (*(long **)(param_1 + 0x30),0x32), (uVar3 & 1) == 0)))) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
        uVar2 = uVar2 & 1;
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
        if (0x31 < iVar1) {
          return uVar2;
        }
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
        uVar5 = 3;
        if (uVar2 != 0) {
          uVar5 = 4;
        }
        if ((uVar3 & 1) == 0) {
          return uVar2;
        }
        return uVar5;
      }
    }
    else {
      iVar1 = (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined4 *)(param_1 + 0x98));
      if ((iVar1 < 0x3d) ||
         (uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x32), (uVar3 & 1) == 0)) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
        uVar2 = uVar2 & 1;
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
        if (0x27 < iVar1) {
          return uVar2;
        }
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
        uVar5 = 3;
        if (uVar2 != 0) {
          uVar5 = 4;
        }
        if ((uVar3 & 1) == 0) {
          return uVar2;
        }
        return uVar5;
      }
    }
  }
  return 0;
}


