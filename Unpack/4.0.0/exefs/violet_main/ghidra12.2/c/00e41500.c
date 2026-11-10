/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e41500; name: FUN_00e41500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e41500(undefined8 param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint *puVar12;
  ushort *puVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ushort uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar9 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar9 == 0)) {
    piVar11 = (int *)0x0;
  }
  else {
    puVar12 = (uint *)((long)param_2 + uVar9);
    piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
  }
  puVar13 = (ushort *)((long)piVar11 - (long)*piVar11);
  if (*puVar13 < 5) {
    lVar10 = 0;
LAB_00e417b8:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar10 = 0;
    if ((ulong)puVar13[2] != 0) {
      puVar12 = (uint *)((long)piVar11 + (ulong)puVar13[2]);
      lVar10 = (long)puVar12 + (ulong)*puVar12;
    }
    if ((*puVar13 < 7) || ((ulong)puVar13[3] == 0)) goto LAB_00e417b8;
    puVar12 = (uint *)((long)piVar11 + (ulong)puVar13[3]);
    puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  }
  uVar1 = *puVar12;
  uVar2 = *(uint *)(param_3 + 4);
  uVar9 = (ulong)uVar2;
  fVar23 = (float)param_1;
  if (-1 < (int)uVar2) {
    if (uVar1 <= uVar2) {
      return param_1;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_00e41588;
    uVar19 = *(ushort *)(lVar10 + uVar9 * 2 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar28 = (float)NEON_ucvtf((uint)uVar19);
    if (fVar23 <= fVar28) goto LAB_00e41588;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  puVar13 = (ushort *)(lVar10 + 8);
  lVar3 = ((lVar10 + 4 + (ulong)uVar1 * 2) - (long)puVar13) + -2;
  if (lVar3 != 0) {
    uVar16 = lVar3 >> 1;
    puVar8 = puVar13 + (uVar16 >> 1) + 1;
    uVar9 = (uVar16 >> 1 ^ 0xffffffffffffffff) + uVar16;
    if (fVar23 <= (float)puVar13[uVar16 >> 1]) {
      puVar8 = puVar13;
      uVar9 = uVar16 >> 1;
    }
    while (puVar13 = puVar8, uVar9 != 0) {
      uVar16 = uVar9 >> 1;
      puVar8 = puVar13 + uVar16 + 1;
      uVar9 = uVar9 + (uVar9 >> 1 ^ 0xffffffffffffffff);
      if (fVar23 <= (float)puVar13[uVar16]) {
        puVar8 = puVar13;
        uVar9 = uVar16;
      }
    }
  }
  uVar9 = (ulong)((int)((ulong)((long)puVar13 - (lVar10 + 4)) >> 1) - 2);
LAB_00e41588:
  uVar7 = _UNK_03cabb58;
  uVar6 = _DAT_03cabb50;
  uVar15 = (uint)uVar9;
  puVar14 = (ulong *)((long)puVar12 + uVar9 * 6 + 4);
  uVar17 = (ulong)(*(int *)(param_3 + 0xc) + 2U >> 2) & 1;
  uVar16 = 0;
  uVar2 = 0;
  if (uVar15 <= uVar1) {
    uVar2 = uVar1 - uVar15;
  }
  do {
    if (uVar2 == uVar16) break;
    uVar20 = NEON_ucvtf((uint)*(ushort *)(lVar10 + uVar9 * 2 + 4 + uVar16 * 2));
    *(undefined4 *)(param_3 + uVar17 * 0x10 + 0x10 + uVar16 * 4) = uVar20;
    uVar18 = *puVar14;
    auVar24._0_8_ = CONCAT44((int)(uVar18 >> 0x12),(uint)uVar18 >> 3) & 0x7fff00007fff;
    auVar24._8_4_ = (uint)(uVar18 >> 0x21) & 0x7fff;
    auVar24._12_4_ = 0;
    uVar1 = (uint)uVar18 & 3;
    auVar24 = NEON_ucvtf(auVar24,4);
    auVar21._0_4_ = (float)uVar6 + auVar24._0_4_ * 4.7938363e-05;
    auVar21._4_4_ = (float)((ulong)uVar6 >> 0x20) + auVar24._4_4_ * 4.7938363e-05;
    auVar21._8_4_ = (float)uVar7 + auVar24._8_4_ * 4.7938363e-05;
    auVar26._12_4_ = (float)((ulong)uVar7 >> 0x20) + auVar24._12_4_ * 4.7938363e-05;
    auVar26._0_12_ = auVar21;
    fVar23 = 1.0 - (auVar21._0_4_ * auVar21._0_4_ + auVar21._4_4_ * auVar21._4_4_ +
                   auVar21._8_4_ * auVar21._8_4_ + auVar26._12_4_ * auVar26._12_4_);
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    fVar28 = (float)NEON_frsqrte(fVar23);
    fVar28 = fVar23 - (fVar28 * fVar23 * fVar28 * fVar23 - fVar23) * 0.5;
    fVar29 = (float)NEON_frsqrte(fVar28);
    fVar28 = fVar28 - (fVar29 * fVar28 * fVar29 * fVar28 - fVar23) * 0.5;
    fVar23 = (float)NEON_frsqrte(fVar28);
    fVar23 = fVar23 * fVar28;
    if (uVar1 == 3) {
      auVar22._12_4_ = fVar23;
      auVar22._0_12_ = auVar21;
    }
    else if (uVar1 == 1) {
      auVar27._4_4_ = auVar21._8_4_;
      auVar27._0_4_ = auVar21._0_4_;
      auVar27._8_4_ = auVar21._0_4_;
      auVar27._12_4_ = fVar23;
      auVar24 = NEON_ext(auVar26,auVar26,4,1);
      auVar22 = NEON_ext(auVar27,auVar24,8,1);
    }
    else if (uVar1 == 2) {
      auVar24 = NEON_ext(auVar26,auVar26,8,1);
      auVar26 = NEON_ext(auVar24,ZEXT416((uint)fVar23),4,1);
      auVar22 = NEON_ext(auVar26,auVar24,4,1);
    }
    else {
      auVar24 = NEON_ext(auVar26,ZEXT416((uint)fVar23),4,1);
      auVar22 = NEON_ext(auVar24,auVar26,0xc,1);
    }
    puVar14 = (ulong *)((long)puVar14 + 6);
    auVar25._0_8_ = -(ulong)((uVar18 & 4) == 0);
    auVar25._8_8_ = auVar25._0_8_;
    auVar5._4_4_ = -auVar22._4_4_;
    auVar5._0_4_ = -auVar22._0_4_;
    auVar5._8_4_ = -auVar22._8_4_;
    auVar5._12_4_ = -auVar22._12_4_;
    auVar22 = auVar22 ^ (auVar22 ^ auVar5) & ~auVar25;
    puVar4 = (undefined8 *)(param_3 + uVar17 * 0x40 + 0x30 + uVar16 * 0x10);
    puVar4[1] = auVar22._8_8_;
    *puVar4 = auVar22._0_8_;
    uVar16 = uVar16 + 1;
  } while (uVar16 != 4);
  *(uint *)(param_3 + 4) = uVar15 + 4;
  return 0;
}


