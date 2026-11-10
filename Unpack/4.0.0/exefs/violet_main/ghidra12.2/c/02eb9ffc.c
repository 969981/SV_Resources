/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eb9ffc; name: FUN_02eb9ffc
 */


void FUN_02eb9ffc(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5,long *param_6,long *param_7,undefined1 (*param_8) [16])

{
  ulong *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  long *plVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar46;
  int iVar49;
  int iVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar69;
  int iVar71;
  int iVar72;
  undefined1 auVar70 [16];
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fStack_b3c;
  float local_b10;
  float fStack_b0c;
  float fStack_b08;
  float fStack_b04;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined2 local_ab8 [8];
  long local_aa8;
  long lStack_aa0;
  long local_a98;
  uint local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 auStack_a60 [4];
  float afStack_a40 [568];
  int local_160;
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  int local_13c;
  long *local_130;
  undefined1 local_120 [16];
  undefined2 local_110;
  int local_10c;
  int local_100;
  int local_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  ulong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar11 = PTR_DAT_047d19e0;
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar43 = *(undefined1 (*) [16])(param_1 + 0xa0);
  auVar64 = *(undefined1 (*) [16])(param_3 + 8);
  auVar62 = *(undefined1 (*) [16])(param_3 + 10);
  auVar51 = NEON_fmin(auVar43,auVar62,4);
  auVar47 = NEON_fmax(auVar38,auVar64,4);
  iVar46 = -(uint)(auVar51._0_4_ < auVar47._0_4_);
  iVar49 = -(uint)(auVar51._4_4_ < auVar47._4_4_);
  iVar50 = -(uint)(auVar51._8_4_ < auVar47._8_4_);
  if (CONCAT13((byte)((uint)iVar49 >> 0x18) | (byte)((uint)iVar46 >> 0x18) |
               (byte)((uint)iVar50 >> 0x18),
               CONCAT12((byte)((uint)iVar49 >> 0x10) | (byte)((uint)iVar46 >> 0x10) |
                        (byte)((uint)iVar50 >> 0x10),
                        CONCAT11((byte)((uint)iVar49 >> 8) | (byte)((uint)iVar46 >> 8) |
                                 (byte)((uint)iVar50 >> 8),
                                 (byte)iVar49 | (byte)iVar46 | (byte)iVar50))) != 0) {
    if (param_8 != (undefined1 (*) [16])0x0) {
      auVar31._0_4_ = -(uint)(auVar64._0_4_ <= auVar43._0_4_);
      auVar31._4_4_ = -(uint)(auVar64._4_4_ <= auVar43._4_4_);
      auVar31._8_4_ = -(uint)(auVar64._8_4_ <= auVar43._8_4_);
      auVar31._12_4_ = -(uint)(auVar64._12_4_ <= auVar43._12_4_);
      auVar25._0_4_ = -(uint)(auVar38._0_4_ <= auVar62._0_4_);
      auVar25._4_4_ = -(uint)(auVar38._4_4_ <= auVar62._4_4_);
      auVar25._8_4_ = -(uint)(auVar38._8_4_ <= auVar62._8_4_);
      auVar25._12_4_ = -(uint)(auVar38._12_4_ <= auVar62._12_4_);
      auVar38 = NEON_fmin(param_8[1],auVar38,4);
      auVar43 = NEON_fmax(*param_8,auVar43,4);
      auVar38 = auVar38 ^ (auVar38 ^ param_8[1]) & auVar25;
      auVar43 = auVar43 ^ (auVar43 ^ *param_8) & auVar31;
      *(long *)(*param_8 + 8) = auVar43._8_8_;
      *(long *)*param_8 = auVar43._0_8_;
      *(long *)(param_8[1] + 8) = auVar38._8_8_;
      *(long *)param_8[1] = auVar38._0_8_;
    }
    return;
  }
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x70);
  fVar36 = auVar38._0_4_;
  fVar41 = auVar38._4_4_;
  auVar43._0_8_ = CONCAT44(auVar64._4_4_ * fVar41,auVar64._0_4_ * fVar36);
  fVar42 = auVar38._8_4_;
  auVar43._8_4_ = auVar64._8_4_ * fVar42;
  fVar24 = auVar38._12_4_;
  auVar43._12_4_ = auVar64._12_4_ * fVar24;
  auVar38._0_8_ = CONCAT44(auVar62._4_4_ * fVar41,auVar62._0_4_ * fVar36);
  auVar38._8_4_ = auVar62._8_4_ * fVar42;
  auVar38._12_4_ = auVar62._12_4_ * fVar24;
  uStack_ad8 = auVar43._8_8_;
  uStack_ac8 = auVar38._8_8_;
  local_ae0 = auVar43._0_8_;
  uStack_ad0 = auVar38._0_8_;
  if (param_8 == (undefined1 (*) [16])0x0) {
    FUN_02eb5814(auStack_a60,param_1,&local_ae0,&uStack_ad0);
    if (param_7 == (long *)0x0) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)(param_7 + 1) & 1;
    }
    puVar20 = (ulong *)((ulong)local_ab8 | 4);
    puVar1 = (ulong *)((long)param_3 + 0x14);
    puVar21 = (ulong *)((ulong)&local_a70 | 4);
    puVar22 = (ulong *)((ulong)&local_a80 | 4);
LAB_02ebab78:
    uVar15 = uStack_ac8;
    uVar14 = uStack_ad0;
    uVar13 = uStack_ad8;
    uVar12 = local_ae0;
    if (local_160 == 0) {
      return;
    }
    do {
      iVar46 = local_160;
      lVar17 = (long)local_160 + -1;
      fVar36 = afStack_a40[lVar17 * 0xc];
      fVar41 = afStack_a40[lVar17 * 0xc + 1];
      fVar42 = afStack_a40[lVar17 * 0xc + 2];
      if (fVar36 == 0.0) {
        if ((int)fVar41 < local_100 && (int)fVar42 < local_fc) {
          (**(code **)(*local_130 + 0x28))();
          lVar17 = (long)local_160 + -1;
          local_140 = local_110;
          local_13c = local_10c;
          uStack_148 = local_120._8_8_;
          local_150 = local_120._0_8_;
          if (local_10c != 2) goto LAB_02ebae68;
        }
        local_160 = (int)lVar17;
      }
      else {
        fVar24 = afStack_a40[lVar17 * 0xc + -7];
        fVar30 = afStack_a40[lVar17 * 0xc + -3];
        fVar27 = fVar24;
        fVar28 = fVar24;
        fVar29 = fVar24;
        fVar34 = fVar30;
        fVar35 = fVar30;
        fVar37 = fVar30;
        if ((int)*(uint *)(local_158 + 0x50) < (int)fVar36) {
          iVar49 = (int)fVar36 + ~*(uint *)(local_158 + 0x50);
          plVar23 = (long *)(local_158 + 0x20);
          lVar16 = *plVar23;
          if ((int)fVar41 <
              (int)(uint)*(ushort *)((long)plVar23 + (long)iVar49 * 0x18 + lVar16 + 0x10)) {
            uVar2 = *(ushort *)((long)plVar23 + (long)iVar49 * 0x18 + lVar16 + 0x12);
            if ((int)fVar42 < (int)(uint)uVar2) {
              plVar23 = (long *)((long)plVar23 + (long)iVar49 * 0x18 + lVar16);
              uVar3 = (int)fVar42 + (int)fVar41 * (uint)uVar2;
              fVar37 = *(float *)(local_158 + 0x40);
              puVar5 = (ushort *)
                       ((long)plVar23 +
                       (-(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar3 * 4) << 2) + *plVar23);
              auVar62._2_2_ = 0;
              auVar62._0_2_ = *puVar5;
              auVar62._4_2_ = puVar5[1];
              auVar62._6_2_ = 0;
              auVar62._8_2_ = puVar5[2];
              auVar62._10_2_ = 0;
              auVar62._12_2_ = puVar5[3];
              auVar62._14_2_ = 0;
              auVar64._2_2_ = 0;
              auVar64._0_2_ = puVar5[4];
              auVar64._4_2_ = puVar5[5];
              auVar64._6_2_ = 0;
              auVar64._8_2_ = puVar5[6];
              auVar64._10_2_ = 0;
              auVar64._12_2_ = puVar5[7];
              auVar64._14_2_ = 0;
              auVar38 = NEON_ucvtf(auVar62,4);
              auVar43 = NEON_ucvtf(auVar64,4);
              fVar24 = *(float *)(local_158 + 0x30) + auVar38._0_4_ * fVar37;
              fVar27 = *(float *)(local_158 + 0x34) + auVar38._4_4_ * fVar37;
              fVar28 = *(float *)(local_158 + 0x38) + auVar38._8_4_ * fVar37;
              fVar29 = *(float *)(local_158 + 0x3c) + auVar38._12_4_ * fVar37;
              fVar30 = *(float *)(local_158 + 0x30) + auVar43._0_4_ * fVar37;
              fVar34 = *(float *)(local_158 + 0x34) + auVar43._4_4_ * fVar37;
              fVar35 = *(float *)(local_158 + 0x38) + auVar43._8_4_ * fVar37;
              fVar37 = *(float *)(local_158 + 0x3c) + auVar43._12_4_ * fVar37;
            }
          }
        }
        local_160 = (int)lVar17;
        auVar38 = *(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -8);
        auVar43 = *(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -4);
        auVar67._0_4_ = (auVar38._0_4_ + auVar43._0_4_) * 0.5;
        auVar67._4_4_ = (auVar38._4_4_ + auVar43._4_4_) * 0.5;
        auVar67._8_4_ = (auVar38._8_4_ + auVar43._8_4_) * 0.5;
        auVar67._12_4_ = (auVar38._12_4_ + auVar43._12_4_) * 0.5;
        fVar36 = (float)((int)fVar36 + -1);
        auVar51 = auVar38 ^ (auVar38 ^ auVar67) & *(undefined1 (*) [16])(puVar11 + 0x10);
        auVar68 = auVar38 ^ (auVar38 ^ auVar67) & *(undefined1 (*) [16])puVar11;
        auVar45 = auVar67 ^ (auVar67 ^ auVar43) & *(undefined1 (*) [16])puVar11;
        auVar57 = auVar67 ^ (auVar67 ^ auVar43) & *(undefined1 (*) [16])(puVar11 + 0x10);
        fVar85 = (float)uVar14;
        iVar69 = -(uint)(auVar68._0_4_ <= fVar85);
        fVar86 = (float)((ulong)uVar14 >> 0x20);
        iVar71 = -(uint)(fVar24 <= fVar86);
        fVar87 = (float)uVar15;
        iVar72 = -(uint)(auVar68._8_4_ <= fVar87);
        fVar89 = (float)uVar12;
        iVar49 = -(uint)(fVar89 <= auVar45._0_4_);
        fVar90 = (float)((ulong)uVar12 >> 0x20);
        iVar50 = -(uint)(fVar90 <= fVar30);
        fVar91 = (float)uVar13;
        iVar56 = -(uint)(fVar91 <= auVar45._8_4_);
        auVar62 = *(undefined1 (*) [16])(puVar11 + 0x40);
        auVar64 = auVar38 ^ (auVar38 ^ auVar67) & *(undefined1 (*) [16])(puVar11 + 0x50);
        auVar47 = auVar67 ^ (auVar67 ^ auVar43) & *(undefined1 (*) [16])(puVar11 + 0x50);
        if (CONCAT13((byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar50 >> 0x18) &
                     (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar49 >> 0x18) &
                     (byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar56 >> 0x18),
                     CONCAT12((byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar50 >> 0x10) &
                              (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                              (byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar56 >> 0x10),
                              CONCAT11((byte)((uint)iVar71 >> 8) & (byte)((uint)iVar50 >> 8) &
                                       (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar49 >> 8) &
                                       (byte)((uint)iVar72 >> 8) & (byte)((uint)iVar56 >> 8),
                                       (byte)iVar71 & (byte)iVar50 & (byte)iVar69 & (byte)iVar49 &
                                       (byte)iVar72 & (byte)iVar56))) != 0) {
          local_160 = iVar46;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = (float)((int)fVar41 << 1);
          afStack_a40[lVar17 * 0xc + 2] = (float)((int)fVar42 << 1);
          *(long *)(afStack_a40 + lVar17 * 0xc + -6) = auVar68._8_8_;
          *(ulong *)*(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -8) =
               CONCAT44(fVar24,auVar68._0_4_);
          *(long *)(afStack_a40 + lVar17 * 0xc + -2) = auVar45._8_8_;
          *(ulong *)*(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -4) =
               CONCAT44(fVar30,auVar45._0_4_);
        }
        iVar46 = -(uint)(fVar89 <= auVar57._0_4_);
        iVar49 = -(uint)(fVar90 <= fVar34);
        iVar50 = -(uint)(fVar91 <= auVar57._8_4_);
        iVar56 = -(uint)(auVar51._0_4_ <= fVar85);
        iVar69 = -(uint)(fVar27 <= fVar86);
        iVar71 = -(uint)(auVar51._8_4_ <= fVar87);
        fVar24 = (float)((int)fVar41 << 1 | 1);
        auVar38 = auVar38 ^ (auVar38 ^ auVar67) & auVar62;
        auVar43 = auVar43 ^ (auVar43 ^ auVar67) & ~auVar62;
        if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                     (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                     (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                     CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                              (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                              (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                              CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar69 >> 8) &
                                       (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar56 >> 8) &
                                       (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar71 >> 8),
                                       (byte)iVar49 & (byte)iVar69 & (byte)iVar46 & (byte)iVar56 &
                                       (byte)iVar50 & (byte)iVar71))) != 0) {
          lVar17 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = fVar24;
          afStack_a40[lVar17 * 0xc + 2] = (float)((int)fVar42 << 1);
          *(long *)(afStack_a40 + lVar17 * 0xc + -6) = auVar51._8_8_;
          *(ulong *)(afStack_a40 + lVar17 * 0xc + -8) = CONCAT44(fVar27,auVar51._0_4_);
          *(long *)(afStack_a40 + lVar17 * 0xc + -2) = auVar57._8_8_;
          *(ulong *)(afStack_a40 + lVar17 * 0xc + -4) = CONCAT44(fVar34,auVar57._0_4_);
        }
        iVar46 = -(uint)(fVar89 <= auVar47._0_4_);
        iVar49 = -(uint)(fVar90 <= fVar35);
        iVar50 = -(uint)(fVar91 <= auVar47._8_4_);
        fVar42 = (float)((int)fVar42 << 1 | 1);
        iVar56 = -(uint)(auVar64._0_4_ <= fVar85);
        iVar69 = -(uint)(fVar28 <= fVar86);
        iVar71 = -(uint)(auVar64._8_4_ <= fVar87);
        if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                     (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                     (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                     CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                              (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                              (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                              CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar69 >> 8) &
                                       (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar56 >> 8) &
                                       (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar71 >> 8),
                                       (byte)iVar49 & (byte)iVar69 & (byte)iVar46 & (byte)iVar56 &
                                       (byte)iVar50 & (byte)iVar71))) != 0) {
          lVar17 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = fVar24;
          afStack_a40[lVar17 * 0xc + 2] = fVar42;
          *(long *)(afStack_a40 + lVar17 * 0xc + -6) = auVar64._8_8_;
          *(ulong *)(afStack_a40 + lVar17 * 0xc + -8) = CONCAT44(fVar28,auVar64._0_4_);
          *(long *)(afStack_a40 + lVar17 * 0xc + -2) = auVar47._8_8_;
          *(ulong *)(afStack_a40 + lVar17 * 0xc + -4) = CONCAT44(fVar35,auVar47._0_4_);
        }
        iVar46 = -(uint)(fVar89 <= auVar43._0_4_);
        iVar49 = -(uint)(fVar90 <= fVar37);
        iVar50 = -(uint)(fVar91 <= auVar43._8_4_);
        iVar56 = -(uint)(auVar38._0_4_ <= fVar85);
        iVar69 = -(uint)(fVar29 <= fVar86);
        iVar71 = -(uint)(auVar38._8_4_ <= fVar87);
        if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                     (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar56 >> 0x18) &
                     (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                     CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                              (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar56 >> 0x10) &
                              (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                              CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar69 >> 8) &
                                       (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar56 >> 8) &
                                       (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar71 >> 8),
                                       (byte)iVar49 & (byte)iVar69 & (byte)iVar46 & (byte)iVar56 &
                                       (byte)iVar50 & (byte)iVar71))) != 0) {
          lVar17 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = (float)((int)fVar41 << 1);
          afStack_a40[lVar17 * 0xc + 2] = fVar42;
          *(long *)(afStack_a40 + lVar17 * 0xc + -6) = auVar38._8_8_;
          *(ulong *)(afStack_a40 + lVar17 * 0xc + -8) = CONCAT44(fVar29,auVar38._0_4_);
          *(long *)(afStack_a40 + lVar17 * 0xc + -2) = auVar43._8_8_;
          *(ulong *)(afStack_a40 + lVar17 * 0xc + -4) = CONCAT44(fVar37,auVar43._0_4_);
        }
      }
      if (local_160 == 0) {
        return;
      }
    } while( true );
  }
  auVar38 = param_8[1];
  auVar47._0_8_ = CONCAT44(fVar41 * *(float *)(*param_8 + 4),fVar36 * *(float *)*param_8);
  auVar47._8_4_ = fVar42 * *(float *)(*param_8 + 8);
  auVar47._12_4_ = fVar24 * *(float *)(*param_8 + 0xc);
  FUN_02eb5814(auStack_a60,param_1,&local_ae0,&uStack_ad0);
  lVar17 = (long)local_160 + -1;
  if ((int)afStack_a40[lVar17 * 0xc + 1] < 1) {
    auVar51._8_8_ = auVar47._8_8_;
    auVar51._0_8_ = auVar47._0_8_;
  }
  else {
    auVar57._8_8_ = auVar47._8_8_;
    auVar57._0_8_ = auVar47._0_8_;
    auVar51._4_12_ = auVar57._4_12_;
    auVar51._0_4_ = afStack_a40[lVar17 * 0xc + -8];
  }
  if (0 < (int)afStack_a40[lVar17 * 0xc + 2]) {
    auVar51._8_4_ = afStack_a40[lVar17 * 0xc + -6];
  }
  local_b10 = auVar38._0_4_;
  fStack_b0c = auVar38._4_4_;
  fStack_b08 = auVar38._8_4_;
  fStack_b04 = auVar38._12_4_;
  auVar68._0_4_ = fVar36 * local_b10;
  auVar68._4_4_ = fVar41 * fStack_b0c;
  auVar68._8_4_ = fVar42 * fStack_b08;
  auVar68._12_4_ = fVar24 * fStack_b04;
  if ((int)afStack_a40[lVar17 * 0xc + 1] + 1 << (ulong)((uint)afStack_a40[lVar17 * 0xc] & 0x1f) <
      local_100) {
    auVar68._0_4_ = afStack_a40[lVar17 * 0xc + -4];
  }
  if ((int)afStack_a40[lVar17 * 0xc + 2] + 1 << (ulong)((uint)afStack_a40[lVar17 * 0xc] & 0x1f) <
      local_fc) {
    auVar68._8_4_ = afStack_a40[lVar17 * 0xc + -2];
  }
  if (param_7 == (long *)0x0) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(param_7 + 1) & 1;
  }
  auVar45._8_8_ = auVar68._8_8_;
  auVar45._0_4_ = auVar68._0_4_;
  auVar45._4_4_ = 0x7f7fffee;
  puVar1 = (ulong *)((long)param_3 + 0x14);
  auVar59._8_8_ = auVar51._8_8_;
  auVar59._0_4_ = auVar51._0_4_;
  auVar59._4_4_ = 0xff7fffee;
  puVar20 = (ulong *)((ulong)local_ab8 | 4);
  puVar21 = (ulong *)((ulong)&local_a70 | 4);
  puVar22 = (ulong *)((ulong)&local_a80 | 4);
LAB_02eba23c:
  uVar15 = uStack_ac8;
  uVar14 = uStack_ad0;
  uVar13 = uStack_ad8;
  uVar12 = local_ae0;
  if (local_160 != 0) {
    do {
      iVar46 = local_160;
      lVar17 = (long)local_160 + -1;
      fVar36 = afStack_a40[lVar17 * 0xc];
      fVar41 = afStack_a40[lVar17 * 0xc + 1];
      fVar42 = afStack_a40[lVar17 * 0xc + 2];
      fStack_b3c = (float)((ulong)uVar14 >> 0x20);
      if (fVar36 == 0.0) {
        if ((int)fVar41 < local_100 && (int)fVar42 < local_fc) {
          (**(code **)(*local_130 + 0x28))();
          lVar17 = (long)local_160 + -1;
          local_140 = local_110;
          local_13c = local_10c;
          uStack_148 = local_120._8_8_;
          local_150 = local_120._0_8_;
          if (local_10c != 2) goto LAB_02eba580;
        }
        local_160 = (int)lVar17;
      }
      else {
        fVar24 = afStack_a40[lVar17 * 0xc + -7];
        fVar30 = afStack_a40[lVar17 * 0xc + -3];
        fVar27 = fVar24;
        fVar28 = fVar24;
        fVar29 = fVar24;
        fVar34 = fVar30;
        fVar35 = fVar30;
        fVar37 = fVar30;
        if ((int)*(uint *)(local_158 + 0x50) < (int)fVar36) {
          iVar49 = (int)fVar36 + ~*(uint *)(local_158 + 0x50);
          plVar23 = (long *)(local_158 + 0x20);
          lVar16 = *plVar23;
          if ((int)fVar41 <
              (int)(uint)*(ushort *)((long)plVar23 + (long)iVar49 * 0x18 + lVar16 + 0x10)) {
            uVar2 = *(ushort *)((long)plVar23 + (long)iVar49 * 0x18 + lVar16 + 0x12);
            if ((int)fVar42 < (int)(uint)uVar2) {
              plVar23 = (long *)((long)plVar23 + (long)iVar49 * 0x18 + lVar16);
              uVar3 = (int)fVar42 + (int)fVar41 * (uint)uVar2;
              fVar37 = *(float *)(local_158 + 0x40);
              puVar5 = (ushort *)
                       ((long)plVar23 +
                       (-(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar3 * 4) << 2) + *plVar23);
              auVar26._2_2_ = 0;
              auVar26._0_2_ = *puVar5;
              auVar26._4_2_ = puVar5[1];
              auVar26._6_2_ = 0;
              auVar26._8_2_ = puVar5[2];
              auVar26._10_2_ = 0;
              auVar26._12_2_ = puVar5[3];
              auVar26._14_2_ = 0;
              auVar32._2_2_ = 0;
              auVar32._0_2_ = puVar5[4];
              auVar32._4_2_ = puVar5[5];
              auVar32._6_2_ = 0;
              auVar32._8_2_ = puVar5[6];
              auVar32._10_2_ = 0;
              auVar32._12_2_ = puVar5[7];
              auVar32._14_2_ = 0;
              auVar38 = NEON_ucvtf(auVar26,4);
              auVar43 = NEON_ucvtf(auVar32,4);
              fVar24 = *(float *)(local_158 + 0x30) + auVar38._0_4_ * fVar37;
              fVar27 = *(float *)(local_158 + 0x34) + auVar38._4_4_ * fVar37;
              fVar28 = *(float *)(local_158 + 0x38) + auVar38._8_4_ * fVar37;
              fVar29 = *(float *)(local_158 + 0x3c) + auVar38._12_4_ * fVar37;
              fVar30 = *(float *)(local_158 + 0x30) + auVar43._0_4_ * fVar37;
              fVar34 = *(float *)(local_158 + 0x34) + auVar43._4_4_ * fVar37;
              fVar35 = *(float *)(local_158 + 0x38) + auVar43._8_4_ * fVar37;
              fVar37 = *(float *)(local_158 + 0x3c) + auVar43._12_4_ * fVar37;
            }
          }
        }
        local_160 = (int)lVar17;
        auVar38 = *(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -8);
        auVar43 = *(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -4);
        fVar36 = (float)((int)fVar36 + -1);
        auVar60._0_4_ = (auVar38._0_4_ + auVar43._0_4_) * 0.5;
        auVar60._4_4_ = (auVar38._4_4_ + auVar43._4_4_) * 0.5;
        auVar60._8_4_ = (auVar38._8_4_ + auVar43._8_4_) * 0.5;
        auVar60._12_4_ = (auVar38._12_4_ + auVar43._12_4_) * 0.5;
        auVar51 = auVar38 ^ (auVar38 ^ auVar60) & *(undefined1 (*) [16])(puVar11 + 0x10);
        auVar62 = auVar38 ^ (auVar38 ^ auVar60) & *(undefined1 (*) [16])puVar11;
        auVar64 = auVar60 ^ (auVar60 ^ auVar43) & *(undefined1 (*) [16])puVar11;
        auVar57 = auVar60 ^ (auVar60 ^ auVar43) & *(undefined1 (*) [16])(puVar11 + 0x10);
        auVar53._8_8_ = auVar51._8_8_;
        auVar53._0_8_ = CONCAT44(fVar27,auVar51._0_4_);
        auVar63._8_8_ = auVar62._8_8_;
        auVar63._0_8_ = CONCAT44(fVar24,auVar62._0_4_);
        auVar65._8_8_ = auVar64._8_8_;
        auVar65._0_8_ = CONCAT44(fVar30,auVar64._0_4_);
        fVar89 = (float)uVar12;
        iVar49 = -(uint)(fVar89 <= auVar64._0_4_);
        fVar90 = (float)((ulong)uVar12 >> 0x20);
        iVar50 = -(uint)(fVar90 <= fVar30);
        bVar73 = (byte)((uint)iVar50 >> 8);
        bVar74 = (byte)((uint)iVar50 >> 0x10);
        bVar75 = (byte)((uint)iVar50 >> 0x18);
        fVar30 = (float)uVar13;
        iVar56 = -(uint)(fVar30 <= auVar64._8_4_);
        bVar76 = (byte)((uint)iVar56 >> 8);
        bVar77 = (byte)((uint)iVar56 >> 0x10);
        bVar78 = (byte)((uint)iVar56 >> 0x18);
        fVar91 = (float)((ulong)uVar13 >> 0x20);
        iVar69 = -(uint)(fVar91 <= auVar64._12_4_);
        fVar85 = (float)uVar14;
        iVar71 = -(uint)(auVar62._0_4_ <= fVar85);
        iVar72 = -(uint)(fVar24 <= fStack_b3c);
        bVar79 = (byte)((uint)iVar72 >> 8);
        bVar80 = (byte)((uint)iVar72 >> 0x10);
        bVar81 = (byte)((uint)iVar72 >> 0x18);
        fVar24 = (float)uVar15;
        iVar8 = -(uint)(auVar62._8_4_ <= fVar24);
        bVar82 = (byte)((uint)iVar8 >> 8);
        bVar83 = (byte)((uint)iVar8 >> 0x10);
        bVar84 = (byte)((uint)iVar8 >> 0x18);
        fVar86 = (float)((ulong)uVar15 >> 0x20);
        iVar9 = -(uint)(auVar62._12_4_ <= fVar86);
        auVar67 = NEON_fmax(auVar59,auVar65,4);
        auVar68 = NEON_fmin(auVar45,auVar63,4);
        auVar6[4] = (byte)iVar50;
        auVar6._0_4_ = iVar49;
        auVar6[5] = bVar73;
        auVar6[6] = bVar74;
        auVar6[7] = bVar75;
        auVar6[8] = (byte)iVar56;
        auVar6[9] = bVar76;
        auVar6[10] = bVar77;
        auVar6[0xb] = bVar78;
        auVar6[0xc] = (char)iVar69;
        auVar6[0xd] = (char)((uint)iVar69 >> 8);
        auVar6[0xe] = (char)((uint)iVar69 >> 0x10);
        auVar6[0xf] = (char)((uint)iVar69 >> 0x18);
        auVar67 = auVar67 ^ (auVar67 ^ auVar59) & auVar6;
        auVar7[4] = (byte)iVar72;
        auVar7._0_4_ = iVar71;
        auVar7[5] = bVar79;
        auVar7[6] = bVar80;
        auVar7[7] = bVar81;
        auVar7[8] = (byte)iVar8;
        auVar7[9] = bVar82;
        auVar7[10] = bVar83;
        auVar7[0xb] = bVar84;
        auVar7[0xc] = (char)iVar9;
        auVar7[0xd] = (char)((uint)iVar9 >> 8);
        auVar7[0xe] = (char)((uint)iVar9 >> 0x10);
        auVar7[0xf] = (char)((uint)iVar9 >> 0x18);
        auVar68 = auVar68 ^ (auVar68 ^ auVar45) & auVar7;
        auVar62 = *(undefined1 (*) [16])(puVar11 + 0x40);
        auVar58._8_8_ = auVar57._8_8_;
        auVar58._0_8_ = CONCAT44(fVar34,auVar57._0_4_);
        auVar64 = auVar38 ^ (auVar38 ^ auVar60) & *(undefined1 (*) [16])(puVar11 + 0x50);
        auVar47 = auVar60 ^ (auVar60 ^ auVar43) & *(undefined1 (*) [16])(puVar11 + 0x50);
        if (CONCAT13(bVar81 & bVar75 & (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar49 >> 0x18) &
                     bVar84 & bVar78,
                     CONCAT12(bVar80 & bVar74 &
                              (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                              bVar83 & bVar77,
                              CONCAT11(bVar79 & bVar73 &
                                       (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar49 >> 8) &
                                       bVar82 & bVar76,
                                       (byte)iVar72 & (byte)iVar50 & (byte)iVar71 & (byte)iVar49 &
                                       (byte)iVar8 & (byte)iVar56))) != 0) {
          local_160 = iVar46;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = (float)((int)fVar41 << 1);
          afStack_a40[lVar17 * 0xc + 2] = (float)((int)fVar42 << 1);
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -6) = auVar63._8_8_;
          *(undefined8 *)*(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -8) = auVar63._0_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -2) = auVar65._8_8_;
          *(undefined8 *)*(undefined1 (*) [16])(afStack_a40 + lVar17 * 0xc + -4) = auVar65._0_8_;
        }
        auVar38 = auVar38 ^ (auVar38 ^ auVar60) & auVar62;
        auVar43 = auVar43 ^ (auVar43 ^ auVar60) & ~auVar62;
        fVar87 = (float)((int)fVar41 << 1 | 1);
        auVar61._0_4_ = -(uint)(fVar89 <= auVar57._0_4_);
        auVar61._4_4_ = -(uint)(fVar90 <= fVar34);
        auVar61._8_4_ = -(uint)(fVar30 <= auVar57._8_4_);
        auVar61._12_4_ = -(uint)(fVar91 <= auVar57._12_4_);
        auVar66._0_4_ = -(uint)(auVar51._0_4_ <= fVar85);
        auVar66._4_4_ = -(uint)(fVar27 <= fStack_b3c);
        auVar66._8_4_ = -(uint)(auVar51._8_4_ <= fVar24);
        auVar66._12_4_ = -(uint)(auVar51._12_4_ <= fVar86);
        auVar39._8_8_ = auVar64._8_8_;
        auVar39._0_8_ = CONCAT44(fVar28,auVar64._0_4_);
        auVar44._8_8_ = auVar47._8_8_;
        auVar44._0_8_ = CONCAT44(fVar35,auVar47._0_4_);
        auVar62 = NEON_fmax(auVar67,auVar58,4);
        auVar62 = auVar62 ^ (auVar62 ^ auVar67) & auVar61;
        auVar51 = NEON_fmin(auVar68,auVar53,4);
        auVar51 = auVar51 ^ (auVar51 ^ auVar68) & auVar66;
        if (CONCAT13((byte)((uint)auVar61._4_4_ >> 0x18) & (byte)((uint)auVar66._4_4_ >> 0x18) &
                     (byte)((uint)auVar61._0_4_ >> 0x18) & (byte)((uint)auVar66._0_4_ >> 0x18) &
                     (byte)((uint)auVar61._8_4_ >> 0x18) & (byte)((uint)auVar66._8_4_ >> 0x18),
                     CONCAT12((byte)((uint)auVar61._4_4_ >> 0x10) &
                              (byte)((uint)auVar66._4_4_ >> 0x10) &
                              (byte)((uint)auVar61._0_4_ >> 0x10) &
                              (byte)((uint)auVar66._0_4_ >> 0x10) &
                              (byte)((uint)auVar61._8_4_ >> 0x10) &
                              (byte)((uint)auVar66._8_4_ >> 0x10),
                              CONCAT11((byte)((uint)auVar61._4_4_ >> 8) &
                                       (byte)((uint)auVar66._4_4_ >> 8) &
                                       (byte)((uint)auVar61._0_4_ >> 8) &
                                       (byte)((uint)auVar66._0_4_ >> 8) &
                                       (byte)((uint)auVar61._8_4_ >> 8) &
                                       (byte)((uint)auVar66._8_4_ >> 8),
                                       (byte)auVar61._4_4_ & (byte)auVar66._4_4_ &
                                       (byte)auVar61._0_4_ & (byte)auVar66._0_4_ &
                                       (byte)auVar61._8_4_ & (byte)auVar66._8_4_))) != 0) {
          lVar17 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = fVar87;
          afStack_a40[lVar17 * 0xc + 2] = (float)((int)fVar42 << 1);
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -6) = auVar53._8_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -8) = auVar53._0_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -2) = auVar58._8_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -4) = auVar58._0_8_;
        }
        auVar52._8_8_ = auVar43._8_8_;
        auVar52._0_8_ = CONCAT44(fVar37,auVar43._0_4_);
        auVar33._0_4_ = -(uint)(fVar89 <= auVar47._0_4_);
        auVar33._4_4_ = -(uint)(fVar90 <= fVar35);
        auVar33._8_4_ = -(uint)(fVar30 <= auVar47._8_4_);
        auVar33._12_4_ = -(uint)(fVar91 <= auVar47._12_4_);
        fVar42 = (float)((int)fVar42 << 1 | 1);
        auVar54._0_4_ = -(uint)(auVar64._0_4_ <= fVar85);
        auVar54._4_4_ = -(uint)(fVar28 <= fStack_b3c);
        auVar54._8_4_ = -(uint)(auVar64._8_4_ <= fVar24);
        auVar54._12_4_ = -(uint)(auVar64._12_4_ <= fVar86);
        auVar48._8_8_ = auVar38._8_8_;
        auVar48._0_8_ = CONCAT44(fVar29,auVar38._0_4_);
        auVar47 = NEON_fmax(auVar62,auVar44,4);
        auVar64 = NEON_fmin(auVar51,auVar39,4);
        auVar47 = auVar47 ^ (auVar47 ^ auVar62) & auVar33;
        auVar64 = auVar64 ^ (auVar64 ^ auVar51) & auVar54;
        if (CONCAT13((byte)((uint)auVar33._4_4_ >> 0x18) & (byte)((uint)auVar54._4_4_ >> 0x18) &
                     (byte)((uint)auVar33._0_4_ >> 0x18) & (byte)((uint)auVar54._0_4_ >> 0x18) &
                     (byte)((uint)auVar33._8_4_ >> 0x18) & (byte)((uint)auVar54._8_4_ >> 0x18),
                     CONCAT12((byte)((uint)auVar33._4_4_ >> 0x10) &
                              (byte)((uint)auVar54._4_4_ >> 0x10) &
                              (byte)((uint)auVar33._0_4_ >> 0x10) &
                              (byte)((uint)auVar54._0_4_ >> 0x10) &
                              (byte)((uint)auVar33._8_4_ >> 0x10) &
                              (byte)((uint)auVar54._8_4_ >> 0x10),
                              CONCAT11((byte)((uint)auVar33._4_4_ >> 8) &
                                       (byte)((uint)auVar54._4_4_ >> 8) &
                                       (byte)((uint)auVar33._0_4_ >> 8) &
                                       (byte)((uint)auVar54._0_4_ >> 8) &
                                       (byte)((uint)auVar33._8_4_ >> 8) &
                                       (byte)((uint)auVar54._8_4_ >> 8),
                                       (byte)auVar33._4_4_ & (byte)auVar54._4_4_ &
                                       (byte)auVar33._0_4_ & (byte)auVar54._0_4_ &
                                       (byte)auVar33._8_4_ & (byte)auVar54._8_4_))) != 0) {
          lVar17 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = fVar87;
          afStack_a40[lVar17 * 0xc + 2] = fVar42;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -6) = auVar39._8_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -8) = auVar39._0_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -2) = auVar44._8_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -4) = auVar44._0_8_;
        }
        iVar50 = -(uint)(fVar89 <= auVar43._0_4_);
        iVar56 = -(uint)(fVar90 <= fVar37);
        auVar55._0_8_ = CONCAT44(iVar56,iVar50);
        auVar55._8_4_ = -(uint)(fVar30 <= auVar43._8_4_);
        auVar55._12_4_ = -(uint)(fVar91 <= auVar43._12_4_);
        iVar46 = -(uint)(auVar38._0_4_ <= fVar85);
        iVar49 = -(uint)(fVar29 <= fStack_b3c);
        auVar40._0_8_ = CONCAT44(iVar49,iVar46);
        auVar40._8_4_ = -(uint)(auVar38._8_4_ <= fVar24);
        auVar40._12_4_ = -(uint)(auVar38._12_4_ <= fVar86);
        auVar45 = NEON_fmin(auVar64,auVar48,4);
        auVar59 = NEON_fmax(auVar47,auVar52,4);
        if (CONCAT13((byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar49 >> 0x18) &
                     (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar46 >> 0x18) &
                     (byte)((uint)auVar55._8_4_ >> 0x18) & (byte)((uint)auVar40._8_4_ >> 0x18),
                     CONCAT12((byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                              (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar46 >> 0x10) &
                              (byte)((uint)auVar55._8_4_ >> 0x10) &
                              (byte)((uint)auVar40._8_4_ >> 0x10),
                              CONCAT11((byte)((uint)iVar56 >> 8) & (byte)((uint)iVar49 >> 8) &
                                       (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar46 >> 8) &
                                       (byte)((uint)auVar55._8_4_ >> 8) &
                                       (byte)((uint)auVar40._8_4_ >> 8),
                                       (byte)iVar56 & (byte)iVar49 & (byte)iVar50 & (byte)iVar46 &
                                       (byte)auVar55._8_4_ & (byte)auVar40._8_4_))) != 0) {
          lVar17 = (long)local_160;
          local_160 = local_160 + 1;
          afStack_a40[lVar17 * 0xc] = fVar36;
          afStack_a40[lVar17 * 0xc + 1] = (float)((int)fVar41 << 1);
          afStack_a40[lVar17 * 0xc + 2] = fVar42;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -6) = auVar48._8_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -8) = auVar48._0_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -2) = auVar52._8_8_;
          *(undefined8 *)(afStack_a40 + lVar17 * 0xc + -4) = auVar52._0_8_;
        }
        auVar70._8_8_ = auVar55._8_8_;
        auVar70._0_8_ = auVar55._0_8_;
        auVar88._8_8_ = auVar40._8_8_;
        auVar88._0_8_ = auVar40._0_8_;
        auVar59 = auVar59 ^ (auVar59 ^ auVar47) & auVar70;
        auVar45 = auVar45 ^ (auVar45 ^ auVar64) & auVar88;
      }
      if (local_160 == 0) break;
    } while( true );
  }
  goto LAB_02ebb408;
LAB_02ebae68:
  local_160 = (int)lVar17;
  uVar3 = -((uint)*(byte *)(param_1 + 0x1c) + *(int *)((long)param_6 + 0x1c));
  iVar46 = ((int)afStack_a40[lVar17 * 0xc + 2] << (ulong)(*(int *)(param_1 + 0x60) + 1U & 0x1f)) +
           (int)afStack_a40[lVar17 * 0xc + 1] * 2;
  plVar23 = (long *)*param_3;
  uVar4 = (iVar46 + 1 << (ulong)(uVar3 & 0x1f)) - 1U |
          *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
          *(uint *)(param_6 + 3);
  uVar3 = (iVar46 + 2 << (ulong)(uVar3 & 0x1f)) - 1U |
          *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
          *(uint *)(param_6 + 3);
  if (plVar23 == (long *)0x0) {
    uVar19 = 0xffffff;
    lVar16 = *param_4;
    lVar17 = *param_6;
    local_b8 = 0xffffffff;
    local_e0 = 0;
    lStack_d8 = 0;
    local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
    local_b4 = 0xf;
    local_b0 = 0xffff;
    local_ac = 0;
    local_8c = 0xf;
    local_88 = 0xffff;
    local_84 = 0;
    uStack_80 = 0;
    local_d0 = local_d0 & 0xffffffff00000000;
    local_78 = 6;
    uStack_74 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    uStack_a8 = 0;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
    local_90 = uVar4;
    local_c0._0_4_ = uVar19;
    (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
    if (bVar10 != 0) {
      return;
    }
    lVar16 = *param_4;
    lVar17 = *param_6;
    uVar19 = 0xffffff;
    local_b0 = 0xffff;
    local_ac = 0;
    local_88 = 0xffff;
    local_84 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    local_c0 = CONCAT44(local_c0._4_4_,uVar19);
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
  }
  else {
    local_a70 = *param_5;
    uStack_a68 = param_5[1];
    local_a80 = *param_5;
    uStack_a78 = param_5[1];
    (**(code **)(*plVar23 + 0x40))
              (plVar23,local_110,6,*param_6,param_6[1],param_1,uVar4,0,&local_a70);
    (**(code **)(*plVar23 + 0x40))
              (plVar23,local_140,6,*param_6,param_6[1],param_1,uVar3,0,&local_a80);
    plVar23 = (long *)param_3[1];
    if (plVar23 != (long *)0x0) {
      local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(param_3 + 2));
      uVar18 = *puVar1;
      *(undefined4 *)((ulong *)((ulong)&local_f0 | 4) + 1) = *(undefined4 *)((long)param_3 + 0x1c);
      *(ulong *)((ulong)&local_f0 | 4) = uVar18;
      local_e0 = *param_4;
      lStack_d8 = param_4[1];
      local_d0 = param_4[2];
      local_c8 = CONCAT44(local_c8._4_4_,(int)param_4[3]);
      local_c0 = 0;
      local_aa8 = *param_6;
      lStack_aa0 = param_6[1];
      local_ab8[0] = (undefined2)local_a70;
      local_a88 = 0;
      uVar18 = puVar21[1];
      *puVar20 = *puVar21;
      *(int *)(puVar20 + 1) = (int)uVar18;
      local_a98 = param_1;
      local_a90 = uVar4;
      uVar18 = (**(code **)(*plVar23 + 0x40))(plVar23,6,1,&local_f0,local_ab8);
      if ((uVar18 & 1) != 0) {
        local_ab8[0] = (undefined2)local_a80;
        uVar18 = puVar22[1];
        *puVar20 = *puVar22;
        *(int *)(puVar20 + 1) = (int)uVar18;
        local_a90 = uVar3;
        uVar18 = (**(code **)(*(long *)param_3[1] + 0x40))
                           ((long *)param_3[1],6,1,&local_f0,local_ab8);
        if ((uVar18 & 1) != 0) goto LAB_02ebb050;
      }
      iVar46 = 2;
      goto LAB_02ebb3f4;
    }
LAB_02ebb050:
    lVar16 = *param_4;
    lVar17 = *param_6;
    uVar19 = 0xffffff;
    local_b8 = 0xffffffff;
    local_e0 = 0;
    lStack_d8 = 0;
    local_b4 = 0xf;
    local_8c = 0xf;
    local_d0 = local_d0 & 0xffffffff00000000;
    local_78 = 6;
    uStack_74 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar19);
    local_b0 = *(undefined2 *)(param_3 + 2);
    local_ac = (undefined4)*puVar1;
    uStack_a8 = *puVar1 >> 0x20;
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
    local_88 = (undefined2)local_a70;
    local_84 = (undefined4)*puVar21;
    uStack_80 = *puVar21 >> 0x20;
    local_90 = uVar4;
    (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
    if (bVar10 != 0) {
      iVar46 = 3;
      goto LAB_02ebb3f4;
    }
    lVar16 = *param_4;
    lVar17 = *param_6;
    uVar19 = 0xffffff;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar19);
    local_b0 = *(undefined2 *)(param_3 + 2);
    local_ac = (undefined4)*puVar1;
    uStack_a8 = *puVar1 >> 0x20;
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
    local_88 = (undefined2)local_a80;
    local_84 = (undefined4)*puVar22;
    uStack_80 = *puVar22 >> 0x20;
  }
  uStack_74 = 0;
  local_78 = 6;
  local_8c = 0xf;
  local_b4 = 0xf;
  local_b8 = 0xffffffff;
  local_d0 = local_d0 & 0xffffffff00000000;
  lStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_90 = uVar3;
  (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
  iVar46 = 0;
LAB_02ebb3f4:
  if (iVar46 == 3) {
    return;
  }
  goto LAB_02ebab78;
LAB_02eba580:
  local_160 = (int)lVar17;
  uVar3 = -((uint)*(byte *)(param_1 + 0x1c) + *(int *)((long)param_6 + 0x1c));
  iVar46 = ((int)afStack_a40[lVar17 * 0xc + 2] << (ulong)(*(int *)(param_1 + 0x60) + 1U & 0x1f)) +
           (int)afStack_a40[lVar17 * 0xc + 1] * 2;
  plVar23 = (long *)*param_3;
  uVar4 = (iVar46 + 1 << (ulong)(uVar3 & 0x1f)) - 1U |
          *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
          *(uint *)(param_6 + 3);
  uVar3 = (iVar46 + 2 << (ulong)(uVar3 & 0x1f)) - 1U |
          *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
          *(uint *)(param_6 + 3);
  if (plVar23 == (long *)0x0) {
    uVar19 = 0xffffff;
    lVar16 = *param_4;
    lVar17 = *param_6;
    local_b8 = 0xffffffff;
    local_e0 = 0;
    lStack_d8 = 0;
    local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
    local_b4 = 0xf;
    local_b0 = 0xffff;
    local_ac = 0;
    local_8c = 0xf;
    local_88 = 0xffff;
    local_84 = 0;
    uStack_80 = 0;
    local_d0 = local_d0 & 0xffffffff00000000;
    local_78 = 6;
    uStack_74 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    uStack_a8 = 0;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
    local_90 = uVar4;
    local_c0._0_4_ = uVar19;
    (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
    if (bVar10 != 0) goto LAB_02ebb408;
    lVar16 = *param_4;
    lVar17 = *param_6;
    uVar19 = 0xffffff;
    local_b0 = 0xffff;
    local_ac = 0;
    local_88 = 0xffff;
    local_84 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    local_c0 = CONCAT44(local_c0._4_4_,uVar19);
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
  }
  else {
    local_a70 = *param_5;
    uStack_a68 = param_5[1];
    local_a80 = *param_5;
    uStack_a78 = param_5[1];
    (**(code **)(*plVar23 + 0x40))
              (plVar23,local_110,6,*param_6,param_6[1],param_1,uVar4,0,&local_a70);
    (**(code **)(*plVar23 + 0x40))
              (plVar23,local_140,6,*param_6,param_6[1],param_1,uVar3,0,&local_a80);
    plVar23 = (long *)param_3[1];
    if (plVar23 != (long *)0x0) {
      local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(param_3 + 2));
      uVar18 = *puVar1;
      *(undefined4 *)((ulong *)((ulong)&local_f0 | 4) + 1) = *(undefined4 *)((long)param_3 + 0x1c);
      *(ulong *)((ulong)&local_f0 | 4) = uVar18;
      local_e0 = *param_4;
      lStack_d8 = param_4[1];
      local_d0 = param_4[2];
      local_c8 = CONCAT44(local_c8._4_4_,(int)param_4[3]);
      local_c0 = 0;
      local_aa8 = *param_6;
      lStack_aa0 = param_6[1];
      local_ab8[0] = (undefined2)local_a70;
      local_a88 = 0;
      uVar18 = puVar21[1];
      *puVar20 = *puVar21;
      *(int *)(puVar20 + 1) = (int)uVar18;
      local_a98 = param_1;
      local_a90 = uVar4;
      uVar18 = (**(code **)(*plVar23 + 0x40))(plVar23,6,1,&local_f0,local_ab8);
      if ((uVar18 & 1) != 0) {
        local_ab8[0] = (undefined2)local_a80;
        uVar18 = puVar22[1];
        *puVar20 = *puVar22;
        *(int *)(puVar20 + 1) = (int)uVar18;
        local_a90 = uVar3;
        uVar18 = (**(code **)(*(long *)param_3[1] + 0x40))
                           ((long *)param_3[1],6,1,&local_f0,local_ab8);
        if ((uVar18 & 1) != 0) goto LAB_02eba764;
      }
      iVar46 = 2;
      goto LAB_02ebab08;
    }
LAB_02eba764:
    lVar16 = *param_4;
    lVar17 = *param_6;
    uVar19 = 0xffffff;
    local_b8 = 0xffffffff;
    local_e0 = 0;
    lStack_d8 = 0;
    local_b4 = 0xf;
    local_8c = 0xf;
    local_d0 = local_d0 & 0xffffffff00000000;
    local_78 = 6;
    uStack_74 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar19);
    local_b0 = *(undefined2 *)(param_3 + 2);
    local_ac = (undefined4)*puVar1;
    uStack_a8 = *puVar1 >> 0x20;
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
    local_88 = (undefined2)local_a70;
    local_84 = (undefined4)*puVar21;
    uStack_80 = *puVar21 >> 0x20;
    local_90 = uVar4;
    (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
    if (bVar10 != 0) {
      iVar46 = 3;
      goto LAB_02ebab08;
    }
    lVar16 = *param_4;
    lVar17 = *param_6;
    uVar19 = 0xffffff;
    if (lVar16 == 0) {
      local_c8 = 0xffffffffffffffff;
    }
    else {
      local_c8 = *(undefined8 *)(lVar16 + 0xb0);
      uVar19 = *(undefined4 *)(lVar16 + 0x50);
    }
    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar19);
    local_b0 = *(undefined2 *)(param_3 + 2);
    local_ac = (undefined4)*puVar1;
    uStack_a8 = *puVar1 >> 0x20;
    if (lVar17 == 0) {
      local_98 = 0xffffff;
      local_a0 = 0xffffffffffffffff;
    }
    else {
      local_a0 = *(undefined8 *)(lVar17 + 0xb0);
      local_98 = *(undefined4 *)(lVar17 + 0x50);
    }
    local_88 = (undefined2)local_a80;
    local_84 = (undefined4)*puVar22;
    uStack_80 = *puVar22 >> 0x20;
  }
  uStack_74 = 0;
  local_78 = 6;
  local_8c = 0xf;
  local_b4 = 0xf;
  local_b8 = 0xffffffff;
  local_d0 = local_d0 & 0xffffffff00000000;
  lStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_90 = uVar3;
  (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
  iVar46 = 0;
LAB_02ebab08:
  if (iVar46 == 3) {
LAB_02ebb408:
    fVar36 = *(float *)(param_1 + 0x80);
    fVar41 = *(float *)(param_1 + 0x84);
    fVar42 = *(float *)(param_1 + 0x8c);
    *(float *)(*param_8 + 8) = auVar59._8_4_ * *(float *)(param_1 + 0x88);
    *(float *)(*param_8 + 0xc) = auVar59._12_4_ * fVar42;
    *(float *)*param_8 = auVar59._0_4_ * fVar36;
    *(float *)(*param_8 + 4) = auVar59._4_4_ * fVar41;
    fVar36 = *(float *)(param_1 + 0x80);
    fVar41 = *(float *)(param_1 + 0x84);
    fVar42 = *(float *)(param_1 + 0x8c);
    *(float *)(param_8[1] + 8) = auVar45._8_4_ * *(float *)(param_1 + 0x88);
    *(float *)(param_8[1] + 0xc) = auVar45._12_4_ * fVar42;
    *(float *)param_8[1] = auVar45._0_4_ * fVar36;
    *(float *)(param_8[1] + 4) = auVar45._4_4_ * fVar41;
    return;
  }
  goto LAB_02eba23c;
}


