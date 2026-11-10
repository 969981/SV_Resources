/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02909a78; name: FUN_02909a78
 */


int FUN_02909a78(long param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if (((uVar5 & 1) == 0) && (*(short *)(param_1 + 0x9e) != 0x9e)) {
    return 0;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar3);
  if ((byte)(cVar2 - 1U) < 2) {
    iVar8 = 0;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
    iVar8 = -(uVar4 & 1);
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar4 = uVar4 & 0xffff;
  if (uVar4 < 0xcf) {
    uVar5 = (ulong)(uVar4 - 0x49);
    if (uVar4 - 0x49 < 0x25) {
      if ((1L << (uVar5 & 0x3f) & 0x82070U) != 0) goto LAB_02909b4c;
      if (uVar5 == 0) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xb);
        if ((uVar5 & 1) != 0) {
          return iVar8;
        }
        if (*(char *)(param_1 + 0xa0) == '\v') {
          return iVar8;
        }
        if (*(char *)(param_1 + 0xa1) == '\v') {
          return iVar8;
        }
        if (*(short *)(param_1 + 0x9e) == 0x40) {
          return iVar8;
        }
        plVar6 = *(long **)(param_1 + 0x30);
        uVar7 = 0x12;
        goto LAB_02909d08;
      }
      if (uVar5 == 0x24) goto LAB_02909c7c;
    }
    if ((10 < uVar4 - 0x89) || ((1 << (ulong)(uVar4 - 0x89 & 0x1f) & 0x421U) == 0)) {
      if (uVar4 != 0x32) {
        return iVar8;
      }
      plVar6 = *(long **)(param_1 + 0x30);
      uVar7 = 0xd;
LAB_02909cd4:
      uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined4 *)(param_1 + 0x98),uVar7);
      if ((uVar5 & 1) == 0) {
        return iVar8;
      }
      plVar6 = *(long **)(param_1 + 0x30);
      uVar7 = 0x55;
      goto LAB_02909ca0;
    }
LAB_02909b4c:
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),1);
    if ((uVar5 & 1) == 0) {
      return iVar8;
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),4);
    if ((uVar5 & 1) == 0) {
      return iVar8;
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),5);
    if ((uVar5 & 1) == 0) {
      return iVar8;
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1d0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if ((uVar5 & 1) != 0) {
      return iVar8;
    }
  }
  else {
    if (0x104 < uVar4) {
      if (uVar4 < 0x12a) {
        if (uVar4 != 0x105) {
          if (uVar4 != 0x10d) {
            return iVar8;
          }
          plVar6 = *(long **)(param_1 + 0x30);
          uVar7 = 0xb;
          goto LAB_02909cd4;
        }
      }
      else {
        if ((uVar4 == 0x12a) || (uVar4 == 0x1c0)) goto LAB_02909c7c;
        if (uVar4 != 0x1d0) {
          return iVar8;
        }
      }
      goto LAB_02909b4c;
    }
    if (0xe2 < uVar4) {
      if (uVar4 == 0xe3) {
        plVar6 = *(long **)(param_1 + 0x30);
        uVar7 = 0x17;
      }
      else {
        if (uVar4 != 0x103) {
          if (uVar4 != 0x104) {
            return iVar8;
          }
          goto LAB_02909c7c;
        }
        plVar6 = *(long **)(param_1 + 0x30);
        uVar7 = 0xc;
      }
LAB_02909d08:
      uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined4 *)(param_1 + 0x98),uVar7);
      if ((uVar5 & 1) == 0) {
        return iVar8;
      }
      plVar6 = *(long **)(param_1 + 0x30);
      uVar7 = 0x46;
      goto LAB_02909ca0;
    }
    if (uVar4 == 0xcf) {
LAB_02909c7c:
      plVar6 = *(long **)(param_1 + 0x30);
      uVar7 = 6;
    }
    else {
      if (uVar4 != 0xd5) {
        return iVar8;
      }
      plVar6 = *(long **)(param_1 + 0x30);
      uVar7 = 7;
    }
    uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined4 *)(param_1 + 0x98),uVar7);
    if ((uVar5 & 1) == 0) {
      return iVar8;
    }
  }
  plVar6 = *(long **)(param_1 + 0x30);
  uVar7 = 0x4e;
LAB_02909ca0:
  uVar5 = (**(code **)(*plVar6 + 0x4c0))(plVar6,uVar7);
  iVar1 = iVar8 + 2;
  if ((uVar5 & 1) == 0) {
    iVar1 = iVar8;
  }
  return iVar1;
}


