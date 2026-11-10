/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1ff30; name: FUN_02f1ff30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1ff30(long param_1,long param_2,float *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar27 [12];
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar55;
  int iVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar58;
  int iVar59;
  double dVar60;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  undefined1 auVar61 [16];
  int iVar66;
  float fVar70;
  int iVar71;
  float fVar72;
  int iVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  int iVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  double dVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  float fVar102;
  double dVar103;
  float local_100;
  float fStack_fc;
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar19 = _UNK_03cab148;
  uVar18 = _DAT_03cab140;
  uVar17 = _UNK_03caab38;
  uVar16 = _DAT_03caab30;
  uVar15 = _UNK_03caab28;
  uVar14 = _DAT_03caab20;
  uVar13 = _UNK_03caa778;
  uVar12 = _DAT_03caa770;
  uVar48 = _UNK_03caa6a8;
  uVar37 = _DAT_03caa6a0;
  lVar21 = param_4[0xf];
  fVar44 = 0.0;
  fVar36 = 0.0;
  if (lVar21 != 0) {
    fVar45 = *(float *)(param_5[3] + 4);
    auVar61._8_8_ = _UNK_03caab28;
    auVar61._0_8_ = _DAT_03caab20;
    auVar38 = a64_TBL(ZEXT816(0),*param_5,auVar61);
    auVar85._8_8_ = _UNK_03caa778;
    auVar85._0_8_ = _DAT_03caa770;
    auVar61 = a64_TBL(ZEXT816(0),*param_5,auVar85);
    fVar47 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar74 = *(float *)(param_5[2] + 8) * fVar47;
    fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fVar79 = *(float *)(param_5[2] + 0xc) * fVar25;
    fVar81 = *(float *)param_5[3] * fVar47;
    auVar67._4_4_ = -*(float *)((long)param_4 + 0xa4);
    auVar67._0_4_ = -*(float *)(param_4 + 0x14);
    auVar67._8_4_ = -*(float *)(param_4 + 0x15);
    auVar67._12_4_ = *(undefined4 *)((long)param_4 + 0xac);
    auVar1._8_8_ = _UNK_03caa6a8;
    auVar1._0_8_ = _DAT_03caa6a0;
    auVar85 = a64_TBL(ZEXT816(0),auVar67,auVar1);
    auVar50._4_4_ = -*(float *)((long)param_4 + 0xa4);
    auVar50._0_4_ = -*(float *)(param_4 + 0x14);
    auVar50._8_4_ = -*(float *)(param_4 + 0x15);
    auVar50._12_4_ = *(undefined4 *)((long)param_4 + 0xac);
    auVar2._8_8_ = _UNK_03caab38;
    auVar2._0_8_ = _DAT_03caab30;
    auVar67 = a64_TBL(ZEXT816(0),auVar50,auVar2);
    fVar26 = (float)*(undefined8 *)(param_5[3] + 8);
    fVar34 = (float)((ulong)*(undefined8 *)(param_5[3] + 8) >> 0x20);
    auVar49._0_4_ = fVar26 * fVar26;
    auVar49._4_4_ = fVar34 * fVar34;
    auVar49._8_4_ = fVar45 * fVar45;
    auVar49._12_4_ = fVar45 * fVar45;
    auVar50 = NEON_ext(auVar49,auVar49,8,1);
    auVar92._0_4_ = auVar61._0_4_ * auVar67._0_4_ - auVar38._0_4_ * auVar85._0_4_;
    auVar92._4_4_ = auVar61._4_4_ * auVar67._4_4_ - auVar38._4_4_ * auVar85._4_4_;
    auVar92._8_4_ = auVar61._8_4_ * auVar67._8_4_ - auVar38._8_4_ * auVar85._8_4_;
    auVar92._12_4_ = auVar61._12_4_ * auVar67._12_4_ - auVar38._12_4_ * auVar85._12_4_;
    auVar77._0_4_ = fVar74 * fVar74;
    auVar77._4_4_ = fVar79 * fVar79;
    auVar77._8_4_ = fVar81 * fVar81;
    auVar77._12_4_ = fVar45 * fVar25 * fVar45 * fVar25;
    auVar86 = NEON_ext(auVar77,auVar77,8,1);
    fVar81 = auVar86._0_4_ + auVar77._0_4_ + auVar77._4_4_;
    auVar86._8_8_ = _UNK_03cab148;
    auVar86._0_8_ = _DAT_03cab140;
    auVar86 = a64_TBL(ZEXT816(0),auVar92,auVar86);
    fVar45 = auVar86._12_4_ - (auVar61._12_4_ * auVar85._12_4_ + auVar38._12_4_ * auVar67._12_4_);
    fVar74 = -(auVar86._0_4_ - (auVar61._0_4_ * auVar85._0_4_ + auVar38._0_4_ * auVar67._0_4_));
    fVar79 = -(auVar86._4_4_ - (auVar61._4_4_ * auVar85._4_4_ + auVar38._4_4_ * auVar67._4_4_));
    fVar56 = -(auVar86._8_4_ - (auVar61._8_4_ * auVar85._8_4_ + auVar38._8_4_ * auVar67._8_4_));
    fVar70 = fVar79 + fVar79;
    fVar72 = fVar56 + fVar56;
    fVar93 = (float)((uint)*(ushort *)((long)param_4 + 0x94) << 0x10) - *(float *)(lVar21 + 0x20);
    fVar75 = (fVar74 + fVar74) * fVar74;
    fVar35 = (fVar74 + fVar74) * fVar45;
    fVar46 = 1.0 - fVar56 * fVar72;
    fVar100 = fVar72 * fVar79 - fVar35;
    fVar102 = fVar72 * fVar74 + fVar70 * fVar45;
    fVar89 = fVar72 * fVar74 - fVar70 * fVar45;
    fVar97 = (1.0 - fVar75) - fVar70 * fVar79;
    fVar90 = fVar70 * fVar74 + fVar72 * fVar45;
    fVar95 = fVar70 * fVar74 - fVar72 * fVar45;
    fVar70 = fVar46 - fVar70 * fVar79;
    fVar46 = fVar46 - fVar75;
    fVar35 = fVar72 * fVar79 + fVar35;
    fVar45 = *(float *)((long)param_4 + 0x2c);
    uVar101 = *(undefined8 *)(param_1 + 0x48);
    fVar74 = *(float *)((long)param_4 + 0xc);
    fVar79 = *(float *)((long)param_4 + 0x1c);
    dVar60 = *(double *)param_5[1];
    dVar103 = *(double *)(param_5[1] + 8);
    dVar96 = *(double *)param_5[2];
    *(float *)(param_4 + 3) = fVar35;
    param_4[4] = CONCAT44(fVar100,fVar102);
    auVar67 = NEON_fmov(0x3f800000,4);
    iVar83 = -(uint)(fVar81 <= 0.0);
    uVar91 = NEON_fmax(CONCAT44(fVar93,fVar93),0,4);
    *param_4 = CONCAT44(fVar90,fVar70);
    fVar56 = auVar67._0_4_ / SQRT(fVar81);
    fVar81 = fVar81 * (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                                      CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                               ~(byte)((uint)iVar83 >> 0x10),
                                               CONCAT11((byte)((uint)fVar56 >> 8) &
                                                        ~(byte)((uint)iVar83 >> 8),
                                                        SUB41(fVar56,0) & ~(byte)iVar83)));
    auVar67 = NEON_smin(ZEXT416((uint)fVar81),auVar67,4);
    dVar60 = dVar60 - (double)(fVar102 * fVar45 + fVar95 * fVar79 + fVar70 * fVar74);
    fVar56 = (float)uVar91 * auVar67._0_4_;
    fVar75 = (float)((ulong)uVar91 >> 0x20);
    fVar70 = fVar75 * auVar67._4_4_;
    fVar72 = (float)uVar91 * auVar67._8_4_;
    fVar75 = fVar75 * auVar67._12_4_;
    fVar93 = (float)dVar60;
    dVar103 = dVar103 - (double)(fVar100 * fVar45 + fVar46 * fVar79 + fVar90 * fVar74);
    fVar90 = (float)uVar101;
    fVar100 = (float)((ulong)uVar101 >> 0x20);
    *(float *)(param_4 + 1) = fVar89;
    param_4[2] = CONCAT44(fVar46,fVar95);
    auVar39._0_4_ = fVar81 * 41720.875 + 0.999;
    auVar39._4_4_ = 0x3f7fbe77;
    auVar39._8_4_ = 0x3f7fbe77;
    auVar39._12_4_ = 0x3f7fbe77;
    dVar96 = dVar96 - (double)(fVar97 * fVar45 + fVar35 * fVar79 + fVar89 * fVar74);
    *(float *)(param_4 + 5) = fVar97;
    auVar28._0_4_ = (int)(fVar90 * fVar56 + 0.999);
    auVar28._4_4_ = (int)(fVar100 * fVar70 + 0.999);
    auVar28._8_4_ = (int)(fVar90 * fVar72 + 0.999);
    auVar28._12_4_ = (int)(fVar100 * fVar75 + 0.999);
    fVar45 = (float)dVar103;
    auVar22._0_4_ =
         (int)(fVar90 * (fVar56 + fVar47 * SQRT(auVar50._0_4_ + fVar26 * fVar26 + fVar34 * fVar34 +
                                                1.4210855e-14)) + 0.999);
    auVar22._4_4_ = (int)(fVar100 * (fVar70 + fVar25 * 1.1920929e-07) + 0.999);
    auVar22._8_4_ = (int)(fVar90 * (fVar72 + fVar47 * 1.1920929e-07) + 0.999);
    auVar22._12_4_ = (int)(fVar100 * (fVar75 + fVar25 * 1.1920929e-07) + 0.999);
    fVar74 = (float)dVar96;
    auVar38._8_4_ = 0x477fff00;
    auVar38._0_8_ = 0x477fff00477fff00;
    auVar38._12_4_ = 0x477fff00;
    auVar67 = NEON_fmin(auVar39,auVar38,4);
    *(short *)((long)param_4 + 0x5a) = (short)(int)auVar67._0_4_;
    param_4[6] = CONCAT44(fVar45,fVar93);
    auVar78._8_8_ = 0xffff0000ffff;
    auVar78._0_8_ = 0xffff0000ffff;
    auVar50 = NEON_smax(auVar28,ZEXT816(0),4);
    auVar67 = NEON_smax(auVar22,ZEXT816(0),4);
    *(float *)(param_4 + 7) = fVar74;
    auVar50 = NEON_smin(auVar78,auVar50,4);
    auVar67 = NEON_smin(auVar78,auVar67,4);
    *(short *)((long)param_4 + 0x5e) = auVar50._0_2_;
    *(short *)((long)param_4 + 0x5c) = auVar67._0_2_;
    *(float *)(param_4 + 9) = (float)(dVar96 - (double)fVar74);
    param_4[8] = CONCAT44((float)(dVar103 - (double)fVar45),(float)(dVar60 - (double)fVar93));
  }
  puVar20 = PTR_DAT_047d19f0;
  fVar45 = (float)*(undefined8 *)(param_1 + 0x58) * 0.5;
  fVar74 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) * 0.5;
  uVar91 = NEON_fmax(CONCAT44(*(float *)((long)param_4 + 0x3c) - fVar74,
                              *(float *)((long)param_4 + 0x3c) - fVar45),CONCAT44(fVar74,fVar45),4);
  uVar91 = NEON_fmax(uVar91,CONCAT44(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x48)
                                    ),4);
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar21 + 0x18) * 0x200 + 0x18))
            (lVar21,param_4,&local_d0);
  fVar45 = *(float *)param_5[7];
  fVar74 = *(float *)(param_5[7] + 4);
  fVar79 = *(float *)(param_5[7] + 8);
  fVar47 = *(float *)(param_5[7] + 0xc);
  iVar58 = -(uint)(fVar45 == 0.0);
  iVar62 = -(uint)(fVar74 == 0.0);
  iVar64 = -(uint)(fVar79 == 0.0);
  fVar46 = *(float *)(param_1 + 0x68);
  fVar93 = (float)*(undefined8 *)param_5[6];
  iVar83 = -(uint)(fVar93 == 0.0);
  fVar89 = (float)((ulong)*(undefined8 *)param_5[6] >> 0x20);
  iVar55 = -(uint)(fVar89 == 0.0);
  fVar90 = (float)*(undefined8 *)(param_5[6] + 8);
  iVar57 = -(uint)(fVar90 == 0.0);
  fVar35 = (float)((ulong)*(undefined8 *)(param_5[6] + 8) >> 0x20);
  auVar10._8_8_ = uStack_c8;
  auVar10._0_8_ = local_d0;
  auVar11._8_8_ = uStack_b8;
  auVar11._0_8_ = uStack_c0;
  fVar34 = (float)uStack_c0;
  fVar25 = (float)local_d0;
  fVar70 = (float)((ulong)uStack_c0 >> 0x20);
  fVar72 = (float)uStack_b8;
  fVar75 = (float)((ulong)uStack_b8 >> 0x20);
  fVar26 = (float)((ulong)local_d0 >> 0x20);
  fVar81 = (float)uStack_c8;
  fVar56 = (float)((ulong)uStack_c8 >> 0x20);
  local_100 = (float)uVar91;
  fStack_fc = (float)((ulong)uVar91 >> 0x20);
  if (CONCAT13((byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
               (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
               (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
               CONCAT12((byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                        (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                        (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                        CONCAT11((byte)((uint)iVar62 >> 8) & (byte)((uint)iVar55 >> 8) &
                                 (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar83 >> 8) &
                                 (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar57 >> 8),
                                 (byte)iVar62 & (byte)iVar55 & (byte)iVar58 & (byte)iVar83 &
                                 (byte)iVar64 & (byte)iVar57))) == 0) {
    auVar68._0_4_ = fVar93 * fVar93;
    auVar68._4_4_ = fVar89 * fVar89;
    auVar68._8_4_ = fVar90 * fVar90;
    auVar68._12_4_ = fVar35 * fVar35;
    auVar51._0_4_ = fVar45 * fVar45;
    auVar51._4_4_ = fVar74 * fVar74;
    auVar51._8_4_ = fVar79 * fVar79;
    auVar51._12_4_ = fVar47 * fVar47;
    auVar50 = NEON_ext(auVar68,auVar68,8,1);
    auVar67 = NEON_ext(auVar51,auVar51,8,1);
    fVar95 = auVar67._0_4_ + auVar51._0_4_ + auVar51._4_4_;
    fVar36 = SQRT(auVar50._0_4_ + auVar68._0_4_ + auVar68._4_4_);
    if (0.0 < fVar95) {
      fVar44 = (float)((uint)*(ushort *)((long)param_4 + 0x94) << 0x10) -
               *(float *)(param_4[0xf] + 0x20);
      uVar84 = NEON_fmax(CONCAT44(fVar44,fVar44),0,4);
      uVar101 = *(undefined8 *)(param_1 + 0x30);
      uVar91 = NEON_fmov(0x3f800000,4);
      uVar91 = NEON_fmin(CONCAT44((float)((ulong)uVar101 >> 0x20) * SQRT(fVar95),
                                  (float)uVar101 * SQRT(fVar95)),uVar91,4);
      uVar91 = CONCAT44(fStack_fc + (float)((ulong)uVar84 >> 0x20) * (float)((ulong)uVar91 >> 0x20),
                        local_100 + (float)uVar84 * (float)uVar91);
    }
    else {
      uVar101 = *(undefined8 *)(param_1 + 0x30);
    }
    fVar97 = (float)uVar101;
    fVar44 = fVar36 * fVar97;
    fVar100 = (float)((ulong)uVar101 >> 0x20);
    fVar36 = fVar36 * fVar100;
    fVar102 = (float)uVar91;
    fVar87 = fVar102 + 0.0;
    fVar94 = (float)((ulong)uVar91 >> 0x20);
    fVar88 = fVar94 + 0.0;
    fVar76 = fVar93 * fVar97;
    fVar80 = fVar89 * fVar100;
    fVar82 = fVar90 * fVar97;
    fVar35 = fVar35 * fVar100;
    if ((*(uint *)(param_2 + 0x20) & 0x380) == 0x80) {
      fVar45 = SQRT(fVar82 * fVar82 + fVar76 * fVar76 + fVar80 * fVar80) * 0.5;
      fVar74 = SQRT(fVar82 * fVar82 + fVar76 * fVar76 + fVar80 * fVar80) * 0.5;
      auVar27._0_4_ = fVar34 + fVar102 + fVar76 * 0.5 + fVar45;
      auVar27._4_4_ = fVar70 + fVar94 + fVar80 * 0.5 + fVar74;
      auVar27._8_4_ = fVar72 + fVar102 + fVar82 * 0.5 + fVar45;
      auVar24._0_4_ = fVar25 + ((fVar76 * 0.5 - fVar45) - fVar102);
      auVar24._4_4_ = fVar26 + ((fVar80 * 0.5 - fVar74) - fVar94);
      auVar24._8_4_ = fVar81 + ((fVar82 * 0.5 - fVar45) - fVar102);
      auVar24._12_4_ = fVar56 + ((fVar35 * 0.5 - fVar74) - fVar94);
    }
    else if (((*(uint *)(param_2 + 0x20) >> 0x11 & 1) == 0) ||
            (fVar98 = (float)*(undefined8 *)(param_1 + 0x18),
            fVar95 <= fVar98 * fVar98 * 0.010966227)) {
      auVar41._0_4_ = fVar25 + fVar76;
      auVar41._4_4_ = fVar26 + fVar80;
      auVar41._8_4_ = fVar81 + fVar82;
      auVar41._12_4_ = fVar56 + fVar35;
      auVar53._0_4_ = fVar34 + fVar76;
      auVar53._4_4_ = fVar70 + fVar80;
      auVar53._8_4_ = fVar72 + fVar82;
      auVar53._12_4_ = fVar75 + fVar35;
      auVar67 = NEON_fmin(auVar41,auVar10,4);
      auVar50 = NEON_fmax(auVar53,auVar11,4);
      auVar24._0_4_ = auVar67._0_4_ - fVar102;
      auVar24._4_4_ = auVar67._4_4_ - fVar94;
      auVar24._8_4_ = auVar67._8_4_ - fVar102;
      auVar24._12_4_ = auVar67._12_4_ - fVar94;
      auVar27._0_4_ = fVar102 + auVar50._0_4_;
      auVar27._4_4_ = fVar94 + auVar50._4_4_;
      auVar27._8_4_ = fVar102 + auVar50._8_4_;
    }
    else {
      auVar29._0_4_ = fVar45 * fVar97 * 0.5;
      auVar29._4_4_ = fVar74 * fVar100 * 0.5;
      auVar29._8_4_ = fVar79 * fVar97 * 0.5;
      auVar29._12_4_ = fVar47 * fVar100 * 0.5;
      auVar38 = NEON_ext(auVar29,auVar29,4,1);
      fVar45 = auVar29._8_4_ * auVar29._8_4_ +
               auVar29._0_4_ * auVar29._0_4_ + auVar29._4_4_ * auVar29._4_4_;
      fVar74 = auVar29._8_4_ * auVar29._8_4_ +
               auVar29._0_4_ * auVar29._0_4_ + auVar29._4_4_ * auVar29._4_4_;
      auVar67 = *param_5;
      auVar50 = NEON_ext(auVar67,auVar67,8,1);
      fVar79 = auVar67._0_4_;
      fVar95 = auVar67._4_4_;
      fVar97 = auVar67._8_4_;
      fVar100 = auVar67._12_4_;
      uVar91 = NEON_ext(auVar67._0_8_,auVar50._0_8_,4,1);
      auVar52._0_4_ = auVar38._0_4_ * fVar79 - auVar29._0_4_ * (float)uVar91;
      auVar52._4_4_ = auVar38._4_4_ * fVar95 - auVar29._4_4_ * (float)((ulong)uVar91 >> 0x20);
      auVar52._8_4_ = auVar29._0_4_ * fVar97 - auVar29._8_4_ * fVar79;
      auVar52._12_4_ = auVar29._4_4_ * fVar100 - auVar29._12_4_ * fVar95;
      auVar50 = NEON_ext(auVar52,auVar52,4,1);
      auVar30._0_4_ = auVar29._0_4_ * fVar79;
      auVar30._4_4_ = auVar29._4_4_ * fVar95;
      auVar30._8_4_ = auVar29._8_4_ * fVar97;
      auVar30._12_4_ = auVar29._12_4_ * fVar100;
      uVar91 = NEON_fmov(0x3f800000,4);
      fVar45 = fVar45 * (fVar45 * (fVar45 * -0.0029562549 + -0.02144013) + -0.33352822) +
               (float)uVar91;
      auVar67 = NEON_ext(auVar30,auVar30,8,1);
      fVar47 = auVar29._0_4_ * fVar100 + auVar50._0_4_ + fVar79 * fVar45;
      fVar95 = auVar29._4_4_ * fVar100 + auVar50._4_4_ +
               fVar95 * (fVar74 * (fVar74 * (fVar74 * -0.0029562549 + -0.02144013) + -0.33352822) +
                        (float)((ulong)uVar91 >> 0x20));
      fVar97 = auVar29._8_4_ * fVar100 + auVar52._0_4_ + fVar97 * fVar45;
      fVar74 = fVar45 * fVar100 - (auVar30._0_4_ + auVar30._4_4_ + auVar67._0_4_);
      auVar31._0_4_ = fVar47 * fVar47;
      auVar31._4_4_ = fVar95 * fVar95;
      auVar31._8_4_ = fVar97 * fVar97;
      auVar31._12_4_ = fVar74 * fVar74;
      auVar67 = NEON_ext(auVar31,auVar31,8,1);
      fVar45 = auVar67._0_4_ + auVar67._4_4_;
      fVar79 = SQRT(auVar31._0_4_ + auVar31._4_4_ + fVar45);
      fVar45 = SQRT(auVar31._0_4_ + auVar31._4_4_ + fVar45);
      auVar32._0_4_ = fVar47 / fVar79;
      auVar32._4_4_ = fVar95 / fVar45;
      auVar32._8_4_ = fVar97 / fVar79;
      auVar32._12_4_ = fVar74 / fVar45;
      auVar40._0_4_ = -*(float *)(param_4 + 0x14);
      auVar40._4_4_ = -*(float *)((long)param_4 + 0xa4);
      auVar40._8_4_ = -*(float *)(param_4 + 0x15);
      auVar40._12_4_ = *(undefined4 *)((long)param_4 + 0xac);
      auVar8._8_8_ = uVar13;
      auVar8._0_8_ = uVar12;
      auVar9._8_8_ = uVar15;
      auVar9._0_8_ = uVar14;
      auVar38 = a64_TBL(ZEXT816(0),auVar32,auVar9);
      auVar67 = a64_TBL(ZEXT816(0),auVar32,auVar8);
      auVar5._8_8_ = uVar17;
      auVar5._0_8_ = uVar16;
      auVar6._8_8_ = uVar48;
      auVar6._0_8_ = uVar37;
      auVar61 = a64_TBL(ZEXT816(0),auVar40,auVar6);
      auVar50 = a64_TBL(ZEXT816(0),auVar40,auVar5);
      auVar69._0_4_ = auVar67._0_4_ * auVar50._0_4_ - auVar38._0_4_ * auVar61._0_4_;
      auVar69._4_4_ = auVar67._4_4_ * auVar50._4_4_ - auVar38._4_4_ * auVar61._4_4_;
      auVar69._8_4_ = auVar67._8_4_ * auVar50._8_4_ - auVar38._8_4_ * auVar61._8_4_;
      auVar69._12_4_ = auVar67._12_4_ * auVar50._12_4_ - auVar38._12_4_ * auVar61._12_4_;
      auVar7._8_8_ = uVar19;
      auVar7._0_8_ = uVar18;
      auVar85 = a64_TBL(ZEXT816(0),auVar69,auVar7);
      fVar45 = auVar85._12_4_ - (auVar67._12_4_ * auVar61._12_4_ + auVar38._12_4_ * auVar50._12_4_);
      fVar95 = -(auVar85._0_4_ - (auVar67._0_4_ * auVar61._0_4_ + auVar38._0_4_ * auVar50._0_4_));
      fVar97 = -(auVar85._4_4_ - (auVar67._4_4_ * auVar61._4_4_ + auVar38._4_4_ * auVar50._4_4_));
      fVar79 = -(auVar85._8_4_ - (auVar67._8_4_ * auVar61._8_4_ + auVar38._8_4_ * auVar50._8_4_));
      fVar74 = fVar97 + fVar97;
      fVar47 = fVar79 + fVar79;
      fVar100 = (fVar95 + fVar95) * fVar95;
      fStack_98 = (fVar95 + fVar95) * fVar45;
      fStack_9c = 1.0 - fVar79 * fVar47;
      fVar102 = fVar47 * fVar97 - fStack_98;
      fVar94 = fStack_9c - fVar74 * fVar97;
      fStack_9c = fStack_9c - fVar100;
      fVar98 = fVar74 * fVar95 + fVar47 * fVar45;
      fStack_a0 = fVar74 * fVar95 - fVar47 * fVar45;
      fStack_98 = fVar47 * fVar97 + fStack_98;
      fVar79 = *(float *)((long)param_4 + 0x1c);
      local_b0 = CONCAT44(fVar98,fVar94);
      fVar99 = fVar47 * fVar95 - fVar74 * fVar45;
      fStack_94 = fVar47 * fVar95 + fVar74 * fVar45;
      fVar47 = *(float *)((long)param_4 + 0x2c);
      local_90 = CONCAT44(fVar102,fStack_94);
      fVar45 = (1.0 - fVar100) - fVar74 * fVar97;
      uStack_a8 = CONCAT44(fVar102,fVar99);
      uStack_88 = (ulong)(uint)fVar45;
      fVar74 = *(float *)((long)param_4 + 0xc);
      auVar23._0_8_ =
           CONCAT44((fVar80 + (float)*(double *)(param_5[1] + 8)) -
                    (fVar102 * fVar47 + fStack_9c * fVar79 + fVar98 * fVar74),
                    (fVar76 + (float)*(double *)param_5[1]) -
                    (fStack_94 * fVar47 + fStack_a0 * fVar79 + fVar94 * fVar74));
      auVar23._8_4_ =
           (fVar82 + (float)*(double *)param_5[2]) -
           (fVar45 * fVar47 + fStack_98 * fVar79 + fVar99 * fVar74);
      auVar23._12_4_ = (fVar35 + 0.0) - (fVar47 * 0.0 + fStack_94 * fVar79 + fVar102 * fVar74);
      uStack_78 = auVar23._8_8_;
      uStack_80 = auVar23._0_8_;
      (**(code **)(*(long *)puVar20 + (ulong)*(byte *)(param_4[0xf] + 0x18) * 0x200 + 0x18))
                (param_4[0xf],&local_b0,local_f0);
      auVar3._4_4_ = fVar26 - fStack_fc;
      auVar3._0_4_ = fVar25 - local_100;
      auVar3._8_4_ = fVar81 - local_100;
      auVar3._12_4_ = fVar56 - fStack_fc;
      auVar24 = NEON_fmin(auVar3,local_f0,4);
      auVar4._4_4_ = fStack_fc + fVar70;
      auVar4._0_4_ = local_100 + fVar34;
      auVar4._8_4_ = local_100 + fVar72;
      auVar4._12_4_ = fStack_fc + fVar75;
      auVar67 = NEON_fmax(auVar4,auStack_e0,4);
      auVar27 = auVar67._0_12_;
    }
  }
  else {
    fVar87 = local_100 + 0.0;
    fVar88 = fStack_fc + 0.0;
    auVar27._0_4_ = local_100 + fVar34;
    auVar27._4_4_ = fStack_fc + fVar70;
    auVar27._8_4_ = local_100 + fVar72;
    auVar24._0_4_ = fVar25 - local_100;
    auVar24._4_4_ = fVar26 - fStack_fc;
    auVar24._8_4_ = fVar81 - local_100;
    auVar24._12_4_ = fVar56 - fStack_fc;
  }
  fVar45 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar74 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  auVar42._0_8_ = CONCAT44((int)((fVar36 + fVar88) * fVar74),(int)((fVar44 + fVar87) * fVar45));
  auVar54._0_8_ = CONCAT44((int)(fVar88 * fVar74),(int)(fVar87 * fVar45));
  auVar42._8_8_ = auVar42._0_8_;
  uVar37 = NEON_sqxtun(auVar42._0_8_,auVar42,4);
  auVar54._8_8_ = auVar54._0_8_;
  uVar48 = NEON_sqxtun(auVar54._0_8_,auVar54,4);
  *(short *)(param_4 + 0x12) = (short)uVar37;
  *(short *)((long)param_4 + 0x92) = (short)uVar48;
  uVar37 = *(undefined8 *)(param_1 + 0x10);
  fVar36 = (float)uVar37;
  *(short *)param_5[5] = (short)((uint)(fVar93 * fVar36) >> 0x10);
  *(short *)(param_5[5] + 2) = (short)((uint)(fVar89 * (float)((ulong)uVar37 >> 0x20)) >> 0x10);
  *(short *)(param_5[5] + 4) = (short)((uint)(fVar90 * fVar36) >> 0x10);
  uVar48 = _UNK_03cabeb8;
  uVar37 = _DAT_03cabeb0;
  if (0.0 < fVar46) {
    iVar66 = -(uint)(fVar93 < 0.0);
    iVar71 = -(uint)(fVar89 < 0.0);
    iVar73 = -(uint)(fVar90 < 0.0);
    fVar36 = fVar46 * (float)*(undefined8 *)(param_1 + 0x18);
    fVar44 = fVar46 * (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    iVar58 = -(uint)(ABS((float)*(undefined8 *)(param_5[3] + 8)) < fVar36);
    iVar62 = -(uint)(ABS((float)((ulong)*(undefined8 *)(param_5[3] + 8) >> 0x20)) < fVar44);
    iVar64 = -(uint)(ABS((float)((ulong)*(undefined8 *)param_5[3] >> 0x20)) < fVar36);
    iVar83 = -(uint)(ABS(fVar93) < fVar36);
    iVar55 = -(uint)(ABS(fVar89) < fVar44);
    iVar57 = -(uint)(ABS(fVar90) < fVar36);
    iVar59 = -(uint)(0.0 < fVar93);
    iVar63 = -(uint)(0.0 < fVar89);
    iVar65 = -(uint)(0.0 < fVar90);
    if (CONCAT13((byte)((uint)iVar62 >> 0x18) &
                 ((byte)((uint)iVar71 >> 0x18) | (byte)((uint)iVar63 >> 0x18)) &
                 (byte)((uint)iVar55 >> 0x18) &
                 (byte)((uint)iVar58 >> 0x18) &
                 ((byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar59 >> 0x18)) &
                 (byte)((uint)iVar83 >> 0x18) &
                 (byte)((uint)iVar64 >> 0x18) &
                 ((byte)((uint)iVar73 >> 0x18) | (byte)((uint)iVar65 >> 0x18)) &
                 (byte)((uint)iVar57 >> 0x18),
                 CONCAT12((byte)((uint)iVar62 >> 0x10) &
                          ((byte)((uint)iVar71 >> 0x10) | (byte)((uint)iVar63 >> 0x10)) &
                          (byte)((uint)iVar55 >> 0x10) &
                          (byte)((uint)iVar58 >> 0x10) &
                          ((byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar59 >> 0x10)) &
                          (byte)((uint)iVar83 >> 0x10) &
                          (byte)((uint)iVar64 >> 0x10) &
                          ((byte)((uint)iVar73 >> 0x10) | (byte)((uint)iVar65 >> 0x10)) &
                          (byte)((uint)iVar57 >> 0x10),
                          CONCAT11((byte)((uint)iVar62 >> 8) &
                                   ((byte)((uint)iVar71 >> 8) | (byte)((uint)iVar63 >> 8)) &
                                   (byte)((uint)iVar55 >> 8) &
                                   (byte)((uint)iVar58 >> 8) &
                                   ((byte)((uint)iVar66 >> 8) | (byte)((uint)iVar59 >> 8)) &
                                   (byte)((uint)iVar83 >> 8) &
                                   (byte)((uint)iVar64 >> 8) &
                                   ((byte)((uint)iVar73 >> 8) | (byte)((uint)iVar65 >> 8)) &
                                   (byte)((uint)iVar57 >> 8),
                                   (byte)iVar62 & ((byte)iVar71 | (byte)iVar63) & (byte)iVar55 &
                                   (byte)iVar58 & ((byte)iVar66 | (byte)iVar59) & (byte)iVar83 &
                                   (byte)iVar64 & ((byte)iVar73 | (byte)iVar65) & (byte)iVar57))) !=
        0) {
      fVar79 = auVar27._0_4_;
      iVar83 = -(uint)(fVar79 <= *(float *)(param_4 + 0xc));
      fVar47 = auVar27._4_4_;
      iVar55 = -(uint)(fVar47 <= *(float *)((long)param_4 + 100));
      fVar25 = auVar27._8_4_;
      iVar57 = -(uint)(fVar25 <= *(float *)(param_4 + 0xd));
      fVar36 = auVar24._0_4_;
      iVar58 = -(uint)((float)param_4[0xe] <= fVar36);
      fVar44 = auVar24._4_4_;
      iVar62 = -(uint)((float)((ulong)param_4[0xe] >> 0x20) <= fVar44);
      fVar45 = auVar24._8_4_;
      iVar64 = -(uint)(*(float *)((long)param_4 + 0x6c) <= fVar45);
      fVar74 = auVar24._12_4_;
      if (CONCAT13((byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                   (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                   (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                   CONCAT12((byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                            (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                            (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                            CONCAT11((byte)((uint)iVar62 >> 8) & (byte)((uint)iVar55 >> 8) &
                                     (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar83 >> 8) &
                                     (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar57 >> 8),
                                     (byte)iVar62 & (byte)iVar55 & (byte)iVar58 & (byte)iVar83 &
                                     (byte)iVar64 & (byte)iVar57))) == 0) {
        fVar26 = *param_3;
        fVar81 = param_3[1];
        fVar56 = param_3[2];
        fVar34 = param_3[4];
        fVar70 = param_3[5];
        fVar72 = param_3[6];
      }
      else {
        fVar26 = *param_3;
        fVar81 = param_3[1];
        fVar56 = param_3[2];
        fVar34 = param_3[4];
        fVar70 = param_3[5];
        fVar72 = param_3[6];
        iVar58 = -(uint)(fVar79 <= fVar34);
        iVar62 = -(uint)(fVar47 <= fVar70);
        iVar64 = -(uint)(fVar25 <= fVar72);
        iVar83 = -(uint)(fVar26 <= fVar36);
        iVar55 = -(uint)(fVar81 <= fVar44);
        iVar57 = -(uint)(fVar56 <= fVar45);
        if (CONCAT13((byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                     (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                     (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                     CONCAT12((byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                              (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                              (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                              CONCAT11((byte)((uint)iVar62 >> 8) & (byte)((uint)iVar55 >> 8) &
                                       (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar83 >> 8) &
                                       (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar57 >> 8),
                                       (byte)iVar62 & (byte)iVar55 & (byte)iVar58 & (byte)iVar83 &
                                       (byte)iVar64 & (byte)iVar57))) != 0) {
          return;
        }
      }
      auVar27._0_4_ = fVar46 + fVar79;
      auVar27._4_4_ = fVar46 + fVar47;
      auVar27._8_4_ = fVar46 + fVar25;
      auVar24._0_4_ = fVar36 - fVar46;
      auVar24._4_4_ = fVar44 - fVar46;
      auVar24._8_4_ = fVar45 - fVar46;
      auVar24._12_4_ = fVar74 - fVar46;
      iVar58 = -(uint)(auVar24._0_4_ <= fVar34);
      iVar62 = -(uint)(auVar24._4_4_ <= fVar70);
      iVar64 = -(uint)(auVar24._8_4_ <= fVar72);
      iVar83 = -(uint)(fVar26 <= auVar27._0_4_);
      iVar55 = -(uint)(fVar81 <= auVar27._4_4_);
      iVar57 = -(uint)(fVar56 <= auVar27._8_4_);
      if (CONCAT13((byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar55 >> 0x18) &
                   (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar83 >> 0x18) &
                   (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                   CONCAT12((byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar55 >> 0x10) &
                            (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar83 >> 0x10) &
                            (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                            CONCAT11((byte)((uint)iVar62 >> 8) & (byte)((uint)iVar55 >> 8) &
                                     (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar83 >> 8) &
                                     (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar57 >> 8),
                                     (byte)iVar62 & (byte)iVar55 & (byte)iVar58 & (byte)iVar83 &
                                     (byte)iVar64 & (byte)iVar57))) == 0) goto LAB_02f207d4;
    }
  }
  *(ushort *)(param_4 + 0xb) = *(ushort *)(param_4 + 0xb) | 0x10;
LAB_02f207d4:
  auVar43._8_8_ = uVar48;
  auVar43._0_8_ = uVar37;
  auVar67 = a64_TBL(ZEXT816(0),auVar24,auVar43);
  auVar33._12_4_ = auVar67._12_4_;
  auVar33._0_12_ = auVar27;
  param_4[0xd] = auVar33._8_8_;
  param_4[0xc] = auVar27._0_8_;
  param_4[0xe] = auVar24._0_8_;
  return;
}


