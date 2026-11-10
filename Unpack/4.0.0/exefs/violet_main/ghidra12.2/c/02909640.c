/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02909640; name: FUN_02909640
 */


uint FUN_02909640(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x360))(*(long **)(param_1 + 0x30),uVar2);
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x108);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar3 = uVar3 & 1;
  }
  uVar7 = uVar3;
  if (uVar1 == 0x26) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar7 = uVar3 | 2;
    if ((uVar5 & 1) == 0) {
      uVar7 = uVar3;
    }
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  plVar6 = *(long **)(param_1 + 0x30);
  if (iVar4 < 0x32) {
LAB_0290970c:
    uVar3 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x46);
    uVar7 = uVar7 - (uVar3 & 1);
  }
  else {
    iVar4 = (**(code **)(*plVar6 + 0xa0))(plVar6,*(undefined4 *)(param_1 + 0x98));
    if (iVar4 < 0x32) {
      plVar6 = *(long **)(param_1 + 0x30);
      goto LAB_0290970c;
    }
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0));
  if (((uVar5 & 1) == 0) && (*(short *)(param_1 + 0x9e) != 0x9e)) {
    return uVar7;
  }
  uVar3 = (uint)uVar1;
  if (uVar3 < 0xa7) {
    if (((0x22 < uVar3 - 0x21) || ((1L << ((ulong)(uVar3 - 0x21) & 0x3f) & 0x600000001U) == 0)) &&
       (uVar3 != 1)) goto LAB_029097b0;
  }
  else if ((uVar3 != 0xbb) && (uVar3 != 0xa7)) goto LAB_029097b0;
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar5 & 1) == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar7 = uVar7 + (uVar3 & 1);
  }
LAB_029097b0:
  if ((((uVar1 == 0x31) || (uVar1 == 0xa6)) || (uVar1 == 0x76)) &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),6),
     (uVar5 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar7 = uVar7 + (uVar3 & 1);
  }
  if ((uVar1 == 0x54) &&
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x12),
     (uVar5 & 1) != 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar7 = uVar7 + (uVar3 & 1);
  }
  if (uVar1 != 0x26) {
    if (uVar1 == 0x177) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xb);
      if ((uVar5 & 1) != 0) {
        return uVar7;
      }
      if (*(char *)(param_1 + 0xa0) == '\v') {
        return uVar7;
      }
      if (*(char *)(param_1 + 0xa1) == '\v') {
        return uVar7;
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      return uVar7 + (uVar3 & 1);
    }
    if (uVar1 == 0x156) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x80))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),7);
      if ((uVar5 & 1) != 0) {
        return uVar7;
      }
      if (*(char *)(param_1 + 0xa0) == '\a') {
        return uVar7;
      }
      if (*(char *)(param_1 + 0xa1) == '\a') {
        return uVar7;
      }
    }
    else {
      if (uVar1 != 0x126) {
        return uVar7;
      }
      if ((*(char *)(param_1 + 0xa0) != '\n') && (*(char *)(param_1 + 0xa1) != '\n')) {
        return uVar7;
      }
    }
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  return uVar7 + (uVar3 & 1);
}


