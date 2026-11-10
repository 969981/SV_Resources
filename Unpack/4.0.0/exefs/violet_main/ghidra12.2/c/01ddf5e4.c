/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddf5e4; name: FUN_01ddf5e4
 */


undefined8 FUN_01ddf5e4(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  
  if ((param_2 == 0) || (*(char *)(param_1 + 0x1714) == '\0')) {
    return 0;
  }
  uVar6 = FUN_00cf4cfc(*(undefined8 *)(param_2 + 0x70));
  uVar11 = (*(byte *)(*(long *)(*(long *)(param_2 + 0x70) + 0x10) + 4) & 4) >> 2;
  if (*(int *)(param_1 + 0x16d0) == -1) {
    if ((uVar6 & 1) != 0 || uVar11 != 0) goto LAB_01ddf654;
  }
  else {
    if ((uVar6 & 1) != 0 || uVar11 != 0) {
      if (*(int *)(param_1 + 0x16d0) != 0) {
        return 2;
      }
      goto LAB_01ddf654;
    }
    uVar8 = FUN_00cf44f4();
    if (*(uint *)(param_1 + 0x16d0) != (uVar8 & 0xffff)) {
      return 2;
    }
  }
  if (((*(int *)(param_1 + 0x16d4) != -1) &&
      (uVar8 = FUN_0113b7d0(param_2), *(uint *)(param_1 + 0x16d4) != (uVar8 & 0xff))) &&
     (uVar8 = FUN_01155170(param_2), *(uint *)(param_1 + 0x16d4) != (uVar8 & 0xff))) {
    return 2;
  }
  if (((*(int *)(param_1 + 0x16d8) != -1) &&
      (uVar8 = FUN_0113b7d0(param_2), *(uint *)(param_1 + 0x16d8) != (uVar8 & 0xff))) &&
     (uVar8 = FUN_01155170(param_2), *(uint *)(param_1 + 0x16d8) != (uVar8 & 0xff))) {
    return 2;
  }
  if (*(int *)(param_1 + 0x16dc) != -1) {
    cVar2 = FUN_010ca6e8(*(undefined8 *)(param_2 + 0x70));
    if (cVar2 == '\x13') {
      uVar8 = FUN_00e9782c();
    }
    else {
      uVar8 = FUN_010ca6e8(*(undefined8 *)(param_2 + 0x70));
    }
    if (*(uint *)(param_1 + 0x16dc) != (uVar8 & 0xff)) {
      return 2;
    }
  }
  if (*(int *)(param_1 + 0x16e0) != -1) {
    sVar3 = FUN_00eedbc8(*(undefined8 *)(param_2 + 0x70),0);
    sVar4 = FUN_00eedbc8(*(undefined8 *)(param_2 + 0x70),1);
    uVar8 = 2;
    if (sVar3 == 0) {
      uVar8 = 1;
    }
    uVar7 = (uint)(sVar3 != 0);
    if (sVar4 != 0) {
      uVar7 = uVar8;
    }
    sVar3 = FUN_00eedbc8(*(undefined8 *)(param_2 + 0x70),2);
    if (sVar3 != 0) {
      uVar7 = uVar7 + 1;
    }
    sVar3 = FUN_00eedbc8(*(undefined8 *)(param_2 + 0x70),3);
    if (sVar3 != 0) {
      uVar7 = uVar7 + 1;
    }
    if (uVar7 == 0) {
      return 2;
    }
    uVar8 = 0;
    bVar1 = false;
    do {
      uVar9 = FUN_00eedbc8(*(undefined8 *)(param_2 + 0x70),uVar8);
      uVar8 = uVar8 + 1;
      bVar1 = (bool)(bVar1 | *(uint *)(param_1 + 0x16e0) == (uVar9 & 0xffff));
    } while (uVar7 != uVar8);
    if (!bVar1) {
      return 2;
    }
  }
  if ((*(int *)(param_1 + 0x16e4) != -1) && (uVar15 = FUN_01d329e0(param_2), (uVar15 & 1) == 0)) {
    return 2;
  }
  if ((*(int *)(param_1 + 0x16e8) != -1) &&
     (uVar8 = FUN_00cec030(*(undefined8 *)(param_2 + 0x70)),
     *(uint *)(param_1 + 0x16e8) != (uVar8 & 0xff))) {
    return 2;
  }
  if (*(int *)(param_1 + 0x16ec) != -1) {
    uVar5 = FUN_0113b8a0(*(undefined8 *)(param_2 + 0x70));
    if (0x136 < uVar5) {
      uVar12 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70));
      uVar13 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
      uVar14 = FUN_00e99784(param_2);
      uVar5 = FUN_0143b78c(uVar12,uVar13,uVar14);
    }
    if (*(uint *)(param_1 + 0x16ec) != (uint)uVar5) {
      return 2;
    }
  }
  if ((*(int *)(param_1 + 0x16f0) != -1) &&
     (iVar10 = FUN_00e97b78(*(undefined8 *)(param_2 + 0x70)), iVar10 != *(int *)(param_1 + 0x16f0)))
  {
    return 2;
  }
  if ((*(int *)(param_1 + 0x16f4) != -1) &&
     (sVar3 = FUN_00e974e0(*(undefined8 *)(param_2 + 0x70)),
     (sVar3 == 0 && *(int *)(param_1 + 0x16f4) == 0) ==
     (sVar3 == 0 || *(int *)(param_1 + 0x16f4) != 1))) {
    return 2;
  }
LAB_01ddf654:
  uVar8 = *(uint *)(param_1 + 0x16f8);
  if (uVar8 == 0) {
    bVar1 = false;
  }
  else {
    uVar7 = FUN_01400f2c(*(undefined8 *)(param_2 + 0x70));
    if (uVar8 != (uVar7 & 3)) {
      return 2;
    }
    bVar1 = true;
  }
  uVar8 = *(uint *)(param_1 + 0x16fc);
  if (uVar8 != 0) {
    uVar7 = FUN_01400f2c(*(undefined8 *)(param_2 + 0x70));
    if (uVar8 != (uVar7 >> 2 & 3)) {
      return 2;
    }
    bVar1 = true;
  }
  uVar8 = *(uint *)(param_1 + 0x1700);
  if (uVar8 != 0) {
    uVar7 = FUN_01400f2c(*(undefined8 *)(param_2 + 0x70));
    if (uVar8 != (uVar7 >> 4 & 3)) {
      return 2;
    }
    bVar1 = true;
  }
  uVar8 = *(uint *)(param_1 + 0x1704);
  if (uVar8 != 0) {
    uVar7 = FUN_01400f2c(*(undefined8 *)(param_2 + 0x70));
    if (uVar8 != (uVar7 >> 6 & 3)) {
      return 2;
    }
    bVar1 = true;
  }
  uVar8 = *(uint *)(param_1 + 0x1708);
  if (uVar8 != 0) {
    uVar7 = FUN_01400f2c(*(undefined8 *)(param_2 + 0x70));
    if (uVar8 != (uVar7 >> 8 & 3)) {
      return 2;
    }
    bVar1 = true;
  }
  uVar8 = *(uint *)(param_1 + 0x170c);
  if (uVar8 == 0) {
    if (bVar1 || (((uVar6 | uVar11) ^ 0xffffffff) & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar11 = FUN_01400f2c(*(undefined8 *)(param_2 + 0x70));
    if (uVar8 == (uVar11 >> 10 & 3)) {
      return 1;
    }
  }
  return 2;
}


