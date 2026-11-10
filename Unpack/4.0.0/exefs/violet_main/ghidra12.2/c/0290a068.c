/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290a068; name: FUN_0290a068
 */


int FUN_0290a068(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar1 < iVar2) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    uVar3 = uVar3 & 0xffff;
    iVar1 = 0;
    if (uVar3 < 0x1f5) {
      if ((0x15 < uVar3 - 0xb6 || (1 << (ulong)(uVar3 - 0xb6 & 0x1f) & 0x208001U) == 0) &&
         (uVar3 != 0x1d5)) goto LAB_0290a104;
    }
    else if ((0x23 < uVar3 - 0x231 || (1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) == 0)
            && (uVar3 != 0x1f5)) goto LAB_0290a104;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x5d);
    iVar1 = 2;
    if ((uVar5 & 1) == 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
LAB_0290a104:
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x46);
  if ((uVar5 & 1) == 0) {
    iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
    iVar2 = iVar1;
    if (iVar4 < 0x32) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      iVar2 = iVar1 + -2;
      if ((uVar5 & 1) == 0) {
        iVar2 = iVar1;
      }
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    if (((uVar5 & 1) == 0) && (*(short *)(param_1 + 0x9e) != 0x9e)) {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      plVar6 = *(long **)(param_1 + 0x30);
      if (iVar1 < 0x47) {
        iVar1 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
        if (0x31 < iVar1) {
          return iVar2;
        }
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
        if (iVar1 < 0x51) {
          return iVar2;
        }
        uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        return iVar2 + (uVar3 & 1);
      }
    }
    else {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      plVar6 = *(long **)(param_1 + 0x30);
      if (iVar1 < 0x33) {
        iVar1 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
        if (0x1d < iVar1) {
          return iVar2;
        }
        iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
        if (iVar1 < 0x51) {
          return iVar2;
        }
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
        if ((uVar5 & 1) == 0) {
          return iVar2;
        }
        return iVar2 + 3;
      }
    }
    uVar3 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x5a);
    iVar1 = iVar2 - (uVar3 & 1);
  }
  else {
    iVar1 = iVar1 + 2;
  }
  return iVar1;
}


