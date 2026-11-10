/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f06584; name: FUN_02f06584
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f06584(undefined1 param_1 [16],long param_2,undefined1 (*param_3) [12],uint param_4,
                float *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar27;
  undefined1 auVar26 [16];
  uint uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_1180;
  float fStack_1178;
  float fStack_1174;
  float fStack_1170;
  float fStack_116c;
  float fStack_1168;
  uint uStack_1164;
  float local_1160;
  float fStack_115c;
  float fStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined1 auStack_150 [10];
  undefined1 local_146;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  
  uVar30 = param_1._8_8_;
  auVar16._0_8_ = param_1._0_8_;
  fVar14 = param_1._0_4_;
  if (param_4 == 3) {
    local_1120 = (undefined8 *)0x0;
    local_1110 = 0;
    uStack_1108 = 0;
    local_1100 = 0;
    uStack_10f8 = 0;
    local_10f0 = 0;
    uStack_10e8 = 0;
    local_10e0 = 0;
    uStack_10d8 = 0;
    local_f0 = *(undefined8 *)*param_3;
    uStack_e8 = CONCAT44(*(undefined4 *)(*param_3 + 8),*(undefined4 *)(*param_3 + 8));
    local_1180 = *(undefined8 *)param_3[1];
    fStack_1178 = *(float *)(param_3[1] + 8);
    local_a0 = *(undefined8 *)param_3[2];
    uStack_98 = CONCAT44(*(undefined4 *)(param_3[2] + 8),*(undefined4 *)(param_3[2] + 8));
    fStack_1174 = fStack_1178;
    iVar9 = FUN_03190574(&local_f0,&local_1180,&local_a0,&local_1120);
    if ((float)local_1120 == 0.0) {
      return -0x7ffbfe00;
    }
    if (iVar9 < 0) {
      return iVar9;
    }
    *(undefined8 *)(param_5 + 6) = uStack_1108;
    *(undefined8 *)(param_5 + 4) = local_1110;
    param_5[1] = local_1120._4_4_;
    *param_5 = (float)local_1120;
    memcpy(&local_1180,&local_1100,0x30);
    FUN_031921bc(&local_1180,&local_f0);
    param_5[10] = fStack_1178;
    param_5[0xb] = fStack_1174;
    param_5[8] = (float)local_1180;
    param_5[9] = local_1180._4_4_;
    puVar7 = PTR_DAT_047d19e0;
    uVar28 = *(uint *)(PTR_DAT_047d19e0 + 0x2c);
    local_1180._0_4_ =
         (float)((uint)(float)local_1180 ^
                ((uint)(float)local_1180 ^ (uint)fStack_1170) & *(uint *)(PTR_DAT_047d19e0 + 0x20));
    local_1180._4_4_ =
         (float)((uint)local_1180._4_4_ ^
                ((uint)local_1180._4_4_ ^ (uint)fStack_116c) & *(uint *)(PTR_DAT_047d19e0 + 0x24));
    fStack_1178 = (float)((uint)fStack_1178 ^
                         ((uint)fStack_1178 ^ (uint)fStack_1168) &
                         *(uint *)(PTR_DAT_047d19e0 + 0x28));
    param_5[10] = fStack_1178;
    param_5[0xb] = (float)((uint)fStack_1174 ^ ((uint)fStack_1174 ^ uStack_1164) & uVar28);
    param_5[8] = (float)local_1180;
    param_5[9] = local_1180._4_4_;
    local_1180._0_4_ =
         (float)((uint)(float)local_1180 ^
                ((uint)(float)local_1180 ^ (uint)local_1160) & *(uint *)(puVar7 + 0x40));
    local_1180._4_4_ =
         (float)((uint)local_1180._4_4_ ^
                ((uint)local_1180._4_4_ ^ (uint)fStack_115c) & *(uint *)(puVar7 + 0x44));
    fStack_1178 = (float)((uint)fStack_1178 ^
                         ((uint)fStack_1178 ^ (uint)fStack_1158) & *(uint *)(puVar7 + 0x48));
    param_5[10] = fStack_1178;
    param_5[0xb] = (float)local_1120;
    param_5[8] = (float)local_1180;
    param_5[9] = local_1180._4_4_;
    fVar22 = (float)local_d0;
    fVar23 = (float)((ulong)local_d0 >> 0x20);
    fVar33 = (float)((ulong)local_e0 >> 0x20);
    fVar14 = (float)local_f0;
    fVar13 = (float)((ulong)local_f0 >> 0x20);
    fVar29 = (float)uStack_e8;
    if ((float)uStack_c8 < 0.0) {
      uVar30 = NEON_fmov(0x3f800000,4);
      uStack_c8._0_4_ = (float)uVar30 - (float)uStack_c8;
      fVar13 = fVar13 + (float)local_e0;
      fVar31 = (float)uStack_d8 + fVar23;
      fVar32 = fVar22 - fVar29;
      fVar24 = fVar13;
      fVar27 = (float)uStack_c8 - (fVar14 - fVar33);
      if (fVar33 < fVar14) {
        fVar31 = fVar29 + fVar22;
        fVar32 = (float)uStack_d8 - fVar23;
        fVar24 = (fVar14 - fVar33) + (float)uStack_c8;
        fVar27 = fVar13;
      }
    }
    else {
      uVar30 = NEON_fmov(0x3f800000,4);
      uStack_c8._0_4_ = (float)uStack_c8 + (float)uVar30;
      fVar13 = fVar13 - (float)local_e0;
      fVar31 = fVar13;
      fVar32 = fVar14 + fVar33 + (float)uStack_c8;
      fVar24 = (float)uStack_d8 - fVar23;
      fVar27 = fVar22 - fVar29;
      if (fVar14 < -fVar33) {
        fVar31 = (float)uStack_c8 - (fVar14 + fVar33);
        fVar32 = fVar13;
        fVar24 = fVar29 + fVar22;
        fVar27 = (float)uStack_d8 + fVar23;
      }
    }
    fVar14 = fVar24 * fVar24 + fVar27 * fVar27;
    fVar29 = fVar31 * fVar31 + fVar32 * fVar32;
    fVar13 = fVar14 + fVar29;
    if (fVar13 == 0.0) {
      fVar24 = 0.0;
      fVar27 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
    }
    else {
      fVar13 = SQRT(fVar13);
      fVar14 = SQRT(fVar14 + fVar29);
      fVar24 = fVar24 / fVar13;
      fVar27 = fVar27 / fVar14;
      fVar31 = fVar31 / fVar13;
      fVar32 = fVar32 / fVar14;
    }
    param_5[0xe] = fVar31;
    param_5[0xf] = fVar32;
    param_5[0xc] = fVar24;
    param_5[0xd] = fVar27;
    fVar13 = *(float *)(param_2 + 0x20);
    fVar14 = *param_5 * -fVar13;
    if (0.0 <= fVar13) {
      fVar14 = fVar13;
    }
    fVar13 = *(float *)(param_2 + 0x1c) * fVar14;
    param_5[1] = fVar14;
    param_5[10] = fStack_1178 * fVar13;
    param_5[0xb] = (float)local_1120 * fVar13;
    param_5[8] = (float)local_1180 * fVar13;
    param_5[9] = local_1180._4_4_ * fVar13;
    return iVar9;
  }
  if (param_4 == 2) {
    uStack_98 = CONCAT44(*(undefined4 *)(*param_3 + 8),*(undefined4 *)(*param_3 + 8));
    local_a0 = *(undefined8 *)*param_3;
    local_120 = *(undefined8 *)param_3[1];
    uStack_118 = CONCAT44(*(undefined4 *)(param_3[1] + 8),*(undefined4 *)(param_3[1] + 8));
    local_1110 = 0;
    uStack_1108 = 0;
    local_1120 = (undefined8 *)0x0;
    local_1100 = 0;
    uStack_10f8 = 0;
    local_10f0 = 0;
    uStack_10e8 = 0;
    local_10e0 = 0;
    uStack_10d8 = 0;
    iVar9 = FUN_031913d8(param_1,&local_a0,&local_120,&local_1120);
    if (-1 < iVar9) {
      *(undefined8 *)(param_5 + 6) = uStack_1108;
      *(undefined8 *)(param_5 + 4) = local_1110;
      *param_5 = (float)local_1120;
      param_5[1] = local_1120._4_4_;
      memcpy(&local_1180,&local_1100,0x30);
      FUN_031921bc(&local_1180,&local_f0);
      param_5[10] = fStack_1178;
      param_5[0xb] = fStack_1174;
      param_5[8] = (float)local_1180;
      param_5[9] = local_1180._4_4_;
      puVar7 = PTR_DAT_047d19e0;
      uVar28 = *(uint *)(PTR_DAT_047d19e0 + 0x2c);
      local_1180._0_4_ =
           (float)((uint)(float)local_1180 ^
                  ((uint)(float)local_1180 ^ (uint)fStack_1170) & *(uint *)(PTR_DAT_047d19e0 + 0x20)
                  );
      local_1180._4_4_ =
           (float)((uint)local_1180._4_4_ ^
                  ((uint)local_1180._4_4_ ^ (uint)fStack_116c) & *(uint *)(PTR_DAT_047d19e0 + 0x24))
      ;
      fStack_1178 = (float)((uint)fStack_1178 ^
                           ((uint)fStack_1178 ^ (uint)fStack_1168) &
                           *(uint *)(PTR_DAT_047d19e0 + 0x28));
      uVar30 = NEON_fmov(0x3f800000,4);
      param_5[10] = fStack_1178;
      param_5[0xb] = (float)((uint)fStack_1174 ^ ((uint)fStack_1174 ^ uStack_1164) & uVar28);
      param_5[8] = (float)local_1180;
      param_5[9] = local_1180._4_4_;
      local_1180._0_4_ =
           (float)((uint)(float)local_1180 ^
                  ((uint)(float)local_1180 ^ (uint)local_1160) & *(uint *)(puVar7 + 0x40));
      local_1180._4_4_ =
           (float)((uint)local_1180._4_4_ ^
                  ((uint)local_1180._4_4_ ^ (uint)fStack_115c) & *(uint *)(puVar7 + 0x44));
      fStack_1178 = (float)((uint)fStack_1178 ^
                           ((uint)fStack_1178 ^ (uint)fStack_1158) & *(uint *)(puVar7 + 0x48));
      param_5[10] = fStack_1178;
      param_5[0xb] = (float)local_1120;
      param_5[8] = (float)local_1180;
      param_5[9] = local_1180._4_4_;
      fVar23 = (float)((ulong)local_e0 >> 0x20);
      fVar14 = (float)((ulong)local_d0 >> 0x20);
      fVar31 = (float)uStack_c8 + (float)uVar30;
      fVar32 = local_f0._4_4_ - (float)local_e0;
      fVar33 = (float)local_d0 - (float)uStack_e8;
      uStack_e8._0_4_ = (float)uStack_e8 + (float)local_d0;
      fVar29 = (float)uStack_d8 + fVar14;
      local_f0._4_4_ = local_f0._4_4_ + (float)local_e0;
      fVar22 = (float)uVar30 - (float)uStack_c8;
      uStack_d8._0_4_ = (float)uStack_d8 - fVar14;
      fVar14 = fVar32;
      fVar13 = (float)local_f0 + fVar23 + fVar31;
      if ((float)local_f0 < -fVar23) {
        fVar14 = fVar31 - ((float)local_f0 + fVar23);
        fVar13 = fVar32;
      }
      uVar30 = CONCAT44(fVar33,(float)uStack_d8);
      if ((float)local_f0 < -fVar23) {
        uVar30 = CONCAT44(fVar29,(float)uStack_e8);
      }
      if (fVar23 < (float)local_f0) {
        fVar29 = (float)uStack_e8;
        fVar33 = (float)uStack_d8;
      }
      uVar25 = CONCAT44(fVar22 - ((float)local_f0 - fVar23),local_f0._4_4_);
      if (fVar23 < (float)local_f0) {
        uVar25 = CONCAT44(local_f0._4_4_,((float)local_f0 - fVar23) + fVar22);
      }
      if ((float)uStack_c8 < 0.0) {
        uVar30 = uVar25;
        fVar14 = fVar29;
        fVar13 = fVar33;
      }
      fVar23 = (float)uVar30;
      fVar31 = (float)((ulong)uVar30 >> 0x20);
      fVar29 = fVar23 * fVar23 + fVar31 * fVar31;
      fVar22 = fVar14 * fVar14 + fVar13 * fVar13;
      fVar33 = fVar29 + fVar22;
      if (fVar33 == 0.0) {
        fVar23 = 0.0;
        fVar31 = 0.0;
        fVar14 = 0.0;
        fVar13 = 0.0;
      }
      else {
        fVar33 = SQRT(fVar33);
        fVar29 = SQRT(fVar29 + fVar22);
        fVar23 = fVar23 / fVar33;
        fVar31 = fVar31 / fVar29;
        fVar14 = fVar14 / fVar33;
        fVar13 = fVar13 / fVar29;
      }
      param_5[0xe] = fVar14;
      param_5[0xf] = fVar13;
      param_5[0xc] = fVar23;
      param_5[0xd] = fVar31;
      fVar13 = *(float *)(param_2 + 0x20);
      fVar14 = *param_5 * -fVar13;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar13 = *(float *)(param_2 + 0x1c) * fVar14;
      param_5[1] = fVar14;
      param_5[10] = fStack_1178 * fVar13;
      param_5[0xb] = (float)local_1120 * fVar13;
      param_5[8] = (float)local_1180 * fVar13;
      param_5[9] = local_1180._4_4_ * fVar13;
    }
    return iVar9;
  }
  if (param_4 == 1) {
    if (0.0 < fVar14) {
      fVar13 = fVar14 * 4.1887903 * fVar14 * fVar14;
      uVar28 = *(uint *)(*param_3 + 8);
      auVar6 = *param_3;
      *param_5 = fVar13;
      fVar29 = *(float *)(param_2 + 0x20);
      fVar13 = fVar13 * -fVar29;
      if (0.0 <= fVar29) {
        fVar13 = fVar29;
      }
      param_5[1] = fVar13;
      fVar14 = *(float *)(param_2 + 0x1c) * fVar14 * fVar14 * 0.4 * fVar13;
      *(ulong *)(param_5 + 6) = (ulong)uVar28;
      *(long *)(param_5 + 4) = auVar6._0_8_;
      param_5[10] = fVar14;
      param_5[0xb] = fVar14;
      param_5[8] = fVar14;
      param_5[9] = fVar14;
      uVar30 = _DAT_03cabe50;
      *(undefined8 *)(param_5 + 0xe) = _UNK_03cabe58;
      *(undefined8 *)(param_5 + 0xc) = uVar30;
      return 0;
    }
    return -0x7ffbfe00;
  }
  FUN_0084f3cc(&local_120);
  FUN_0084f37c(auStack_150);
  local_146 = 1;
  local_1120 = &local_1110;
  local_1118._0_4_ = 0;
  local_1118._4_4_ = 0x800000fc;
  if ((int)param_4 < 0xfd) {
    if (0 < (int)param_4) goto LAB_02f06938;
    bVar5 = false;
  }
  else {
    FUN_02f0842c(&local_1120,PTR_PTR_047d1a50,param_4);
LAB_02f06938:
    puVar7 = PTR_PTR_047d1a50;
    uVar10 = (ulong)param_4;
    puVar12 = (undefined4 *)(*param_3 + 8);
    do {
      uVar2 = *puVar12;
      uVar25 = *(undefined8 *)(puVar12 + -2);
      lVar11 = (long)(int)local_1118;
      iVar9 = (int)local_1118;
      if ((int)(local_1118._4_4_ & 0x7fffffff) <= (int)local_1118) {
        FUN_02e8df28(&local_1120,puVar7,lVar11 + 1);
        iVar9 = (int)local_1118;
      }
      uVar10 = uVar10 - 1;
      puVar12 = puVar12 + 3;
      local_1118._0_4_ = (int)(lVar11 + 1);
      (local_1120 + (long)iVar9 * 2)[1] = CONCAT44(uVar2,uVar2);
      local_1120[(long)iVar9 * 2] = uVar25;
    } while (uVar10 != 0);
    bVar5 = true;
  }
  iVar9 = -0x7ffbfe00;
  uVar10 = FUN_008501d4(&local_120,local_1120,param_4,auStack_150);
  switch(uVar10 & 0xffffffff) {
  case 0:
    if (fVar14 <= 0.0) break;
    fVar13 = fVar14 * 4.1887903 * fVar14 * fVar14;
    uVar28 = *(uint *)(*param_3 + 8);
    auVar6 = *param_3;
    *param_5 = fVar13;
    fVar29 = *(float *)(param_2 + 0x20);
    fVar13 = fVar13 * -fVar29;
    if (0.0 <= fVar29) {
      fVar13 = fVar29;
    }
    param_5[1] = fVar13;
    fVar14 = *(float *)(param_2 + 0x1c) * fVar14 * fVar14 * 0.4 * fVar13;
    *(ulong *)(param_5 + 6) = (ulong)uVar28;
    *(long *)(param_5 + 4) = auVar6._0_8_;
    param_5[10] = fVar14;
    param_5[0xb] = fVar14;
    param_5[8] = fVar14;
    param_5[9] = fVar14;
    uVar30 = _DAT_03cabe50;
    uVar25 = _UNK_03cabe58;
    goto LAB_02f07014;
  case 1:
    auVar15._8_4_ = 0x7f7fffee;
    auVar15._0_8_ = 0x7f7fffee7f7fffee;
    auVar15._12_4_ = 0x7f7fffee;
    auVar26._8_4_ = 0xff7fffee;
    auVar26._0_8_ = 0xff7fffeeff7fffee;
    auVar26._12_4_ = 0xff7fffee;
    uStack_1138 = auVar15._8_8_;
    local_1140 = 0x7f7fffee7f7fffee;
    uStack_1128 = auVar26._8_8_;
    uStack_1130 = 0xff7fffeeff7fffee;
    if (bVar5) {
      uVar10 = (ulong)param_4;
      puVar12 = (undefined4 *)(*param_3 + 8);
      do {
        uVar2 = *puVar12;
        uVar10 = uVar10 - 1;
        puVar1 = (undefined8 *)(puVar12 + -2);
        puVar12 = puVar12 + 3;
        auVar3._8_4_ = uVar2;
        auVar3._0_8_ = *puVar1;
        auVar3._12_4_ = uVar2;
        auVar15 = NEON_fmin(auVar15,auVar3,4);
        local_1140 = auVar15._0_8_;
        auVar4._8_4_ = uVar2;
        auVar4._0_8_ = *puVar1;
        auVar4._12_4_ = uVar2;
        auVar26 = NEON_fmax(auVar26,auVar4,4);
      } while (uVar10 != 0);
      uStack_1138 = auVar15._8_8_;
      uStack_1128 = auVar26._8_8_;
      uStack_1130 = auVar26._0_8_;
    }
    auVar16._8_8_ = uVar30;
    local_f0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    iVar9 = FUN_031913d8(auVar16,&uStack_1130,&local_1140,&local_f0);
    if (-1 < iVar9) {
      *(undefined8 *)(param_5 + 6) = uStack_d8;
      *(undefined8 *)(param_5 + 4) = local_e0;
      *param_5 = (float)local_f0;
      param_5[1] = local_f0._4_4_;
      memcpy(&local_a0,&local_d0,0x30);
      FUN_031921bc(&local_a0,&local_1180);
      param_5[10] = (float)uStack_98;
      param_5[0xb] = uStack_98._4_4_;
      param_5[8] = (float)local_a0;
      param_5[9] = local_a0._4_4_;
      puVar7 = PTR_DAT_047d19e0;
      uVar28 = *(uint *)(PTR_DAT_047d19e0 + 0x2c);
      local_a0._0_4_ =
           (float)((uint)(float)local_a0 ^
                  ((uint)(float)local_a0 ^ uStack_90) & *(uint *)(PTR_DAT_047d19e0 + 0x20));
      local_a0._4_4_ =
           (float)((uint)local_a0._4_4_ ^
                  ((uint)local_a0._4_4_ ^ uStack_8c) & *(uint *)(PTR_DAT_047d19e0 + 0x24));
      uStack_98._0_4_ =
           (float)((uint)(float)uStack_98 ^
                  ((uint)(float)uStack_98 ^ uStack_88) & *(uint *)(PTR_DAT_047d19e0 + 0x28));
      param_5[10] = (float)uStack_98;
      param_5[0xb] = (float)((uint)uStack_98._4_4_ ^ ((uint)uStack_98._4_4_ ^ uStack_84) & uVar28);
      param_5[8] = (float)local_a0;
      param_5[9] = local_a0._4_4_;
      local_a0._0_4_ =
           (float)((uint)(float)local_a0 ^
                  ((uint)(float)local_a0 ^ local_80) & *(uint *)(puVar7 + 0x40));
      local_a0._4_4_ =
           (float)((uint)local_a0._4_4_ ^
                  ((uint)local_a0._4_4_ ^ uStack_7c) & *(uint *)(puVar7 + 0x44));
      uStack_98._0_4_ =
           (float)((uint)(float)uStack_98 ^
                  ((uint)(float)uStack_98 ^ uStack_78) & *(uint *)(puVar7 + 0x48));
      param_5[10] = (float)uStack_98;
      param_5[0xb] = (float)local_f0;
      param_5[8] = (float)local_a0;
      param_5[9] = local_a0._4_4_;
      fVar14 = (float)local_1180;
      fVar13 = (float)((ulong)local_1180 >> 0x20);
      if (fStack_1158 < 0.0) {
        uVar30 = NEON_fmov(0x3f800000,4);
        fStack_1158 = (float)uVar30 - fStack_1158;
        fVar13 = fVar13 + fStack_1170;
        fVar29 = fStack_1168 + fStack_115c;
        fVar33 = local_1160 - fStack_1178;
        fVar22 = fVar13;
        fVar23 = fStack_1158 - (fVar14 - fStack_116c);
        if (fStack_116c < fVar14) {
          fVar29 = fStack_1178 + local_1160;
          fVar33 = fStack_1168 - fStack_115c;
          fVar22 = (fVar14 - fStack_116c) + fStack_1158;
          fVar23 = fVar13;
        }
      }
      else {
        uVar30 = NEON_fmov(0x3f800000,4);
        fStack_1158 = fStack_1158 + (float)uVar30;
        fVar13 = fVar13 - fStack_1170;
        fVar29 = fVar13;
        fVar33 = fVar14 + fStack_116c + fStack_1158;
        fVar22 = fStack_1168 - fStack_115c;
        fVar23 = local_1160 - fStack_1178;
        if (fVar14 < -fStack_116c) {
          fVar29 = fStack_1158 - (fVar14 + fStack_116c);
          fVar33 = fVar13;
          fVar22 = fStack_1178 + local_1160;
          fVar23 = fStack_1168 + fStack_115c;
        }
      }
      fVar14 = fVar22 * fVar22 + fVar23 * fVar23;
      fVar31 = fVar29 * fVar29 + fVar33 * fVar33;
      fVar13 = fVar14 + fVar31;
      if (fVar13 == 0.0) {
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar29 = 0.0;
        fVar33 = 0.0;
      }
      else {
        fVar13 = SQRT(fVar13);
        fVar14 = SQRT(fVar14 + fVar31);
        fVar22 = fVar22 / fVar13;
        fVar23 = fVar23 / fVar14;
        fVar29 = fVar29 / fVar13;
        fVar33 = fVar33 / fVar14;
      }
      param_5[0xe] = fVar29;
      param_5[0xf] = fVar33;
      param_5[0xc] = fVar22;
      param_5[0xd] = fVar23;
      fVar13 = *(float *)(param_2 + 0x20);
      fVar14 = *param_5 * -fVar13;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar13 = *(float *)(param_2 + 0x1c) * fVar14;
      param_5[1] = fVar14;
      auVar20._0_8_ = CONCAT44(local_a0._4_4_ * fVar13,(float)local_a0 * fVar13);
      auVar20._8_4_ = (float)uStack_98 * fVar13;
      auVar20._12_4_ = (float)local_f0 * fVar13;
      *(long *)(param_5 + 10) = auVar20._8_8_;
      *(undefined8 *)(param_5 + 8) = auVar20._0_8_;
    }
    break;
  case 2:
    if (param_4 == 4) {
      auVar17._8_8_ = uVar30;
      auVar17._0_8_ = auVar16._0_8_;
      iVar9 = FUN_02f05718(auVar17,uVar10,param_3,param_5);
    }
    else {
      auVar19._8_8_ = uVar30;
      auVar19._0_8_ = auVar16._0_8_;
      iVar9 = FUN_02f05a4c(auVar19,param_2,param_3,param_4,param_5);
    }
    break;
  case 3:
    if (0.0 < fVar14) {
      FUN_0084f3a8(&local_f0);
      auVar18._8_8_ = uVar30;
      auVar18._0_8_ = auVar16._0_8_;
      local_e0 = CONCAT71(local_e0._1_7_,1);
      FUN_00857848(auVar18,&local_120,&local_f0);
    }
    cVar8 = FUN_0085ab64(&local_120);
    if (cVar8 == '\0') break;
    FUN_0085adb4(&local_120,&local_1180,&local_d0);
    uStack_d8 = uStack_1148;
    local_e0 = uStack_1150;
    fVar14 = (float)local_1180;
    fVar13 = (float)((ulong)local_1180 >> 0x20);
    if (fStack_1158 < 0.0) {
      uVar30 = NEON_fmov(0x3f800000,4);
      fStack_1158 = (float)uVar30 - fStack_1158;
      fVar13 = fVar13 + fStack_1170;
      fVar29 = fVar13;
      fVar33 = fStack_1158 - (fVar14 - fStack_116c);
      fVar22 = fStack_1168 + fStack_115c;
      fVar23 = local_1160 - fStack_1178;
      if (fStack_116c < fVar14) {
        fVar29 = (fVar14 - fStack_116c) + fStack_1158;
        fVar33 = fVar13;
        fVar22 = fStack_1178 + local_1160;
        fVar23 = fStack_1168 - fStack_115c;
      }
    }
    else {
      uVar30 = NEON_fmov(0x3f800000,4);
      fStack_1158 = fStack_1158 + (float)uVar30;
      fVar13 = fVar13 - fStack_1170;
      fVar29 = fStack_1168 - fStack_115c;
      fVar33 = local_1160 - fStack_1178;
      fVar22 = fVar13;
      fVar23 = fVar14 + fStack_116c + fStack_1158;
      if (fVar14 < -fStack_116c) {
        fVar29 = fStack_1178 + local_1160;
        fVar33 = fStack_1168 + fStack_115c;
        fVar22 = fStack_1158 - (fVar14 + fStack_116c);
        fVar23 = fVar13;
      }
    }
    fVar14 = fVar29 * fVar29 + fVar33 * fVar33;
    fVar31 = fVar22 * fVar22 + fVar23 * fVar23;
    fVar13 = fVar14 + fVar31;
    if (fVar13 == 0.0) {
      auVar21 = ZEXT816(0);
    }
    else {
      fVar13 = SQRT(fVar13);
      fVar14 = SQRT(fVar14 + fVar31);
      auVar21._0_4_ = fVar29 / fVar13;
      auVar21._4_4_ = fVar33 / fVar14;
      auVar21._8_4_ = fVar22 / fVar13;
      auVar21._12_4_ = fVar23 / fVar14;
    }
    uStack_b8 = auVar21._8_8_;
    local_c0 = auVar21._0_8_;
    fVar13 = (float)FUN_0085ac74(&local_120);
    fVar29 = *(float *)(param_2 + 0x20);
    fVar14 = -fVar29 * fVar13;
    if (0.0 <= fVar29) {
      fVar14 = fVar29;
    }
    local_f0 = CONCAT44(fVar14,fVar13);
    fVar14 = fVar14 * *(float *)(param_2 + 0x1c);
    local_d0._0_4_ = (float)local_d0 * fVar14;
    local_d0._4_4_ = local_d0._4_4_ * fVar14;
    uStack_c8._0_4_ = (float)uStack_c8 * fVar14;
    uStack_c8._4_4_ = uStack_c8._4_4_ * fVar14;
    *(undefined8 *)param_5 = local_f0;
    *(undefined8 *)(param_5 + 2) = uStack_e8;
    *(undefined8 *)(param_5 + 6) = uStack_d8;
    *(undefined8 *)(param_5 + 4) = local_e0;
    param_5[10] = (float)uStack_c8;
    param_5[0xb] = uStack_c8._4_4_;
    param_5[8] = (float)local_d0;
    param_5[9] = local_d0._4_4_;
    uVar30 = local_c0;
    uVar25 = uStack_b8;
LAB_02f07014:
    iVar9 = 0;
    *(undefined8 *)(param_5 + 0xe) = uVar25;
    *(undefined8 *)(param_5 + 0xc) = uVar30;
  }
  uVar28 = local_1118._4_4_;
  uVar10 = (ulong)local_1118._4_4_;
  local_1118 = (ulong)local_1118._4_4_ << 0x20;
  if ((-1 < (int)uVar28) && (local_1120 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1120,uVar10 << 4);
  }
  FUN_0084f57c(&local_120);
  return iVar9;
}


