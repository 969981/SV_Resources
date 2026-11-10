/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f213d0; name: FUN_02f213d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f213d0(long param_1,undefined1 (*param_2) [16],long param_3,long param_4,float *param_5,
                 int param_6,int param_7)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 uVar9;
  float fVar14;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar16;
  int iVar20;
  int iVar21;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  int iVar39;
  int iVar44;
  int iVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar46;
  int iVar47;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar77;
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined8 uVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 local_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  fVar8 = (float)*(undefined8 *)(param_4 + 0x58) * 0.5;
  fVar14 = (float)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) * 0.5;
  uVar6 = NEON_fmax(CONCAT44(*(float *)(param_1 + 0x3c) - fVar14,*(float *)(param_1 + 0x3c) - fVar8)
                    ,CONCAT44(fVar14,fVar8),4);
  uVar6 = NEON_fmax(uVar6,CONCAT44(*(undefined4 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x48)),
                    4);
  if (param_7 == 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x68);
    uVar30 = (undefined1)uStack_a8;
    uVar31 = (undefined1)((ulong)uStack_a8 >> 8);
    uVar32 = (undefined1)((ulong)uStack_a8 >> 0x10);
    uVar33 = (undefined1)((ulong)uStack_a8 >> 0x18);
    uVar34 = (undefined1)((ulong)uStack_a8 >> 0x20);
    uVar35 = (undefined1)((ulong)uStack_a8 >> 0x28);
    uVar36 = (undefined1)((ulong)uStack_a8 >> 0x30);
    uVar37 = (undefined1)((ulong)uStack_a8 >> 0x38);
    uStack_b0 = *(undefined8 *)(param_1 + 0x60);
    uVar22 = (undefined1)uStack_b0;
    uVar23 = (undefined1)((ulong)uStack_b0 >> 8);
    uVar24 = (undefined1)((ulong)uStack_b0 >> 0x10);
    uVar25 = (undefined1)((ulong)uStack_b0 >> 0x18);
    uVar26 = (undefined1)((ulong)uStack_b0 >> 0x20);
    uVar27 = (undefined1)((ulong)uStack_b0 >> 0x28);
    uVar28 = (undefined1)((ulong)uStack_b0 >> 0x30);
    uVar29 = (undefined1)((ulong)uStack_b0 >> 0x38);
    uVar2 = (undefined4)((ulong)uStack_a8 >> 0x20);
    uStack_b8 = CONCAT44(uVar2,uVar2);
    auVar13._0_8_ = *(undefined8 *)(param_1 + 0x70);
    auVar13._8_8_ = uStack_b8;
    fVar8 = 0.0;
    uVar81 = 0;
    uVar9 = uVar6;
    local_c0 = auVar13._0_8_;
  }
  else {
    (**(code **)(*(long *)PTR_DAT_047d19f0 +
                 (ulong)*(byte *)(*(long *)(param_1 + 0x78) + 0x18) * 0x200 + 0x18))
              (*(long *)(param_1 + 0x78),param_1,&local_c0);
    fVar8 = *(float *)(param_4 + 0x68);
    auVar13._8_8_ = uStack_b8;
    auVar13._0_8_ = local_c0;
    uVar30 = (undefined1)uStack_a8;
    uVar31 = (undefined1)((ulong)uStack_a8 >> 8);
    uVar32 = (undefined1)((ulong)uStack_a8 >> 0x10);
    uVar33 = (undefined1)((ulong)uStack_a8 >> 0x18);
    uVar34 = (undefined1)((ulong)uStack_a8 >> 0x20);
    uVar35 = (undefined1)((ulong)uStack_a8 >> 0x28);
    uVar36 = (undefined1)((ulong)uStack_a8 >> 0x30);
    uVar37 = (undefined1)((ulong)uStack_a8 >> 0x38);
    uVar22 = (undefined1)uStack_b0;
    uVar23 = (undefined1)((ulong)uStack_b0 >> 8);
    uVar24 = (undefined1)((ulong)uStack_b0 >> 0x10);
    uVar25 = (undefined1)((ulong)uStack_b0 >> 0x18);
    uVar26 = (undefined1)((ulong)uStack_b0 >> 0x20);
    uVar27 = (undefined1)((ulong)uStack_b0 >> 0x28);
    uVar28 = (undefined1)((ulong)uStack_b0 >> 0x30);
    uVar29 = (undefined1)((ulong)uStack_b0 >> 0x38);
    uVar9 = 0;
    uVar81 = uVar6;
  }
  fVar14 = *(float *)param_2[7];
  fVar15 = *(float *)(param_2[7] + 4);
  fVar38 = *(float *)(param_2[7] + 8);
  fVar55 = *(float *)(param_2[7] + 0xc);
  iVar46 = -(uint)(fVar14 == 0.0);
  iVar50 = -(uint)(fVar15 == 0.0);
  iVar52 = -(uint)(fVar38 == 0.0);
  fVar83 = (float)*(undefined8 *)param_2[6];
  iVar16 = -(uint)(fVar83 == 0.0);
  fVar84 = (float)((ulong)*(undefined8 *)param_2[6] >> 0x20);
  iVar20 = -(uint)(fVar84 == 0.0);
  fVar85 = (float)*(undefined8 *)(param_2[6] + 8);
  iVar21 = -(uint)(fVar85 == 0.0);
  fVar76 = (float)((ulong)*(undefined8 *)(param_2[6] + 8) >> 0x20);
  fVar57 = (float)uVar81;
  fVar64 = (float)((ulong)uVar81 >> 0x20);
  fVar69 = (float)((ulong)uVar9 >> 0x20);
  fVar60 = auVar13._0_4_;
  fVar61 = auVar13._4_4_;
  fVar62 = auVar13._8_4_;
  fVar56 = auVar13._12_4_;
  if (CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
               (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
               (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
               CONCAT12((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                        (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                        (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                        CONCAT11((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar20 >> 8) &
                                 (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar16 >> 8) &
                                 (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar21 >> 8),
                                 (byte)iVar50 & (byte)iVar20 & (byte)iVar46 & (byte)iVar16 &
                                 (byte)iVar52 & (byte)iVar21))) == 0) {
    auVar79._0_4_ = fVar14 * fVar14;
    auVar79._4_4_ = fVar15 * fVar15;
    auVar79._8_4_ = fVar38 * fVar38;
    auVar79._12_4_ = fVar55 * fVar55;
    auVar48 = NEON_ext(auVar79,auVar79,8,1);
    auVar82._0_4_ = fVar83 * fVar83;
    auVar82._4_4_ = fVar84 * fVar84;
    auVar82._8_4_ = fVar85 * fVar85;
    auVar82._12_4_ = fVar76 * fVar76;
    auVar65 = NEON_ext(auVar82,auVar82,8,1);
    fVar63 = auVar48._0_4_ + auVar79._0_4_ + auVar79._4_4_;
    fVar54 = SQRT(auVar65._0_4_ + auVar82._0_4_ + auVar82._4_4_);
    if (0.0 < fVar63) {
      auVar3._2_12_ = auVar48._4_12_;
      auVar3._0_2_ = *(undefined2 *)(param_1 + 0x94);
      fVar86 = (float)(auVar3._0_4_ << 0x10) - *(float *)(*(long *)(param_1 + 0x78) + 0x20);
      uVar78 = NEON_fmax(CONCAT44(fVar86,fVar86),0,4);
      uVar6 = *(undefined8 *)(param_4 + 0x30);
      uVar81 = NEON_fmov(0x3f800000,4);
      uVar81 = NEON_fmin(CONCAT44((float)((ulong)uVar6 >> 0x20) * SQRT(fVar63),
                                  (float)uVar6 * SQRT(fVar63)),uVar81,4);
      uVar81 = CONCAT44(fVar64 + (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar81 >> 0x20),
                        fVar57 + (float)uVar78 * (float)uVar81);
    }
    else {
      uVar6 = *(undefined8 *)(param_4 + 0x30);
    }
    fVar86 = (float)uVar6;
    fVar70 = fVar54 * fVar86;
    fVar87 = (float)((ulong)uVar6 >> 0x20);
    fVar54 = fVar54 * fVar87;
    fVar88 = (float)uVar81;
    fVar68 = (float)uVar9 + fVar88;
    fVar89 = (float)((ulong)uVar81 >> 0x20);
    fVar69 = fVar69 + fVar89;
    fVar71 = fVar83 * fVar86;
    fVar74 = fVar84 * fVar87;
    fVar75 = fVar85 * fVar86;
    fVar76 = fVar76 * fVar87;
    if ((*(uint *)(param_3 + 0x20) & 0x380) == 0x80) {
      fVar14 = SQRT(fVar75 * fVar75 + fVar71 * fVar71 + fVar74 * fVar74) * 0.5;
      fVar15 = SQRT(fVar75 * fVar75 + fVar71 * fVar71 + fVar74 * fVar74) * 0.5;
      auVar17._0_4_ =
           (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) +
           fVar88 + fVar71 * 0.5 + fVar14;
      auVar17._4_4_ =
           (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) +
           fVar89 + fVar74 * 0.5 + fVar15;
      auVar17._8_4_ =
           (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) +
           fVar88 + fVar75 * 0.5 + fVar14;
      auVar65._0_4_ = fVar60 + ((fVar71 * 0.5 - fVar14) - fVar88);
      auVar65._4_4_ = fVar61 + ((fVar74 * 0.5 - fVar15) - fVar89);
      auVar65._8_4_ = fVar62 + ((fVar75 * 0.5 - fVar14) - fVar88);
      auVar65._12_4_ = fVar56 + ((fVar76 * 0.5 - fVar15) - fVar89);
    }
    else if (((*(uint *)(param_3 + 0x20) >> 0x11 & 1) == 0) ||
            (fVar77 = (float)*(undefined8 *)(param_4 + 0x18),
            fVar63 <= fVar77 * fVar77 * 0.010966227)) {
      auVar10._0_4_ = fVar60 + fVar71;
      auVar10._4_4_ = fVar61 + fVar74;
      auVar10._8_4_ = fVar62 + fVar75;
      auVar10._12_4_ = fVar56 + fVar76;
      auVar18._0_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) + fVar71;
      auVar18._4_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) + fVar74;
      auVar18._8_4_ = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) + fVar75;
      auVar18._12_4_ = (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) + fVar76;
      auVar13 = NEON_fmin(auVar10,auVar13,4);
      auVar48[1] = uVar23;
      auVar48[0] = uVar22;
      auVar48[2] = uVar24;
      auVar48[3] = uVar25;
      auVar48[4] = uVar26;
      auVar48[5] = uVar27;
      auVar48[6] = uVar28;
      auVar48[7] = uVar29;
      auVar48[8] = uVar30;
      auVar48[9] = uVar31;
      auVar48[10] = uVar32;
      auVar48[0xb] = uVar33;
      auVar48[0xc] = uVar34;
      auVar48[0xd] = uVar35;
      auVar48[0xe] = uVar36;
      auVar48[0xf] = uVar37;
      auVar79 = NEON_fmax(auVar18,auVar48,4);
      auVar65._0_4_ = auVar13._0_4_ - fVar88;
      auVar65._4_4_ = auVar13._4_4_ - fVar89;
      auVar65._8_4_ = auVar13._8_4_ - fVar88;
      auVar65._12_4_ = auVar13._12_4_ - fVar89;
      auVar17._0_4_ = fVar88 + auVar79._0_4_;
      auVar17._4_4_ = fVar89 + auVar79._4_4_;
      auVar17._8_4_ = fVar88 + auVar79._8_4_;
    }
    else {
      fVar63 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) + fVar64;
      fVar88 = (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) + fVar64;
      auVar40._0_4_ = fVar14 * fVar86 * 0.5;
      auVar40._4_4_ = fVar15 * fVar87 * 0.5;
      auVar40._8_4_ = fVar38 * fVar86 * 0.5;
      auVar40._12_4_ = fVar55 * fVar87 * 0.5;
      auVar5[0xc] = SUB41(fVar88,0);
      auVar5._8_4_ = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) + fVar57;
      auVar5[0xd] = (char)((uint)fVar88 >> 8);
      auVar5[0xe] = (char)((uint)fVar88 >> 0x10);
      auVar5[0xf] = (char)((uint)fVar88 >> 0x18);
      auVar5[4] = SUB41(fVar63,0);
      auVar5._0_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) + fVar57;
      auVar5[5] = (char)((uint)fVar63 >> 8);
      auVar5[6] = (char)((uint)fVar63 >> 0x10);
      auVar5[7] = (char)((uint)fVar63 >> 0x18);
      auVar7._0_8_ = CONCAT44(fVar61 - fVar64,fVar60 - fVar57);
      auVar7._8_4_ = fVar62 - fVar57;
      auVar7._12_4_ = fVar56 - fVar64;
      auVar82 = NEON_ext(auVar40,auVar40,4,1);
      fVar14 = auVar40._8_4_ * auVar40._8_4_ +
               auVar40._0_4_ * auVar40._0_4_ + auVar40._4_4_ * auVar40._4_4_;
      fVar15 = auVar40._8_4_ * auVar40._8_4_ +
               auVar40._0_4_ * auVar40._0_4_ + auVar40._4_4_ * auVar40._4_4_;
      auVar13 = *param_2;
      fVar38 = auVar13._0_4_;
      fVar60 = auVar13._4_4_;
      fVar61 = auVar13._8_4_;
      fVar62 = auVar13._12_4_;
      auVar79 = NEON_ext(auVar13,auVar13,8,1);
      uVar6 = NEON_ext(auVar13._0_8_,auVar79._0_8_,4,1);
      auVar58._0_4_ = auVar82._0_4_ * fVar38 - auVar40._0_4_ * (float)uVar6;
      auVar58._4_4_ = auVar82._4_4_ * fVar60 - auVar40._4_4_ * (float)((ulong)uVar6 >> 0x20);
      auVar58._8_4_ = auVar40._0_4_ * fVar61 - auVar40._8_4_ * fVar38;
      auVar58._12_4_ = auVar40._4_4_ * fVar62 - auVar40._12_4_ * fVar60;
      auVar79 = NEON_ext(auVar58,auVar58,4,1);
      auVar41._0_4_ = auVar40._0_4_ * fVar38;
      auVar41._4_4_ = auVar40._4_4_ * fVar60;
      auVar41._8_4_ = auVar40._8_4_ * fVar61;
      auVar41._12_4_ = auVar40._12_4_ * fVar62;
      uVar6 = NEON_fmov(0x3f800000,4);
      fVar14 = fVar14 * (fVar14 * (fVar14 * -0.0029562549 + -0.02144013) + -0.33352822) +
               (float)uVar6;
      auVar13 = NEON_ext(auVar41,auVar41,8,1);
      fVar55 = auVar40._0_4_ * fVar62 + auVar79._0_4_ + fVar38 * fVar14;
      fVar60 = auVar40._4_4_ * fVar62 + auVar79._4_4_ +
               fVar60 * (fVar15 * (fVar15 * (fVar15 * -0.0029562549 + -0.02144013) + -0.33352822) +
                        (float)((ulong)uVar6 >> 0x20));
      fVar61 = auVar40._8_4_ * fVar62 + auVar58._0_4_ + fVar61 * fVar14;
      fVar15 = fVar14 * fVar62 - (auVar41._0_4_ + auVar41._4_4_ + auVar13._0_4_);
      auVar42._0_4_ = fVar55 * fVar55;
      auVar42._4_4_ = fVar60 * fVar60;
      auVar42._8_4_ = fVar61 * fVar61;
      auVar42._12_4_ = fVar15 * fVar15;
      auVar13 = NEON_ext(auVar42,auVar42,8,1);
      fVar14 = auVar13._0_4_ + auVar13._4_4_;
      fVar38 = SQRT(auVar42._0_4_ + auVar42._4_4_ + fVar14);
      fVar14 = SQRT(auVar42._0_4_ + auVar42._4_4_ + fVar14);
      auVar43._0_4_ = fVar55 / fVar38;
      auVar43._4_4_ = fVar60 / fVar14;
      auVar43._8_4_ = fVar61 / fVar38;
      auVar43._12_4_ = fVar15 / fVar14;
      auVar49._0_4_ = -*(float *)(param_1 + 0xa0);
      auVar49._4_4_ = -*(float *)(param_1 + 0xa4);
      auVar49._8_4_ = -*(float *)(param_1 + 0xa8);
      auVar49._12_4_ = *(undefined4 *)(param_1 + 0xac);
      auVar59._8_8_ = _UNK_03caab28;
      auVar59._0_8_ = _DAT_03caab20;
      auVar66._8_8_ = _UNK_03caa778;
      auVar66._0_8_ = _DAT_03caa770;
      auVar82 = a64_TBL(ZEXT816(0),auVar43,auVar59);
      auVar13 = a64_TBL(ZEXT816(0),auVar43,auVar66);
      auVar67._8_8_ = _UNK_03caa6a8;
      auVar67._0_8_ = _DAT_03caa6a0;
      auVar72._8_8_ = _UNK_03caab38;
      auVar72._0_8_ = _DAT_03caab30;
      auVar48 = a64_TBL(ZEXT816(0),auVar49,auVar67);
      auVar79 = a64_TBL(ZEXT816(0),auVar49,auVar72);
      auVar73._0_4_ = auVar13._0_4_ * auVar79._0_4_ - auVar82._0_4_ * auVar48._0_4_;
      auVar73._4_4_ = auVar13._4_4_ * auVar79._4_4_ - auVar82._4_4_ * auVar48._4_4_;
      auVar73._8_4_ = auVar13._8_4_ * auVar79._8_4_ - auVar82._8_4_ * auVar48._8_4_;
      auVar73._12_4_ = auVar13._12_4_ * auVar79._12_4_ - auVar82._12_4_ * auVar48._12_4_;
      auVar80._8_8_ = _UNK_03cab148;
      auVar80._0_8_ = _DAT_03cab140;
      auVar65 = a64_TBL(ZEXT816(0),auVar73,auVar80);
      fVar14 = auVar65._12_4_ - (auVar13._12_4_ * auVar48._12_4_ + auVar82._12_4_ * auVar79._12_4_);
      fVar60 = -(auVar65._0_4_ - (auVar13._0_4_ * auVar48._0_4_ + auVar82._0_4_ * auVar79._0_4_));
      fVar61 = -(auVar65._4_4_ - (auVar13._4_4_ * auVar48._4_4_ + auVar82._4_4_ * auVar79._4_4_));
      fVar62 = -(auVar65._8_4_ - (auVar13._8_4_ * auVar48._8_4_ + auVar82._8_4_ * auVar79._8_4_));
      fVar15 = fVar61 + fVar61;
      fVar55 = fVar62 + fVar62;
      fVar64 = (fVar60 + fVar60) * fVar60;
      fVar38 = (fVar60 + fVar60) * fVar14;
      fVar56 = 1.0 - fVar62 * fVar55;
      fVar63 = fVar55 * fVar61 - fVar38;
      fVar87 = fVar56 - fVar15 * fVar61;
      fVar56 = fVar56 - fVar64;
      fVar88 = fVar15 * fVar60 + fVar55 * fVar14;
      fVar86 = fVar15 * fVar60 - fVar55 * fVar14;
      fVar38 = fVar55 * fVar61 + fVar38;
      fVar62 = *(float *)(param_1 + 0x1c);
      fVar89 = fVar55 * fVar60 - fVar15 * fVar14;
      fVar55 = fVar55 * fVar60 + fVar15 * fVar14;
      fVar57 = *(float *)(param_1 + 0x2c);
      uStack_88 = CONCAT44(fVar55,fVar38);
      local_80 = CONCAT44(fVar63,fVar55);
      fVar60 = (1.0 - fVar64) - fVar15 * fVar61;
      uStack_98 = CONCAT44(fVar63,fVar89);
      fVar61 = *(float *)(param_1 + 0xc);
      local_a0 = CONCAT44(fVar88,fVar87);
      local_90 = CONCAT44(fVar56,fVar86);
      uStack_78 = (ulong)(uint)fVar60;
      fVar14 = (fVar74 + (float)*(double *)(param_2[1] + 8)) -
               (fVar63 * fVar57 + fVar56 * fVar62 + fVar88 * fVar61);
      fVar15 = (fVar76 + 0.0) - (fVar57 * 0.0 + fVar55 * fVar62 + fVar63 * fVar61);
      uStack_68 = CONCAT17((char)((uint)fVar15 >> 0x18),
                           CONCAT16((char)((uint)fVar15 >> 0x10),
                                    CONCAT15((char)((uint)fVar15 >> 8),
                                             CONCAT14(SUB41(fVar15,0),
                                                      (fVar75 + (float)*(double *)param_2[2]) -
                                                      (fVar60 * fVar57 +
                                                      fVar38 * fVar62 + fVar89 * fVar61)))));
      local_70 = CONCAT17((char)((uint)fVar14 >> 0x18),
                          CONCAT16((char)((uint)fVar14 >> 0x10),
                                   CONCAT15((char)((uint)fVar14 >> 8),
                                            CONCAT14(SUB41(fVar14,0),
                                                     (fVar71 + (float)*(double *)param_2[1]) -
                                                     (fVar55 * fVar57 +
                                                     fVar86 * fVar62 + fVar87 * fVar61)))));
      (**(code **)(*(long *)PTR_DAT_047d19f0 +
                   (ulong)*(byte *)(*(long *)(param_1 + 0x78) + 0x18) * 0x200 + 0x18))
                (*(long *)(param_1 + 0x78),&local_a0,local_e0);
      auVar4._8_8_ = auVar7._8_8_;
      auVar4._0_8_ = auVar7._0_8_;
      auVar65 = NEON_fmin(auVar4,local_e0,4);
      auVar13 = NEON_fmax(auVar5,auStack_d0,4);
      auVar17 = auVar13._0_12_;
    }
  }
  else {
    fVar68 = fVar57 + (float)uVar9;
    fVar69 = fVar64 + fVar69;
    auVar17._0_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) + fVar57;
    auVar17._4_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) + fVar64;
    auVar17._8_4_ = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) + fVar57;
    fVar70 = 0.0;
    fVar54 = 0.0;
    auVar65._0_4_ = fVar60 - fVar57;
    auVar65._4_4_ = fVar61 - fVar64;
    auVar65._8_4_ = fVar62 - fVar57;
    auVar65._12_4_ = fVar56 - fVar64;
  }
  fVar14 = (float)*(undefined8 *)(param_4 + 0x48);
  fVar15 = (float)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
  auVar11._0_8_ = CONCAT44((int)((fVar54 + fVar69) * fVar15),(int)((fVar70 + fVar68) * fVar14));
  iVar16 = (int)(fVar68 * fVar14);
  iVar20 = (int)(fVar69 * fVar15);
  uVar22 = (undefined1)iVar20;
  uVar23 = (undefined1)((uint)iVar20 >> 8);
  uVar24 = (undefined1)((uint)iVar20 >> 0x10);
  uVar25 = (undefined1)((uint)iVar20 >> 0x18);
  auVar11._8_8_ = auVar11._0_8_;
  uVar9 = NEON_sqxtun(auVar11._0_8_,auVar11,4);
  auVar1[4] = uVar22;
  auVar1._0_4_ = iVar16;
  auVar1[5] = uVar23;
  auVar1[6] = uVar24;
  auVar1[7] = uVar25;
  auVar1[8] = (char)iVar16;
  auVar1[9] = (char)((uint)iVar16 >> 8);
  auVar1[10] = (char)((uint)iVar16 >> 0x10);
  auVar1[0xb] = (char)((uint)iVar16 >> 0x18);
  auVar1[0xc] = uVar22;
  auVar1[0xd] = uVar23;
  auVar1[0xe] = uVar24;
  auVar1[0xf] = uVar25;
  uVar6 = NEON_sqxtun(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,iVar16)))),
                      auVar1,4);
  *(short *)(param_1 + 0x90) = (short)uVar9;
  *(short *)(param_1 + 0x92) = (short)uVar6;
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  fVar14 = (float)uVar6;
  *(short *)param_2[5] = (short)((uint)(fVar83 * fVar14) >> 0x10);
  *(short *)(param_2[5] + 2) = (short)((uint)(fVar84 * (float)((ulong)uVar6 >> 0x20)) >> 0x10);
  *(short *)(param_2[5] + 4) = (short)((uint)(fVar85 * fVar14) >> 0x10);
  uVar9 = _UNK_03cabeb8;
  uVar6 = _DAT_03cabeb0;
  if (0.0 < fVar8) {
    iVar47 = -(uint)(fVar83 < 0.0);
    iVar51 = -(uint)(fVar84 < 0.0);
    iVar53 = -(uint)(fVar85 < 0.0);
    fVar14 = fVar8 * (float)*(undefined8 *)(param_4 + 0x18);
    fVar15 = fVar8 * (float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20);
    iVar46 = -(uint)(ABS((float)*(undefined8 *)(param_2[3] + 8)) < fVar14);
    iVar50 = -(uint)(ABS((float)((ulong)*(undefined8 *)(param_2[3] + 8) >> 0x20)) < fVar15);
    iVar52 = -(uint)(ABS((float)((ulong)*(undefined8 *)param_2[3] >> 0x20)) < fVar14);
    iVar16 = -(uint)(ABS(fVar83) < fVar14);
    iVar20 = -(uint)(ABS(fVar84) < fVar15);
    iVar21 = -(uint)(ABS(fVar85) < fVar14);
    iVar39 = -(uint)(0.0 < fVar83);
    iVar44 = -(uint)(0.0 < fVar84);
    iVar45 = -(uint)(0.0 < fVar85);
    if (CONCAT13((byte)((uint)iVar50 >> 0x18) &
                 ((byte)((uint)iVar51 >> 0x18) | (byte)((uint)iVar44 >> 0x18)) &
                 (byte)((uint)iVar20 >> 0x18) &
                 (byte)((uint)iVar46 >> 0x18) &
                 ((byte)((uint)iVar47 >> 0x18) | (byte)((uint)iVar39 >> 0x18)) &
                 (byte)((uint)iVar16 >> 0x18) &
                 (byte)((uint)iVar52 >> 0x18) &
                 ((byte)((uint)iVar53 >> 0x18) | (byte)((uint)iVar45 >> 0x18)) &
                 (byte)((uint)iVar21 >> 0x18),
                 CONCAT12((byte)((uint)iVar50 >> 0x10) &
                          ((byte)((uint)iVar51 >> 0x10) | (byte)((uint)iVar44 >> 0x10)) &
                          (byte)((uint)iVar20 >> 0x10) &
                          (byte)((uint)iVar46 >> 0x10) &
                          ((byte)((uint)iVar47 >> 0x10) | (byte)((uint)iVar39 >> 0x10)) &
                          (byte)((uint)iVar16 >> 0x10) &
                          (byte)((uint)iVar52 >> 0x10) &
                          ((byte)((uint)iVar53 >> 0x10) | (byte)((uint)iVar45 >> 0x10)) &
                          (byte)((uint)iVar21 >> 0x10),
                          CONCAT11((byte)((uint)iVar50 >> 8) &
                                   ((byte)((uint)iVar51 >> 8) | (byte)((uint)iVar44 >> 8)) &
                                   (byte)((uint)iVar20 >> 8) &
                                   (byte)((uint)iVar46 >> 8) &
                                   ((byte)((uint)iVar47 >> 8) | (byte)((uint)iVar39 >> 8)) &
                                   (byte)((uint)iVar16 >> 8) &
                                   (byte)((uint)iVar52 >> 8) &
                                   ((byte)((uint)iVar53 >> 8) | (byte)((uint)iVar45 >> 8)) &
                                   (byte)((uint)iVar21 >> 8),
                                   (byte)iVar50 & ((byte)iVar51 | (byte)iVar44) & (byte)iVar20 &
                                   (byte)iVar46 & ((byte)iVar47 | (byte)iVar39) & (byte)iVar16 &
                                   (byte)iVar52 & ((byte)iVar53 | (byte)iVar45) & (byte)iVar21))) !=
        0) {
      fVar60 = auVar17._0_4_;
      iVar46 = -(uint)(fVar60 <= *(float *)(param_1 + 0x60));
      fVar61 = auVar17._4_4_;
      iVar50 = -(uint)(fVar61 <= *(float *)(param_1 + 100));
      fVar62 = auVar17._8_4_;
      iVar52 = -(uint)(fVar62 <= *(float *)(param_1 + 0x68));
      fVar14 = auVar65._0_4_;
      iVar16 = -(uint)((float)*(undefined8 *)(param_1 + 0x70) <= fVar14);
      fVar15 = auVar65._4_4_;
      iVar20 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) <= fVar15);
      fVar38 = auVar65._8_4_;
      iVar21 = -(uint)(*(float *)(param_1 + 0x6c) <= fVar38);
      fVar55 = auVar65._12_4_;
      if (CONCAT13((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                   (byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar46 >> 0x18) &
                   (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar52 >> 0x18),
                   CONCAT12((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                            (byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                            (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar52 >> 0x10),
                            CONCAT11((byte)((uint)iVar20 >> 8) & (byte)((uint)iVar50 >> 8) &
                                     (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar46 >> 8) &
                                     (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar52 >> 8),
                                     (byte)iVar20 & (byte)iVar50 & (byte)iVar16 & (byte)iVar46 &
                                     (byte)iVar21 & (byte)iVar52))) == 0) {
        fVar56 = *param_5;
        fVar57 = param_5[1];
        fVar64 = param_5[2];
        uVar81 = *(undefined8 *)(param_5 + 6);
        uVar30 = (undefined1)uVar81;
        uVar31 = (undefined1)((ulong)uVar81 >> 8);
        uVar32 = (undefined1)((ulong)uVar81 >> 0x10);
        uVar33 = (undefined1)((ulong)uVar81 >> 0x18);
        uVar81 = *(undefined8 *)(param_5 + 4);
        uVar22 = (undefined1)uVar81;
        uVar23 = (undefined1)((ulong)uVar81 >> 8);
        uVar24 = (undefined1)((ulong)uVar81 >> 0x10);
        uVar25 = (undefined1)((ulong)uVar81 >> 0x18);
        uVar26 = (undefined1)((ulong)uVar81 >> 0x20);
        uVar27 = (undefined1)((ulong)uVar81 >> 0x28);
        uVar28 = (undefined1)((ulong)uVar81 >> 0x30);
        uVar29 = (undefined1)((ulong)uVar81 >> 0x38);
      }
      else {
        fVar56 = *param_5;
        fVar57 = param_5[1];
        fVar64 = param_5[2];
        uVar78 = *(undefined8 *)(param_5 + 6);
        uVar30 = (undefined1)uVar78;
        uVar31 = (undefined1)((ulong)uVar78 >> 8);
        uVar32 = (undefined1)((ulong)uVar78 >> 0x10);
        uVar33 = (undefined1)((ulong)uVar78 >> 0x18);
        uVar81 = *(undefined8 *)(param_5 + 4);
        uVar22 = (undefined1)uVar81;
        uVar23 = (undefined1)((ulong)uVar81 >> 8);
        uVar24 = (undefined1)((ulong)uVar81 >> 0x10);
        uVar25 = (undefined1)((ulong)uVar81 >> 0x18);
        uVar26 = (undefined1)((ulong)uVar81 >> 0x20);
        uVar27 = (undefined1)((ulong)uVar81 >> 0x28);
        uVar28 = (undefined1)((ulong)uVar81 >> 0x30);
        uVar29 = (undefined1)((ulong)uVar81 >> 0x38);
        if (param_6 == 1) {
          iVar16 = -(uint)(fVar56 <= fVar14);
          iVar20 = -(uint)(fVar57 <= fVar15);
          iVar21 = -(uint)(fVar64 <= fVar38);
          iVar46 = -(uint)(fVar60 <= (float)uVar81);
          iVar50 = -(uint)(fVar61 <= (float)((ulong)uVar81 >> 0x20));
          iVar52 = -(uint)(fVar62 <= (float)uVar78);
          if (CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                       (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                       (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                       CONCAT12((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                                (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                                (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                                CONCAT11((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar20 >> 8) &
                                         (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar16 >> 8) &
                                         (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar21 >> 8),
                                         (byte)iVar50 & (byte)iVar20 & (byte)iVar46 & (byte)iVar16 &
                                         (byte)iVar52 & (byte)iVar21))) != 0) {
            return;
          }
        }
      }
      auVar17._0_4_ = fVar8 + fVar60;
      auVar17._4_4_ = fVar8 + fVar61;
      auVar17._8_4_ = fVar8 + fVar62;
      auVar65._0_4_ = fVar14 - fVar8;
      auVar65._4_4_ = fVar15 - fVar8;
      auVar65._8_4_ = fVar38 - fVar8;
      auVar65._12_4_ = fVar55 - fVar8;
      iVar16 = -(uint)(auVar65._0_4_ <=
                      (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))));
      iVar20 = -(uint)(auVar65._4_4_ <=
                      (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))));
      iVar21 = -(uint)(auVar65._8_4_ <=
                      (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))));
      iVar46 = -(uint)(fVar56 <= auVar17._0_4_);
      iVar50 = -(uint)(fVar57 <= auVar17._4_4_);
      iVar52 = -(uint)(fVar64 <= auVar17._8_4_);
      if (CONCAT13((byte)((uint)iVar20 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                   (byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar46 >> 0x18) &
                   (byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar52 >> 0x18),
                   CONCAT12((byte)((uint)iVar20 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                            (byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                            (byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar52 >> 0x10),
                            CONCAT11((byte)((uint)iVar20 >> 8) & (byte)((uint)iVar50 >> 8) &
                                     (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar46 >> 8) &
                                     (byte)((uint)iVar21 >> 8) & (byte)((uint)iVar52 >> 8),
                                     (byte)iVar20 & (byte)iVar50 & (byte)iVar16 & (byte)iVar46 &
                                     (byte)iVar21 & (byte)iVar52))) == 0) goto LAB_02f219f0;
    }
  }
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x10;
LAB_02f219f0:
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = uVar6;
  auVar13 = a64_TBL(ZEXT816(0),auVar65,auVar12);
  auVar19._12_4_ = auVar13._12_4_;
  auVar19._0_12_ = auVar17;
  *(long *)(param_1 + 0x68) = auVar19._8_8_;
  *(long *)(param_1 + 0x60) = auVar17._0_8_;
  *(long *)(param_1 + 0x70) = auVar65._0_8_;
  return;
}


