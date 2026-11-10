/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb91e4; name: FUN_02eb91e4
 */


void FUN_02eb91e4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,long *param_7,undefined1 (*param_8) [16])

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar26;
  float fVar28;
  undefined1 auVar23 [16];
  float fVar27;
  float fVar29;
  undefined1 auVar24 [16];
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 auVar25 [16];
  float fVar30;
  float fVar36;
  float fVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar49;
  int iVar52;
  int iVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar69;
  int iVar71;
  int iVar72;
  undefined1 auVar70 [16];
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  undefined1 auVar91 [16];
  float local_b10;
  float fStack_b0c;
  float fStack_b08;
  float fStack_b04;
  float local_ad0;
  float fStack_acc;
  float fStack_ac8;
  float fStack_ac4;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined2 local_a70 [8];
  undefined8 local_a60;
  undefined8 uStack_a58;
  long local_a50;
  uint local_a48;
  undefined8 local_a40;
  undefined2 local_a38 [8];
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined4 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 auStack_9e0 [4];
  float afStack_9c0 [568];
  int local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  int local_bc;
  long *local_b0;
  undefined1 local_a0 [16];
  undefined2 local_90;
  int local_8c;
  int local_80;
  int local_7c;
  
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar32 = *(undefined1 (*) [16])(param_1 + 0xa0);
  auVar31 = *(undefined1 (*) [16])(param_3 + 8);
  auVar33 = *(undefined1 (*) [16])(param_3 + 10);
  auVar54 = NEON_fmin(auVar32,auVar33,4);
  auVar50 = NEON_fmax(auVar44,auVar31,4);
  iVar49 = -(uint)(auVar54._0_4_ < auVar50._0_4_);
  iVar52 = -(uint)(auVar54._4_4_ < auVar50._4_4_);
  iVar53 = -(uint)(auVar54._8_4_ < auVar50._8_4_);
  if (CONCAT13((byte)((uint)iVar52 >> 0x18) | (byte)((uint)iVar49 >> 0x18) |
               (byte)((uint)iVar53 >> 0x18),
               CONCAT12((byte)((uint)iVar52 >> 0x10) | (byte)((uint)iVar49 >> 0x10) |
                        (byte)((uint)iVar53 >> 0x10),
                        CONCAT11((byte)((uint)iVar52 >> 8) | (byte)((uint)iVar49 >> 8) |
                                 (byte)((uint)iVar53 >> 8),
                                 (byte)iVar52 | (byte)iVar49 | (byte)iVar53))) == 0) {
    auVar44 = *(undefined1 (*) [16])(param_1 + 0x70);
    fVar43 = auVar44._0_4_;
    fVar30 = auVar33._0_4_ * fVar43;
    fVar47 = auVar44._4_4_;
    fVar36 = auVar33._4_4_ * fVar47;
    auVar32._0_8_ = CONCAT44(fVar36,fVar30);
    fVar48 = auVar44._8_4_;
    auVar32._8_4_ = auVar33._8_4_ * fVar48;
    fVar22 = auVar44._12_4_;
    auVar32._12_4_ = auVar33._12_4_ * fVar22;
    fVar20 = auVar31._0_4_ * fVar43;
    fVar26 = auVar31._4_4_ * fVar47;
    auVar44._0_8_ = CONCAT44(fVar26,fVar20);
    auVar44._8_4_ = auVar31._8_4_ * fVar48;
    auVar44._12_4_ = auVar31._12_4_ * fVar22;
    uStack_a88 = auVar44._8_8_;
    uStack_a78 = auVar32._8_8_;
    local_a90 = auVar44._0_8_;
    uStack_a80 = auVar32._0_8_;
    if (param_8 == (undefined1 (*) [16])0x0) {
      FUN_02eb5814(auStack_9e0,param_1,&local_a90,&uStack_a80);
      puVar12 = PTR_DAT_047d19e0;
      if (local_e0 != 0) {
        do {
          iVar49 = local_e0;
          lVar17 = (long)local_e0 + -1;
          fVar43 = afStack_9c0[lVar17 * 0xc];
          fVar47 = afStack_9c0[lVar17 * 0xc + 1];
          fVar48 = afStack_9c0[lVar17 * 0xc + 2];
          if (fVar43 != 0.0) {
            fVar22 = afStack_9c0[lVar17 * 0xc + -7];
            fVar21 = afStack_9c0[lVar17 * 0xc + -3];
            fVar27 = fVar22;
            fVar28 = fVar22;
            fVar29 = fVar22;
            fVar37 = fVar21;
            fVar38 = fVar21;
            fVar39 = fVar21;
            if ((int)*(uint *)(local_d8 + 0x50) < (int)fVar43) {
              iVar52 = (int)fVar43 + ~*(uint *)(local_d8 + 0x50);
              plVar18 = (long *)(local_d8 + 0x20);
              lVar15 = *plVar18;
              if ((int)fVar47 <
                  (int)(uint)*(ushort *)((long)plVar18 + (long)iVar52 * 0x18 + lVar15 + 0x10)) {
                uVar2 = *(ushort *)((long)plVar18 + (long)iVar52 * 0x18 + lVar15 + 0x12);
                if ((int)fVar48 < (int)(uint)uVar2) {
                  plVar18 = (long *)((long)plVar18 + (long)iVar52 * 0x18 + lVar15);
                  uVar3 = (int)fVar48 + (int)fVar47 * (uint)uVar2;
                  fVar39 = *(float *)(local_d8 + 0x40);
                  puVar5 = (ushort *)
                           ((long)plVar18 +
                           (-(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                           (ulong)(uVar3 * 4) << 2) + *plVar18);
                  auVar31._2_2_ = 0;
                  auVar31._0_2_ = *puVar5;
                  auVar31._4_2_ = puVar5[1];
                  auVar31._6_2_ = 0;
                  auVar31._8_2_ = puVar5[2];
                  auVar31._10_2_ = 0;
                  auVar31._12_2_ = puVar5[3];
                  auVar31._14_2_ = 0;
                  auVar33._2_2_ = 0;
                  auVar33._0_2_ = puVar5[4];
                  auVar33._4_2_ = puVar5[5];
                  auVar33._6_2_ = 0;
                  auVar33._8_2_ = puVar5[6];
                  auVar33._10_2_ = 0;
                  auVar33._12_2_ = puVar5[7];
                  auVar33._14_2_ = 0;
                  auVar31 = NEON_ucvtf(auVar31,4);
                  auVar33 = NEON_ucvtf(auVar33,4);
                  fVar22 = *(float *)(local_d8 + 0x30) + auVar31._0_4_ * fVar39;
                  fVar27 = *(float *)(local_d8 + 0x34) + auVar31._4_4_ * fVar39;
                  fVar28 = *(float *)(local_d8 + 0x38) + auVar31._8_4_ * fVar39;
                  fVar29 = *(float *)(local_d8 + 0x3c) + auVar31._12_4_ * fVar39;
                  fVar21 = *(float *)(local_d8 + 0x30) + auVar33._0_4_ * fVar39;
                  fVar37 = *(float *)(local_d8 + 0x34) + auVar33._4_4_ * fVar39;
                  fVar38 = *(float *)(local_d8 + 0x38) + auVar33._8_4_ * fVar39;
                  fVar39 = *(float *)(local_d8 + 0x3c) + auVar33._12_4_ * fVar39;
                }
              }
            }
            local_e0 = (int)lVar17;
            auVar31 = *(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -4);
            auVar33 = *(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -8);
            fVar43 = (float)((int)fVar43 + -1);
            auVar59._0_4_ = (auVar33._0_4_ + auVar31._0_4_) * 0.5;
            auVar59._4_4_ = (auVar33._4_4_ + auVar31._4_4_) * 0.5;
            auVar59._8_4_ = (auVar33._8_4_ + auVar31._8_4_) * 0.5;
            auVar59._12_4_ = (auVar33._12_4_ + auVar31._12_4_) * 0.5;
            auVar24 = auVar33 ^ (auVar33 ^ auVar59) & *(undefined1 (*) [16])(puVar12 + 0x10);
            auVar67 = auVar33 ^ (auVar33 ^ auVar59) & *(undefined1 (*) [16])puVar12;
            auVar68 = auVar59 ^ (auVar59 ^ auVar31) & *(undefined1 (*) [16])puVar12;
            auVar70 = auVar59 ^ (auVar59 ^ auVar31) & *(undefined1 (*) [16])(puVar12 + 0x10);
            iVar52 = -(uint)(auVar67._0_4_ <= fVar30);
            iVar53 = -(uint)(fVar22 <= fVar36);
            iVar64 = -(uint)(auVar67._8_4_ <= auVar32._8_4_);
            iVar69 = -(uint)(fVar20 <= auVar68._0_4_);
            iVar71 = -(uint)(fVar26 <= fVar21);
            iVar72 = -(uint)(auVar44._8_4_ <= auVar68._8_4_);
            auVar50 = *(undefined1 (*) [16])(puVar12 + 0x40);
            auVar54 = auVar33 ^ (auVar33 ^ auVar59) & *(undefined1 (*) [16])(puVar12 + 0x50);
            auVar45 = auVar59 ^ (auVar59 ^ auVar31) & *(undefined1 (*) [16])(puVar12 + 0x50);
            if (CONCAT13((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar71 >> 0x18) &
                         (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                         (byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar72 >> 0x18),
                         CONCAT12((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar71 >> 0x10) &
                                  (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                                  (byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar72 >> 0x10),
                                  CONCAT11((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar71 >> 8) &
                                           (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar69 >> 8) &
                                           (byte)((uint)iVar64 >> 8) & (byte)((uint)iVar72 >> 8),
                                           (byte)iVar53 & (byte)iVar71 & (byte)iVar52 & (byte)iVar69
                                           & (byte)iVar64 & (byte)iVar72))) != 0) {
              local_e0 = iVar49;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = (float)((int)fVar47 << 1);
              afStack_9c0[lVar17 * 0xc + 2] = (float)((int)fVar48 << 1);
              *(long *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar67._8_8_;
              *(ulong *)*(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -8) =
                   CONCAT44(fVar22,auVar67._0_4_);
              *(long *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar68._8_8_;
              *(ulong *)*(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -4) =
                   CONCAT44(fVar21,auVar68._0_4_);
            }
            auVar33 = auVar33 ^ (auVar33 ^ auVar59) & auVar50;
            auVar31 = auVar31 ^ (auVar31 ^ auVar59) & ~auVar50;
            fVar22 = (float)((int)fVar47 << 1 | 1);
            iVar49 = -(uint)(fVar20 <= auVar70._0_4_);
            iVar52 = -(uint)(fVar26 <= fVar37);
            iVar53 = -(uint)(auVar44._8_4_ <= auVar70._8_4_);
            iVar64 = -(uint)(auVar24._0_4_ <= fVar30);
            iVar69 = -(uint)(fVar27 <= fVar36);
            iVar71 = -(uint)(auVar24._8_4_ <= auVar32._8_4_);
            if (CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                         (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar64 >> 0x18) &
                         (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                         CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                                  (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar64 >> 0x10) &
                                  (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                                  CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar69 >> 8) &
                                           (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar64 >> 8) &
                                           (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar71 >> 8),
                                           (byte)iVar52 & (byte)iVar69 & (byte)iVar49 & (byte)iVar64
                                           & (byte)iVar53 & (byte)iVar71))) != 0) {
              lVar17 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = fVar22;
              afStack_9c0[lVar17 * 0xc + 2] = (float)((int)fVar48 << 1);
              *(long *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar24._8_8_;
              *(ulong *)(afStack_9c0 + lVar17 * 0xc + -8) = CONCAT44(fVar27,auVar24._0_4_);
              *(long *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar70._8_8_;
              *(ulong *)(afStack_9c0 + lVar17 * 0xc + -4) = CONCAT44(fVar37,auVar70._0_4_);
            }
            iVar64 = -(uint)(auVar54._0_4_ <= fVar30);
            iVar69 = -(uint)(fVar28 <= fVar36);
            iVar71 = -(uint)(auVar54._8_4_ <= auVar32._8_4_);
            fVar48 = (float)((int)fVar48 << 1 | 1);
            iVar49 = -(uint)(fVar20 <= auVar45._0_4_);
            iVar52 = -(uint)(fVar26 <= fVar38);
            iVar53 = -(uint)(auVar44._8_4_ <= auVar45._8_4_);
            if (CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                         (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar64 >> 0x18) &
                         (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                         CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                                  (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar64 >> 0x10) &
                                  (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                                  CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar69 >> 8) &
                                           (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar64 >> 8) &
                                           (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar71 >> 8),
                                           (byte)iVar52 & (byte)iVar69 & (byte)iVar49 & (byte)iVar64
                                           & (byte)iVar53 & (byte)iVar71))) != 0) {
              lVar17 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = fVar22;
              afStack_9c0[lVar17 * 0xc + 2] = fVar48;
              *(long *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar54._8_8_;
              *(ulong *)(afStack_9c0 + lVar17 * 0xc + -8) = CONCAT44(fVar28,auVar54._0_4_);
              *(long *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar45._8_8_;
              *(ulong *)(afStack_9c0 + lVar17 * 0xc + -4) = CONCAT44(fVar38,auVar45._0_4_);
            }
            iVar64 = -(uint)(auVar33._0_4_ <= fVar30);
            iVar69 = -(uint)(fVar29 <= fVar36);
            iVar71 = -(uint)(auVar33._8_4_ <= auVar32._8_4_);
            iVar49 = -(uint)(fVar20 <= auVar31._0_4_);
            iVar52 = -(uint)(fVar26 <= fVar39);
            iVar53 = -(uint)(auVar44._8_4_ <= auVar31._8_4_);
            if (CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                         (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar64 >> 0x18) &
                         (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar71 >> 0x18),
                         CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                                  (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar64 >> 0x10) &
                                  (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar71 >> 0x10),
                                  CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar69 >> 8) &
                                           (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar64 >> 8) &
                                           (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar71 >> 8),
                                           (byte)iVar52 & (byte)iVar69 & (byte)iVar49 & (byte)iVar64
                                           & (byte)iVar53 & (byte)iVar71))) != 0) {
              lVar17 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = (float)((int)fVar47 << 1);
              afStack_9c0[lVar17 * 0xc + 2] = fVar48;
              *(long *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar33._8_8_;
              *(ulong *)(afStack_9c0 + lVar17 * 0xc + -8) = CONCAT44(fVar29,auVar33._0_4_);
              *(long *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar31._8_8_;
              *(ulong *)(afStack_9c0 + lVar17 * 0xc + -4) = CONCAT44(fVar39,auVar31._0_4_);
            }
            goto LAB_02eb9650;
          }
          if ((int)fVar47 < local_80 && (int)fVar48 < local_7c) {
            (**(code **)(*local_b0 + 0x28))();
            lVar17 = (long)local_e0 + -1;
            local_c0 = local_90;
            local_bc = local_8c;
            uStack_c8 = local_a0._8_8_;
            local_d0 = local_a0._0_8_;
            if (local_8c == 2) goto LAB_02eb9648;
            local_e0 = (int)lVar17;
            uVar3 = -((uint)*(byte *)(param_1 + 0x1c) + *(int *)((long)param_6 + 0x1c));
            plVar18 = (long *)*param_3;
            iVar49 = ((int)afStack_9c0[lVar17 * 0xc + 2] <<
                     (ulong)(*(int *)(param_1 + 0x60) + 1U & 0x1f)) +
                     (int)afStack_9c0[lVar17 * 0xc + 1] * 2;
            uVar4 = (iVar49 + 1 << (ulong)(uVar3 & 0x1f)) - 1U |
                    *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
                    *(uint *)(param_6 + 3);
            uVar3 = (iVar49 + 2 << (ulong)(uVar3 & 0x1f)) - 1U |
                    *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
                    *(uint *)(param_6 + 3);
            if (plVar18 == (long *)0x0) {
              iVar49 = (int)param_7[1];
              lVar15 = (long)iVar49;
              lVar17 = lVar15 + 1;
              if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) <= iVar49) {
                FUN_02e931c8(param_7,PTR_PTR_047d1a50,lVar17);
                iVar49 = (int)param_7[1];
              }
              lVar16 = *param_7;
LAB_02eb9894:
              *(uint *)(lVar16 + (long)iVar49 * 4) = uVar4;
              iVar49 = (int)lVar17;
              *(int *)(param_7 + 1) = iVar49;
              if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) <= iVar49) {
                FUN_02e931c8(param_7,PTR_PTR_047d1a50,lVar15 + 2);
                iVar49 = (int)param_7[1];
              }
              *(uint *)(*param_7 + (long)iVar49 * 4) = uVar3;
              *(int *)(param_7 + 1) = (int)(lVar15 + 2);
            }
            else {
              local_9f0 = *param_5;
              uStack_9e8 = param_5[1];
              local_a00 = *param_5;
              uStack_9f8 = param_5[1];
              (**(code **)(*plVar18 + 0x40))
                        (plVar18,local_90,6,*param_6,param_6[1],param_1,uVar4,0,&local_9f0);
              (**(code **)(*plVar18 + 0x40))
                        (plVar18,local_c0,6,*param_6,param_6[1],param_1,uVar3,0,&local_a00);
              plVar18 = (long *)param_3[1];
              if (plVar18 == (long *)0x0) {
LAB_02eb9814:
                iVar49 = (int)param_7[1];
                lVar15 = (long)iVar49;
                lVar17 = lVar15 + 1;
                if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) <= iVar49) {
                  FUN_02e931c8(param_7,PTR_PTR_047d1a50,lVar17);
                  iVar49 = (int)param_7[1];
                }
                lVar16 = *param_7;
                goto LAB_02eb9894;
              }
              local_a38[0] = *(undefined2 *)(param_3 + 2);
              uVar14 = *(undefined8 *)((long)param_3 + 0x14);
              *(undefined4 *)((undefined8 *)((ulong)local_a38 | 4) + 1) =
                   *(undefined4 *)((long)param_3 + 0x1c);
              *(undefined8 *)((ulong)local_a38 | 4) = uVar14;
              local_a28 = *param_4;
              uStack_a20 = param_4[1];
              local_a18 = param_4[2];
              local_a10 = *(undefined4 *)(param_4 + 3);
              local_a08 = 0;
              local_a60 = *param_6;
              uStack_a58 = param_6[1];
              puVar19 = (undefined8 *)((ulong)local_a70 | 4);
              local_a70[0] = (undefined2)local_9f0;
              local_a40 = 0;
              uVar1 = *(undefined4 *)((undefined8 *)((ulong)&local_9f0 | 4) + 1);
              *puVar19 = *(undefined8 *)((ulong)&local_9f0 | 4);
              *(undefined4 *)(puVar19 + 1) = uVar1;
              local_a50 = param_1;
              local_a48 = uVar4;
              uVar13 = (**(code **)(*plVar18 + 0x40))(plVar18,6,1,local_a38,local_a70);
              if ((uVar13 & 1) != 0) {
                local_a70[0] = (undefined2)local_a00;
                uVar14 = *(undefined8 *)((ulong)&local_a00 | 4);
                *(undefined4 *)(puVar19 + 1) =
                     *(undefined4 *)((undefined8 *)((ulong)&local_a00 | 4) + 1);
                *puVar19 = uVar14;
                local_a48 = uVar3;
                uVar13 = (**(code **)(*(long *)param_3[1] + 0x40))
                                   ((long *)param_3[1],6,1,local_a38,local_a70);
                if ((uVar13 & 1) != 0) goto LAB_02eb9814;
              }
            }
          }
          else {
LAB_02eb9648:
            local_e0 = (int)lVar17;
          }
LAB_02eb9650:
        } while (local_e0 != 0);
      }
    }
    else {
      auVar31 = param_8[1];
      fVar21 = fVar43 * *(float *)*param_8;
      fVar27 = fVar47 * *(float *)(*param_8 + 4);
      fVar28 = fVar48 * *(float *)(*param_8 + 8);
      fVar29 = fVar22 * *(float *)(*param_8 + 0xc);
      FUN_02eb5814(auStack_9e0,param_1,&local_a90,&uStack_a80);
      lVar17 = (long)(local_e0 + -1);
      lVar15 = (long)(local_e0 + -1);
      if ((int)afStack_9c0[lVar17 * 0xc + 1] < 1) {
        auVar50._4_4_ = fVar27;
        auVar50._0_4_ = fVar21;
        auVar50._8_4_ = fVar28;
        auVar50._12_4_ = fVar29;
      }
      else {
        auVar54._4_4_ = fVar27;
        auVar54._0_4_ = fVar21;
        auVar54._8_4_ = fVar28;
        auVar54._12_4_ = fVar29;
        auVar50._4_12_ = auVar54._4_12_;
        auVar50._0_4_ = afStack_9c0[lVar17 * 0xc + -8];
      }
      if (0 < (int)afStack_9c0[lVar15 * 0xc + 2]) {
        uVar14 = auVar50._0_8_;
        auVar50._8_4_ = afStack_9c0[lVar17 * 0xc + -6];
        auVar50._0_8_ = uVar14;
      }
      local_ad0 = auVar31._0_4_;
      fStack_acc = auVar31._4_4_;
      fStack_ac8 = auVar31._8_4_;
      fStack_ac4 = auVar31._12_4_;
      auVar45._0_4_ = fVar43 * local_ad0;
      auVar45._4_4_ = fVar47 * fStack_acc;
      auVar45._8_4_ = fVar48 * fStack_ac8;
      auVar45._12_4_ = fVar22 * fStack_ac4;
      if ((int)afStack_9c0[lVar17 * 0xc + 1] + 1 << (ulong)((uint)afStack_9c0[lVar17 * 0xc] & 0x1f)
          < local_80) {
        auVar45._0_4_ = afStack_9c0[lVar15 * 0xc + -4];
      }
      if ((int)afStack_9c0[lVar15 * 0xc + 2] + 1 << (ulong)((uint)afStack_9c0[lVar17 * 0xc] & 0x1f)
          < local_7c) {
        auVar45._8_4_ = afStack_9c0[lVar15 * 0xc + -2];
      }
      auVar70._8_8_ = auVar45._8_8_;
      auVar70._0_4_ = auVar45._0_4_;
      auVar70._4_4_ = 0x7f7fffee;
      auVar24._0_4_ = auVar50._0_4_;
      auVar24._4_4_ = 0xff7fffee;
      auVar24._8_8_ = auVar50._8_8_;
      fStack_b08 = auVar50._8_4_;
      fStack_b04 = auVar50._12_4_;
      fStack_b0c = -3.40282e+38;
      local_b10 = auVar24._0_4_;
      if (local_e0 != 0) {
        puVar19 = (undefined8 *)((ulong)local_a70 | 4);
        do {
          while( true ) {
            iVar49 = local_e0;
            lVar17 = (long)local_e0 + -1;
            fVar43 = afStack_9c0[lVar17 * 0xc];
            fVar47 = afStack_9c0[lVar17 * 0xc + 1];
            fVar48 = afStack_9c0[lVar17 * 0xc + 2];
            if (fVar43 == 0.0) break;
            fVar22 = afStack_9c0[lVar17 * 0xc + -7];
            fVar21 = afStack_9c0[lVar17 * 0xc + -3];
            fVar27 = fVar22;
            fVar28 = fVar22;
            fVar29 = fVar22;
            fVar37 = fVar21;
            fVar38 = fVar21;
            fVar39 = fVar21;
            if ((int)*(uint *)(local_d8 + 0x50) < (int)fVar43) {
              iVar52 = (int)fVar43 + ~*(uint *)(local_d8 + 0x50);
              plVar18 = (long *)(local_d8 + 0x20);
              lVar15 = *plVar18;
              if ((int)fVar47 <
                  (int)(uint)*(ushort *)((long)plVar18 + (long)iVar52 * 0x18 + lVar15 + 0x10)) {
                uVar2 = *(ushort *)((long)plVar18 + (long)iVar52 * 0x18 + lVar15 + 0x12);
                if ((int)fVar48 < (int)(uint)uVar2) {
                  plVar18 = (long *)((long)plVar18 + (long)iVar52 * 0x18 + lVar15);
                  uVar3 = (int)fVar48 + (int)fVar47 * (uint)uVar2;
                  fVar39 = *(float *)(local_d8 + 0x40);
                  puVar5 = (ushort *)
                           ((long)plVar18 +
                           (-(ulong)((uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                           (ulong)(uVar3 * 4) << 2) + *plVar18);
                  auVar67._2_2_ = 0;
                  auVar67._0_2_ = *puVar5;
                  auVar67._4_2_ = puVar5[1];
                  auVar67._6_2_ = 0;
                  auVar67._8_2_ = puVar5[2];
                  auVar67._10_2_ = 0;
                  auVar67._12_2_ = puVar5[3];
                  auVar67._14_2_ = 0;
                  auVar68._2_2_ = 0;
                  auVar68._0_2_ = puVar5[4];
                  auVar68._4_2_ = puVar5[5];
                  auVar68._6_2_ = 0;
                  auVar68._8_2_ = puVar5[6];
                  auVar68._10_2_ = 0;
                  auVar68._12_2_ = puVar5[7];
                  auVar68._14_2_ = 0;
                  auVar31 = NEON_ucvtf(auVar67,4);
                  auVar33 = NEON_ucvtf(auVar68,4);
                  fVar22 = *(float *)(local_d8 + 0x30) + auVar31._0_4_ * fVar39;
                  fVar27 = *(float *)(local_d8 + 0x34) + auVar31._4_4_ * fVar39;
                  fVar28 = *(float *)(local_d8 + 0x38) + auVar31._8_4_ * fVar39;
                  fVar29 = *(float *)(local_d8 + 0x3c) + auVar31._12_4_ * fVar39;
                  fVar21 = *(float *)(local_d8 + 0x30) + auVar33._0_4_ * fVar39;
                  fVar37 = *(float *)(local_d8 + 0x34) + auVar33._4_4_ * fVar39;
                  fVar38 = *(float *)(local_d8 + 0x38) + auVar33._8_4_ * fVar39;
                  fVar39 = *(float *)(local_d8 + 0x3c) + auVar33._12_4_ * fVar39;
                }
              }
            }
            local_e0 = (int)lVar17;
            auVar31 = *(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -8);
            auVar33 = *(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -4);
            auVar61._0_4_ = (auVar31._0_4_ + auVar33._0_4_) * 0.5;
            auVar61._4_4_ = (auVar31._4_4_ + auVar33._4_4_) * 0.5;
            auVar61._8_4_ = (auVar31._8_4_ + auVar33._8_4_) * 0.5;
            auVar61._12_4_ = (auVar31._12_4_ + auVar33._12_4_) * 0.5;
            uVar73 = (undefined1)((uint)fStack_b08 >> 8);
            uVar74 = (undefined1)((uint)fStack_b08 >> 0x10);
            uVar75 = (undefined1)((uint)fStack_b08 >> 0x18);
            uVar76 = (undefined1)((uint)fStack_b04 >> 8);
            uVar77 = (undefined1)((uint)fStack_b04 >> 0x10);
            uVar78 = (undefined1)((uint)fStack_b04 >> 0x18);
            auVar7._4_4_ = fStack_b0c;
            auVar7._0_4_ = local_b10;
            auVar7[8] = fStack_b08._0_1_;
            auVar6._4_4_ = fStack_b0c;
            auVar6._0_4_ = local_b10;
            auVar6[8] = fStack_b08._0_1_;
            auVar24 = auVar31 ^ (auVar31 ^ auVar61) &
                                *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x10);
            auVar50 = auVar61 ^ (auVar61 ^ auVar33) & *(undefined1 (*) [16])PTR_DAT_047d19e0;
            auVar54 = auVar31 ^ (auVar31 ^ auVar61) & *(undefined1 (*) [16])PTR_DAT_047d19e0;
            auVar63._8_8_ = auVar54._8_8_;
            auVar63._0_8_ = CONCAT44(fVar22,auVar54._0_4_);
            auVar65._8_8_ = auVar50._8_8_;
            auVar65._0_8_ = CONCAT44(fVar21,auVar50._0_4_);
            auVar59 = auVar61 ^ (auVar61 ^ auVar33) &
                                *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x10);
            fVar43 = (float)((int)fVar43 + -1);
            auVar68 = NEON_fmin(auVar70,auVar63,4);
            iVar52 = -(uint)(fVar20 <= auVar50._0_4_);
            iVar53 = -(uint)(fVar26 <= fVar21);
            bVar79 = (byte)((uint)iVar53 >> 8);
            bVar80 = (byte)((uint)iVar53 >> 0x10);
            bVar81 = (byte)((uint)iVar53 >> 0x18);
            iVar64 = -(uint)(auVar44._8_4_ <= auVar50._8_4_);
            bVar82 = (byte)((uint)iVar64 >> 8);
            bVar83 = (byte)((uint)iVar64 >> 0x10);
            bVar84 = (byte)((uint)iVar64 >> 0x18);
            iVar69 = -(uint)(auVar44._12_4_ <= auVar50._12_4_);
            auVar56._8_8_ = auVar24._8_8_;
            auVar56._0_8_ = CONCAT44(fVar27,auVar24._0_4_);
            auVar50 = *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x40);
            iVar71 = -(uint)(auVar54._0_4_ <= fVar30);
            iVar72 = -(uint)(fVar22 <= fVar36);
            bVar85 = (byte)((uint)iVar72 >> 8);
            bVar86 = (byte)((uint)iVar72 >> 0x10);
            bVar87 = (byte)((uint)iVar72 >> 0x18);
            iVar10 = -(uint)(auVar54._8_4_ <= auVar32._8_4_);
            bVar88 = (byte)((uint)iVar10 >> 8);
            bVar89 = (byte)((uint)iVar10 >> 0x10);
            bVar90 = (byte)((uint)iVar10 >> 0x18);
            iVar11 = -(uint)(auVar54._12_4_ <= auVar32._12_4_);
            auVar6[9] = uVar73;
            auVar6[10] = uVar74;
            auVar6[0xb] = uVar75;
            auVar6[0xc] = SUB41(fStack_b04,0);
            auVar6[0xd] = uVar76;
            auVar6[0xe] = uVar77;
            auVar6[0xf] = uVar78;
            auVar67 = NEON_fmax(auVar6,auVar65,4);
            auVar60._8_8_ = auVar59._8_8_;
            auVar60._0_8_ = CONCAT44(fVar37,auVar59._0_4_);
            auVar7[9] = uVar73;
            auVar7[10] = uVar74;
            auVar7[0xb] = uVar75;
            auVar7[0xc] = SUB41(fStack_b04,0);
            auVar7[0xd] = uVar76;
            auVar7[0xe] = uVar77;
            auVar7[0xf] = uVar78;
            auVar8[4] = (byte)iVar53;
            auVar8._0_4_ = iVar52;
            auVar8[5] = bVar79;
            auVar8[6] = bVar80;
            auVar8[7] = bVar81;
            auVar8[8] = (byte)iVar64;
            auVar8[9] = bVar82;
            auVar8[10] = bVar83;
            auVar8[0xb] = bVar84;
            auVar8[0xc] = (char)iVar69;
            auVar8[0xd] = (char)((uint)iVar69 >> 8);
            auVar8[0xe] = (char)((uint)iVar69 >> 0x10);
            auVar8[0xf] = (char)((uint)iVar69 >> 0x18);
            auVar67 = auVar67 ^ (auVar67 ^ auVar7) & auVar8;
            auVar9[4] = (byte)iVar72;
            auVar9._0_4_ = iVar71;
            auVar9[5] = bVar85;
            auVar9[6] = bVar86;
            auVar9[7] = bVar87;
            auVar9[8] = (byte)iVar10;
            auVar9[9] = bVar88;
            auVar9[10] = bVar89;
            auVar9[0xb] = bVar90;
            auVar9[0xc] = (char)iVar11;
            auVar9[0xd] = (char)((uint)iVar11 >> 8);
            auVar9[0xe] = (char)((uint)iVar11 >> 0x10);
            auVar9[0xf] = (char)((uint)iVar11 >> 0x18);
            auVar68 = auVar68 ^ (auVar68 ^ auVar70) & auVar9;
            auVar54 = auVar31 ^ (auVar31 ^ auVar61) &
                                *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x50);
            auVar45 = auVar61 ^ (auVar61 ^ auVar33) &
                                *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x50);
            if (CONCAT13(bVar87 & bVar81 &
                         (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         bVar90 & bVar84,
                         CONCAT12(bVar86 & bVar80 &
                                  (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar52 >> 0x10) &
                                  bVar89 & bVar83,
                                  CONCAT11(bVar85 & bVar79 &
                                           (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar52 >> 8) &
                                           bVar88 & bVar82,
                                           (byte)iVar72 & (byte)iVar53 & (byte)iVar71 & (byte)iVar52
                                           & (byte)iVar10 & (byte)iVar64))) != 0) {
              local_e0 = iVar49;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = (float)((int)fVar47 << 1);
              afStack_9c0[lVar17 * 0xc + 2] = (float)((int)fVar48 << 1);
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar63._8_8_;
              *(undefined8 *)*(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -8) = auVar63._0_8_
              ;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar65._8_8_;
              *(undefined8 *)*(undefined1 (*) [16])(afStack_9c0 + lVar17 * 0xc + -4) = auVar65._0_8_
              ;
            }
            auVar31 = auVar31 ^ (auVar31 ^ auVar61) & auVar50;
            auVar33 = auVar33 ^ (auVar33 ^ auVar61) & ~auVar50;
            fVar22 = (float)((int)fVar47 << 1 | 1);
            auVar66._0_4_ = -(uint)(auVar24._0_4_ <= fVar30);
            auVar66._4_4_ = -(uint)(fVar27 <= fVar36);
            auVar66._8_4_ = -(uint)(auVar24._8_4_ <= auVar32._8_4_);
            auVar66._12_4_ = -(uint)(auVar24._12_4_ <= auVar32._12_4_);
            auVar46._8_8_ = auVar45._8_8_;
            auVar46._0_8_ = CONCAT44(fVar38,auVar45._0_4_);
            auVar62._0_4_ = -(uint)(fVar20 <= auVar59._0_4_);
            auVar62._4_4_ = -(uint)(fVar26 <= fVar37);
            auVar62._8_4_ = -(uint)(auVar44._8_4_ <= auVar59._8_4_);
            auVar62._12_4_ = -(uint)(auVar44._12_4_ <= auVar59._12_4_);
            auVar50 = NEON_fmax(auVar67,auVar60,4);
            auVar41._8_8_ = auVar54._8_8_;
            auVar41._0_8_ = CONCAT44(fVar28,auVar54._0_4_);
            auVar50 = auVar50 ^ (auVar50 ^ auVar67) & auVar62;
            auVar70 = NEON_fmin(auVar68,auVar56,4);
            auVar70 = auVar70 ^ (auVar70 ^ auVar68) & auVar66;
            if (CONCAT13((byte)((uint)auVar62._4_4_ >> 0x18) & (byte)((uint)auVar66._4_4_ >> 0x18) &
                         (byte)((uint)auVar62._0_4_ >> 0x18) & (byte)((uint)auVar66._0_4_ >> 0x18) &
                         (byte)((uint)auVar62._8_4_ >> 0x18) & (byte)((uint)auVar66._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar62._4_4_ >> 0x10) &
                                  (byte)((uint)auVar66._4_4_ >> 0x10) &
                                  (byte)((uint)auVar62._0_4_ >> 0x10) &
                                  (byte)((uint)auVar66._0_4_ >> 0x10) &
                                  (byte)((uint)auVar62._8_4_ >> 0x10) &
                                  (byte)((uint)auVar66._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar62._4_4_ >> 8) &
                                           (byte)((uint)auVar66._4_4_ >> 8) &
                                           (byte)((uint)auVar62._0_4_ >> 8) &
                                           (byte)((uint)auVar66._0_4_ >> 8) &
                                           (byte)((uint)auVar62._8_4_ >> 8) &
                                           (byte)((uint)auVar66._8_4_ >> 8),
                                           (byte)auVar62._4_4_ & (byte)auVar66._4_4_ &
                                           (byte)auVar62._0_4_ & (byte)auVar66._0_4_ &
                                           (byte)auVar62._8_4_ & (byte)auVar66._8_4_))) != 0) {
              lVar17 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = fVar22;
              afStack_9c0[lVar17 * 0xc + 2] = (float)((int)fVar48 << 1);
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar56._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -8) = auVar56._0_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar60._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -4) = auVar60._0_8_;
            }
            auVar55._8_8_ = auVar33._8_8_;
            auVar55._0_8_ = CONCAT44(fVar39,auVar33._0_4_);
            auVar57._0_4_ = -(uint)(auVar54._0_4_ <= fVar30);
            auVar57._4_4_ = -(uint)(fVar28 <= fVar36);
            auVar57._8_4_ = -(uint)(auVar54._8_4_ <= auVar32._8_4_);
            auVar57._12_4_ = -(uint)(auVar54._12_4_ <= auVar32._12_4_);
            fVar48 = (float)((int)fVar48 << 1 | 1);
            auVar34._0_4_ = -(uint)(fVar20 <= auVar45._0_4_);
            auVar34._4_4_ = -(uint)(fVar26 <= fVar38);
            auVar34._8_4_ = -(uint)(auVar44._8_4_ <= auVar45._8_4_);
            auVar34._12_4_ = -(uint)(auVar44._12_4_ <= auVar45._12_4_);
            auVar51._8_8_ = auVar31._8_8_;
            auVar51._0_8_ = CONCAT44(fVar29,auVar31._0_4_);
            auVar54 = NEON_fmax(auVar50,auVar46,4);
            auVar24 = NEON_fmin(auVar70,auVar41,4);
            auVar54 = auVar54 ^ (auVar54 ^ auVar50) & auVar34;
            auVar24 = auVar24 ^ (auVar24 ^ auVar70) & auVar57;
            if (CONCAT13((byte)((uint)auVar34._4_4_ >> 0x18) & (byte)((uint)auVar57._4_4_ >> 0x18) &
                         (byte)((uint)auVar34._0_4_ >> 0x18) & (byte)((uint)auVar57._0_4_ >> 0x18) &
                         (byte)((uint)auVar34._8_4_ >> 0x18) & (byte)((uint)auVar57._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar34._4_4_ >> 0x10) &
                                  (byte)((uint)auVar57._4_4_ >> 0x10) &
                                  (byte)((uint)auVar34._0_4_ >> 0x10) &
                                  (byte)((uint)auVar57._0_4_ >> 0x10) &
                                  (byte)((uint)auVar34._8_4_ >> 0x10) &
                                  (byte)((uint)auVar57._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar34._4_4_ >> 8) &
                                           (byte)((uint)auVar57._4_4_ >> 8) &
                                           (byte)((uint)auVar34._0_4_ >> 8) &
                                           (byte)((uint)auVar57._0_4_ >> 8) &
                                           (byte)((uint)auVar34._8_4_ >> 8) &
                                           (byte)((uint)auVar57._8_4_ >> 8),
                                           (byte)auVar34._4_4_ & (byte)auVar57._4_4_ &
                                           (byte)auVar34._0_4_ & (byte)auVar57._0_4_ &
                                           (byte)auVar34._8_4_ & (byte)auVar57._8_4_))) != 0) {
              lVar17 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = fVar22;
              afStack_9c0[lVar17 * 0xc + 2] = fVar48;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar41._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -8) = auVar41._0_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar46._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -4) = auVar46._0_8_;
            }
            auVar58._0_4_ = -(uint)(fVar20 <= auVar33._0_4_);
            auVar58._4_4_ = -(uint)(fVar26 <= fVar39);
            auVar58._8_4_ = -(uint)(auVar44._8_4_ <= auVar33._8_4_);
            auVar58._12_4_ = -(uint)(auVar44._12_4_ <= auVar33._12_4_);
            iVar49 = -(uint)(auVar31._0_4_ <= fVar30);
            iVar52 = -(uint)(fVar29 <= fVar36);
            auVar42._0_8_ = CONCAT44(iVar52,iVar49);
            auVar42._8_4_ = -(uint)(auVar31._8_4_ <= auVar32._8_4_);
            auVar42._12_4_ = -(uint)(auVar31._12_4_ <= auVar32._12_4_);
            auVar70 = NEON_fmin(auVar24,auVar51,4);
            auVar31 = NEON_fmax(auVar54,auVar55,4);
            if (CONCAT13((byte)((uint)auVar58._4_4_ >> 0x18) & (byte)((uint)iVar52 >> 0x18) &
                         (byte)((uint)auVar58._0_4_ >> 0x18) & (byte)((uint)iVar49 >> 0x18) &
                         (byte)((uint)auVar58._8_4_ >> 0x18) & (byte)((uint)auVar42._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar58._4_4_ >> 0x10) & (byte)((uint)iVar52 >> 0x10)
                                  & (byte)((uint)auVar58._0_4_ >> 0x10) &
                                    (byte)((uint)iVar49 >> 0x10) &
                                  (byte)((uint)auVar58._8_4_ >> 0x10) &
                                  (byte)((uint)auVar42._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar58._4_4_ >> 8) &
                                           (byte)((uint)iVar52 >> 8) &
                                           (byte)((uint)auVar58._0_4_ >> 8) &
                                           (byte)((uint)iVar49 >> 8) &
                                           (byte)((uint)auVar58._8_4_ >> 8) &
                                           (byte)((uint)auVar42._8_4_ >> 8),
                                           (byte)auVar58._4_4_ & (byte)iVar52 &
                                           (byte)auVar58._0_4_ & (byte)iVar49 &
                                           (byte)auVar58._8_4_ & (byte)auVar42._8_4_))) != 0) {
              lVar17 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar17 * 0xc] = fVar43;
              afStack_9c0[lVar17 * 0xc + 1] = (float)((int)fVar47 << 1);
              afStack_9c0[lVar17 * 0xc + 2] = fVar48;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -6) = auVar51._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -8) = auVar51._0_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -2) = auVar55._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar17 * 0xc + -4) = auVar55._0_8_;
            }
            auVar91._8_8_ = auVar42._8_8_;
            auVar91._0_8_ = auVar42._0_8_;
            auVar54 = auVar54 ^ (auVar54 ^ auVar31) & ~auVar58;
            auVar70 = auVar70 ^ (auVar70 ^ auVar24) & auVar91;
            fStack_b08 = auVar54._8_4_;
            fStack_b04 = auVar54._12_4_;
            local_b10 = auVar54._0_4_;
            fStack_b0c = auVar54._4_4_;
LAB_02eb9fa0:
            if (local_e0 == 0) goto LAB_02eb9fa4;
          }
          if (local_80 <= (int)fVar47 || local_7c <= (int)fVar48) {
LAB_02eb9f98:
            local_e0 = (int)lVar17;
            goto LAB_02eb9fa0;
          }
          (**(code **)(*local_b0 + 0x28))(auVar24);
          lVar17 = (long)local_e0 + -1;
          local_c0 = local_90;
          local_bc = local_8c;
          uStack_c8 = local_a0._8_8_;
          local_d0 = local_a0._0_8_;
          auVar24 = local_a0;
          if (local_8c == 2) goto LAB_02eb9f98;
          local_e0 = (int)lVar17;
          uVar3 = -((uint)*(byte *)(param_1 + 0x1c) + *(int *)((long)param_6 + 0x1c));
          plVar18 = (long *)*param_3;
          iVar49 = ((int)afStack_9c0[lVar17 * 0xc + 2] <<
                   (ulong)(*(int *)(param_1 + 0x60) + 1U & 0x1f)) +
                   (int)afStack_9c0[lVar17 * 0xc + 1] * 2;
          uVar4 = (iVar49 + 1 << (ulong)(uVar3 & 0x1f)) - 1U |
                  *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
                  *(uint *)(param_6 + 3);
          uVar3 = (iVar49 + 2 << (ulong)(uVar3 & 0x1f)) - 1U |
                  *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)param_6 + 0x1c) * 4) &
                  *(uint *)(param_6 + 3);
          if (plVar18 == (long *)0x0) {
LAB_02eb9c40:
            iVar49 = (int)param_7[1];
            lVar17 = (long)iVar49;
            uVar13 = lVar17 + 1;
            if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) <= iVar49) {
              auVar24 = FUN_02e931c8(param_7,PTR_PTR_047d1a50,uVar13);
              iVar49 = (int)param_7[1];
            }
            *(uint *)(*param_7 + (long)iVar49 * 4) = uVar4;
            lVar17 = lVar17 + 2;
            *(int *)(param_7 + 1) = (int)uVar13;
            if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) <= (int)uVar13) {
              auVar24 = FUN_02e931c8(param_7,PTR_PTR_047d1a50,lVar17);
              uVar13 = (ulong)*(uint *)(param_7 + 1);
            }
            *(uint *)(*param_7 + (long)(int)uVar13 * 4) = uVar3;
            *(int *)(param_7 + 1) = (int)lVar17;
          }
          else {
            local_9f0 = *param_5;
            uStack_9e8 = param_5[1];
            local_a00 = *param_5;
            uStack_9f8 = param_5[1];
            (**(code **)(*plVar18 + 0x40))
                      (plVar18,local_90,6,*param_6,param_6[1],param_1,uVar4,0,&local_9f0);
            auVar24 = (**(code **)(*plVar18 + 0x40))
                                (plVar18,local_c0,6,*param_6,param_6[1],param_1,uVar3,0,&local_a00);
            plVar18 = (long *)param_3[1];
            if (plVar18 == (long *)0x0) goto LAB_02eb9c40;
            local_a38[0] = *(undefined2 *)(param_3 + 2);
            uVar14 = *(undefined8 *)((long)param_3 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_a38 | 4) + 1) =
                 *(undefined4 *)((long)param_3 + 0x1c);
            *(undefined8 *)((ulong)local_a38 | 4) = uVar14;
            local_a28 = *param_4;
            uStack_a20 = param_4[1];
            local_a18 = param_4[2];
            local_a10 = *(undefined4 *)(param_4 + 3);
            local_a08 = 0;
            local_a60 = *param_6;
            uStack_a58 = param_6[1];
            local_a70[0] = (undefined2)local_9f0;
            uVar14 = *(undefined8 *)((ulong)&local_9f0 | 4);
            local_a40 = 0;
            *(undefined4 *)(puVar19 + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_9f0 | 4) + 1);
            *puVar19 = uVar14;
            local_a50 = param_1;
            local_a48 = uVar4;
            uVar13 = (**(code **)(*plVar18 + 0x40))(plVar18,6,1,local_a38,local_a70);
            auVar24 = extraout_q0;
            if ((uVar13 & 1) != 0) {
              local_a70[0] = (undefined2)local_a00;
              uVar14 = *(undefined8 *)((ulong)&local_a00 | 4);
              *(undefined4 *)(puVar19 + 1) =
                   *(undefined4 *)((undefined8 *)((ulong)&local_a00 | 4) + 1);
              *puVar19 = uVar14;
              local_a48 = uVar3;
              uVar13 = (**(code **)(*(long *)param_3[1] + 0x40))
                                 ((long *)param_3[1],6,1,local_a38,local_a70);
              auVar24 = extraout_q0_00;
              if ((uVar13 & 1) != 0) goto LAB_02eb9c40;
            }
          }
        } while (local_e0 != 0);
      }
LAB_02eb9fa4:
      auVar25._0_8_ =
           CONCAT44(fStack_b0c * *(float *)(param_1 + 0x84),local_b10 * *(float *)(param_1 + 0x80));
      auVar25._8_4_ = fStack_b08 * *(float *)(param_1 + 0x88);
      auVar25._12_4_ = fStack_b04 * *(float *)(param_1 + 0x8c);
      *(long *)(*param_8 + 8) = auVar25._8_8_;
      *(undefined8 *)*param_8 = auVar25._0_8_;
      auVar35._0_8_ =
           CONCAT44(auVar70._4_4_ * *(float *)(param_1 + 0x84),
                    auVar70._0_4_ * *(float *)(param_1 + 0x80));
      auVar35._8_4_ = auVar70._8_4_ * *(float *)(param_1 + 0x88);
      auVar35._12_4_ = auVar70._12_4_ * *(float *)(param_1 + 0x8c);
      *(long *)(param_8[1] + 8) = auVar35._8_8_;
      *(undefined8 *)param_8[1] = auVar35._0_8_;
      auVar44 = NEON_fmin(auVar25,*(undefined1 (*) [16])(param_3 + 8),4);
      *(long *)(*param_8 + 8) = auVar44._8_8_;
      *(long *)*param_8 = auVar44._0_8_;
      auVar44 = NEON_fmax(auVar35,*(undefined1 (*) [16])(param_3 + 10),4);
      *(long *)(param_8[1] + 8) = auVar44._8_8_;
      *(long *)param_8[1] = auVar44._0_8_;
    }
  }
  else if (param_8 != (undefined1 (*) [16])0x0) {
    auVar50 = param_8[1];
    auVar23._0_4_ = -(uint)(auVar31._0_4_ <= auVar32._0_4_);
    auVar23._4_4_ = -(uint)(auVar31._4_4_ <= auVar32._4_4_);
    auVar23._8_4_ = -(uint)(auVar31._8_4_ <= auVar32._8_4_);
    auVar23._12_4_ = -(uint)(auVar31._12_4_ <= auVar32._12_4_);
    auVar40._0_4_ = -(uint)(auVar44._0_4_ <= auVar33._0_4_);
    auVar40._4_4_ = -(uint)(auVar44._4_4_ <= auVar33._4_4_);
    auVar40._8_4_ = -(uint)(auVar44._8_4_ <= auVar33._8_4_);
    auVar40._12_4_ = -(uint)(auVar44._12_4_ <= auVar33._12_4_);
    auVar31 = NEON_fmin(auVar50,auVar44,4);
    auVar44 = NEON_fmax(*param_8,auVar32,4);
    auVar44 = auVar44 ^ (auVar44 ^ *param_8) & auVar23;
    *(long *)(*param_8 + 8) = auVar44._8_8_;
    *(long *)*param_8 = auVar44._0_8_;
    auVar31 = auVar31 ^ (auVar31 ^ auVar50) & auVar40;
    *(long *)(param_8[1] + 8) = auVar31._8_8_;
    *(long *)param_8[1] = auVar31._0_8_;
  }
  return;
}


