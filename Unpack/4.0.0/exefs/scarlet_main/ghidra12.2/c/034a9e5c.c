/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a9e5c; name: FUN_034a9e5c
 */


undefined8 * FUN_034a9e5c(long *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar13 = *param_1;
  if (uVar3 == 0) {
    if (lVar13 == 0) {
      iVar15 = *(int *)((long)param_1 + 0xc);
      if (iVar15 == 0) {
        iVar15 = 1;
        lVar13 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,8);
        if (lVar13 == 0) {
          return (undefined8 *)0x0;
        }
        *param_1 = lVar13;
        *(undefined4 *)((long)param_1 + 0xc) = 1;
      }
      else {
        lVar13 = 0;
      }
      if (iVar15 == 0) {
        return (undefined8 *)0x0;
      }
      uVar3 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar3 + 1;
      return (undefined8 *)(lVar13 + (ulong)uVar3 * 8);
    }
    uVar14 = 0;
  }
  else {
    uVar7 = 0;
    uVar10 = uVar3;
    do {
      uVar14 = uVar7 + (uVar10 >> 1);
      lVar12 = *(long *)(lVar13 + (long)(int)uVar14 * 8);
      if (*(float *)(lVar12 + 0x2c0) == (float)param_2) {
        uVar4 = *(uint *)(lVar12 + 0x2c4);
        uVar8 = (uint)((ulong)param_2 >> 0x20);
        uVar5 = *(uint *)(lVar12 + 0x2c8);
        if (uVar4 == uVar8 && uVar5 == param_3) goto LAB_034a9f1c;
        bVar1 = uVar8 < uVar4;
        if (uVar5 != param_3) {
          bVar1 = param_3 < uVar5;
        }
        bVar6 = uVar4 < uVar8;
        if (uVar5 != param_3) {
          bVar6 = uVar5 < param_3;
        }
        if (*(char *)((long)param_1 + 0x12) != '\0') {
          bVar1 = bVar6;
        }
      }
      else {
        bVar1 = (float)param_2 < *(float *)(lVar12 + 0x2c0);
      }
      if (bVar1 != 0) {
        uVar7 = uVar14 + 1;
      }
      uVar10 = uVar10 - bVar1 >> 1;
    } while (uVar10 != 0);
    uVar14 = uVar7;
  }
LAB_034a9f1c:
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (uVar7 <= uVar3) {
    iVar15 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar15 = 1;
    }
    uVar7 = iVar15 + uVar7;
    lVar13 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar13,(ulong)uVar7 << 3);
    if (lVar13 == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = lVar13;
    *(uint *)((long)param_1 + 0xc) = uVar7;
  }
  if (uVar7 <= uVar3) {
    return (undefined8 *)0x0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (uVar3 <= uVar14) {
    return (undefined8 *)(lVar13 + (ulong)uVar14 * 8);
  }
  puVar11 = (undefined8 *)(lVar13 + (ulong)uVar3 * 8);
  do {
    puVar9 = puVar11 + -1;
    *puVar11 = *puVar9;
    puVar2 = (undefined8 *)(*param_1 + (ulong)uVar14 * 8);
    puVar11 = puVar9;
  } while (puVar2 < puVar9);
  return puVar2;
}


