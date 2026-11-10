/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ebdd8; name: FUN_034ebdd8
 */


long FUN_034ebdd8(long *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  FUN_034eb100(param_1,param_3 & 1);
  lVar6 = *param_1;
  uVar5 = *(uint *)(lVar6 + 0x28);
  uVar7 = *(uint *)(lVar6 + 0x2c);
  if (uVar7 <= uVar5) {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                      (0,*(undefined8 *)(lVar6 + 0x20),(ulong)uVar7 * 0x78);
    if (lVar3 == 0) {
      return 0;
    }
    *(long *)(lVar6 + 0x20) = lVar3;
    *(uint *)(lVar6 + 0x2c) = uVar7;
  }
  if (uVar7 <= uVar5) {
    return 0;
  }
  uVar7 = *(uint *)(lVar6 + 0x28);
  lVar3 = *(long *)(lVar6 + 0x20);
  *(uint *)(lVar6 + 0x28) = uVar7 + 1;
  if (lVar3 == 0) {
    return 0;
  }
  lVar6 = lVar3 + (ulong)uVar7 * 0x78;
  *(undefined8 *)(lVar6 + 0x2c) = 0x3f80000000000000;
  *(undefined8 *)(lVar6 + 0x34) = 0x3f8000003f800000;
  *(undefined8 *)(lVar6 + 0x50) = 0x3f80000042c80000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined4 *)(lVar6 + 0x4c) = 0;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x68) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  lVar6 = *param_1;
  uVar2 = *(uint *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0x3c);
  if (uVar5 <= uVar2) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(lVar6 + 0x30),uVar5);
    if (lVar4 == 0) goto LAB_034ebf28;
    *(long *)(lVar6 + 0x30) = lVar4;
    *(uint *)(lVar6 + 0x3c) = uVar5;
  }
  if (uVar2 < uVar5) {
    uVar5 = *(uint *)(lVar6 + 0x38);
    *(uint *)(lVar6 + 0x38) = uVar5 + 1;
    if (*(long *)(lVar6 + 0x30) != 0) {
      *(undefined1 *)(*(long *)(lVar6 + 0x30) + (ulong)uVar5) = param_2;
      return lVar3 + (ulong)uVar7 * 0x78;
    }
  }
LAB_034ebf28:
  *(int *)(*param_1 + 0x28) = *(int *)(*param_1 + 0x28) + -1;
  return 0;
}


