/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fedd38; name: FUN_00fedd38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fedd38(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar27;
  float fVar30;
  undefined1 auVar21 [12];
  float fVar25;
  float fVar28;
  float fVar31;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar29;
  float fVar32;
  undefined1 auVar23 [16];
  float fVar33;
  undefined1 auVar24 [16];
  float fVar34;
  int iVar35;
  float fVar38;
  float fVar40;
  float fVar42;
  undefined1 auVar36 [16];
  int iVar39;
  int iVar41;
  int iVar43;
  undefined1 auVar37 [16];
  float fVar44;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float local_70;
  float fStack_6c;
  
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
  if (lVar11 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = *(long **)(lVar11 + 0x48);
  }
  lVar11 = (**(code **)(*plVar12 + 0x68))(plVar12);
  auVar5 = *(undefined1 (*) [16])(lVar11 + 0x30);
  pfVar8 = (float *)(**(code **)(*plVar12 + 0x68))(plVar12);
  uVar7 = _UNK_03caa5b8;
  uVar6 = _DAT_03caa5b0;
  cVar4 = *(char *)(param_1 + 0x25e0);
  iVar35 = *(int *)(param_1 + 0x1dd0) + -1;
  iVar2 = iVar35;
  if (cVar4 != '\0') {
    iVar2 = 0;
  }
  iVar3 = 0;
  if (cVar4 != '\0') {
    iVar3 = iVar35;
  }
  if (iVar3 != iVar2) {
    fVar34 = pfVar8[4] * pfVar8[4];
    fVar38 = pfVar8[5] * pfVar8[5];
    fVar40 = pfVar8[6] * pfVar8[6];
    fVar42 = pfVar8[7] * pfVar8[7];
    fVar44 = pfVar8[8] * pfVar8[8];
    fVar47 = pfVar8[9] * pfVar8[9];
    fVar48 = pfVar8[10] * pfVar8[10];
    fVar49 = pfVar8[0xb] * pfVar8[0xb];
    fVar18 = *pfVar8 * *pfVar8;
    fVar25 = pfVar8[1] * pfVar8[1];
    fVar28 = pfVar8[2] * pfVar8[2];
    fVar31 = pfVar8[3] * pfVar8[3];
    auVar22._0_4_ = fVar34 + fVar38;
    auVar22._4_4_ = fVar40 + fVar42;
    auVar22._8_4_ = fVar34 + fVar38;
    auVar22._12_4_ = fVar40 + fVar42;
    auVar45._0_4_ = fVar44 + fVar47;
    auVar45._4_4_ = fVar48 + fVar49;
    auVar45._8_4_ = fVar44 + fVar47;
    auVar45._12_4_ = fVar48 + fVar49;
    auVar14._0_4_ = fVar18 + fVar25;
    auVar14._4_4_ = fVar28 + fVar31;
    auVar14._8_4_ = fVar18 + fVar25;
    auVar14._12_4_ = fVar28 + fVar31;
    auVar36 = NEON_ext(auVar22,auVar22,4,1);
    auVar45 = NEON_ext(auVar45,auVar45,4,1);
    auVar22 = NEON_ext(auVar14,auVar14,4,1);
    fVar25 = SQRT(auVar36._0_4_ + auVar36._4_4_);
    lVar11 = 0;
    fVar28 = SQRT(auVar45._0_4_ + auVar45._4_4_);
    fVar18 = SQRT(auVar22._0_4_ + auVar22._4_4_);
    fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ 0x2b8cbccc) & -(uint)(ABS(fVar18) < 1e-12));
    fVar25 = (float)((uint)fVar25 ^ ((uint)fVar25 ^ 0x2b8cbccc) & -(uint)(ABS(fVar25) < 1e-12));
    local_70 = auVar5._0_4_;
    fStack_6c = auVar5._4_4_;
    fVar28 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ 0x2b8cbccc) & -(uint)(ABS(fVar28) < 1e-12));
    lVar1 = -1;
    if (cVar4 == '\0') {
      lVar1 = 1;
    }
    fVar40 = (float)DAT_03cab620 * fVar18;
    fVar44 = (float)((ulong)DAT_03cab620 >> 0x20) * fVar18;
    fVar48 = (float)DAT_03cab628 * fVar18;
    fVar18 = (float)((ulong)DAT_03cab628 >> 0x20) * fVar18;
    fVar42 = (float)_DAT_03cabe60 * fVar25;
    fVar47 = (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar25;
    fVar49 = (float)_UNK_03cabe68 * fVar25;
    fVar25 = (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar25;
    fVar31 = (float)_DAT_03caa5b0 * fVar28;
    fVar34 = (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar28;
    fVar38 = (float)_UNK_03caa5b8 * fVar28;
    fVar28 = (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar28;
    lVar13 = param_1;
    do {
      if (0.001 <= *(float *)(param_1 + ((long)iVar3 - (ulong)(cVar4 != '\0')) * 4 + 0x1cd0 +
                             lVar11 * 4)) {
        lVar9 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x70),
                             *(undefined4 *)(lVar13 + (long)iVar3 * 0x70 + 0x130));
        auVar22 = *(undefined1 (*) [16])(lVar9 + 0x30);
        lVar9 = lVar13 + (lVar1 + iVar3) * 0x70;
        fVar19 = auVar22._0_4_;
        fVar26 = auVar22._4_4_;
        fVar29 = auVar22._8_4_;
        fVar32 = auVar22._12_4_;
        lVar10 = FUN_00c4c40c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(lVar9 + 0x130));
        fVar20 = *(float *)(lVar10 + 0x30);
        fVar27 = *(float *)(lVar10 + 0x34);
        fVar30 = *(float *)(lVar10 + 0x38);
        fVar33 = *(float *)(lVar10 + 0x3c);
        auVar23._0_4_ =
             (fVar40 * fVar19 + fVar42 * fVar26 + fVar31 * fVar29 + local_70 * fVar32) -
             (fVar40 * fVar20 + fVar42 * fVar27 + fVar31 * fVar30 + local_70 * fVar33);
        auVar23._4_4_ =
             (fVar44 * fVar19 + fVar47 * fVar26 + fVar34 * fVar29 + fStack_6c * fVar32) -
             (fVar44 * fVar20 + fVar47 * fVar27 + fVar34 * fVar30 + fStack_6c * fVar33);
        auVar23._8_4_ =
             (fVar48 * fVar19 + fVar49 * fVar26 + fVar38 * fVar29 + auVar5._8_4_ * fVar32) -
             (fVar48 * fVar20 + fVar49 * fVar27 + fVar38 * fVar30 + auVar5._8_4_ * fVar33);
        auVar23._12_4_ =
             (fVar18 * fVar19 + fVar25 * fVar26 + fVar28 * fVar29 + fVar32 * 1.0) -
             (fVar18 * fVar20 + fVar25 * fVar27 + fVar28 * fVar30 + fVar33 * 1.0);
        auVar22 = NEON_ext(auVar23,auVar23,8,1);
        fVar30 = auVar22._0_4_;
        auVar15._0_4_ = auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_;
        auVar15._4_4_ = fVar30 * fVar30 + 0.0;
        auVar15._8_4_ = auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_;
        auVar15._12_4_ = fVar30 * fVar30 + 0.0;
        auVar22 = NEON_ext(auVar15,auVar15,4,1);
        auVar16._0_4_ = auVar22._0_4_ + auVar22._4_4_;
        auVar16._4_4_ = auVar22._8_4_ + auVar22._12_4_;
        auVar16._8_4_ = auVar22._0_4_ + auVar22._4_4_;
        auVar16._12_4_ = auVar22._8_4_ + auVar22._12_4_;
        auVar22 = NEON_frsqrte(auVar16,4);
        auVar50._0_4_ = auVar16._0_4_ * auVar22._0_4_;
        auVar50._4_4_ = auVar16._4_4_ * auVar22._4_4_;
        auVar50._8_4_ = auVar16._8_4_ * auVar22._8_4_;
        auVar50._12_4_ = auVar16._12_4_ * auVar22._12_4_;
        auVar45 = NEON_frsqrts(auVar22,auVar50,4);
        auVar46._0_4_ = auVar22._0_4_ * auVar45._0_4_;
        auVar46._4_4_ = auVar22._4_4_ * auVar45._4_4_;
        auVar46._8_4_ = auVar22._8_4_ * auVar45._8_4_;
        auVar46._12_4_ = auVar22._12_4_ * auVar45._12_4_;
        auVar51._0_4_ = auVar16._0_4_ * auVar46._0_4_;
        auVar51._4_4_ = auVar16._4_4_ * auVar46._4_4_;
        auVar51._8_4_ = auVar16._8_4_ * auVar46._8_4_;
        auVar51._12_4_ = auVar16._12_4_ * auVar46._12_4_;
        iVar35 = -(uint)(auVar16._0_4_ == 0.0);
        iVar39 = -(uint)(auVar16._4_4_ == 0.0);
        iVar41 = -(uint)(auVar16._8_4_ == 0.0);
        iVar43 = -(uint)(auVar16._12_4_ == 0.0);
        auVar22 = NEON_frsqrts(auVar46,auVar51,4);
        fVar20 = auVar46._0_4_ * auVar22._0_4_ * auVar23._0_4_;
        fVar27 = auVar46._4_4_ * auVar22._4_4_ * auVar23._4_4_;
        fVar30 = auVar46._8_4_ * auVar22._8_4_ * fVar30;
        fVar33 = auVar46._12_4_ * auVar22._12_4_ * 0.0;
        auVar36._8_8_ = uVar7;
        auVar36._0_8_ = uVar6;
        fVar20 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                                 CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                          ~(byte)((uint)iVar35 >> 0x10),
                                          CONCAT11((byte)((uint)fVar20 >> 8) &
                                                   ~(byte)((uint)iVar35 >> 8),
                                                   SUB41(fVar20,0) & ~(byte)iVar35)));
        auVar21._0_8_ =
             CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                      CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                               CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                        CONCAT14(SUB41(fVar27,0) & ~(byte)iVar39,fVar20))));
        auVar21[8] = SUB41(fVar30,0) & ~(byte)iVar41;
        auVar21[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar41 >> 8);
        auVar21[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
        auVar21[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
        auVar24[0xc] = SUB41(fVar33,0) & ~(byte)iVar43;
        auVar24._0_12_ = auVar21;
        auVar24[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar43 >> 8);
        auVar24[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
        auVar24[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
        fVar27 = (float)((ulong)auVar21._0_8_ >> 0x20);
        fVar27 = fVar27 * fVar27;
        fVar30 = auVar21._8_4_ * auVar21._8_4_;
        fVar33 = auVar24._12_4_ * auVar24._12_4_;
        auVar17._0_4_ = fVar20 * fVar20 + fVar27;
        auVar17._4_4_ = fVar30 + fVar33;
        auVar17._8_4_ = fVar20 * fVar20 + fVar27;
        auVar17._12_4_ = fVar30 + fVar33;
        auVar22 = NEON_ext(auVar17,auVar17,4,1);
        auVar37._0_4_ = -(uint)(auVar22._0_4_ + auVar22._4_4_ == 0.0);
        auVar37._4_4_ = auVar37._0_4_;
        auVar37._8_4_ = auVar37._0_4_;
        auVar37._12_4_ = auVar37._0_4_;
        auVar24 = auVar24 ^ (auVar24 ^ auVar36) & auVar37;
        *(long *)(lVar9 + 0xf8) = auVar24._8_8_;
        *(long *)(lVar9 + 0xf0) = auVar24._0_8_;
      }
      lVar11 = lVar11 + lVar1;
      lVar13 = lVar13 + lVar1 * 0x70;
    } while (iVar2 - iVar3 != (int)lVar11);
  }
  return;
}


