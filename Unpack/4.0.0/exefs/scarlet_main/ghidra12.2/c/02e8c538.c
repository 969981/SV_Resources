/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e8c538; name: FUN_02e8c538
 */


void FUN_02e8c538(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  void *__src;
  long *plVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar24 [12];
  float fVar33;
  float fVar34;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar35;
  int iVar39;
  int iVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined2 local_1b0 [2];
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  long local_b0;
  undefined8 local_a8;
  float *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  lVar13 = *param_1;
  puVar1 = (undefined8 *)
           (lVar13 + 0x48 + (ulong)(param_2 & 0xffff) * 0x40 + *(long *)(lVar13 + 0x48));
  pbVar19 = (byte *)((long)puVar1 + 0x1e);
  if ((*pbVar19 >> 6 & 1) == 0) {
    return;
  }
  uVar16 = *(undefined8 *)param_1[6];
  uVar4 = ((undefined8 *)param_1[6])[1];
  local_60 = (undefined2)uVar16;
  uStack_5e = (undefined2)((ulong)uVar16 >> 0x10);
  uStack_5c = (undefined4)((ulong)uVar16 >> 0x20);
  uStack_58 = (undefined4)uVar4;
  local_54 = (undefined4)((ulong)uVar4 >> 0x20);
  puVar14 = (undefined8 *)param_1[7];
  uVar17 = puVar14[3];
  plVar20 = puVar1 + 6;
  iVar23 = (uint)*(byte *)(lVar13 + 0x1c) + (int)(uVar17 >> 0x20);
  uVar17 = (ulong)((param_2 + 1 << (ulong)(-iVar23 & 0x1f)) - 1) |
           uVar17 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar17 >> 0x20) * 4);
  plVar12 = *(long **)param_1[4];
  lVar2 = 0;
  if (*plVar20 != 0) {
    lVar2 = *plVar20 + (long)plVar20;
  }
  uVar18 = (undefined4)uVar17;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x40))
              (plVar12,*(undefined2 *)((long)puVar1 + 0x2c),2,*puVar14,puVar14[1],lVar13,uVar17,
               lVar2,&local_60);
    lVar13 = param_1[4];
    if (*(long *)(lVar13 + 8) != 0) {
      local_1b0[0] = *(undefined2 *)(lVar13 + 0x10);
      local_1a4 = *(undefined4 *)(lVar13 + 0x1c);
      local_1ac = *(undefined8 *)(lVar13 + 0x14);
      puVar14 = (undefined8 *)param_1[5];
      local_1a0 = *puVar14;
      local_198 = puVar14[1];
      local_190 = puVar14[2];
      local_188 = *(undefined4 *)(puVar14 + 3);
      local_180 = *(undefined8 *)(lVar13 + 0x38);
      local_c0 = local_60;
      uStack_bc = uStack_5c;
      uStack_b8 = uStack_58;
      local_b4 = local_54;
      local_b0 = *(undefined8 *)param_1[7];
      local_a8 = ((undefined8 *)param_1[7])[1];
      local_a0 = (float *)*param_1;
      local_98 = CONCAT44(local_98._4_4_,uVar18);
      local_90 = lVar2;
      uVar17 = (**(code **)(**(long **)(lVar13 + 8) + 0x40))
                         (*(long **)(lVar13 + 8),2,(char)param_1[8] == '\0',local_1b0,&local_c0);
      if ((uVar17 & 1) == 0) {
        return;
      }
    }
  }
  puVar14 = (undefined8 *)param_1[7];
  auVar62 = NEON_fmov(0x3f800000,4);
  uVar16 = *puVar14;
  local_c0 = (undefined2)uVar16;
  uStack_be = (undefined2)((ulong)uVar16 >> 0x10);
  uStack_bc = (undefined4)((ulong)uVar16 >> 0x20);
  uStack_b8 = (undefined4)puVar14[1];
  local_b4 = (undefined4)((ulong)puVar14[1] >> 0x20);
  local_b0 = puVar14[2];
  local_a8 = puVar14[3];
  local_a0 = (float *)puVar14[4];
  local_98 = 0;
  local_80 = puVar14[8];
  uStack_78 = puVar14[9];
  local_70 = puVar14[10];
  uStack_68 = puVar14[0xb];
  local_88[0] = *(undefined4 *)(puVar14 + 7);
  local_90._0_4_ = (undefined4)CONCAT71((int7)((ulong)local_90 >> 8),*(undefined1 *)(puVar14 + 6));
  local_90 = CONCAT44(*(undefined4 *)((long)puVar14 + 0x34),(undefined4)local_90);
  uVar16 = puVar1[2];
  auVar25 = *(undefined1 (*) [16])(puVar1 + 4);
  auVar38._0_12_ = auVar25._0_12_;
  auVar38._12_4_ = 1.0;
  fVar61 = (float)puVar1[3];
  fVar60 = (float)*puVar1;
  fVar32 = (float)((ulong)*puVar1 >> 0x20);
  fVar43 = fVar32 + fVar32;
  fVar57 = (float)puVar1[1];
  fVar46 = fVar57 + fVar57;
  fVar49 = (fVar60 + fVar60) * fVar60;
  fVar66 = (float)((ulong)puVar1[1] >> 0x20);
  fVar67 = (fVar60 + fVar60) * fVar66;
  fVar57 = 1.0 - fVar57 * fVar46;
  fVar64 = fVar46 * fVar32 - fVar67;
  fVar65 = fVar46 * fVar60 + fVar43 * fVar66;
  fVar59 = fVar46 * fVar60 - fVar43 * fVar66;
  fVar63 = fVar57 - fVar43 * fVar32;
  fVar58 = fVar43 * fVar60 - fVar46 * fVar66;
  fVar66 = fVar43 * fVar60 + fVar46 * fVar66;
  fVar57 = fVar57 - fVar49;
  fVar67 = fVar46 * fVar32 + fVar67;
  fVar60 = (1.0 - fVar49) - fVar43 * fVar32;
  if (*(char *)(puVar14 + 6) == '\0') {
    if ((*pbVar19 >> 3 & 1) == 0) goto LAB_02e8c884;
  }
  else {
    auVar37 = *(undefined1 (*) [16])(puVar14 + 8);
    auVar38._0_4_ = auVar25._0_4_ * auVar37._0_4_;
    auVar38._4_4_ = auVar25._4_4_ * auVar37._4_4_;
    auVar38._8_4_ = auVar25._8_4_ * auVar37._8_4_;
    auVar38._12_4_ = auVar37._12_4_ * 1.0;
    uVar16 = CONCAT44((float)((ulong)uVar16 >> 0x20) * auVar37._4_4_,(float)uVar16 * auVar37._0_4_);
    fVar61 = fVar61 * auVar37._8_4_;
  }
  uStack_78 = auVar38._8_8_;
  local_80 = auVar38._0_8_;
  local_90 = CONCAT71(local_90._1_7_,1);
  local_70 = 0;
  uStack_68 = 0;
  if ((*pbVar19 >> 3 & 1) == 0) {
    uVar5 = *(uint *)((long)puVar14 + 0x34);
  }
  else {
    uVar5 = (*pbVar19 >> 5 ^ 0xffffffff) & 1;
  }
  local_90 = CONCAT44(uVar5,(undefined4)local_90);
  lVar13 = 0;
  if (*plVar20 != 0) {
    lVar13 = *plVar20 + (long)plVar20;
  }
  local_88[0] = *(undefined4 *)(lVar13 + 0x20);
  if ((lVar13 != 0) && ((*(ushort *)(lVar13 + 0x1a) & 1) != 0)) {
    iVar35 = *(int *)(lVar13 + 0x40);
    lVar3 = 0;
    if (iVar35 != 0) {
      lVar3 = (long)iVar35 + lVar13 + 0x40;
    }
    FUN_00cb0560(lVar3,*(undefined4 *)(lVar13 + 0x44),uVar5,&local_80,local_88,&local_70);
  }
LAB_02e8c884:
  pfVar15 = *(float **)(param_1[7] + 0x20);
  fVar51 = (float)*(undefined8 *)(pfVar15 + 10);
  fVar52 = (float)((ulong)*(undefined8 *)(pfVar15 + 10) >> 0x20);
  fVar31 = (float)*(undefined8 *)(pfVar15 + 8);
  fVar50 = (float)((ulong)*(undefined8 *)(pfVar15 + 8) >> 0x20);
  fVar32 = *pfVar15;
  fVar43 = pfVar15[1];
  fVar46 = pfVar15[2];
  fVar49 = pfVar15[3];
  fVar22 = pfVar15[4];
  fVar28 = pfVar15[5];
  fVar29 = pfVar15[6];
  fVar33 = pfVar15[7];
  fVar45 = (float)((ulong)uVar16 >> 0x20);
  fVar42 = (float)uVar16;
  fVar41 = fVar31 * fVar60 + fVar32 * fVar65 + fVar22 * fVar64;
  fVar44 = fVar50 * fVar60 + fVar43 * fVar65 + fVar28 * fVar64;
  fVar47 = fVar51 * fVar60 + fVar46 * fVar65 + fVar29 * fVar64;
  fVar48 = fVar52 * fVar60 + fVar49 * fVar65 + fVar33 * fVar64;
  uStack_d8 = CONCAT44(fVar48,fVar47);
  local_e0 = CONCAT44(fVar44,fVar41);
  fVar53 = fVar31 * fVar67 + fVar32 * fVar58 + fVar22 * fVar57;
  fVar54 = fVar50 * fVar67 + fVar43 * fVar58 + fVar28 * fVar57;
  fVar55 = fVar51 * fVar67 + fVar46 * fVar58 + fVar29 * fVar57;
  fVar56 = fVar52 * fVar67 + fVar49 * fVar58 + fVar33 * fVar57;
  fVar21 = fVar31 * fVar59 + fVar32 * fVar63 + fVar22 * fVar66;
  fVar27 = fVar50 * fVar59 + fVar43 * fVar63 + fVar28 * fVar66;
  fVar30 = fVar51 * fVar59 + fVar46 * fVar63 + fVar29 * fVar66;
  fVar34 = fVar52 * fVar59 + fVar49 * fVar63 + fVar33 * fVar66;
  uStack_e8 = CONCAT44(fVar56,fVar55);
  uStack_f0 = CONCAT44(fVar54,fVar53);
  fVar22 = fVar31 * fVar61 + fVar32 * fVar42 + fVar22 * fVar45 + pfVar15[0xc];
  fVar28 = fVar50 * fVar61 + fVar43 * fVar42 + fVar28 * fVar45 + pfVar15[0xd];
  fVar31 = fVar51 * fVar61 + fVar46 * fVar42 + fVar29 * fVar45 + pfVar15[0xe];
  _fStack_c8 = CONCAT44(fVar52 * fVar61 + fVar49 * fVar42 + fVar33 * fVar45 + pfVar15[0xf],fVar31);
  _local_d0 = CONCAT44(fVar28,fVar22);
  __src = (void *)param_1[4];
  local_100 = fVar21;
  fStack_fc = fVar27;
  fStack_f8 = fVar30;
  fStack_f4 = fVar34;
  memcpy(local_1b0,__src,0x38);
  local_178 = *(undefined8 *)((long)__src + 0x38);
  local_160 = *(undefined8 *)((long)__src + 0x50);
  uStack_158 = *(undefined8 *)((long)__src + 0x58);
  uStack_150 = *(undefined8 *)((long)__src + 0x60);
  uStack_148 = *(undefined8 *)((long)__src + 0x68);
  memcpy(auStack_140,(void *)((long)__src + 0x70),0x40);
  local_a0 = &local_100;
  fVar32 = *(float *)((long)__src + 0x50);
  fVar43 = *(float *)((long)__src + 0x54);
  fVar46 = *(float *)((long)__src + 0x58);
  local_170 = 0;
  uStack_168 = 0;
  local_98 = 0;
  fVar49 = fVar59 * fVar46 + fVar63 * fVar32 + fVar66 * fVar43;
  fVar29 = fVar67 * fVar46 + fVar58 * fVar32 + fVar57 * fVar43;
  fVar32 = fVar60 * fVar46 + fVar65 * fVar32 + fVar64 * fVar43;
  iVar35 = -(uint)(fVar49 == 0.0);
  iVar39 = -(uint)(fVar29 == 0.0);
  iVar40 = -(uint)(fVar32 == 0.0);
  fVar49 = (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                           CONCAT12((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                    CONCAT11((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar35 >> 8),
                                             SUB41(fVar49,0) & ~(byte)iVar35)));
  auVar24._0_8_ =
       CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                         CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                  CONCAT14(SUB41(fVar29,0) & ~(byte)iVar39,fVar49))));
  auVar24[8] = SUB41(fVar32,0) & ~(byte)iVar40;
  auVar24[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar40 >> 8);
  auVar24[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
  auVar24[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
  fVar29 = (float)((ulong)auVar24._0_8_ >> 0x20);
  fVar32 = auVar62._4_4_ / fVar29;
  fVar33 = auVar24._8_4_;
  fVar43 = auVar62._8_4_ / fVar33;
  fVar46 = auVar62._12_4_ / 0.0;
  iVar35 = -(uint)(fVar49 == 0.0);
  iVar39 = -(uint)(fVar29 == 0.0);
  iVar40 = -(uint)(fVar33 == 0.0);
  auVar36[0] = ~(byte)iVar35;
  auVar36[1] = ~(byte)((uint)iVar35 >> 8);
  auVar36[2] = ~(byte)((uint)iVar35 >> 0x10);
  auVar36[3] = ~(byte)((uint)iVar35 >> 0x18);
  auVar36[4] = ~(byte)iVar39;
  auVar36[5] = ~(byte)((uint)iVar39 >> 8);
  auVar36[6] = ~(byte)((uint)iVar39 >> 0x10);
  auVar36[7] = ~(byte)((uint)iVar39 >> 0x18);
  auVar36[8] = ~(byte)iVar40;
  auVar36[9] = ~(byte)((uint)iVar40 >> 8);
  auVar36[10] = ~(byte)((uint)iVar40 >> 0x10);
  auVar36[0xb] = ~(byte)((uint)iVar40 >> 0x18);
  auVar36._12_4_ = 0;
  auVar25[4] = SUB41(fVar32,0);
  auVar25._0_4_ = auVar62._0_4_ / fVar49;
  auVar25[5] = (char)((uint)fVar32 >> 8);
  auVar25[6] = (char)((uint)fVar32 >> 0x10);
  auVar25[7] = (char)((uint)fVar32 >> 0x18);
  auVar25[8] = SUB41(fVar43,0);
  auVar25[9] = (char)((uint)fVar43 >> 8);
  auVar25[10] = (char)((uint)fVar43 >> 0x10);
  auVar25[0xb] = (char)((uint)fVar43 >> 0x18);
  auVar25[0xc] = SUB41(fVar46,0);
  auVar25[0xd] = (char)((uint)fVar46 >> 8);
  auVar25[0xe] = (char)((uint)fVar46 >> 0x10);
  auVar25[0xf] = (char)((uint)fVar46 >> 0x18);
  auVar62._8_4_ = 0x7f7fffee;
  auVar62._0_8_ = 0x7f7fffee7f7fffee;
  auVar62._12_4_ = 0x7f7fffee;
  auVar37._8_4_ = 0x7f7fffee;
  auVar37._0_8_ = 0x7f7fffee7f7fffee;
  auVar37._12_4_ = 0x7f7fffee;
  auVar37 = auVar37 ^ (auVar62 ^ auVar25) & auVar36;
  uStack_158 = (ulong)(uint)fVar33;
  uStack_148 = auVar37._8_8_;
  uStack_150 = auVar37._0_8_;
  local_b0 = *param_1;
  local_a8 = CONCAT44(iVar23,uVar18);
  if ((char)param_1[8] != '\0') {
    iVar23 = -(uint)(*(float *)((long)__src + 0x90) == 0.0);
    iVar35 = -(uint)(*(float *)((long)__src + 0x94) == 0.0);
    iVar39 = -(uint)(*(float *)((long)__src + 0x98) == 0.0);
    iVar40 = -(uint)(*(float *)((long)__src + 0x9c) == 0.0);
    if (CONCAT13(~(byte)((uint)iVar35 >> 0x18) | ~(byte)((uint)iVar23 >> 0x18) |
                 ~(byte)((uint)iVar39 >> 0x18) | ~(byte)((uint)iVar40 >> 0x18),
                 CONCAT12(~(byte)((uint)iVar35 >> 0x10) | ~(byte)((uint)iVar23 >> 0x10) |
                          ~(byte)((uint)iVar39 >> 0x10) | ~(byte)((uint)iVar40 >> 0x10),
                          CONCAT11(~(byte)((uint)iVar35 >> 8) | ~(byte)((uint)iVar23 >> 8) |
                                   ~(byte)((uint)iVar39 >> 8) | ~(byte)((uint)iVar40 >> 8),
                                   ~(byte)iVar35 | ~(byte)iVar23 | ~(byte)iVar39 | ~(byte)iVar40)))
        != 0) {
      fVar43 = fVar58 * local_120;
      fVar46 = fVar65 * local_120;
      fVar32 = fVar64 * fStack_11c;
      fVar42 = (float)local_110 - fVar42;
      fVar45 = (float)((ulong)local_110 >> 0x20) - fVar45;
      fVar61 = (float)uStack_108 - fVar61;
      local_120 = fVar59 * fStack_118 + fVar63 * local_120 + fVar66 * fStack_11c;
      fStack_11c = fVar67 * fStack_118 + fVar43 + fVar57 * fStack_11c;
      fStack_118 = fVar60 * fStack_118 + fVar46 + fVar32;
      uStack_108 = CONCAT44((int)((ulong)uStack_108 >> 0x20),
                            fVar60 * fVar61 + fVar65 * fVar42 + fVar64 * fVar45);
      local_110 = CONCAT44(fVar67 * fVar61 + fVar58 * fVar42 + fVar57 * fVar45,
                           fVar59 * fVar61 + fVar63 * fVar42 + fVar66 * fVar45);
    }
  }
  auVar11._4_4_ = fVar27;
  auVar11._0_4_ = fVar21;
  auVar11._8_4_ = fVar30;
  auVar10._4_4_ = fVar27;
  auVar10._0_4_ = fVar21;
  auVar10._8_4_ = fVar30;
  auVar9._8_4_ = fVar55;
  auVar9._0_8_ = CONCAT44(fVar54,fVar53);
  auVar8._8_4_ = fVar55;
  auVar8._0_8_ = CONCAT44(fVar54,fVar53);
  auVar8._12_4_ = fVar56;
  auVar9._12_4_ = fVar56;
  auVar38 = NEON_ext(auVar8,auVar9,8,1);
  auVar7._8_4_ = fVar47;
  auVar7._0_8_ = CONCAT44(fVar44,fVar41);
  auVar6._8_4_ = fVar47;
  auVar6._0_8_ = CONCAT44(fVar44,fVar41);
  auVar10._12_4_ = fVar34;
  auVar11._12_4_ = fVar34;
  auVar25 = NEON_ext(auVar10,auVar11,8,1);
  fVar66 = auVar25._0_4_;
  fVar67 = auVar38._0_4_;
  auVar6._12_4_ = fVar48;
  auVar7._12_4_ = fVar48;
  auVar25 = NEON_ext(auVar6,auVar7,8,1);
  pfVar15 = *(float **)(param_1[5] + 0x20);
  fVar46 = auVar25._4_4_;
  fVar43 = auVar25._0_4_;
  fVar60 = pfVar15[8];
  fVar32 = pfVar15[9];
  fVar57 = pfVar15[10];
  local_1d0 = fVar66 * fVar57 + fVar21 * fVar60 + fVar27 * fVar32;
  fStack_1cc = fVar67 * fVar57 + fVar53 * fVar60 + fVar54 * fVar32;
  fStack_1c8 = fVar43 * fVar57 + fVar41 * fVar60 + fVar44 * fVar32;
  fStack_1c4 = fVar46 * fVar57 + fVar44 * fVar60 + fVar46 * fVar32;
  fVar60 = pfVar15[4];
  fVar32 = pfVar15[5];
  fVar57 = pfVar15[6];
  local_1e0 = fVar66 * fVar57 + fVar21 * fVar60 + fVar27 * fVar32;
  fStack_1dc = fVar67 * fVar57 + fVar53 * fVar60 + fVar54 * fVar32;
  fStack_1d8 = fVar43 * fVar57 + fVar41 * fVar60 + fVar44 * fVar32;
  fStack_1d4 = fVar46 * fVar57 + fVar44 * fVar60 + fVar46 * fVar32;
  fVar60 = *pfVar15;
  fVar32 = pfVar15[1];
  fVar57 = pfVar15[2];
  local_1f0 = fVar66 * fVar57 + fVar21 * fVar60 + fVar27 * fVar32;
  fStack_1ec = fVar67 * fVar57 + fVar53 * fVar60 + fVar54 * fVar32;
  fStack_1e8 = fVar43 * fVar57 + fVar41 * fVar60 + fVar44 * fVar32;
  fStack_1e4 = fVar46 * fVar57 + fVar44 * fVar60 + fVar46 * fVar32;
  fVar22 = pfVar15[0xc] - fVar22;
  fVar28 = pfVar15[0xd] - fVar28;
  fVar31 = pfVar15[0xe] - fVar31;
  auVar26._0_8_ =
       CONCAT44(fVar67 * fVar31 + fVar53 * fVar22 + fVar54 * fVar28,
                fVar66 * fVar31 + fVar21 * fVar22 + fVar27 * fVar28);
  auVar26._8_4_ = fVar43 * fVar31 + fVar41 * fVar22 + fVar44 * fVar28;
  auVar26._12_4_ = fVar46 * fVar31 + fVar44 * fVar22 + fVar46 * fVar28;
  uStack_1b8 = auVar26._8_8_;
  local_1c0 = auVar26._0_8_;
  local_160 = auVar24._0_8_;
  FUN_02ea2d14(*(undefined8 *)param_1[3],(undefined8 *)param_1[3],local_1b0,param_1[5],lVar2,
               &local_60,&local_c0,&local_1f0,(char)param_1[8] != '\0',param_1[9],param_1[10]);
  return;
}


