/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290c12c; name: FUN_0290c12c
 */


int FUN_0290c12c(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0x107);
  if ((uVar5 & 1) == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    iVar7 = -2;
    if ((uVar5 & 1) == 0) {
      iVar7 = 0;
    }
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x178))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if ((uVar5 & 1) == 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
    plVar6 = *(long **)(param_1 + 0x30);
    if (iVar2 != 0) {
      uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,*(undefined4 *)(param_1 + 0xa4));
      if ((uVar5 & 1) == 0) goto LAB_0290c198;
      plVar6 = *(long **)(param_1 + 0x30);
    }
    uVar5 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x32);
    if ((uVar5 & 1) != 0) {
      return iVar7 + 2;
    }
  }
LAB_0290c198:
  if (*(short *)(param_1 + 0xb6) == 0x3e) {
    return iVar7 + -0xc;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0xb4);
  if (*(ushort *)(param_1 + 0xb4) < 0x128) {
    if (((0x30 < uVar3 - 0x14) || ((1L << ((ulong)(uVar3 - 0x14) & 0x3f) & 0x1800000000001U) == 0))
       && ((0x3f < uVar3 - 0xd6 ||
           ((1L << ((ulong)(uVar3 - 0xd6) & 0x3f) & 0x8000000000000009U) == 0)))) goto LAB_0290c2c0;
  }
  else if ((((5 < uVar3 - 0x215) || ((1 << (ulong)(uVar3 - 0x215 & 0x1f) & 0x23U) == 0)) &&
           (1 < uVar3 - 0x194)) && (1 < uVar3 - 0x128)) goto LAB_0290c2c0;
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
  iVar2 = iVar7 + -5;
  if ((uVar5 & 1) == 0) {
    iVar2 = iVar7;
  }
  iVar7 = iVar2;
LAB_0290c2c0:
  iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if (iVar2 < 0x1e) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar7 = iVar7 - (uVar3 & 1);
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar4);
  if (cVar1 == '\x01') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    iVar7 = iVar7 + (uVar3 & 1);
  }
  return iVar7;
}


