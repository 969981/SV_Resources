/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030963b0; name: FUN_030963b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_030963b0(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  byte bVar35;
  byte bVar36;
  byte bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar21 = *(long *)(param_1 + 0x18);
    iVar17 = param_2;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar17 = *(int *)(*(long *)(param_1 + 0x90) + (long)param_2 * 4);
    }
    if (iVar17 != -1) {
      lVar21 = *(long *)(param_1 + 0xb0);
      param_2 = iVar17;
    }
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x20);
    lVar21 = *(long *)(param_1 + 0xd0);
  }
  piVar18 = (int *)(lVar21 + (long)param_2 * 0x10);
  iVar17 = *piVar18;
  iVar24 = *(int *)(param_1 + 0x30);
  lVar23 = (long)iVar24;
  sVar4 = (short)piVar18[2];
  lVar21 = (long)iVar17;
  lVar22 = *(long *)(param_1 + 0x28);
  if (iVar17 < iVar24) {
    iVar24 = iVar17;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar24 = *(int *)(*(long *)(param_1 + 0x70) + lVar21 * 4);
    }
    if (iVar24 == -1) {
      lVar25 = lVar22;
      iVar24 = iVar17;
    }
    else {
      lVar25 = *(long *)(param_1 + 0xc0);
    }
  }
  else {
    lVar25 = *(long *)(param_1 + 0xe0);
    iVar24 = iVar17 - iVar24;
  }
  iVar5 = *(int *)(lVar25 + (long)iVar24 * 0x14);
  iVar24 = *(int *)(param_1 + 0x40);
  lVar25 = *(long *)(param_1 + 0x38);
  lVar26 = *(long *)(param_1 + 0xf0);
  puVar1 = (undefined8 *)(lVar25 + (long)iVar5 * 0x10);
  if (iVar24 <= iVar5) {
    puVar1 = (undefined8 *)(lVar26 + (long)(iVar5 - iVar24) * 0x10);
  }
  if (sVar4 < 1) {
    auVar47 = ZEXT816(0);
  }
  else {
    fVar32 = (float)puVar1[1];
    fVar33 = (float)((ulong)puVar1[1] >> 0x20);
    fVar29 = (float)*puVar1;
    fVar30 = (float)((ulong)*puVar1 >> 0x20);
    uVar27 = (long)sVar4 & 0xffffffff;
    if (*(int *)(param_1 + 0x78) == 0) {
      piVar18 = (int *)(*(long *)(param_1 + 0xe0) + (lVar21 - lVar23) * 0x14);
      lVar28 = 0;
      lVar19 = lVar21;
      auVar34 = ZEXT816(0);
      do {
        iVar17 = iVar17 + 1;
        piVar20 = piVar18;
        if (lVar19 < lVar23) {
          piVar20 = (int *)(lVar22 + (lVar28 + lVar21) * 0x14);
          if (iVar17 != 0) {
            piVar20 = (int *)(*(long *)(param_1 + 0xc0) + (lVar28 + lVar21) * 0x14);
          }
        }
        iVar5 = *piVar20;
        iVar3 = piVar20[1];
        puVar1 = (undefined8 *)(lVar25 + (long)iVar5 * 0x10);
        if (iVar24 <= iVar5) {
          puVar1 = (undefined8 *)(lVar26 + (long)(iVar5 - iVar24) * 0x10);
        }
        pfVar2 = (float *)(lVar25 + (long)iVar3 * 0x10);
        if (iVar24 <= iVar3) {
          pfVar2 = (float *)(lVar26 + (long)(iVar3 - iVar24) * 0x10);
        }
        uVar27 = uVar27 - 1;
        fVar38 = (float)*puVar1 - fVar29;
        fVar40 = (float)((ulong)*puVar1 >> 0x20) - fVar30;
        fVar42 = (float)puVar1[1] - fVar32;
        fVar43 = (float)((ulong)puVar1[1] >> 0x20) - fVar33;
        auVar48._4_4_ = fVar40;
        auVar48._0_4_ = fVar38;
        auVar48._8_4_ = fVar42;
        auVar48._12_4_ = fVar43;
        auVar14._4_4_ = fVar40;
        auVar14._0_4_ = fVar38;
        auVar14._8_4_ = fVar42;
        auVar14._12_4_ = fVar43;
        auVar47 = NEON_ext(auVar48,auVar14,4,1);
        auVar46._0_4_ = *pfVar2 - fVar29;
        auVar46._4_4_ = pfVar2[1] - fVar30;
        auVar46._8_4_ = pfVar2[2] - fVar32;
        auVar46._12_4_ = pfVar2[3] - fVar33;
        auVar48 = NEON_ext(auVar46,auVar46,4,1);
        lVar28 = lVar28 + 1;
        piVar18 = piVar18 + 5;
        lVar19 = lVar19 + 1;
        fVar39 = fVar38 * auVar48._0_4_ - auVar47._0_4_ * auVar46._0_4_;
        fVar41 = fVar40 * auVar48._4_4_ - auVar47._4_4_ * auVar46._4_4_;
        fVar38 = fVar42 * auVar46._0_4_ - fVar38 * auVar46._8_4_;
        fVar40 = fVar43 * auVar46._4_4_ - fVar40 * auVar46._12_4_;
        auVar15._4_4_ = fVar41;
        auVar15._0_4_ = fVar39;
        auVar15._8_4_ = fVar38;
        auVar15._12_4_ = fVar40;
        auVar16._4_4_ = fVar41;
        auVar16._0_4_ = fVar39;
        auVar16._8_4_ = fVar38;
        auVar16._12_4_ = fVar40;
        auVar48 = NEON_ext(auVar15,auVar16,4,1);
        auVar47._0_4_ = auVar34._0_4_ + auVar48._0_4_;
        auVar47._4_4_ = auVar34._4_4_ + auVar48._4_4_;
        auVar47._8_4_ = auVar34._8_4_ + fVar39;
        auVar47._12_4_ = auVar34._12_4_ + 0.0;
        auVar34 = auVar47;
      } while (uVar27 != 0);
    }
    else {
      piVar18 = (int *)(*(long *)(param_1 + 0xe0) + (lVar21 - lVar23) * 0x14);
      lVar28 = 0;
      lVar19 = lVar21;
      auVar34 = ZEXT816(0);
      do {
        piVar20 = piVar18;
        if (lVar19 < lVar23) {
          iVar17 = *(int *)(*(long *)(param_1 + 0x70) + lVar19 * 4);
          if (iVar17 == -1) {
            piVar20 = (int *)(lVar22 + (lVar28 + lVar21) * 0x14);
          }
          else {
            piVar20 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar17 * 0x14);
          }
        }
        iVar17 = *piVar20;
        iVar5 = piVar20[1];
        puVar1 = (undefined8 *)(lVar25 + (long)iVar17 * 0x10);
        if (iVar24 <= iVar17) {
          puVar1 = (undefined8 *)(lVar26 + (long)(iVar17 - iVar24) * 0x10);
        }
        pfVar2 = (float *)(lVar25 + (long)iVar5 * 0x10);
        if (iVar24 <= iVar5) {
          pfVar2 = (float *)(lVar26 + (long)(iVar5 - iVar24) * 0x10);
        }
        uVar27 = uVar27 - 1;
        fVar38 = (float)*puVar1 - fVar29;
        fVar40 = (float)((ulong)*puVar1 >> 0x20) - fVar30;
        fVar42 = (float)puVar1[1] - fVar32;
        fVar43 = (float)((ulong)puVar1[1] >> 0x20) - fVar33;
        auVar10._4_4_ = fVar40;
        auVar10._0_4_ = fVar38;
        auVar10._8_4_ = fVar42;
        auVar10._12_4_ = fVar43;
        auVar11._4_4_ = fVar40;
        auVar11._0_4_ = fVar38;
        auVar11._8_4_ = fVar42;
        auVar11._12_4_ = fVar43;
        auVar47 = NEON_ext(auVar10,auVar11,4,1);
        auVar45._0_4_ = *pfVar2 - fVar29;
        auVar45._4_4_ = pfVar2[1] - fVar30;
        auVar45._8_4_ = pfVar2[2] - fVar32;
        auVar45._12_4_ = pfVar2[3] - fVar33;
        auVar48 = NEON_ext(auVar45,auVar45,4,1);
        lVar28 = lVar28 + 1;
        piVar18 = piVar18 + 5;
        lVar19 = lVar19 + 1;
        fVar39 = fVar38 * auVar48._0_4_ - auVar47._0_4_ * auVar45._0_4_;
        fVar41 = fVar40 * auVar48._4_4_ - auVar47._4_4_ * auVar45._4_4_;
        fVar38 = fVar42 * auVar45._0_4_ - fVar38 * auVar45._8_4_;
        fVar40 = fVar43 * auVar45._4_4_ - fVar40 * auVar45._12_4_;
        auVar12._4_4_ = fVar41;
        auVar12._0_4_ = fVar39;
        auVar12._8_4_ = fVar38;
        auVar12._12_4_ = fVar40;
        auVar13._4_4_ = fVar41;
        auVar13._0_4_ = fVar39;
        auVar13._8_4_ = fVar38;
        auVar13._12_4_ = fVar40;
        auVar48 = NEON_ext(auVar12,auVar13,4,1);
        auVar47._0_4_ = auVar34._0_4_ + auVar48._0_4_;
        auVar47._4_4_ = auVar34._4_4_ + auVar48._4_4_;
        auVar47._8_4_ = auVar34._8_4_ + fVar39;
        auVar47._12_4_ = auVar34._12_4_ + 0.0;
        auVar34 = auVar47;
      } while (uVar27 != 0);
    }
  }
  fVar33 = auVar47._0_4_;
  fVar29 = auVar47._4_4_;
  fVar38 = auVar47._8_4_;
  fVar39 = fVar33 * fVar33 + fVar29 * fVar29 + fVar38 * fVar38;
  fVar40 = fVar33 * fVar33 + fVar29 * fVar29 + fVar38 * fVar38;
  uVar6 = (uint)(0.0 < fVar39);
  iVar17 = -uVar6;
  uVar7 = (uint)(0.0 < fVar40);
  iVar24 = -uVar7;
  bVar35 = (byte)((uint)iVar24 >> 8);
  bVar36 = (byte)((uint)iVar24 >> 0x10);
  bVar37 = (byte)((uint)iVar24 >> 0x18);
  fVar40 = SQRT(fVar40);
  fVar30 = 0.0;
  fVar32 = 0.0;
  fVar41 = 0.0;
  fVar42 = 0.0;
  if (fVar39 != 0.0) {
    uVar44 = NEON_fmov(0x3f800000,4);
    fVar41 = (float)uVar44 / SQRT(fVar39);
    fVar42 = (float)((ulong)uVar44 >> 0x20) / fVar40;
  }
  if (CONCAT13(bVar37 | (byte)((uint)iVar17 >> 0x18),
               CONCAT12(bVar36 | (byte)((uint)iVar17 >> 0x10),
                        CONCAT11(bVar35 | (byte)((uint)iVar17 >> 8),(byte)iVar24 | (byte)iVar17)))
      == 0) {
    auVar34._8_8_ = _UNK_03caa5b8;
    auVar34._0_8_ = _DAT_03caa5b0;
  }
  else {
    fVar29 = fVar29 * fVar42;
    auVar9[4] = SUB41(fVar29,0);
    auVar9._0_4_ = fVar33 * fVar41;
    auVar9[5] = (char)((uint)fVar29 >> 8);
    auVar9[6] = (char)((uint)fVar29 >> 0x10);
    auVar9[7] = (char)((uint)fVar29 >> 0x18);
    auVar9._8_4_ = fVar38 * fVar41;
    auVar9._12_4_ = auVar47._12_4_ * fVar42;
    auVar8._4_4_ = (int)(uVar7 * -0x80000000) >> 0x1f;
    auVar8._0_4_ = (int)(uVar6 * -0x80000000) >> 0x1f;
    auVar8._8_4_ = (int)(uVar6 * -0x80000000) >> 0x1f;
    auVar8._12_4_ =
         ((int)(CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14((byte)iVar24,iVar17)))) >>
               0x20) << 0x1f) >> 0x1f;
    auVar34 = auVar47 ^ (auVar47 ^ auVar9) & auVar8;
    fVar30 = SQRT(fVar39) * 0.5;
    fVar32 = fVar40 * 0.5;
  }
  param_3[1] = auVar34._8_8_;
  *param_3 = auVar34._0_8_;
  auVar31._4_4_ = fVar32;
  auVar31._0_4_ = fVar30;
  auVar31._8_8_ = 0;
  return auVar31;
}


