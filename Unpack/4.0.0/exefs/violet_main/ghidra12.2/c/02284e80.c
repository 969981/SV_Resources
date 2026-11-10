/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02284e80; name: FUN_02284e80
 */


void FUN_02284e80(undefined8 *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  int iVar8;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar9 [16];
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_60;
  ulong uStack_58;
  undefined4 local_50 [4];
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float local_28;
  
  fVar2 = (float)param_1[4] - *param_2;
  fVar3 = (float)((ulong)param_1[4] >> 0x20) - param_2[1];
  fVar4 = (float)param_1[5] - param_2[2];
  fVar5 = (float)((ulong)param_1[5] >> 0x20) - param_2[3];
  fVar10 = (float)(CONCAT17((char)((uint)fVar3 >> 0x18),
                            CONCAT16((char)((uint)fVar3 >> 0x10),
                                     CONCAT15((char)((uint)fVar3 >> 8),
                                              CONCAT14(SUB41(fVar3,0),fVar2)))) >> 0x20);
  fVar10 = fVar10 * fVar10;
  auVar9._0_4_ = fVar2 * fVar2 + fVar10;
  auVar9._4_4_ = fVar4 * fVar4 + 0.0;
  auVar9._8_4_ = fVar2 * fVar2 + fVar10;
  auVar9._12_4_ = fVar4 * fVar4 + 0.0;
  auVar9 = NEON_ext(auVar9,auVar9,4,1);
  if (SQRT(auVar9._0_4_ + auVar9._4_4_) <= param_2[4]) {
    auVar6._0_4_ = fVar2 * fVar2 + fVar3 * fVar3;
    auVar6._4_4_ = fVar4 * fVar4 + fVar5 * fVar5;
    auVar6._8_4_ = fVar2 * fVar2 + fVar3 * fVar3;
    auVar6._12_4_ = fVar4 * fVar4 + fVar5 * fVar5;
    auVar9 = NEON_ext(auVar6,auVar6,4,1);
    local_50[0] = 1;
    auVar7._0_4_ = auVar9._0_4_ + auVar9._4_4_;
    auVar7._4_4_ = auVar9._8_4_ + auVar9._12_4_;
    auVar7._8_4_ = auVar9._0_4_ + auVar9._4_4_;
    auVar7._12_4_ = auVar9._8_4_ + auVar9._12_4_;
    auVar9 = NEON_frsqrte(auVar7,4);
    auVar15._0_4_ = auVar7._0_4_ * auVar9._0_4_;
    auVar15._4_4_ = auVar7._4_4_ * auVar9._4_4_;
    auVar15._8_4_ = auVar7._8_4_ * auVar9._8_4_;
    auVar15._12_4_ = auVar7._12_4_ * auVar9._12_4_;
    auVar16 = NEON_frsqrts(auVar9,auVar15,4);
    auVar14._0_4_ = auVar9._0_4_ * auVar16._0_4_;
    auVar14._4_4_ = auVar9._4_4_ * auVar16._4_4_;
    auVar14._8_4_ = auVar9._8_4_ * auVar16._8_4_;
    auVar14._12_4_ = auVar9._12_4_ * auVar16._12_4_;
    auVar17._0_4_ = auVar7._0_4_ * auVar14._0_4_;
    auVar17._4_4_ = auVar7._4_4_ * auVar14._4_4_;
    auVar17._8_4_ = auVar7._8_4_ * auVar14._8_4_;
    auVar17._12_4_ = auVar7._12_4_ * auVar14._12_4_;
    iVar8 = -(uint)(auVar7._0_4_ == 0.0);
    iVar11 = -(uint)(auVar7._4_4_ == 0.0);
    iVar12 = -(uint)(auVar7._8_4_ == 0.0);
    iVar13 = -(uint)(auVar7._12_4_ == 0.0);
    auVar9 = NEON_frsqrts(auVar14,auVar17,4);
    fVar2 = fVar2 * auVar14._0_4_ * auVar9._0_4_;
    fVar3 = fVar3 * auVar14._4_4_ * auVar9._4_4_;
    fVar4 = fVar4 * auVar14._8_4_ * auVar9._8_4_;
    fVar5 = fVar5 * auVar14._12_4_ * auVar9._12_4_;
    uStack_38 = CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                         CONCAT16((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                  CONCAT15((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                           CONCAT14(SUB41(fVar5,0) & ~(byte)iVar13,
                                                    CONCAT13((byte)((uint)fVar4 >> 0x18) &
                                                             ~(byte)((uint)iVar12 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar4 >> 0x10) &
                                                                      ~(byte)((uint)iVar12 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar4 >>
                                                                                     8) &
                                                                               ~(byte)((uint)iVar12
                                                                                      >> 8),
                                                                               SUB41(fVar4,0) &
                                                                               ~(byte)iVar12)))))));
    local_40 = CONCAT17((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                        CONCAT16((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                 CONCAT15((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                          CONCAT14(SUB41(fVar3,0) & ~(byte)iVar11,
                                                   CONCAT13((byte)((uint)fVar2 >> 0x18) &
                                                            ~(byte)((uint)iVar8 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                                                     ~(byte)((uint)iVar8 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar2 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar8 >>
                                                                                     8),
                                                                              SUB41(fVar2,0) &
                                                                              ~(byte)iVar8)))))));
    local_28 = param_2[6];
    local_30 = param_2[5];
    fStack_2c = param_2[7];
    FUN_02284f74((char)*(undefined4 *)(param_1 + 3),param_1[2],local_50);
    auVar16[1] = extraout_var;
    auVar16[0] = extraout_b0;
    auVar16[2] = extraout_var_00;
    auVar16[3] = extraout_var_01;
    auVar16[4] = extraout_var_02;
    auVar16[5] = extraout_var_03;
    auVar16[6] = extraout_var_04;
    auVar16[7] = extraout_var_05;
    auVar16[8] = extraout_var_06;
    auVar16[9] = extraout_var_07;
    auVar16[10] = extraout_var_08;
    auVar16[0xb] = extraout_var_09;
    auVar16[0xc] = extraout_var_10;
    auVar16[0xd] = extraout_var_11;
    auVar16[0xe] = extraout_var_12;
    auVar16[0xf] = extraout_var_13;
    auVar1[1] = extraout_var;
    auVar1[0] = extraout_b0;
    auVar1[2] = extraout_var_00;
    auVar1[3] = extraout_var_01;
    auVar1[4] = extraout_var_02;
    auVar1[5] = extraout_var_03;
    auVar1[6] = extraout_var_04;
    auVar1[7] = extraout_var_05;
    auVar1[8] = extraout_var_06;
    auVar1[9] = extraout_var_07;
    auVar1[10] = extraout_var_08;
    auVar1[0xb] = extraout_var_09;
    auVar1[0xc] = extraout_var_10;
    auVar1[0xd] = extraout_var_11;
    auVar1[0xe] = extraout_var_12;
    auVar1[0xf] = extraout_var_13;
    auVar9 = NEON_ext(auVar16,auVar1,8,1);
    uStack_58 = (ulong)auVar9._0_4_;
    local_60 = CONCAT17(extraout_var_05,
                        CONCAT16(extraout_var_04,
                                 CONCAT15(extraout_var_03,
                                          CONCAT14(extraout_var_02,
                                                   CONCAT13(extraout_var_01,
                                                            CONCAT12(extraout_var_00,
                                                                     CONCAT11(extraout_var,
                                                                              extraout_b0)))))));
    (**(code **)(*(long *)*param_1 + 0x1b0))((long *)*param_1,param_1[1],&local_60,0);
  }
  return;
}


