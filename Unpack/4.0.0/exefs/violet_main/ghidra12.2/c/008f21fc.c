/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f21fc; name: FUN_008f21fc
 */


void FUN_008f21fc(undefined1 *param_1,undefined8 param_2,ushort *param_3,long param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong local_80 [4];
  
  *(uint *)(param_1 + 4) = (uint)param_3[1];
  lVar7 = *(long *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) = lVar7 + (ulong)param_3[1] * 8;
  puVar4 = PTR_DAT_047d32f8;
  puVar3 = PTR_DAT_047d32f0;
  puVar2 = PTR_DAT_047d32e8;
  if (param_3[1] != 0) {
    lVar9 = 0;
    lVar11 = 0;
    uVar13 = 1;
    while( true ) {
      lVar7 = lVar7 + lVar11;
      lVar8 = *(long *)(param_3 + 8);
      (**(code **)puVar2)(lVar7);
      (**(code **)puVar3)(lVar7,(long)*(int *)(lVar8 + lVar9));
      (**(code **)puVar4)(lVar7,((int *)(lVar8 + lVar9))[1]);
      if (param_3[1] <= uVar13) break;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar11 = lVar11 + 8;
      lVar9 = lVar9 + 0x10;
      uVar13 = uVar13 + 1;
    }
  }
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  nn::util::BitArray::reset();
  uVar13 = (ulong)*param_3;
  if (*param_3 == 0) {
    iVar10 = 0;
    uVar14 = 0xffffffff;
    uVar15 = 0;
  }
  else {
    if (param_4 == 0) {
      lVar7 = 0;
      uVar15 = 0;
      iVar10 = 0;
      uVar12 = 0xffffffff;
      do {
        lVar11 = *(long *)(param_3 + 4) + lVar7;
        sVar1 = *(short *)(lVar11 + 2);
        uVar14 = uVar12;
        if (-1 < sVar1) {
          lVar9 = *(long *)(param_1 + 0x18) + (ulong)(uint)(int)sVar1 * 4;
          (**(code **)PTR_DAT_047d32c0)(lVar9);
          uVar5 = FUN_008f129c(*(undefined4 *)(lVar11 + 0xc));
          (**(code **)PTR_DAT_047d32c8)(lVar9,uVar5,*(undefined4 *)(lVar11 + 8));
          (**(code **)PTR_DAT_047d32d0)(lVar9,*(undefined2 *)(lVar11 + 4));
          uVar14 = (uint)sVar1;
          local_80[uVar14 >> 6] = local_80[uVar14 >> 6] | 1L << ((long)sVar1 & 0x3fU);
          uVar13 = (ulong)*param_3;
          if ((int)uVar14 <= (int)uVar12) {
            uVar14 = uVar12;
          }
          iVar10 = iVar10 + 1;
        }
        uVar15 = uVar15 + 1;
        lVar7 = lVar7 + 0x28;
        uVar12 = uVar14;
      } while (uVar15 < uVar13);
    }
    else {
      lVar7 = 0;
      uVar15 = 0;
      iVar10 = 0;
      uVar14 = 0xffffffff;
      do {
        lVar11 = *(long *)(param_3 + 4) + lVar7;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar13 = (ulong)*(short *)(lVar11 + 2);
          if (-1 < *(short *)(lVar11 + 2)) goto LAB_008f2350;
        }
        else {
          uVar6 = FUN_008f1cbc(param_4,0,0);
          uVar13 = uVar6 & 0xffffffff;
          if (-1 < (int)uVar6) {
LAB_008f2350:
            lVar9 = *(long *)(param_1 + 0x18) + (uVar13 & 0xffffffff) * 4;
            (**(code **)PTR_DAT_047d32c0)(lVar9);
            uVar5 = FUN_008f129c(*(undefined4 *)(lVar11 + 0xc));
            (**(code **)PTR_DAT_047d32c8)(lVar9,uVar5,*(undefined4 *)(lVar11 + 8));
            (**(code **)PTR_DAT_047d32d0)(lVar9,*(undefined2 *)(lVar11 + 4));
            uVar6 = uVar13 >> 6 & 0x3ffffff;
            uVar12 = (uint)uVar13;
            if ((int)(uint)uVar13 <= (int)uVar14) {
              uVar12 = uVar14;
            }
            iVar10 = iVar10 + 1;
            local_80[uVar6] = local_80[uVar6] | 1L << (uVar13 & 0x3f);
            uVar14 = uVar12;
          }
        }
        uVar13 = (ulong)*param_3;
        uVar15 = uVar15 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar15 < uVar13);
    }
    uVar12 = uVar14 + 1;
    uVar15 = (ulong)uVar12;
    if ((int)uVar13 != 0) goto LAB_008f24b8;
  }
  uVar12 = 0;
LAB_008f24b8:
  *(uint *)(param_1 + 8) = uVar12;
  puVar2 = PTR_DAT_047d32c0;
  if ((iVar10 <= (int)uVar14) && (-1 < (int)uVar14)) {
    lVar7 = 0;
    uVar13 = 0;
    do {
      if ((local_80[uVar13 >> 6 & 0x3ffffff] >> (uVar13 & 0x3f) & 1) == 0) {
        (**(code **)puVar2)(*(long *)(param_1 + 0x18) + lVar7);
      }
      uVar13 = uVar13 + 1;
      lVar7 = lVar7 + 4;
    } while (uVar15 != uVar13);
  }
  *param_1 = 1;
  return;
}


