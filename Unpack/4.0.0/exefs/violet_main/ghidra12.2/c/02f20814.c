/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f20814; name: FUN_02f20814
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02f20814(long param_1,long param_2,long param_3,float *param_4,undefined8 *param_5,
            undefined1 (*param_6) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  int iVar20;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  undefined8 uVar21;
  int iVar30;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  int iVar35;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  byte bVar33;
  byte bVar38;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar39;
  int iVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar45;
  int iVar46;
  int iVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar48;
  float fVar49;
  int iVar50;
  float fVar57;
  int iVar58;
  float fVar59;
  int iVar60;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined2 uVar61;
  int iVar62;
  undefined8 uVar63;
  int iVar66;
  int iVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar75;
  float fVar78;
  undefined1 auVar71 [16];
  float fVar76;
  float fVar79;
  float fVar81;
  undefined1 auVar72 [16];
  float fVar80;
  undefined1 auVar73 [16];
  float fVar77;
  undefined1 auVar74 [16];
  float fVar82;
  undefined1 auVar84 [12];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar83;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar106 [12];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  undefined1 auVar110 [12];
  float fVar113;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar114;
  float fVar115;
  undefined1 auVar116 [16];
  double dVar117;
  double dVar118;
  double dVar119;
  float local_120;
  float fStack_11c;
  undefined1 local_110 [16];
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((*(byte *)((long)param_5 + 0x59) >> 2 & 1) == 0) {
    uVar61 = 0;
    *(undefined4 *)((long)param_5 + 0x5a) = 0;
  }
  else {
    if (param_5[0xf] == 0) goto LAB_02f20b4c;
    auVar116._0_4_ = -*(float *)(param_5 + 0x14);
    auVar116._4_4_ = -*(float *)((long)param_5 + 0xa4);
    auVar116._8_4_ = -*(float *)(param_5 + 0x15);
    auVar71._8_8_ = _UNK_03caab28;
    auVar71._0_8_ = _DAT_03caab20;
    fVar39 = *(float *)(param_6[3] + 4);
    auVar85._8_8_ = _UNK_03caa778;
    auVar85._0_8_ = _DAT_03caa770;
    auVar116._12_4_ = *(undefined4 *)((long)param_5 + 0xac);
    auVar94 = a64_TBL(ZEXT816(0),*param_6,auVar85);
    auVar88 = a64_TBL(ZEXT816(0),*param_6,auVar71);
    auVar97._8_8_ = _UNK_03caa6a8;
    auVar97._0_8_ = _DAT_03caa6a0;
    auVar111._8_8_ = _UNK_03caab38;
    auVar111._0_8_ = _DAT_03caab30;
    fVar80 = (float)((ulong)param_5[5] >> 0x20);
    auVar112 = a64_TBL(ZEXT816(0),auVar116,auVar111);
    auVar108 = a64_TBL(ZEXT816(0),auVar116,auVar97);
    fVar69 = (float)*(undefined8 *)(param_6[3] + 8);
    fVar81 = (float)((ulong)*(undefined8 *)(param_6[3] + 8) >> 0x20);
    auVar107._0_4_ = fVar69 * fVar69;
    auVar107._4_4_ = fVar81 * fVar81;
    auVar107._8_4_ = fVar39 * fVar39;
    auVar107._12_4_ = fVar39 * fVar39;
    uVar42 = *(undefined8 *)(param_2 + 0x48);
    auVar116 = NEON_fmov(0x3f800000,4);
    fVar45 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar48 = *(float *)(param_6[2] + 8) * fVar45;
    fVar49 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar57 = *(float *)(param_6[2] + 0xc) * fVar49;
    fVar59 = *(float *)param_6[3] * fVar45;
    auVar28._4_4_ = auVar94._4_4_ * auVar112._4_4_ - auVar88._4_4_ * auVar108._4_4_;
    auVar28._0_4_ = auVar94._0_4_ * auVar112._0_4_ - auVar88._0_4_ * auVar108._0_4_;
    auVar28._8_4_ = auVar94._8_4_ * auVar112._8_4_ - auVar88._8_4_ * auVar108._8_4_;
    auVar28._12_4_ = auVar94._12_4_ * auVar112._12_4_ - auVar88._12_4_ * auVar108._12_4_;
    auVar98._8_4_ = (int)_UNK_03cab148;
    auVar98._0_8_ = _DAT_03cab140;
    auVar98._12_4_ = (int)((ulong)_UNK_03cab148 >> 0x20);
    auVar98 = a64_TBL(ZEXT816(0),auVar28,auVar98);
    auVar51._0_4_ = fVar48 * fVar48;
    auVar51._4_4_ = fVar57 * fVar57;
    auVar51._8_4_ = fVar59 * fVar59;
    auVar51._12_4_ = fVar39 * fVar49 * fVar39 * fVar49;
    fVar59 = auVar98._12_4_ - (auVar94._12_4_ * auVar108._12_4_ + auVar88._12_4_ * auVar112._12_4_);
    auVar28 = NEON_ext(auVar51,auVar51,8,1);
    fVar48 = auVar51._0_4_ + auVar51._4_4_ + auVar28._0_4_;
    fVar109 = -(auVar98._0_4_ - (auVar94._0_4_ * auVar108._0_4_ + auVar88._0_4_ * auVar112._0_4_));
    fVar113 = -(auVar98._4_4_ - (auVar94._4_4_ * auVar108._4_4_ + auVar88._4_4_ * auVar112._4_4_));
    fVar39 = -(auVar98._8_4_ - (auVar94._8_4_ * auVar108._8_4_ + auVar88._8_4_ * auVar112._8_4_));
    auVar28 = NEON_ext(auVar107,auVar107,8,1);
    fVar75 = fVar113 + fVar113;
    fVar78 = fVar39 + fVar39;
    fVar41 = (fVar109 + fVar109) * fVar109;
    fVar57 = (fVar109 + fVar109) * fVar59;
    fVar95 = 1.0 - fVar39 * fVar78;
    fVar114 = fVar78 * fVar109 + fVar75 * fVar59;
    fVar102 = fVar78 * fVar113 - fVar57;
    auVar112._8_8_ = 0xffff0000ffff;
    auVar112._0_8_ = 0xffff0000ffff;
    fVar104 = fVar75 * fVar109 + fVar78 * fVar59;
    fVar70 = fVar75 * fVar109 - fVar78 * fVar59;
    fVar77 = fVar95 - fVar75 * fVar113;
    fVar95 = fVar95 - fVar41;
    fVar105 = auVar116._0_4_ / SQRT(fVar48);
    fVar57 = fVar78 * fVar113 + fVar57;
    fVar39 = *(float *)((long)param_5 + 0xc);
    iVar20 = -(uint)(fVar48 <= 0.0);
    fVar59 = fVar78 * fVar109 - fVar75 * fVar59;
    fVar41 = (1.0 - fVar41) - fVar75 * fVar113;
    fVar75 = (float)((uint)*(ushort *)((long)param_5 + 0x94) << 0x10) -
             *(float *)(param_5[0xf] + 0x20);
    uVar21 = NEON_fmax(CONCAT44(fVar75,fVar75),0,4);
    fVar48 = fVar48 * (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                      CONCAT12((byte)((uint)fVar105 >> 0x10) &
                                               ~(byte)((uint)iVar20 >> 0x10),
                                               CONCAT11((byte)((uint)fVar105 >> 8) &
                                                        ~(byte)((uint)iVar20 >> 8),
                                                        SUB41(fVar105,0) & ~(byte)iVar20)));
    dVar119 = *(double *)param_6[2];
    fVar82 = (float)((ulong)param_5[3] >> 0x20);
    dVar117 = *(double *)param_6[1];
    dVar118 = *(double *)(param_6[1] + 8);
    *(float *)(param_5 + 1) = fVar59;
    auVar98 = NEON_smin(ZEXT416((uint)fVar48),auVar116,4);
    *(float *)(param_5 + 3) = fVar57;
    fVar75 = (float)uVar21 * auVar98._0_4_;
    fVar109 = (float)((ulong)uVar21 >> 0x20);
    fVar78 = fVar109 * auVar98._4_4_;
    fVar105 = (float)uVar21 * auVar98._8_4_;
    fVar109 = fVar109 * auVar98._12_4_;
    *param_5 = CONCAT44(fVar104,fVar77);
    dVar117 = dVar117 - (double)(fVar114 * fVar80 + fVar70 * fVar82 + fVar77 * fVar39);
    fVar113 = (float)dVar117;
    dVar118 = dVar118 - (double)(fVar102 * fVar80 + fVar95 * fVar82 + fVar104 * fVar39);
    dVar119 = dVar119 - (double)(fVar41 * fVar80 + fVar57 * fVar82 + fVar59 * fVar39);
    fVar57 = (float)uVar42;
    fVar59 = (float)((ulong)uVar42 >> 0x20);
    fVar104 = (float)dVar118;
    auVar108._4_4_ = 0x3f7fbe77;
    auVar108._0_4_ = fVar48 * 41720.875 + 0.999;
    auVar108._8_4_ = 0x3f7fbe77;
    auVar108._12_4_ = 0x3f7fbe77;
    auVar88._8_4_ = 0x477fff00;
    auVar88._0_8_ = 0x477fff00477fff00;
    auVar88._12_4_ = 0x477fff00;
    auVar98 = NEON_fmin(auVar108,auVar88,4);
    fVar39 = (float)dVar119;
    *(float *)(param_5 + 7) = fVar39;
    auVar94._0_4_ =
         (int)(fVar57 * (fVar75 + fVar45 * SQRT(auVar28._0_4_ + fVar69 * fVar69 + fVar81 * fVar81 +
                                                1.4210855e-14)) + 0.999);
    auVar94._4_4_ = (int)(fVar59 * (fVar78 + fVar49 * 1.1920929e-07) + 0.999);
    auVar94._8_4_ = (int)(fVar57 * (fVar105 + fVar45 * 1.1920929e-07) + 0.999);
    auVar94._12_4_ = (int)(fVar59 * (fVar109 + fVar49 * 1.1920929e-07) + 0.999);
    auVar28 = NEON_smax(auVar94,ZEXT816(0),4);
    auVar28 = NEON_smin(auVar112,auVar28,4);
    *(short *)((long)param_5 + 0x5c) = auVar28._0_2_;
    *(short *)((long)param_5 + 0x5a) = (short)(int)auVar98._0_4_;
    auVar64._0_4_ = (int)(fVar57 * fVar75 + 0.999);
    auVar64._4_4_ = (int)(fVar59 * fVar78 + 0.999);
    auVar64._8_4_ = (int)(fVar57 * fVar105 + 0.999);
    auVar64._12_4_ = (int)(fVar59 * fVar109 + 0.999);
    auVar28 = NEON_smax(auVar64,ZEXT816(0),4);
    auVar28 = NEON_smin(auVar112,auVar28,4);
    *(float *)(param_5 + 5) = fVar41;
    uVar61 = auVar28._0_2_;
    param_5[4] = CONCAT44(fVar102,fVar114);
    param_5[2] = CONCAT44(fVar95,fVar70);
    param_5[6] = CONCAT44(fVar104,fVar113);
    *(float *)(param_5 + 9) = (float)(dVar119 - (double)fVar39);
    param_5[8] = CONCAT44((float)(dVar118 - (double)fVar104),(float)(dVar117 - (double)fVar113));
  }
  *(undefined2 *)((long)param_5 + 0x5e) = uVar61;
LAB_02f20b4c:
  puVar11 = PTR_DAT_047d19f0;
  fVar39 = (float)*(undefined8 *)(param_2 + 0x58) * 0.5;
  fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20) * 0.5;
  uVar21 = NEON_fmax(CONCAT44(*(float *)((long)param_5 + 0x3c) - fVar45,
                              *(float *)((long)param_5 + 0x3c) - fVar39),CONCAT44(fVar45,fVar39),4);
  uVar21 = NEON_fmax(uVar21,CONCAT44(*(undefined4 *)(param_3 + 0x48),*(undefined4 *)(param_3 + 0x48)
                                    ),4);
  local_120 = (float)uVar21;
  fStack_11c = (float)((ulong)uVar21 >> 0x20);
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_5[0xf] + 0x18) * 0x200 + 0x18))
            (param_5[0xf],param_5,&local_f0);
  uVar13 = uStack_d8;
  uVar12 = uStack_e0;
  uVar42 = uStack_e8;
  uVar21 = local_f0;
  fVar113 = (float)*(undefined8 *)(param_6[6] + 8);
  fVar81 = (float)((ulong)*(undefined8 *)(param_6[6] + 8) >> 0x20);
  fVar102 = (float)*(undefined8 *)param_6[6];
  fVar104 = (float)((ulong)*(undefined8 *)param_6[6] >> 0x20);
  fVar39 = *(float *)param_6[7];
  fVar45 = *(float *)(param_6[7] + 4);
  fVar49 = *(float *)(param_6[7] + 8);
  fVar69 = *(float *)(param_6[7] + 0xc);
  iVar40 = -(uint)(fVar39 == 0.0);
  iVar46 = -(uint)(fVar45 == 0.0);
  iVar47 = -(uint)(fVar49 == 0.0);
  fVar114 = *(float *)(param_2 + 0x68);
  iVar20 = -(uint)(fVar102 == 0.0);
  iVar30 = -(uint)(fVar104 == 0.0);
  iVar35 = -(uint)(fVar113 == 0.0);
  auVar9._8_8_ = uStack_e8;
  auVar9._0_8_ = local_f0;
  auVar110 = auVar9._0_12_;
  auVar10._8_8_ = uStack_d8;
  auVar10._0_8_ = uStack_e0;
  auVar106 = auVar10._0_12_;
  fVar48 = (float)uStack_e0;
  fVar57 = (float)((ulong)uStack_e0 >> 0x20);
  fVar59 = (float)uStack_d8;
  fVar75 = (float)((ulong)uStack_d8 >> 0x20);
  fVar78 = (float)local_f0;
  fVar105 = (float)((ulong)local_f0 >> 0x20);
  fVar109 = (float)uStack_e8;
  fVar95 = (float)((ulong)uStack_e8 >> 0x20);
  if (CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
               (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
               (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
               CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                        (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                        (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                        CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar30 >> 8) &
                                 (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar20 >> 8) &
                                 (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar35 >> 8),
                                 (byte)iVar46 & (byte)iVar30 & (byte)iVar40 & (byte)iVar20 &
                                 (byte)iVar47 & (byte)iVar35))) == 0) {
    auVar22._0_4_ = fVar39 * fVar39;
    auVar22._4_4_ = fVar45 * fVar45;
    auVar22._8_4_ = fVar49 * fVar49;
    auVar22._12_4_ = fVar69 * fVar69;
    auVar28 = NEON_ext(auVar22,auVar22,8,1);
    fVar82 = auVar28._0_4_ + auVar22._0_4_ + auVar22._4_4_;
    auVar23._0_4_ = fVar102 * fVar102;
    auVar23._4_4_ = fVar104 * fVar104;
    auVar23._8_4_ = fVar113 * fVar113;
    auVar23._12_4_ = fVar81 * fVar81;
    auVar28 = NEON_ext(auVar23,auVar23,8,1);
    fVar41 = SQRT(auVar28._0_4_ + auVar23._0_4_ + auVar23._4_4_);
    if (0.0 < fVar82) {
      fVar80 = (float)((uint)*(ushort *)((long)param_5 + 0x94) << 0x10) -
               *(float *)(param_5[0xf] + 0x20);
      uVar91 = NEON_fmax(CONCAT44(fVar80,fVar80),0,4);
      uVar63 = *(undefined8 *)(param_2 + 0x30);
      uVar96 = NEON_fmov(0x3f800000,4);
      uVar96 = NEON_fmin(CONCAT44((float)((ulong)uVar63 >> 0x20) * SQRT(fVar82),
                                  (float)uVar63 * SQRT(fVar82)),uVar96,4);
      fVar80 = local_120 + (float)uVar91 * (float)uVar96;
      fVar70 = fStack_11c + (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar96 >> 0x20);
    }
    else {
      uVar63 = *(undefined8 *)(param_2 + 0x30);
      fVar80 = local_120;
      fVar70 = fStack_11c;
    }
    fVar77 = (float)uVar63;
    fVar103 = fVar41 * fVar77;
    fVar83 = (float)((ulong)uVar63 >> 0x20);
    fVar41 = fVar41 * fVar83;
    fVar100 = fVar80 + 0.0;
    fVar101 = fVar70 + 0.0;
    fVar68 = fVar102 * fVar77;
    fVar76 = fVar104 * fVar83;
    fVar79 = fVar113 * fVar77;
    fVar81 = fVar81 * fVar83;
    if ((*(uint *)(param_3 + 0x20) & 0x380) == 0x80) {
      fVar39 = SQRT(fVar79 * fVar79 + fVar68 * fVar68 + fVar76 * fVar76) * 0.5;
      fVar45 = SQRT(fVar79 * fVar79 + fVar68 * fVar68 + fVar76 * fVar76) * 0.5;
      auVar89._0_4_ = fVar48 + fVar80 + fVar68 * 0.5 + fVar39;
      auVar89._4_4_ = fVar57 + fVar70 + fVar76 * 0.5 + fVar45;
      auVar89._8_4_ = fVar59 + fVar80 + fVar79 * 0.5 + fVar39;
      auVar89._12_4_ = fVar75 + fVar70 + fVar81 * 0.5 + fVar45;
      auVar74._0_4_ = fVar78 + ((fVar68 * 0.5 - fVar39) - fVar80);
      auVar74._4_4_ = fVar105 + ((fVar76 * 0.5 - fVar45) - fVar70);
      auVar74._8_4_ = fVar109 + ((fVar79 * 0.5 - fVar39) - fVar80);
      auVar74._12_4_ = fVar95 + ((fVar81 * 0.5 - fVar45) - fVar70);
    }
    else if (((*(uint *)(param_3 + 0x20) >> 0x11 & 1) == 0) ||
            (fVar115 = (float)*(undefined8 *)(param_2 + 0x18),
            fVar82 <= fVar115 * fVar115 * 0.010966227)) {
      auVar24._0_4_ = fVar78 + fVar68;
      auVar24._4_4_ = fVar105 + fVar76;
      auVar24._8_4_ = fVar109 + fVar79;
      auVar24._12_4_ = fVar95 + fVar81;
      auVar56._0_4_ = fVar48 + fVar68;
      auVar56._4_4_ = fVar57 + fVar76;
      auVar56._8_4_ = fVar59 + fVar79;
      auVar56._12_4_ = fVar75 + fVar81;
      auVar28 = NEON_fmin(auVar24,auVar9,4);
      auVar98 = NEON_fmax(auVar56,auVar10,4);
      auVar74._0_4_ = auVar28._0_4_ - fVar80;
      auVar74._4_4_ = auVar28._4_4_ - fVar70;
      auVar74._8_4_ = auVar28._8_4_ - fVar80;
      auVar74._12_4_ = auVar28._12_4_ - fVar70;
      auVar89._0_4_ = fVar80 + auVar98._0_4_;
      auVar89._4_4_ = fVar70 + auVar98._4_4_;
      auVar89._8_4_ = fVar80 + auVar98._8_4_;
      auVar89._12_4_ = fVar70 + auVar98._12_4_;
    }
    else {
      auVar52._0_4_ = fVar39 * fVar77 * 0.5;
      auVar52._4_4_ = fVar45 * fVar83 * 0.5;
      auVar52._8_4_ = fVar49 * fVar77 * 0.5;
      auVar52._12_4_ = fVar69 * fVar83 * 0.5;
      auVar108 = NEON_ext(auVar52,auVar52,4,1);
      fVar39 = auVar52._8_4_ * auVar52._8_4_ +
               auVar52._0_4_ * auVar52._0_4_ + auVar52._4_4_ * auVar52._4_4_;
      fVar45 = auVar52._8_4_ * auVar52._8_4_ +
               auVar52._0_4_ * auVar52._0_4_ + auVar52._4_4_ * auVar52._4_4_;
      auVar28 = *param_6;
      auVar98 = NEON_ext(auVar28,auVar28,8,1);
      fVar49 = auVar28._0_4_;
      fVar82 = auVar28._4_4_;
      fVar80 = auVar28._8_4_;
      fVar70 = auVar28._12_4_;
      uVar96 = NEON_ext(auVar28._0_8_,auVar98._0_8_,4,1);
      auVar72._0_4_ = auVar108._0_4_ * fVar49 - auVar52._0_4_ * (float)uVar96;
      auVar72._4_4_ = auVar108._4_4_ * fVar82 - auVar52._4_4_ * (float)((ulong)uVar96 >> 0x20);
      auVar72._8_4_ = auVar52._0_4_ * fVar80 - auVar52._8_4_ * fVar49;
      auVar72._12_4_ = auVar52._4_4_ * fVar70 - auVar52._12_4_ * fVar82;
      auVar98 = NEON_ext(auVar72,auVar72,4,1);
      auVar53._0_4_ = auVar52._0_4_ * fVar49;
      auVar53._4_4_ = auVar52._4_4_ * fVar82;
      auVar53._8_4_ = auVar52._8_4_ * fVar80;
      auVar53._12_4_ = auVar52._12_4_ * fVar70;
      uVar96 = NEON_fmov(0x3f800000,4);
      fVar39 = fVar39 * (fVar39 * (fVar39 * -0.0029562549 + -0.02144013) + -0.33352822) +
               (float)uVar96;
      auVar28 = NEON_ext(auVar53,auVar53,8,1);
      fVar69 = auVar52._0_4_ * fVar70 + auVar98._0_4_ + fVar49 * fVar39;
      fVar82 = auVar52._4_4_ * fVar70 + auVar98._4_4_ +
               fVar82 * (fVar45 * (fVar45 * (fVar45 * -0.0029562549 + -0.02144013) + -0.33352822) +
                        (float)((ulong)uVar96 >> 0x20));
      fVar80 = auVar52._8_4_ * fVar70 + auVar72._0_4_ + fVar80 * fVar39;
      fVar45 = fVar39 * fVar70 - (auVar53._0_4_ + auVar53._4_4_ + auVar28._0_4_);
      auVar54._0_4_ = fVar69 * fVar69;
      auVar54._4_4_ = fVar82 * fVar82;
      auVar54._8_4_ = fVar80 * fVar80;
      auVar54._12_4_ = fVar45 * fVar45;
      auVar28 = NEON_ext(auVar54,auVar54,8,1);
      fVar39 = auVar28._0_4_ + auVar28._4_4_;
      fVar49 = SQRT(auVar54._0_4_ + auVar54._4_4_ + fVar39);
      fVar39 = SQRT(auVar54._0_4_ + auVar54._4_4_ + fVar39);
      auVar55._0_4_ = fVar69 / fVar49;
      auVar55._4_4_ = fVar82 / fVar39;
      auVar55._8_4_ = fVar80 / fVar49;
      auVar55._12_4_ = fVar45 / fVar39;
      auVar65._0_4_ = -*(float *)(param_5 + 0x14);
      auVar65._4_4_ = -*(float *)((long)param_5 + 0xa4);
      auVar65._8_4_ = -*(float *)(param_5 + 0x15);
      auVar65._12_4_ = *(undefined4 *)((long)param_5 + 0xac);
      auVar73._8_8_ = _UNK_03caab28;
      auVar73._0_8_ = _DAT_03caab20;
      auVar86._8_8_ = _UNK_03caa778;
      auVar86._0_8_ = _DAT_03caa770;
      auVar108 = a64_TBL(ZEXT816(0),auVar55,auVar73);
      auVar28 = a64_TBL(ZEXT816(0),auVar55,auVar86);
      auVar87._8_8_ = _UNK_03caa6a8;
      auVar87._0_8_ = _DAT_03caa6a0;
      auVar92._8_8_ = _UNK_03caab38;
      auVar92._0_8_ = _DAT_03caab30;
      auVar88 = a64_TBL(ZEXT816(0),auVar65,auVar87);
      auVar98 = a64_TBL(ZEXT816(0),auVar65,auVar92);
      auVar93._0_4_ = auVar28._0_4_ * auVar98._0_4_ - auVar108._0_4_ * auVar88._0_4_;
      auVar93._4_4_ = auVar28._4_4_ * auVar98._4_4_ - auVar108._4_4_ * auVar88._4_4_;
      auVar93._8_4_ = auVar28._8_4_ * auVar98._8_4_ - auVar108._8_4_ * auVar88._8_4_;
      auVar93._12_4_ = auVar28._12_4_ * auVar98._12_4_ - auVar108._12_4_ * auVar88._12_4_;
      auVar99._8_8_ = _UNK_03cab148;
      auVar99._0_8_ = _DAT_03cab140;
      auVar94 = a64_TBL(ZEXT816(0),auVar93,auVar99);
      fVar45 = auVar94._12_4_ - (auVar28._12_4_ * auVar88._12_4_ + auVar108._12_4_ * auVar98._12_4_)
      ;
      fVar80 = -(auVar94._0_4_ - (auVar28._0_4_ * auVar88._0_4_ + auVar108._0_4_ * auVar98._0_4_));
      fVar77 = -(auVar94._4_4_ - (auVar28._4_4_ * auVar88._4_4_ + auVar108._4_4_ * auVar98._4_4_));
      fVar82 = -(auVar94._8_4_ - (auVar28._8_4_ * auVar88._8_4_ + auVar108._8_4_ * auVar98._8_4_));
      fVar49 = fVar77 + fVar77;
      fVar69 = fVar82 + fVar82;
      fVar83 = (fVar80 + fVar80) * fVar80;
      fVar39 = (fVar80 + fVar80) * fVar45;
      fVar70 = 1.0 - fVar82 * fVar69;
      fStack_c4 = fVar69 * fVar77 - fVar39;
      local_d0 = fVar70 - fVar49 * fVar77;
      fVar70 = fVar70 - fVar83;
      fStack_cc = fVar49 * fVar80 + fVar69 * fVar45;
      fVar115 = fVar49 * fVar80 - fVar69 * fVar45;
      fVar39 = fVar69 * fVar77 + fVar39;
      fVar82 = *(float *)((long)param_5 + 0x1c);
      fStack_c8 = fVar69 * fVar80 - fVar49 * fVar45;
      fVar45 = fVar69 * fVar80 + fVar49 * fVar45;
      fVar80 = *(float *)((long)param_5 + 0x2c);
      local_b0 = CONCAT44(fStack_c4,fVar45);
      fVar49 = (1.0 - fVar83) - fVar49 * fVar77;
      fVar69 = *(float *)((long)param_5 + 0xc);
      uStack_b8 = CONCAT44(fVar45,fVar39);
      uStack_c0 = CONCAT44(fVar70,fVar115);
      auVar43._0_8_ =
           CONCAT44((fVar76 + (float)*(double *)(param_6[1] + 8)) -
                    (fStack_c4 * fVar80 + fVar70 * fVar82 + fStack_cc * fVar69),
                    (fVar68 + (float)*(double *)param_6[1]) -
                    (fVar45 * fVar80 + fVar115 * fVar82 + local_d0 * fVar69));
      auVar43._8_4_ =
           (fVar79 + (float)*(double *)param_6[2]) -
           (fVar49 * fVar80 + fVar39 * fVar82 + fStack_c8 * fVar69);
      auVar43._12_4_ = (fVar81 + 0.0) - (fVar80 * 0.0 + fVar45 * fVar82 + fStack_c4 * fVar69);
      uStack_a8 = (ulong)(uint)fVar49;
      uStack_98 = auVar43._8_8_;
      uStack_a0 = auVar43._0_8_;
      (**(code **)(*(long *)puVar11 + (ulong)*(byte *)(param_5[0xf] + 0x18) * 0x200 + 0x18))
                (param_5[0xf],&local_d0,local_110);
      auVar5._4_4_ = fVar105 - fStack_11c;
      auVar5._0_4_ = fVar78 - local_120;
      auVar5._8_4_ = fVar109 - local_120;
      auVar5._12_4_ = fVar95 - fStack_11c;
      auVar74 = NEON_fmin(auVar5,local_110,4);
      auVar7._8_8_ = uVar42;
      auVar7._0_8_ = uVar21;
      auVar110 = auVar7._0_12_;
      auVar8._8_8_ = uVar13;
      auVar8._0_8_ = uVar12;
      auVar106 = auVar8._0_12_;
      auVar6._4_4_ = fStack_11c + fVar57;
      auVar6._0_4_ = local_120 + fVar48;
      auVar6._8_4_ = local_120 + fVar59;
      auVar6._12_4_ = fStack_11c + fVar75;
      auVar89 = NEON_fmax(auVar6,auStack_100,4);
    }
  }
  else {
    fVar103 = 0.0;
    fVar41 = 0.0;
    fVar100 = local_120 + 0.0;
    fVar101 = fStack_11c + 0.0;
    auVar89._0_8_ = CONCAT44(fStack_11c + fVar57,local_120 + fVar48);
    auVar89._8_4_ = local_120 + fVar59;
    auVar89._12_4_ = fStack_11c + fVar75;
    auVar74._0_8_ = CONCAT44(fVar105 - fStack_11c,fVar78 - local_120);
    auVar74._8_4_ = fVar109 - local_120;
    auVar74._12_4_ = fVar95 - fStack_11c;
    uStack_e8 = auVar74._8_8_;
    uStack_d8 = auVar89._8_8_;
    local_f0 = auVar74._0_8_;
    uStack_e0 = auVar89._0_8_;
  }
  auVar84 = auVar89._0_12_;
  fVar39 = (float)*(undefined8 *)(param_2 + 0x48);
  fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  auVar25._0_8_ = CONCAT44((int)((fVar41 + fVar101) * fVar45),(int)((fVar103 + fVar100) * fVar39));
  auVar44._0_8_ = CONCAT44((int)(fVar101 * fVar45),(int)(fVar100 * fVar39));
  auVar25._8_8_ = auVar25._0_8_;
  uVar21 = NEON_sqxtun(auVar25._0_8_,auVar25,4);
  auVar44._8_8_ = auVar44._0_8_;
  uVar42 = NEON_sqxtun(auVar44._0_8_,auVar44,4);
  *(short *)(param_5 + 0x12) = (short)uVar21;
  *(short *)((long)param_5 + 0x92) = (short)uVar42;
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  fVar39 = (float)uVar21;
  *(short *)param_6[5] = (short)((uint)(fVar102 * fVar39) >> 0x10);
  *(short *)(param_6[5] + 2) = (short)((uint)(fVar104 * (float)((ulong)uVar21 >> 0x20)) >> 0x10);
  *(short *)(param_6[5] + 4) = (short)((uint)(fVar113 * fVar39) >> 0x10);
  puVar11 = PTR_PTR_047d1a50;
  if (0.0 < fVar114) {
    iVar62 = -(uint)(fVar102 < 0.0);
    iVar66 = -(uint)(fVar104 < 0.0);
    iVar67 = -(uint)(fVar113 < 0.0);
    fVar39 = fVar114 * (float)*(undefined8 *)(param_2 + 0x18);
    fVar45 = fVar114 * (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    iVar40 = -(uint)(ABS((float)*(undefined8 *)(param_6[3] + 8)) < fVar39);
    iVar46 = -(uint)(ABS((float)((ulong)*(undefined8 *)(param_6[3] + 8) >> 0x20)) < fVar45);
    iVar47 = -(uint)(ABS((float)((ulong)*(undefined8 *)param_6[3] >> 0x20)) < fVar39);
    iVar20 = -(uint)(ABS(fVar102) < fVar39);
    iVar30 = -(uint)(ABS(fVar104) < fVar45);
    iVar35 = -(uint)(ABS(fVar113) < fVar39);
    iVar50 = -(uint)(0.0 < fVar102);
    iVar58 = -(uint)(0.0 < fVar104);
    iVar60 = -(uint)(0.0 < fVar113);
    if (CONCAT13((byte)((uint)iVar46 >> 0x18) &
                 ((byte)((uint)iVar66 >> 0x18) | (byte)((uint)iVar58 >> 0x18)) &
                 (byte)((uint)iVar30 >> 0x18) &
                 (byte)((uint)iVar40 >> 0x18) &
                 ((byte)((uint)iVar62 >> 0x18) | (byte)((uint)iVar50 >> 0x18)) &
                 (byte)((uint)iVar20 >> 0x18) &
                 (byte)((uint)iVar47 >> 0x18) &
                 ((byte)((uint)iVar67 >> 0x18) | (byte)((uint)iVar60 >> 0x18)) &
                 (byte)((uint)iVar35 >> 0x18),
                 CONCAT12((byte)((uint)iVar46 >> 0x10) &
                          ((byte)((uint)iVar66 >> 0x10) | (byte)((uint)iVar58 >> 0x10)) &
                          (byte)((uint)iVar30 >> 0x10) &
                          (byte)((uint)iVar40 >> 0x10) &
                          ((byte)((uint)iVar62 >> 0x10) | (byte)((uint)iVar50 >> 0x10)) &
                          (byte)((uint)iVar20 >> 0x10) &
                          (byte)((uint)iVar47 >> 0x10) &
                          ((byte)((uint)iVar67 >> 0x10) | (byte)((uint)iVar60 >> 0x10)) &
                          (byte)((uint)iVar35 >> 0x10),
                          CONCAT11((byte)((uint)iVar46 >> 8) &
                                   ((byte)((uint)iVar66 >> 8) | (byte)((uint)iVar58 >> 8)) &
                                   (byte)((uint)iVar30 >> 8) &
                                   (byte)((uint)iVar40 >> 8) &
                                   ((byte)((uint)iVar62 >> 8) | (byte)((uint)iVar50 >> 8)) &
                                   (byte)((uint)iVar20 >> 8) &
                                   (byte)((uint)iVar47 >> 8) &
                                   ((byte)((uint)iVar67 >> 8) | (byte)((uint)iVar60 >> 8)) &
                                   (byte)((uint)iVar35 >> 8),
                                   (byte)iVar46 & ((byte)iVar66 | (byte)iVar58) & (byte)iVar30 &
                                   (byte)iVar40 & ((byte)iVar62 | (byte)iVar50) & (byte)iVar20 &
                                   (byte)iVar47 & ((byte)iVar67 | (byte)iVar60) & (byte)iVar35))) !=
        0) {
      fVar81 = auVar89._0_4_;
      iVar20 = -(uint)(fVar81 <= *(float *)(param_5 + 0xc));
      fVar48 = auVar89._4_4_;
      iVar30 = -(uint)(fVar48 <= *(float *)((long)param_5 + 100));
      fVar57 = auVar89._8_4_;
      iVar35 = -(uint)(fVar57 <= *(float *)(param_5 + 0xd));
      fVar39 = auVar74._0_4_;
      iVar40 = -(uint)((float)param_5[0xe] <= fVar39);
      fVar45 = auVar74._4_4_;
      iVar46 = -(uint)((float)((ulong)param_5[0xe] >> 0x20) <= fVar45);
      fVar49 = auVar74._8_4_;
      iVar47 = -(uint)(*(float *)((long)param_5 + 0x6c) <= fVar49);
      fVar69 = auVar74._12_4_;
      if (CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                   (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                   (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                   CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                            (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                            (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                            CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar30 >> 8) &
                                     (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar20 >> 8) &
                                     (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar35 >> 8),
                                     (byte)iVar46 & (byte)iVar30 & (byte)iVar40 & (byte)iVar20 &
                                     (byte)iVar47 & (byte)iVar35))) != 0) {
        iVar46 = -(uint)(fVar81 <= param_4[4]);
        iVar47 = -(uint)(fVar48 <= param_4[5]);
        iVar50 = -(uint)(fVar57 <= param_4[6]);
        iVar58 = -(uint)(auVar89._12_4_ <= param_4[7]);
        iVar20 = -(uint)(*param_4 <= fVar39);
        iVar30 = -(uint)(param_4[1] <= fVar45);
        iVar35 = -(uint)(param_4[2] <= fVar49);
        iVar40 = -(uint)(param_4[3] <= fVar69);
        bVar29 = (byte)iVar47 & (byte)iVar30;
        bVar31 = (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar30 >> 8);
        bVar32 = (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar30 >> 0x10);
        bVar33 = (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar30 >> 0x18);
        bVar34 = (byte)iVar50 & (byte)iVar35;
        bVar36 = (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar35 >> 8);
        bVar37 = (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
        bVar38 = (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
        auVar26._0_4_ =
             CONCAT13(bVar33 & (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar20 >> 0x18) & bVar38,
                      CONCAT12(bVar32 & (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar20 >> 0x10)
                               & bVar37,CONCAT11(bVar31 & (byte)((uint)iVar46 >> 8) &
                                                          (byte)((uint)iVar20 >> 8) & bVar36,
                                                 bVar29 & (byte)iVar46 & (byte)iVar20 & bVar34)));
        auVar26[4] = bVar29 & bVar34;
        auVar26[5] = bVar31 & bVar36;
        auVar26[6] = bVar32 & bVar37;
        auVar26[7] = bVar33 & bVar38;
        auVar26[8] = bVar29 & bVar34 & bVar34;
        auVar26[9] = bVar31 & bVar36 & bVar36;
        auVar26[10] = bVar32 & bVar37 & bVar37;
        auVar26[0xb] = bVar33 & bVar38 & bVar38;
        auVar26[0xc] = bVar29 & (byte)iVar58 & (byte)iVar40 & bVar34;
        auVar26[0xd] = bVar31 & (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar40 >> 8) & bVar36;
        auVar26[0xe] = bVar32 & (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar40 >> 0x10) & bVar37
        ;
        auVar26[0xf] = bVar33 & (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar40 >> 0x18) & bVar38
        ;
        if (auVar26._0_4_ != 0) {
          return auVar26;
        }
      }
      auVar84._0_4_ = fVar114 + fVar81;
      auVar84._4_4_ = fVar114 + fVar48;
      auVar84._8_4_ = fVar114 + fVar57;
      auVar74._0_4_ = fVar39 - fVar114;
      auVar74._4_4_ = fVar45 - fVar114;
      auVar74._8_4_ = fVar49 - fVar114;
      auVar74._12_4_ = fVar69 - fVar114;
    }
  }
  iVar20 = -(uint)(auVar106._0_4_ <= *(float *)(param_5 + 0xc));
  iVar30 = -(uint)(auVar106._4_4_ <= *(float *)((long)param_5 + 100));
  iVar35 = -(uint)(auVar106._8_4_ <= *(float *)(param_5 + 0xd));
  local_120 = auVar74._0_4_;
  fStack_11c = auVar74._4_4_;
  iVar40 = -(uint)((float)param_5[0xe] <= auVar110._0_4_);
  iVar46 = -(uint)((float)((ulong)param_5[0xe] >> 0x20) <= auVar110._4_4_);
  iVar47 = -(uint)(*(float *)((long)param_5 + 0x6c) <= auVar110._8_4_);
  if (CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
               (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
               (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
               CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                        (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                        (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                        CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar30 >> 8) &
                                 (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar20 >> 8) &
                                 (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar35 >> 8),
                                 (byte)iVar46 & (byte)iVar30 & (byte)iVar40 & (byte)iVar20 &
                                 (byte)iVar47 & (byte)iVar35))) == 0) {
    puVar17 = *(uint **)(*(long *)(param_1 + 0x640) + (long)*(int *)(param_1 + 0x648) * 8 + -8);
    uVar2 = *(undefined4 *)(param_5 + 10);
    puVar19 = *(undefined8 **)(param_1 + 0x4e0);
    uVar14 = *puVar17;
    if (0xf8 < uVar14 >> 0x14) {
      puVar18 = puVar17;
      do {
        uVar14 = *(int *)(puVar19 + 0xb) - 1;
        if (*(int *)(puVar19 + 0xb) < 1) {
          lVar16 = puVar19[1];
          (**(code **)(*(long *)*puVar19 + 0x20))((long *)*puVar19,lVar16,6);
          puVar15 = (undefined8 *)(lVar16 + 0x28);
          *(undefined4 *)(puVar19 + 0xb) = 5;
        }
        else {
          *(uint *)(puVar19 + 0xb) = uVar14;
          puVar15 = (undefined8 *)(puVar19[1] + (ulong)uVar14 * 8);
        }
        puVar17 = (uint *)*puVar15;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[0] = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        puVar17[1] = *(uint *)(param_1 + 0x648);
        iVar20 = *(int *)(param_1 + 0x648);
        lVar16 = (long)iVar20;
        if ((int)(*(uint *)(param_1 + 0x64c) & 0x7fffffff) <= iVar20) {
          FUN_031c25b4(param_1 + 0x640,puVar11,lVar16 + 1);
          iVar20 = *(int *)(param_1 + 0x648);
        }
        *(uint **)(*(long *)(param_1 + 0x640) + (long)iVar20 * 8) = puVar17;
        *(int *)(param_1 + 0x648) = (int)(lVar16 + 1);
        *(uint **)(puVar18 + 2) = puVar17;
        uVar14 = *puVar17;
        puVar18 = puVar17;
      } while (0xf8 < uVar14 >> 0x14);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar4) {
        *puVar17 = *puVar17 + 0x100001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + 1;
    *(undefined4 *)((long)puVar17 + (ulong)(uVar14 >> 0x10) + 0x28) = uVar2;
    *(undefined8 *)((long)puVar17 + (ulong)(uVar14 >> 0x10) + 0x20) = 0x403000010;
  }
  puVar11 = PTR_PTR_047d1a50;
  iVar20 = -(uint)(local_120 <= param_4[4]);
  iVar30 = -(uint)(fStack_11c <= param_4[5]);
  iVar35 = -(uint)(auVar74._8_4_ <= param_4[6]);
  iVar40 = -(uint)(*param_4 <= auVar84._0_4_);
  iVar46 = -(uint)(param_4[1] <= auVar84._4_4_);
  iVar47 = -(uint)(param_4[2] <= auVar84._8_4_);
  if (CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
               (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
               (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
               CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                        (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                        (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                        CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar30 >> 8) &
                                 (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar20 >> 8) &
                                 (byte)((uint)iVar47 >> 8) & (byte)((uint)iVar35 >> 8),
                                 (byte)iVar46 & (byte)iVar30 & (byte)iVar40 & (byte)iVar20 &
                                 (byte)iVar47 & (byte)iVar35))) == 0) {
    uVar2 = *(undefined4 *)(param_5 + 0x16);
    uVar1 = *(undefined4 *)((long)param_5 + 0xb4);
    puVar17 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
    puVar19 = *(undefined8 **)(param_1 + 0x4e0);
    uVar14 = *puVar17;
    if (0xf8 < uVar14 >> 0x14) {
      puVar18 = puVar17;
      do {
        uVar14 = *(int *)(puVar19 + 0xb) - 1;
        if (*(int *)(puVar19 + 0xb) < 1) {
          lVar16 = puVar19[1];
          (**(code **)(*(long *)*puVar19 + 0x20))((long *)*puVar19,lVar16,6);
          puVar15 = (undefined8 *)(lVar16 + 0x28);
          *(undefined4 *)(puVar19 + 0xb) = 5;
        }
        else {
          *(uint *)(puVar19 + 0xb) = uVar14;
          puVar15 = (undefined8 *)(puVar19[1] + (ulong)uVar14 * 8);
        }
        puVar17 = (uint *)*puVar15;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[0] = 0;
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        puVar17[1] = *(uint *)(param_1 + 0x548);
        iVar20 = *(int *)(param_1 + 0x548);
        lVar16 = (long)iVar20;
        if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar20) {
          FUN_031c25b4(param_1 + 0x540,puVar11,lVar16 + 1);
          iVar20 = *(int *)(param_1 + 0x548);
        }
        *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar20 * 8) = puVar17;
        *(int *)(param_1 + 0x548) = (int)(lVar16 + 1);
        *(uint **)(puVar18 + 2) = puVar17;
        uVar14 = *puVar17;
        puVar18 = puVar17;
      } while (0xf8 < uVar14 >> 0x14);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar4) {
        *puVar17 = *puVar17 + 0x100001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
    uVar14 = uVar14 >> 0x10;
    *(undefined8 *)((long)puVar17 + (ulong)uVar14 + 0x20) = 0xe04000010;
    *(undefined4 *)((long)puVar17 + (ulong)uVar14 + 0x28) = uVar2;
    *(undefined4 *)((long)puVar17 + (ulong)uVar14 + 0x2c) = uVar1;
  }
  auVar27._8_8_ = _UNK_03cabeb8;
  auVar27._0_8_ = _DAT_03cabeb0;
  *(ushort *)(param_5 + 0xb) = *(ushort *)(param_5 + 0xb) | 0x10;
  param_5[0xe] = auVar74._0_8_;
  auVar28 = a64_TBL(ZEXT816(0),auVar74,auVar27);
  auVar90._12_4_ = auVar28._12_4_;
  auVar90._0_12_ = auVar84;
  param_5[0xd] = auVar90._8_8_;
  param_5[0xc] = auVar84._0_8_;
  return auVar28;
}


