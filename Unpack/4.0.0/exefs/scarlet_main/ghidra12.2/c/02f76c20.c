/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f76c20; name: FUN_02f76c20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f76c20(long param_1,long param_2,long *param_3,long *param_4,long param_5,long param_6,
                 undefined1 (*param_7) [16],uint param_8,long param_9)

{
  ushort uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  float fVar11;
  undefined *puVar12;
  ushort *puVar13;
  ushort uVar14;
  float *pfVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar33;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  float fVar39;
  int iVar41;
  int iVar42;
  undefined1 auVar40 [16];
  float fVar43;
  undefined4 local_18a0 [756];
  undefined4 local_cd0 [2];
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined4 local_b38;
  undefined8 local_b30;
  undefined8 local_b20;
  undefined8 uStack_b18;
  long local_b10;
  undefined *local_b00;
  long *local_af8;
  undefined1 *local_af0;
  undefined4 local_ae8;
  undefined1 auStack_ae0 [2632];
  undefined2 local_98;
  
  puVar12 = PTR_DAT_047d19f0;
  local_af0 = auStack_ae0;
  local_ae8 = 0x800;
  local_b00 = PTR_DAT_047d1b40 + 0x10;
  auVar36 = NEON_fmov(0x3f800000,4);
  local_af8 = (long *)0x0;
  uStack_b18 = auVar36._8_8_;
  local_b20 = auVar36._0_8_;
  pfVar15 = (float *)*param_3;
  local_c40 = 0;
  local_b38 = 0;
  local_b10 = 0;
  local_b30 = 8;
  local_c90 = *(undefined8 *)pfVar15;
  uStack_c88 = *(undefined8 *)(pfVar15 + 2);
  local_c80 = *(undefined8 *)(pfVar15 + 4);
  uStack_c78 = *(undefined8 *)(pfVar15 + 6);
  local_c70 = *(undefined8 *)(pfVar15 + 8);
  uStack_c68 = *(undefined8 *)(pfVar15 + 10);
  local_c60 = *(undefined8 *)(pfVar15 + 0xc);
  uStack_c58 = *(undefined8 *)(pfVar15 + 0xe);
  local_c50 = *(undefined8 *)(pfVar15 + 0x10);
  uStack_c48 = *(undefined8 *)(pfVar15 + 0x12);
  fVar43 = (float)((ulong)_DAT_03cabe60 >> 0x20);
  fVar30 = (float)((ulong)_UNK_03cabe68 >> 0x20);
  auVar40._0_4_ = ABS((float)_DAT_03cabe60 - pfVar15[4]);
  auVar40._4_4_ = ABS(fVar43 - pfVar15[5]);
  auVar40._8_4_ = ABS((float)_UNK_03cabe68 - pfVar15[6]);
  auVar40._12_4_ = ABS(fVar30 - pfVar15[7]);
  fVar33 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
  fVar35 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
  fVar34 = ABS(fVar33 - (float)((ulong)*(undefined8 *)(pfVar15 + 8) >> 0x20));
  fVar11 = ABS((float)_UNK_03caa5b8 - (float)*(undefined8 *)(pfVar15 + 10));
  fVar39 = ABS(fVar35 - (float)((ulong)*(undefined8 *)(pfVar15 + 10) >> 0x20));
  fVar19 = (float)((ulong)DAT_03cab620 >> 0x20);
  fVar20 = (float)((ulong)DAT_03cab628 >> 0x20);
  auVar37._0_4_ = ABS((float)DAT_03cab620 - *pfVar15);
  auVar37._4_4_ = ABS(fVar19 - pfVar15[1]);
  auVar37._8_4_ = ABS((float)DAT_03cab628 - pfVar15[2]);
  auVar37._12_4_ = ABS(fVar20 - pfVar15[3]);
  auVar37 = NEON_fmax(auVar37,auVar40,4);
  auVar36[4] = SUB41(fVar34,0);
  auVar36._0_4_ = ABS((float)_DAT_03caa5b0 - (float)*(undefined8 *)(pfVar15 + 8));
  auVar36[5] = (char)((uint)fVar34 >> 8);
  auVar36[6] = (char)((uint)fVar34 >> 0x10);
  auVar36[7] = (char)((uint)fVar34 >> 0x18);
  auVar36[8] = SUB41(fVar11,0);
  auVar36[9] = (char)((uint)fVar11 >> 8);
  auVar36[10] = (char)((uint)fVar11 >> 0x10);
  auVar36[0xb] = (char)((uint)fVar11 >> 0x18);
  auVar36[0xc] = SUB41(fVar39,0);
  auVar36[0xd] = (char)((uint)fVar39 >> 8);
  auVar36[0xe] = (char)((uint)fVar39 >> 0x10);
  auVar36[0xf] = (char)((uint)fVar39 >> 0x18);
  auVar36 = NEON_fmax(auVar37,auVar36,4);
  iVar38 = -(uint)(auVar36._0_4_ <= 1.1920929e-07);
  iVar41 = -(uint)(auVar36._4_4_ <= 1.1920929e-07);
  iVar42 = -(uint)(auVar36._8_4_ <= 1.1920929e-07);
  if (CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
               (byte)((uint)iVar42 >> 0x18),
               CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                        (byte)((uint)iVar42 >> 0x10),
                        CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar38 >> 8) &
                                 (byte)((uint)iVar42 >> 8),
                                 (byte)iVar41 & (byte)iVar38 & (byte)iVar42))) != 0) {
    local_b30 = 0xc;
    iVar38 = -(uint)(ABS(pfVar15[0xc]) <= 1.1920929e-07);
    iVar41 = -(uint)(ABS(pfVar15[0xd]) <= 1.1920929e-07);
    iVar42 = -(uint)(ABS(pfVar15[0xe]) <= 1.1920929e-07);
    if (CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                 (byte)((uint)iVar42 >> 0x18),
                 CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                          (byte)((uint)iVar42 >> 0x10),
                          CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar38 >> 8) &
                                   (byte)((uint)iVar42 >> 8),
                                   (byte)iVar41 & (byte)iVar38 & (byte)iVar42))) != 0) {
      local_b30 = 0xd;
    }
  }
  local_98 = 0xffff;
  lVar17 = param_3[4];
  if (*(char *)(param_3[4] + 0x19) != '\x02') {
    local_c40 = 0;
    local_b38 = 0;
    local_b10 = 0;
    local_b30 = 8;
    local_c90 = *(undefined8 *)pfVar15;
    uStack_c88 = *(undefined8 *)(pfVar15 + 2);
    local_c80 = *(undefined8 *)(pfVar15 + 4);
    uStack_c78 = *(undefined8 *)(pfVar15 + 6);
    local_c70 = *(undefined8 *)(pfVar15 + 8);
    uStack_c68 = *(undefined8 *)(pfVar15 + 10);
    local_c60 = *(undefined8 *)(pfVar15 + 0xc);
    uStack_c58 = *(undefined8 *)(pfVar15 + 0xe);
    local_c50 = *(undefined8 *)(pfVar15 + 0x10);
    uStack_c48 = *(undefined8 *)(pfVar15 + 0x12);
    auVar36 = *(undefined1 (*) [16])(pfVar15 + 4);
    fVar43 = ABS(fVar43 - auVar36._4_4_);
    fVar34 = ABS((float)_UNK_03cabe68 - auVar36._8_4_);
    fVar30 = ABS(fVar30 - auVar36._12_4_);
    auVar18._0_4_ = ABS((float)DAT_03cab620 - *pfVar15);
    auVar18._4_4_ = ABS(fVar19 - pfVar15[1]);
    auVar18._8_4_ = ABS((float)DAT_03cab628 - pfVar15[2]);
    auVar18._12_4_ = ABS(fVar20 - pfVar15[3]);
    auVar37 = *(undefined1 (*) [16])(pfVar15 + 8);
    auVar31._0_4_ = ABS((float)_DAT_03caa5b0 - auVar37._0_4_);
    auVar31._4_4_ = ABS(fVar33 - auVar37._4_4_);
    auVar31._8_4_ = ABS((float)_UNK_03caa5b8 - auVar37._8_4_);
    auVar31._12_4_ = ABS(fVar35 - auVar37._12_4_);
    auVar3[4] = SUB41(fVar43,0);
    auVar3._0_4_ = ABS((float)_DAT_03cabe60 - auVar36._0_4_);
    auVar3[5] = (char)((uint)fVar43 >> 8);
    auVar3[6] = (char)((uint)fVar43 >> 0x10);
    auVar3[7] = (char)((uint)fVar43 >> 0x18);
    auVar3[8] = SUB41(fVar34,0);
    auVar3[9] = (char)((uint)fVar34 >> 8);
    auVar3[10] = (char)((uint)fVar34 >> 0x10);
    auVar3[0xb] = (char)((uint)fVar34 >> 0x18);
    auVar3[0xc] = SUB41(fVar30,0);
    auVar3[0xd] = (char)((uint)fVar30 >> 8);
    auVar3[0xe] = (char)((uint)fVar30 >> 0x10);
    auVar3[0xf] = (char)((uint)fVar30 >> 0x18);
    auVar36 = NEON_fmax(auVar18,auVar3,4);
    auVar36 = NEON_fmax(auVar36,auVar31,4);
    iVar38 = -(uint)(auVar36._0_4_ <= 1.1920929e-07);
    iVar41 = -(uint)(auVar36._4_4_ <= 1.1920929e-07);
    iVar42 = -(uint)(auVar36._8_4_ <= 1.1920929e-07);
    if (CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                 (byte)((uint)iVar42 >> 0x18),
                 CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                          (byte)((uint)iVar42 >> 0x10),
                          CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar38 >> 8) &
                                   (byte)((uint)iVar42 >> 8),
                                   (byte)iVar41 & (byte)iVar38 & (byte)iVar42))) != 0) {
      local_b30 = 0xc;
      iVar38 = -(uint)(ABS(pfVar15[0xc]) <= 1.1920929e-07);
      iVar41 = -(uint)(ABS(pfVar15[0xd]) <= 1.1920929e-07);
      iVar42 = -(uint)(ABS(pfVar15[0xe]) <= 1.1920929e-07);
      if (CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                   (byte)((uint)iVar42 >> 0x18),
                   CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                            (byte)((uint)iVar42 >> 0x10),
                            CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar38 >> 8) &
                                     (byte)((uint)iVar42 >> 8),
                                     (byte)iVar41 & (byte)iVar38 & (byte)iVar42))) != 0) {
        local_b30 = 0xd;
      }
    }
    local_98 = 0xffff;
    local_18a0[0] = (undefined4)param_3[3];
    (**(code **)(*(long *)PTR_DAT_047d19f0 +
                 (ulong)*(byte *)(*(long *)(pfVar15 + 0x1e) + 0x18) * 0x200 + 0xb8))
              (*(long *)(pfVar15 + 0x1e),local_18a0,1,&local_c90);
    if (((byte)local_b30 >> 4 & 1) == 0) {
      lVar17 = local_b10;
    }
    else {
      lVar17 = FUN_02ef6ac4(&local_c90,0,*(undefined8 *)(param_1 + 0x490));
    }
  }
  local_cd0[0] = 7;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  (**(code **)(*(long *)puVar12 + (ulong)*(byte *)(lVar17 + 0x18) * 0x200 + 0xa8))
            (lVar17,local_cd0,local_18a0,local_cd0);
  lVar17 = *(long *)(param_1 + 0x10);
  uVar2 = (ulong)*(byte *)(*param_4 + 0x89);
  if (*(int *)(lVar17 + (ulong)*(byte *)(*param_4 + 0x89) * 0x50 + 0x18) <=
      *(int *)(lVar17 + (ulong)*(byte *)(*param_3 + 0x89) * 0x50 + 0x18)) {
    uVar2 = (ulong)*(byte *)(*param_3 + 0x89);
  }
  auVar36 = *param_7;
  fVar43 = *(float *)(lVar17 + uVar2 * 0x50 + 0x48) + local_cc0._4_4_;
  if (*(int *)(param_9 + 0x18) < 0xe41) {
    puVar13 = (ushort *)(*(long *)(param_9 + 0x10) + (long)*(int *)(param_9 + 0x18) + 0x20);
  }
  else {
    puVar13 = (ushort *)FUN_031c36f4(param_9);
  }
  *(byte *)(puVar13 + 3) = (byte)puVar13[3] & 0x1f;
  *puVar13 = 0x40;
  *(byte *)(puVar13 + 1) = (byte)puVar13[1] & 0xf0 | 1;
  if ((*(byte *)(*param_4 + 0x54) & 1) == 0) {
    if (*(byte *)(param_3[1] + 0x5e) <= *(byte *)(param_4[1] + 0x5e)) {
      uVar14 = 0x40;
      goto LAB_02f77018;
    }
    uVar14 = 0x41;
  }
  else {
    uVar14 = 0xc0;
    *puVar13 = 0xc0;
    if ((*(byte *)(param_6 + 10) & 1) != 0) {
      uVar10 = *(undefined8 *)(param_3[1] + 0x68);
      uVar16 = *(undefined8 *)(param_3[1] + 0x60);
      fVar30 = (float)uVar16;
      fVar34 = (float)((ulong)uVar16 >> 0x20);
      fVar11 = (float)uVar10;
      fVar39 = (float)((ulong)uVar10 >> 0x20);
      if ((*(byte *)(param_5 + 0x96) >> 6 & 1) == 0) {
        fVar30 = fVar30 * *(float *)*param_7;
        fVar34 = fVar34 * *(float *)(*param_7 + 4);
        uVar21 = (undefined1)((uint)fVar34 >> 8);
        uVar22 = (undefined1)((uint)fVar34 >> 0x10);
        uVar23 = (undefined1)((uint)fVar34 >> 0x18);
        fVar11 = fVar11 * *(float *)(*param_7 + 8);
        uVar24 = (undefined1)((uint)fVar11 >> 8);
        uVar25 = (undefined1)((uint)fVar11 >> 0x10);
        uVar26 = (undefined1)((uint)fVar11 >> 0x18);
        fVar39 = fVar39 * *(float *)(*param_7 + 0xc);
        uVar27 = (undefined1)((uint)fVar39 >> 8);
        uVar28 = (undefined1)((uint)fVar39 >> 0x10);
        uVar29 = (undefined1)((uint)fVar39 >> 0x18);
        auVar6[4] = SUB41(fVar34,0);
        auVar6._0_4_ = fVar30;
        auVar6[5] = uVar21;
        auVar6[6] = uVar22;
        auVar6[7] = uVar23;
        auVar6[8] = SUB41(fVar11,0);
        auVar6[9] = uVar24;
        auVar6[10] = uVar25;
        auVar6[0xb] = uVar26;
        auVar6[0xc] = SUB41(fVar39,0);
        auVar6[0xd] = uVar27;
        auVar6[0xe] = uVar28;
        auVar6[0xf] = uVar29;
        auVar7[4] = SUB41(fVar34,0);
        auVar7._0_4_ = fVar30;
        auVar7[5] = uVar21;
        auVar7[6] = uVar22;
        auVar7[7] = uVar23;
        auVar7[8] = SUB41(fVar11,0);
        auVar7[9] = uVar24;
        auVar7[10] = uVar25;
        auVar7[0xb] = uVar26;
        auVar7[0xc] = SUB41(fVar39,0);
        auVar7[0xd] = uVar27;
        auVar7[0xe] = uVar28;
        auVar7[0xf] = uVar29;
        auVar37 = NEON_ext(auVar6,auVar7,8,1);
        if (*(float *)(param_2 + 0x84) < -(fVar30 + fVar34 + auVar37._0_4_)) {
LAB_02f77010:
          uVar14 = 0x20c0;
          goto LAB_02f77014;
        }
      }
      else {
        fVar30 = fVar30 * fVar30;
        fVar34 = fVar34 * fVar34;
        uVar21 = (undefined1)((uint)fVar34 >> 8);
        uVar22 = (undefined1)((uint)fVar34 >> 0x10);
        uVar23 = (undefined1)((uint)fVar34 >> 0x18);
        fVar11 = fVar11 * fVar11;
        uVar24 = (undefined1)((uint)fVar11 >> 8);
        uVar25 = (undefined1)((uint)fVar11 >> 0x10);
        uVar26 = (undefined1)((uint)fVar11 >> 0x18);
        fVar39 = fVar39 * fVar39;
        uVar27 = (undefined1)((uint)fVar39 >> 8);
        uVar28 = (undefined1)((uint)fVar39 >> 0x10);
        uVar29 = (undefined1)((uint)fVar39 >> 0x18);
        auVar8[4] = SUB41(fVar34,0);
        auVar8._0_4_ = fVar30;
        auVar8[5] = uVar21;
        auVar8[6] = uVar22;
        auVar8[7] = uVar23;
        auVar8[8] = SUB41(fVar11,0);
        auVar8[9] = uVar24;
        auVar8[10] = uVar25;
        auVar8[0xb] = uVar26;
        auVar8[0xc] = SUB41(fVar39,0);
        auVar8[0xd] = uVar27;
        auVar8[0xe] = uVar28;
        auVar8[0xf] = uVar29;
        auVar9[4] = SUB41(fVar34,0);
        auVar9._0_4_ = fVar30;
        auVar9[5] = uVar21;
        auVar9[6] = uVar22;
        auVar9[7] = uVar23;
        auVar9[8] = SUB41(fVar11,0);
        auVar9[9] = uVar24;
        auVar9[10] = uVar25;
        auVar9[0xb] = uVar26;
        auVar9[0xc] = SUB41(fVar39,0);
        auVar9[0xd] = uVar27;
        auVar9[0xe] = uVar28;
        auVar9[0xf] = uVar29;
        auVar37 = NEON_ext(auVar8,auVar9,8,1);
        if (*(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x84) <
            auVar37._0_4_ + fVar30 + fVar34) goto LAB_02f77010;
      }
      uVar14 = 0xc0;
    }
  }
LAB_02f77014:
  *puVar13 = uVar14;
LAB_02f77018:
  *(long *)(puVar13 + 0x10) = param_6;
  uVar1 = 0x800;
  if ((param_8 & 1) == 0) {
    uVar1 = 0;
  }
  *puVar13 = uVar14 | uVar1;
  *(undefined2 *)((long)puVar13 + 3) = 0x16;
  *(undefined1 *)(puVar13 + 3) = 4;
  iVar38 = 0;
  if (*(int *)(param_3[1] + 0x4c) != 0x7fffffff) {
    iVar38 = *(int *)(param_3[1] + 0x4c);
  }
  *(int *)(puVar13 + 0x14) = iVar38;
  iVar38 = 0;
  if (*(int *)(param_4[1] + 0x4c) != 0x7fffffff) {
    iVar38 = *(int *)(param_4[1] + 0x4c);
  }
  *(int *)(puVar13 + 0x16) = iVar38;
  *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(*param_3 + 0x50);
  *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(*param_4 + 0x50);
  *(undefined1 *)((long)puVar13 + 7) = 0;
  puVar13[0x1c] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  *(undefined1 *)((long)puVar13 + 5) = 0;
  *(undefined1 *)(puVar13 + 1) = 1;
  puVar13[0x18] = 0x8000;
  puVar13[0x19] = 0x8000;
  puVar13[0x1a] = 0x8000;
  puVar13[0x1b] = 0xf530;
  lVar17 = *param_3;
  fVar39 = auVar36._0_4_;
  fVar19 = auVar36._4_4_;
  fVar20 = auVar36._8_4_;
  fVar30 = (float)local_c90 * fVar39 + (float)local_c80 * fVar19 + (float)local_c70 * fVar20;
  fVar34 = local_c90._4_4_ * fVar39 + local_c80._4_4_ * fVar19 + local_c70._4_4_ * fVar20;
  auVar32._0_8_ = CONCAT44(fVar34,fVar30);
  auVar32._8_4_ =
       (float)uStack_c88 * fVar39 + (float)uStack_c78 * fVar19 + (float)uStack_c68 * fVar20;
  fVar30 = fVar30 * (((*(float *)(lVar17 + 0x30) + *(float *)(lVar17 + 0x40)) -
                     ((float)local_c60 + (float)local_c50)) + 0.0);
  fVar34 = fVar34 * (((*(float *)(lVar17 + 0x34) + *(float *)(lVar17 + 0x44)) -
                     (local_c60._4_4_ + (float)((ulong)local_c50 >> 0x20))) + 0.0);
  uVar21 = (undefined1)((uint)fVar34 >> 8);
  uVar22 = (undefined1)((uint)fVar34 >> 0x10);
  uVar23 = (undefined1)((uint)fVar34 >> 0x18);
  fVar11 = auVar32._8_4_ *
           (((*(float *)(lVar17 + 0x38) + *(float *)(lVar17 + 0x48)) -
            ((float)uStack_c58 + (float)uStack_c48)) + 0.0);
  uVar24 = (undefined1)((uint)fVar11 >> 8);
  uVar25 = (undefined1)((uint)fVar11 >> 0x10);
  uVar26 = (undefined1)((uint)fVar11 >> 0x18);
  fVar39 = (uStack_c88._4_4_ * fVar39 + uStack_c78._4_4_ * fVar19 + uStack_c68._4_4_ * fVar20) *
           (((*(float *)(lVar17 + 0x3c) + *(float *)(lVar17 + 0x4c)) -
            (uStack_c58._4_4_ + (float)((ulong)uStack_c48 >> 0x20))) + 0.0);
  uVar27 = (undefined1)((uint)fVar39 >> 8);
  uVar28 = (undefined1)((uint)fVar39 >> 0x10);
  uVar29 = (undefined1)((uint)fVar39 >> 0x18);
  auVar4[4] = SUB41(fVar34,0);
  auVar4._0_4_ = fVar30;
  auVar4[5] = uVar21;
  auVar4[6] = uVar22;
  auVar4[7] = uVar23;
  auVar4[8] = SUB41(fVar11,0);
  auVar4[9] = uVar24;
  auVar4[10] = uVar25;
  auVar4[0xb] = uVar26;
  auVar4[0xc] = SUB41(fVar39,0);
  auVar4[0xd] = uVar27;
  auVar4[0xe] = uVar28;
  auVar4[0xf] = uVar29;
  auVar5[4] = SUB41(fVar34,0);
  auVar5._0_4_ = fVar30;
  auVar5[5] = uVar21;
  auVar5[6] = uVar22;
  auVar5[7] = uVar23;
  auVar5[8] = SUB41(fVar11,0);
  auVar5[9] = uVar24;
  auVar5[10] = uVar25;
  auVar5[0xb] = uVar26;
  auVar5[0xc] = SUB41(fVar39,0);
  auVar5[0xd] = uVar27;
  auVar5[0xe] = uVar28;
  auVar5[0xf] = uVar29;
  auVar37 = NEON_ext(auVar4,auVar5,8,1);
  auVar32._12_4_ = (auVar36._12_4_ - fVar43) + fVar30 + fVar34 + auVar37._0_4_;
  *(long *)(puVar13 + 0xc) = auVar32._8_8_;
  *(undefined8 *)(puVar13 + 8) = auVar32._0_8_;
  *(int *)(param_9 + 0x18) = *(int *)(param_9 + 0x18) + 0x160;
  *(int *)(param_9 + 0x1c) = *(int *)(param_9 + 0x1c) + 1;
  *(uint *)(param_9 + 0x28) = ((byte)puVar13[3] & 7) * 4 + *(int *)(param_9 + 0x28) + 4;
  uVar16 = *(undefined8 *)(param_9 + 0x10);
  *(undefined8 *)(param_6 + 0x20) = uVar16;
  *(short *)(param_6 + 0x28) = (short)puVar13 - (short)uVar16;
  *(undefined8 *)(param_6 + 0x40) = 0;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 0x50) = 0;
  *(undefined8 *)(param_6 + 0x58) = 0;
  *(undefined8 *)(param_6 + 0x60) = 0;
  *(undefined8 *)(param_6 + 0x68) = 0;
  local_b00 = PTR_DAT_047d1b30 + 0x10;
  if (local_af8 != (long *)0x0) {
    (**(code **)(*local_af8 + 8))();
  }
  return;
}


