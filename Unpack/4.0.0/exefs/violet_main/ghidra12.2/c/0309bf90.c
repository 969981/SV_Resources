/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309bf90; name: FUN_0309bf90
 */


void FUN_0309bf90(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  undefined8 uVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    lVar17 = *(long *)(param_1 + 0x18);
    iVar12 = param_2;
    if (*(int *)(param_1 + 0x98) != 0) {
      iVar12 = *(int *)(*(long *)(param_1 + 0x90) + (long)param_2 * 4);
    }
    if (iVar12 != -1) {
      lVar17 = *(long *)(param_1 + 0xb0);
      param_2 = iVar12;
    }
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x20);
    lVar17 = *(long *)(param_1 + 0xd0);
  }
  piVar13 = (int *)(lVar17 + (long)param_2 * 0x10);
  iVar12 = *piVar13;
  iVar20 = *(int *)(param_1 + 0x30);
  lVar19 = (long)iVar20;
  sVar4 = (short)piVar13[2];
  lVar17 = (long)iVar12;
  lVar18 = *(long *)(param_1 + 0x28);
  if (iVar12 < iVar20) {
    iVar20 = iVar12;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar20 = *(int *)(*(long *)(param_1 + 0x70) + lVar17 * 4);
    }
    if (iVar20 == -1) {
      lVar21 = lVar18;
      iVar20 = iVar12;
    }
    else {
      lVar21 = *(long *)(param_1 + 0xc0);
    }
  }
  else {
    lVar21 = *(long *)(param_1 + 0xe0);
    iVar20 = iVar12 - iVar20;
  }
  uVar25 = 0;
  fVar26 = 0.0;
  fVar38 = 0.0;
  fVar35 = 0.0;
  fVar37 = 0.0;
  iVar5 = *(int *)(lVar21 + (long)iVar20 * 0x14);
  iVar20 = *(int *)(param_1 + 0x40);
  lVar21 = *(long *)(param_1 + 0x38);
  lVar22 = *(long *)(param_1 + 0xf0);
  fVar29 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  puVar1 = (undefined8 *)(lVar21 + (long)iVar5 * 0x10);
  if (iVar20 <= iVar5) {
    puVar1 = (undefined8 *)(lVar22 + (long)(iVar5 - iVar20) * 0x10);
  }
  uVar16 = (uint)sVar4;
  if (0 < sVar4) {
    uVar23 = (ulong)uVar16;
    fVar30 = (float)*puVar1;
    fVar32 = (float)((ulong)*puVar1 >> 0x20);
    fVar33 = (float)puVar1[1];
    fVar34 = (float)((ulong)puVar1[1] >> 0x20);
    if (*(int *)(param_1 + 0x78) == 0) {
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      piVar13 = (int *)(*(long *)(param_1 + 0xe0) + (lVar17 - lVar19) * 0x14);
      fVar38 = 0.0;
      fVar35 = 0.0;
      fVar37 = 0.0;
      lVar24 = 0;
      lVar14 = lVar17;
      do {
        iVar12 = iVar12 + 1;
        piVar15 = piVar13;
        if (lVar14 < lVar19) {
          piVar15 = (int *)(lVar18 + (lVar24 + lVar17) * 0x14);
          if (iVar12 != 0) {
            piVar15 = (int *)(*(long *)(param_1 + 0xc0) + (lVar24 + lVar17) * 0x14);
          }
        }
        iVar5 = *piVar15;
        iVar3 = piVar15[1];
        puVar1 = (undefined8 *)(lVar21 + (long)iVar5 * 0x10);
        if (iVar20 <= iVar5) {
          puVar1 = (undefined8 *)(lVar22 + (long)(iVar5 - iVar20) * 0x10);
        }
        fVar43 = (float)puVar1[1];
        fVar39 = (float)*puVar1;
        fVar41 = (float)((ulong)*puVar1 >> 0x20);
        pfVar2 = (float *)(lVar21 + (long)iVar3 * 0x10);
        if (iVar20 <= iVar3) {
          pfVar2 = (float *)(lVar22 + (long)(iVar3 - iVar20) * 0x10);
        }
        uVar23 = uVar23 - 1;
        fVar27 = fVar27 + fVar39;
        fVar28 = fVar28 + fVar41;
        fVar29 = fVar29 + fVar43;
        lVar24 = lVar24 + 1;
        fVar39 = fVar39 - fVar30;
        fVar41 = fVar41 - fVar32;
        fVar43 = fVar43 - fVar33;
        fVar44 = (float)((ulong)puVar1[1] >> 0x20) - fVar34;
        auVar47._4_4_ = fVar41;
        auVar47._0_4_ = fVar39;
        auVar47._8_4_ = fVar43;
        auVar47._12_4_ = fVar44;
        auVar48._4_4_ = fVar41;
        auVar48._0_4_ = fVar39;
        auVar48._8_4_ = fVar43;
        auVar48._12_4_ = fVar44;
        auVar47 = NEON_ext(auVar47,auVar48,4,1);
        auVar46._0_4_ = *pfVar2 - fVar30;
        auVar46._4_4_ = pfVar2[1] - fVar32;
        auVar46._8_4_ = pfVar2[2] - fVar33;
        auVar46._12_4_ = pfVar2[3] - fVar34;
        auVar48 = NEON_ext(auVar46,auVar46,4,1);
        piVar13 = piVar13 + 5;
        lVar14 = lVar14 + 1;
        fVar40 = fVar39 * auVar48._0_4_ - auVar47._0_4_ * auVar46._0_4_;
        fVar42 = fVar41 * auVar48._4_4_ - auVar47._4_4_ * auVar46._4_4_;
        fVar39 = fVar43 * auVar46._0_4_ - fVar39 * auVar46._8_4_;
        fVar41 = fVar44 * auVar46._4_4_ - fVar41 * auVar46._12_4_;
        auVar10._4_4_ = fVar42;
        auVar10._0_4_ = fVar40;
        auVar10._8_4_ = fVar39;
        auVar10._12_4_ = fVar41;
        auVar11._4_4_ = fVar42;
        auVar11._0_4_ = fVar40;
        auVar11._8_4_ = fVar39;
        auVar11._12_4_ = fVar41;
        auVar47 = NEON_ext(auVar10,auVar11,4,1);
        fVar35 = fVar35 + auVar47._0_4_;
        fVar37 = fVar37 + auVar47._4_4_;
        fVar38 = fVar38 + fVar40;
      } while (uVar23 != 0);
    }
    else {
      fVar27 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      piVar13 = (int *)(*(long *)(param_1 + 0xe0) + (lVar17 - lVar19) * 0x14);
      fVar38 = 0.0;
      fVar35 = 0.0;
      fVar37 = 0.0;
      lVar24 = 0;
      lVar14 = lVar17;
      do {
        piVar15 = piVar13;
        if (lVar14 < lVar19) {
          iVar12 = *(int *)(*(long *)(param_1 + 0x70) + lVar14 * 4);
          if (iVar12 == -1) {
            piVar15 = (int *)(lVar18 + (lVar24 + lVar17) * 0x14);
          }
          else {
            piVar15 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar12 * 0x14);
          }
        }
        iVar12 = *piVar15;
        iVar5 = piVar15[1];
        puVar1 = (undefined8 *)(lVar21 + (long)iVar12 * 0x10);
        if (iVar20 <= iVar12) {
          puVar1 = (undefined8 *)(lVar22 + (long)(iVar12 - iVar20) * 0x10);
        }
        fVar43 = (float)puVar1[1];
        fVar39 = (float)*puVar1;
        fVar41 = (float)((ulong)*puVar1 >> 0x20);
        pfVar2 = (float *)(lVar21 + (long)iVar5 * 0x10);
        if (iVar20 <= iVar5) {
          pfVar2 = (float *)(lVar22 + (long)(iVar5 - iVar20) * 0x10);
        }
        uVar23 = uVar23 - 1;
        fVar27 = fVar27 + fVar39;
        fVar28 = fVar28 + fVar41;
        fVar29 = fVar29 + fVar43;
        lVar24 = lVar24 + 1;
        fVar39 = fVar39 - fVar30;
        fVar41 = fVar41 - fVar32;
        fVar43 = fVar43 - fVar33;
        fVar44 = (float)((ulong)puVar1[1] >> 0x20) - fVar34;
        auVar6._4_4_ = fVar41;
        auVar6._0_4_ = fVar39;
        auVar6._8_4_ = fVar43;
        auVar6._12_4_ = fVar44;
        auVar7._4_4_ = fVar41;
        auVar7._0_4_ = fVar39;
        auVar7._8_4_ = fVar43;
        auVar7._12_4_ = fVar44;
        auVar47 = NEON_ext(auVar6,auVar7,4,1);
        auVar45._0_4_ = *pfVar2 - fVar30;
        auVar45._4_4_ = pfVar2[1] - fVar32;
        auVar45._8_4_ = pfVar2[2] - fVar33;
        auVar45._12_4_ = pfVar2[3] - fVar34;
        auVar48 = NEON_ext(auVar45,auVar45,4,1);
        piVar13 = piVar13 + 5;
        lVar14 = lVar14 + 1;
        fVar40 = fVar39 * auVar48._0_4_ - auVar47._0_4_ * auVar45._0_4_;
        fVar42 = fVar41 * auVar48._4_4_ - auVar47._4_4_ * auVar45._4_4_;
        fVar39 = fVar43 * auVar45._0_4_ - fVar39 * auVar45._8_4_;
        fVar41 = fVar44 * auVar45._4_4_ - fVar41 * auVar45._12_4_;
        auVar8._4_4_ = fVar42;
        auVar8._0_4_ = fVar40;
        auVar8._8_4_ = fVar39;
        auVar8._12_4_ = fVar41;
        auVar9._4_4_ = fVar42;
        auVar9._0_4_ = fVar40;
        auVar9._8_4_ = fVar39;
        auVar9._12_4_ = fVar41;
        auVar47 = NEON_ext(auVar8,auVar9,4,1);
        fVar35 = fVar35 + auVar47._0_4_;
        fVar37 = fVar37 + auVar47._4_4_;
        fVar38 = fVar38 + fVar40;
      } while (uVar23 != 0);
    }
  }
  fVar30 = fVar38 * fVar38 + fVar35 * fVar35 + fVar37 * fVar37;
  if (fVar30 != 0.0) {
    fVar30 = SQRT(fVar30);
    uVar25 = CONCAT44(fVar37 / SQRT(fVar38 * fVar38 + fVar35 * fVar35 + fVar37 * fVar37),
                      fVar35 / fVar30);
    fVar26 = fVar38 / fVar30;
  }
  uVar36 = NEON_fmov(0x3f800000,4);
  uVar31 = NEON_scvtf(CONCAT44(uVar16,uVar16),4);
  fVar35 = (float)uVar36 / (float)uVar31;
  param_3[1] = CONCAT44(-(fVar35 * fVar27 * (float)uVar25 +
                          ((float)((ulong)uVar36 >> 0x20) / (float)((ulong)uVar31 >> 0x20)) * fVar28
                          * (float)((ulong)uVar25 >> 0x20) + fVar35 * fVar29 * fVar26),fVar26);
  *param_3 = uVar25;
  return;
}


