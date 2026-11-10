/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290ac14; name: FUN_0290ac14
 */


int FUN_0290ac14(long param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0xc5021a06d7a13c8a);
  if (((uVar6 & 1) == 0) ||
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), 0x18 < iVar2))
  {
    iVar2 = 0;
  }
  else {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar2 = -3;
    if ((uVar6 & 1) == 0) {
      iVar2 = 0;
    }
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1a0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (((uVar6 & 1) != 0) &&
     ((((*(short *)(param_1 + 0xb4) == 0x121 || (*(short *)(param_1 + 0xb4) == 0x278)) ||
       (*(short *)(param_1 + 0xb6) == 0x36)) &&
      (uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x61),
      (uVar6 & 1) != 0)))) {
    return iVar2 + 3;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar3 = uVar3 & 0xffff;
  if (uVar3 < 0x231) {
    if (((0x15 < uVar3 - 0xb6 || (1 << (ulong)(uVar3 - 0xb6 & 0x1f) & 0x208001U) == 0) &&
        (uVar3 != 0x1d5)) && (uVar3 != 0x1f5)) goto LAB_0290ad80;
  }
  else if (uVar3 < 0x295) {
    if (0x23 < uVar3 - 0x231 || (1L << ((ulong)(uVar3 - 0x231) & 0x3f) & 0x808000001U) == 0)
    goto LAB_0290ad80;
  }
  else if (((uVar3 != 0x295) && (uVar3 != 0x318)) && (uVar3 != 0x2e7)) goto LAB_0290ad80;
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
  iVar5 = iVar2 + -3;
  if ((uVar6 & 1) == 0) {
    iVar5 = iVar2;
  }
  iVar2 = iVar5;
LAB_0290ad80:
  iVar4 = FUN_02914e48(param_1);
  iVar5 = iVar2;
  if (iVar4 == 1) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar5 = iVar2 + -2;
    if ((uVar6 & 1) == 0) {
      iVar5 = iVar2;
    }
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x16c);
  iVar2 = iVar5;
  if ((uVar6 & 1) != 0) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar2 = iVar5 + -2;
    if ((uVar6 & 1) == 0) {
      iVar2 = iVar5;
    }
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x251);
  if ((uVar6 & 1) != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    iVar2 = iVar2 - (uVar3 & 1);
  }
  sVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((sVar1 == 0x236) || (sVar1 == 0x1d3)) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d);
    iVar5 = iVar2 + -3;
    if ((uVar6 & 1) == 0) {
      iVar5 = iVar2;
    }
  }
  else {
    iVar5 = FUN_02914b2c(param_1);
    iVar4 = iVar2;
    if ((iVar5 == 1) && (*(short *)(param_1 + 0x9e) != 0x62)) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
      iVar4 = iVar2 + -2;
      if ((uVar6 & 1) == 0) {
        iVar4 = iVar2;
      }
    }
    iVar2 = FUN_0157defc(param_1);
    if ((iVar2 == 1) && (*(short *)(param_1 + 0xb6) != 0x62)) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x33);
      iVar4 = iVar4 + (uVar3 & 1);
    }
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1e);
    iVar5 = iVar4;
    if ((uVar6 & 1) != 0) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      iVar5 = iVar4 + 2;
      if ((uVar6 & 1) == 0) {
        iVar5 = iVar4;
      }
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x1e);
    iVar5 = iVar5 + (uVar3 & 1);
  }
  return iVar5;
}


