/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bb8314; name: FUN_02bb8314
 */


undefined1  [16] FUN_02bb8314(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar8 [16];
  int iVar14;
  int iVar15;
  undefined1 auVar13 [16];
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (*param_2 == 0x6173fbf152b457ef) {
    iVar1 = strcmp((char *)param_2[1],"atm_moon_direction");
    uVar7 = 0;
    uVar11 = 0;
    if (iVar1 != 0) goto LAB_02bb8400;
    lVar2 = *(long *)(param_1 + 0x30);
    fVar6 = *(float *)(lVar2 + 0xc4c);
    pfVar4 = (float *)(lVar2 + 0xc50);
    pfVar3 = (float *)(lVar2 + 0xc54);
  }
  else {
    if (*param_2 != 0xda15f3b30456f6c) {
      uVar7 = 0;
      uVar11 = 0;
      goto LAB_02bb8400;
    }
    iVar1 = strcmp((char *)param_2[1],"atm_sun_direction");
    uVar7 = 0;
    uVar11 = 0;
    if (iVar1 != 0) goto LAB_02bb8400;
    lVar2 = *(long *)(param_1 + 0x30);
    fVar6 = *(float *)(lVar2 + 0xbbc);
    pfVar4 = (float *)(lVar2 + 0xbc0);
    pfVar3 = (float *)(lVar2 + 0xbc4);
  }
  fVar9 = *pfVar4;
  fVar10 = *pfVar3;
  auVar13._0_4_ = fVar6 * fVar6 + fVar9 * fVar9;
  auVar13._4_4_ = fVar10 * fVar10 + 0.0;
  auVar13._8_4_ = fVar6 * fVar6 + fVar9 * fVar9;
  auVar13._12_4_ = fVar10 * fVar10 + 0.0;
  auVar13 = NEON_ext(auVar13,auVar13,4,1);
  auVar5._0_4_ = auVar13._0_4_ + auVar13._4_4_;
  auVar5._4_4_ = auVar13._8_4_ + auVar13._12_4_;
  auVar5._8_4_ = auVar13._0_4_ + auVar13._4_4_;
  auVar5._12_4_ = auVar13._8_4_ + auVar13._12_4_;
  auVar13 = NEON_frsqrte(auVar5,4);
  auVar18._0_4_ = auVar5._0_4_ * auVar13._0_4_;
  auVar18._4_4_ = auVar5._4_4_ * auVar13._4_4_;
  auVar18._8_4_ = auVar5._8_4_ * auVar13._8_4_;
  auVar18._12_4_ = auVar5._12_4_ * auVar13._12_4_;
  auVar18 = NEON_frsqrts(auVar13,auVar18,4);
  auVar17._0_4_ = auVar13._0_4_ * auVar18._0_4_;
  auVar17._4_4_ = auVar13._4_4_ * auVar18._4_4_;
  auVar17._8_4_ = auVar13._8_4_ * auVar18._8_4_;
  auVar17._12_4_ = auVar13._12_4_ * auVar18._12_4_;
  auVar19._0_4_ = auVar5._0_4_ * auVar17._0_4_;
  auVar19._4_4_ = auVar5._4_4_ * auVar17._4_4_;
  auVar19._8_4_ = auVar5._8_4_ * auVar17._8_4_;
  auVar19._12_4_ = auVar5._12_4_ * auVar17._12_4_;
  iVar1 = -(uint)(auVar5._0_4_ == 0.0);
  iVar14 = -(uint)(auVar5._4_4_ == 0.0);
  iVar15 = -(uint)(auVar5._8_4_ == 0.0);
  iVar16 = -(uint)(auVar5._12_4_ == 0.0);
  auVar13 = NEON_frsqrts(auVar17,auVar19,4);
  fVar6 = fVar6 * auVar17._0_4_ * auVar13._0_4_;
  fVar9 = fVar9 * auVar17._4_4_ * auVar13._4_4_;
  fVar10 = fVar10 * auVar17._8_4_ * auVar13._8_4_;
  fVar12 = auVar17._12_4_ * auVar13._12_4_ * 0.0;
  uVar7 = CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                   CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                            CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                     CONCAT14(SUB41(fVar9,0) & ~(byte)iVar14,
                                              CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                                       ~(byte)((uint)iVar1 >> 0x18),
                                                       CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                                ~(byte)((uint)iVar1 >> 0x10),
                                                                CONCAT11((byte)((uint)fVar6 >> 8) &
                                                                         ~(byte)((uint)iVar1 >> 8),
                                                                         SUB41(fVar6,0) &
                                                                         ~(byte)iVar1)))))));
  uVar11 = CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                    CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                             CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                      CONCAT14(SUB41(fVar12,0) & ~(byte)iVar16,
                                               CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                                        ~(byte)((uint)iVar15 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                                 ~(byte)((uint)iVar15 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar10 >> 8)
                                                                          & ~(byte)((uint)iVar15 >>
                                                                                   8),
                                                                          SUB41(fVar10,0) &
                                                                          ~(byte)iVar15)))))));
LAB_02bb8400:
  auVar8._8_8_ = uVar11;
  auVar8._0_8_ = uVar7;
  return auVar8;
}


