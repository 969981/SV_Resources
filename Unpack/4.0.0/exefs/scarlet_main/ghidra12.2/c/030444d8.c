/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030444d8; name: FUN_030444d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_030444d8(float param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar5;
  undefined8 uVar4;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar12;
  int iVar13;
  undefined1 auVar10 [16];
  int iVar14;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined *local_250;
  undefined1 local_248;
  int local_244;
  undefined8 local_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  float local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined2 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined2 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined4 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  float local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_60;
  undefined4 local_58;
  
  local_178 = &local_e0;
  local_e8 = 0x90;
  auVar10 = ZEXT816(0x3f800000);
  local_d0 = 1;
  local_c8 = 0x110201;
  local_c4 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_100 = PTR_DAT_047e3528 + 0x10;
  local_a8 = 0;
  uStack_a0 = 0x100000040;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  auVar15 = NEON_fmov(0x3f800000,4);
  local_70 = (undefined2)((uint)(param_1 * *(float *)PTR_DAT_047e3398 * 1.0039062) >> 0x10);
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_1a0 = 0xffff;
  local_19c = 0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_190 = 0xfb0001;
  local_128 = 0x7f7fffee;
  local_140 = 0x3a83126f;
  uStack_138 = 0x10000000000;
  local_e0 = PTR_DAT_047e33a0 + 0x10;
  uStack_d8 = 0;
  uStack_168 = param_3[1];
  local_170 = *param_3;
  fVar3 = (float)*param_4 - (float)local_170;
  fVar5 = (float)((ulong)*param_4 >> 0x20) - (float)((ulong)local_170 >> 0x20);
  fVar6 = (float)param_4[1] - (float)uStack_168;
  iVar9 = -(uint)(fVar3 == 0.0);
  iVar12 = -(uint)(fVar5 == 0.0);
  iVar13 = -(uint)(fVar6 == 0.0);
  iVar14 = -(uint)(auVar10._0_4_ == 0.0);
  fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                          CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                   CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                            SUB41(fVar3,0) & ~(byte)iVar9)));
  local_160 = CONCAT17((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                       CONCAT16((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                CONCAT15((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                         CONCAT14(SUB41(fVar5,0) & ~(byte)iVar12,fVar3))));
  fVar6 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar13)));
  uStack_158 = CONCAT17(auVar10[3] & ~(byte)((uint)iVar14 >> 0x18),
                        CONCAT16(auVar10[2] & ~(byte)((uint)iVar14 >> 0x10),(uint6)(uint)fVar6));
  auVar16._0_4_ = auVar15._0_4_ / fVar3;
  fVar5 = (float)((ulong)local_160 >> 0x20);
  auVar16._4_4_ = auVar15._4_4_ / fVar5;
  auVar16._8_4_ = auVar15._8_4_ / fVar6;
  fVar8 = (float)((ulong)uStack_158 >> 0x20);
  auVar16._12_4_ = auVar15._12_4_ / fVar8;
  iVar9 = -(uint)(fVar3 == 0.0);
  iVar12 = -(uint)(fVar5 == 0.0);
  iVar13 = -(uint)(fVar6 == 0.0);
  iVar14 = -(uint)(fVar8 == 0.0);
  auVar11[0] = ~(byte)iVar9;
  auVar11[1] = ~(byte)((uint)iVar9 >> 8);
  auVar11[2] = ~(byte)((uint)iVar9 >> 0x10);
  auVar11[3] = ~(byte)((uint)iVar9 >> 0x18);
  auVar11[4] = ~(byte)iVar12;
  auVar11[5] = ~(byte)((uint)iVar12 >> 8);
  auVar11[6] = ~(byte)((uint)iVar12 >> 0x10);
  auVar11[7] = ~(byte)((uint)iVar12 >> 0x18);
  auVar11[8] = ~(byte)iVar13;
  auVar11[9] = ~(byte)((uint)iVar13 >> 8);
  auVar11[10] = ~(byte)((uint)iVar13 >> 0x10);
  auVar11[0xb] = ~(byte)((uint)iVar13 >> 0x18);
  auVar11[0xc] = ~(byte)iVar14;
  auVar11[0xd] = ~(byte)((uint)iVar14 >> 8);
  auVar11[0xe] = ~(byte)((uint)iVar14 >> 0x10);
  auVar11[0xf] = ~(byte)((uint)iVar14 >> 0x18);
  auVar10._8_4_ = 0x7f7fffee;
  auVar10._0_8_ = 0x7f7fffee7f7fffee;
  auVar10._12_4_ = 0x7f7fffee;
  auVar15._8_4_ = 0x7f7fffee;
  auVar15._0_8_ = 0x7f7fffee7f7fffee;
  auVar15._12_4_ = 0x7f7fffee;
  auVar15 = auVar15 ^ (auVar10 ^ auVar16) & auVar11;
  uStack_148 = auVar15._8_8_;
  uStack_150 = auVar15._0_8_;
  local_f8 = local_178;
  local_f0 = local_178;
  local_c0 = param_1;
  local_1a8 = (**(code **)(*param_2 + 0x58))();
  local_1b0 = (**(code **)(*param_2 + 0x68))(param_2);
  local_248 = 0;
  local_244 = 0;
  local_238 = 0;
  local_190 = local_190 & 0xfff7ffff;
  local_250 = PTR_DAT_047ddb88 + 0x10;
  local_190._0_2_ = CONCAT11(8,(undefined1)local_190);
  local_1f8 = 0xffffffff;
  local_1f4 = 0xf;
  local_1d8 = 0xffffff;
  local_1cc = 0xf;
  local_240 = 0x5f7ffff05f7ffff0;
  local_210 = 3.40282e+38;
  local_208 = 0xffffffffffffffff;
  local_200 = 0xffffff;
  local_1f0 = 0xffff;
  local_1ec = 0;
  local_1d0 = 0xffffffff;
  local_1c8 = 0xffff;
  local_1c4 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1e8 = 0;
  local_1e0 = 0xffffffffffffffff;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_19c = param_6;
  FUN_00c7a7cc(&local_250);
  uStack_278 = DAT_03cab628;
  local_280 = DAT_03cab620;
  uStack_268 = _UNK_03cabe68;
  uStack_270 = _DAT_03cabe60;
  uStack_258 = _UNK_03caa5b8;
  local_260 = _DAT_03caa5b0;
  (**(code **)(*param_2 + 0x3f8))(param_2,&local_1b0,&local_280,&local_250,0);
  if (local_244 == 0) {
    param_5[5] = 0xffffffffffffffff;
    uVar7 = param_4[1];
    uVar4 = *param_4;
    uVar1 = 0xffffffff;
    uVar2 = 0x80040200;
    param_5[2] = 0;
    param_5[3] = 0;
    param_5[1] = uVar7;
    *param_5 = uVar4;
  }
  else {
    fVar3 = (float)((ulong)local_160 >> 0x20);
    fVar3 = local_210 *
            SQRT((float)local_160 * (float)local_160 + fVar3 * fVar3 +
                 (float)uStack_158 * (float)uStack_158);
    *(float *)((long)param_5 + 0x1c) = fVar3;
    uVar2 = 0;
    param_5[1] = uStack_228;
    *param_5 = local_230;
    param_5[3] = CONCAT44(fVar3,(int)uStack_218);
    param_5[2] = local_220;
    param_5[5] = local_1e0;
    uVar1 = local_1d0;
  }
  *(undefined4 *)(param_5 + 4) = uVar1;
  local_100 = PTR_DAT_047d1b30 + 0x10;
  if (local_f8 != (undefined **)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  return uVar2;
}


