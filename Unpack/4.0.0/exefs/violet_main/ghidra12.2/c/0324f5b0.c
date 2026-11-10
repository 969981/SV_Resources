/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324f5b0; name: FUN_0324f5b0
 */


bool FUN_0324f5b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  fVar12 = (float)*param_4;
  if (fVar12 < 0.0) {
    bVar10 = false;
  }
  else {
    fVar29 = (float)param_1[1];
    fVar31 = (float)((ulong)param_1[1] >> 0x20);
    fVar26 = (float)*param_1;
    fVar27 = (float)((ulong)*param_1 >> 0x20);
    fVar16 = (float)*param_2;
    fVar11 = fVar26 - fVar16;
    fVar18 = (float)((ulong)*param_2 >> 0x20);
    fVar13 = fVar27 - fVar18;
    fVar20 = (float)param_2[1];
    fVar14 = fVar29 - fVar20;
    fVar22 = (float)((ulong)param_2[1] >> 0x20);
    fVar15 = fVar31 - fVar22;
    auVar42._4_4_ = fVar13;
    auVar42._0_4_ = fVar11;
    auVar42._8_4_ = fVar14;
    auVar42._12_4_ = fVar15;
    auVar44._4_4_ = fVar13;
    auVar44._0_4_ = fVar11;
    auVar44._8_4_ = fVar14;
    auVar44._12_4_ = fVar15;
    auVar42 = NEON_ext(auVar42,auVar44,4,1);
    fVar17 = (float)*param_3;
    fVar28 = fVar26 - fVar17;
    fVar19 = (float)((ulong)*param_3 >> 0x20);
    fVar41 = fVar27 - fVar19;
    uVar32 = SUB41(fVar41,0);
    uVar33 = (undefined1)((uint)fVar41 >> 8);
    uVar35 = (undefined1)((uint)fVar41 >> 0x10);
    uVar37 = (undefined1)((uint)fVar41 >> 0x18);
    fVar21 = (float)param_3[1];
    fVar39 = fVar29 - fVar21;
    fVar30 = (float)((ulong)param_3[1] >> 0x20);
    fVar40 = fVar31 - fVar30;
    auVar4[4] = uVar32;
    auVar4._0_4_ = fVar28;
    auVar4[5] = uVar33;
    auVar4[6] = uVar35;
    auVar4[7] = uVar37;
    auVar4._8_4_ = fVar39;
    auVar4._12_4_ = fVar40;
    auVar5[4] = uVar32;
    auVar5._0_4_ = fVar28;
    auVar5[5] = uVar33;
    auVar5[6] = uVar35;
    auVar5[7] = uVar37;
    auVar5._8_4_ = fVar39;
    auVar5._12_4_ = fVar40;
    auVar44 = NEON_ext(auVar4,auVar5,4,1);
    fVar26 = fVar16 - fVar26;
    fVar27 = fVar18 - fVar27;
    fVar29 = fVar20 - fVar29;
    fVar31 = fVar22 - fVar31;
    auVar43._0_4_ = fVar16 - fVar17;
    auVar43._4_4_ = fVar18 - fVar19;
    auVar43._8_4_ = fVar20 - fVar21;
    auVar43._12_4_ = fVar22 - fVar30;
    auVar45 = NEON_ext(auVar43,auVar43,4,1);
    fVar22 = fVar11 * auVar44._0_4_ - fVar28 * auVar42._0_4_;
    fVar41 = fVar13 * auVar44._4_4_ - fVar41 * auVar42._4_4_;
    uVar34 = (undefined1)((uint)fVar41 >> 8);
    uVar36 = (undefined1)((uint)fVar41 >> 0x10);
    uVar38 = (undefined1)((uint)fVar41 >> 0x18);
    fVar39 = fVar14 * fVar28 - fVar39 * fVar11;
    fVar40 = fVar15 * (float)(CONCAT17(uVar37,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(uVar32,fVar28
                                                                                      )))) >> 0x20)
             - fVar40 * fVar13;
    auVar1._4_4_ = fVar27;
    auVar1._0_4_ = fVar26;
    auVar1._8_4_ = fVar29;
    auVar1._12_4_ = fVar31;
    auVar2._4_4_ = fVar27;
    auVar2._0_4_ = fVar26;
    auVar2._8_4_ = fVar29;
    auVar2._12_4_ = fVar31;
    auVar42 = NEON_ext(auVar1,auVar2,4,1);
    fVar15 = fVar26 * auVar45._0_4_ - auVar43._0_4_ * auVar42._0_4_;
    fVar28 = fVar27 * auVar45._4_4_ - auVar43._4_4_ * auVar42._4_4_;
    fVar30 = fVar29 * auVar43._0_4_ - auVar43._8_4_ * fVar26;
    fVar26 = fVar31 * auVar43._4_4_ - auVar43._12_4_ * fVar27;
    auVar6[4] = SUB41(fVar41,0);
    auVar6._0_4_ = fVar22;
    auVar6[5] = uVar34;
    auVar6[6] = uVar36;
    auVar6[7] = uVar38;
    auVar6._8_4_ = fVar39;
    auVar6._12_4_ = fVar40;
    auVar7[4] = SUB41(fVar41,0);
    auVar7._0_4_ = fVar22;
    auVar7[5] = uVar34;
    auVar7[6] = uVar36;
    auVar7[7] = uVar38;
    auVar7._8_4_ = fVar39;
    auVar7._12_4_ = fVar40;
    auVar42 = NEON_ext(auVar6,auVar7,4,1);
    fVar41 = auVar42._0_4_ * auVar42._0_4_;
    fVar27 = auVar42._4_4_ * auVar42._4_4_;
    auVar45._4_4_ = fVar28;
    auVar45._0_4_ = fVar15;
    auVar45._8_4_ = fVar30;
    auVar45._12_4_ = fVar26;
    auVar3._4_4_ = fVar28;
    auVar3._0_4_ = fVar15;
    auVar3._8_4_ = fVar30;
    auVar3._12_4_ = fVar26;
    auVar42 = NEON_ext(auVar45,auVar3,4,1);
    fVar30 = auVar42._0_4_ * auVar42._0_4_;
    fVar26 = auVar42._4_4_ * auVar42._4_4_;
    iVar8 = -(uint)(fVar41 + fVar27 + fVar22 * fVar22 < fVar12);
    fVar28 = (float)((ulong)*param_4 >> 0x20);
    iVar9 = -(uint)(fVar41 + fVar27 + fVar22 * fVar22 < fVar28);
    iVar23 = -(uint)(fVar30 + fVar26 + fVar15 * fVar15 < fVar12);
    iVar25 = -(uint)(fVar30 + fVar26 + fVar15 * fVar15 < fVar28);
    uVar24 = CONCAT13((byte)((uint)iVar23 >> 0x18) | (byte)((uint)iVar8 >> 0x18),
                      CONCAT12((byte)((uint)iVar23 >> 0x10) | (byte)((uint)iVar8 >> 0x10),
                               CONCAT11((byte)((uint)iVar23 >> 8) | (byte)((uint)iVar8 >> 8),
                                        (byte)iVar23 | (byte)iVar8)));
    if (((uint)(CONCAT17((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar9 >> 0x18),
                         CONCAT16((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar9 >> 0x10),
                                  CONCAT15((byte)((uint)iVar25 >> 8) | (byte)((uint)iVar9 >> 8),
                                           CONCAT14((byte)iVar25 | (byte)iVar9,uVar24)))) >> 0x20) &
        uVar24) == 0) {
      fVar17 = fVar17 - fVar16;
      fVar19 = fVar19 - fVar18;
      fVar21 = fVar21 - fVar20;
      fVar12 = fVar11 * fVar17 + fVar13 * fVar19 + fVar14 * fVar21;
      bVar10 = (fVar11 * fVar11 + fVar13 * fVar13 + fVar14 * fVar14) *
               (fVar17 * fVar17 + fVar19 * fVar19 + fVar21 * fVar21) - fVar12 * fVar12 == 0.0;
    }
    else {
      bVar10 = true;
    }
  }
  return bVar10;
}


