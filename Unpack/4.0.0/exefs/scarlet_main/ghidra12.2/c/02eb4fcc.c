/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb4fcc; name: FUN_02eb4fcc
 */


undefined8 FUN_02eb4fcc(long param_1,long param_2,long param_3,long *param_4)

{
  float *pfVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *puVar22;
  ushort uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  undefined1 (*pauVar30) [16];
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  float fVar38;
  float fVar39;
  float fVar43;
  undefined8 uVar40;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  int iVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  undefined8 *local_a80;
  undefined8 local_a78;
  undefined8 local_a70 [8];
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 auStack_9f0 [4];
  float afStack_9d0 [568];
  int local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ushort local_d0;
  int local_cc;
  long *local_c0;
  undefined1 local_b0 [16];
  ushort local_a0;
  int local_9c;
  int local_90;
  int local_8c;
  ulong local_80;
  ulong uStack_78;
  
  local_a80 = (undefined8 *)0x0;
  local_a78 = 0;
  uStack_78 = (ulong)(uint)(float)*(int *)(param_1 + 0x5c);
  local_80 = (ulong)(uint)(float)*(int *)(param_1 + 0x58);
  FUN_02eb5814(auStack_9f0,param_1,&local_a80,&local_80);
  puVar22 = PTR_PTR_047d1a50;
  uStack_a28 = *(undefined8 *)(PTR_DAT_047d19e0 + 8);
  local_a30 = *(undefined8 *)PTR_DAT_047d19e0;
  uStack_a18 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x18);
  uStack_a20 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x10);
  uStack_a08 = SUB168(*(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x40),8);
  local_a10 = SUB168(*(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x40),0);
  uStack_9f8 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x58);
  uStack_a00 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x50);
  if (local_f0 == 0) {
    return 0;
  }
  fVar14 = *(float *)(param_1 + 0x80);
  fVar15 = *(float *)(param_1 + 0x84);
  fVar16 = *(float *)(param_1 + 0x88);
  fVar17 = *(float *)(param_1 + 0x8c);
  fVar18 = *(float *)(param_2 + 0x20);
  fVar19 = *(float *)(param_2 + 0x24);
  fVar20 = *(float *)(param_2 + 0x28);
  fVar21 = *(float *)(param_2 + 0x2c);
  cVar4 = *(char *)(param_2 + 4);
  lVar3 = param_3 + 0x28;
  pauVar30 = (undefined1 (*) [16])PTR_DAT_047d19e0;
LAB_02eb50d4:
  iVar54 = local_f0;
  lVar28 = (long)local_f0 + -1;
  fVar35 = afStack_9d0[lVar28 * 0xc];
  fVar32 = afStack_9d0[lVar28 * 0xc + 1];
  fVar37 = afStack_9d0[lVar28 * 0xc + 2];
  if (fVar35 == 0.0) {
    if ((int)fVar32 < local_90 && (int)fVar37 < local_8c) {
      (**(code **)(*local_c0 + 0x28))();
      local_d0 = local_a0;
      lVar28 = (long)local_f0 + -1;
      local_cc = local_9c;
      uStack_d8 = local_b0._8_8_;
      local_e0 = local_b0._0_8_;
      if (local_9c != 2) {
        local_f0 = (int)lVar28;
        iVar54 = *(int *)(param_3 + 0x20);
        lVar24 = 0;
        local_a78 = -0x7ffffffc00000000;
        iVar57 = iVar54;
        local_a80 = local_a70;
        do {
          iVar58 = iVar57 + 1;
          if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) <= iVar57) {
            FUN_02e8df28(param_3 + 0x18,puVar22,(long)iVar58);
            iVar57 = *(int *)(param_3 + 0x20);
          }
          *(int *)(param_3 + 0x20) = iVar58;
          iVar58 = (int)lVar24;
          auVar33 = *(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -8) ^
                    (*(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -8) ^
                    *(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -4)) &
                    *(undefined1 (*) [16])(local_a70 + lVar24 * 2 + 8);
          pfVar1 = (float *)(*(long *)(param_3 + 0x18) + (long)iVar57 * 0x10);
          *(long *)(pfVar1 + 2) = auVar33._8_8_;
          *(long *)pfVar1 = auVar33._0_8_;
          if (iVar58 == 3) {
            fVar35 = (float)((ulong)uStack_d8 >> 0x20);
          }
          else {
            if (iVar58 == 2) {
              uVar40 = uStack_d8;
            }
            else {
              if (iVar58 == 1) {
                fVar35 = (float)((ulong)local_e0 >> 0x20);
                goto LAB_02eb5478;
              }
              uVar40 = local_e0;
            }
            fVar35 = (float)uVar40;
          }
LAB_02eb5478:
          fVar32 = fVar14 * fVar18 * auVar33._0_4_;
          fVar35 = fVar15 * fVar19 * fVar35;
          fVar37 = fVar16 * fVar20 * auVar33._8_4_;
          fVar31 = fVar17 * fVar21 * auVar33._12_4_;
          pfVar1[2] = fVar37;
          pfVar1[3] = fVar31;
          *pfVar1 = fVar32;
          pfVar1[1] = fVar35;
          auVar33 = *(undefined1 (*) [16])(param_2 + 0x40);
          auVar42._0_8_ = CONCAT44(auVar33._4_4_ + fVar35,auVar33._0_4_ + fVar32);
          auVar42._8_4_ = auVar33._8_4_ + fVar37;
          auVar42._12_4_ = auVar33._12_4_ + fVar31;
          *(long *)(pfVar1 + 2) = auVar42._8_8_;
          *(undefined8 *)pfVar1 = auVar42._0_8_;
          lVar25 = (long)(int)local_a78;
          if ((int)(local_a78._4_4_ & 0x7fffffff) <= (int)local_a78) {
            FUN_02e9b11c(&local_a80,puVar22,lVar25 + 1);
          }
          uVar5 = local_d0;
          (local_a80 + (long)(int)local_a78 * 2)[1] = *(undefined8 *)(pfVar1 + 2);
          local_a80[(long)(int)local_a78 * 2] = *(undefined8 *)pfVar1;
          local_a78 = CONCAT44(local_a78._4_4_,(int)(lVar25 + 1));
          if (lVar24 == 3) goto LAB_02eb54f0;
          iVar57 = *(int *)(param_3 + 0x20);
          lVar24 = lVar24 + 1;
        } while( true );
      }
    }
    local_f0 = (int)lVar28;
  }
  else {
    fVar31 = afStack_9d0[lVar28 * 0xc + -7];
    fVar39 = afStack_9d0[lVar28 * 0xc + -3];
    fVar34 = fVar31;
    fVar36 = fVar31;
    fVar38 = fVar31;
    fVar43 = fVar39;
    fVar44 = fVar39;
    fVar45 = fVar39;
    if ((int)*(uint *)(local_e8 + 0x50) < (int)fVar35) {
      iVar57 = (int)fVar35 + ~*(uint *)(local_e8 + 0x50);
      plVar29 = (long *)(local_e8 + 0x20);
      lVar24 = *plVar29;
      if ((int)fVar32 < (int)(uint)*(ushort *)((long)plVar29 + (long)iVar57 * 0x18 + lVar24 + 0x10))
      {
        uVar5 = *(ushort *)((long)plVar29 + (long)iVar57 * 0x18 + lVar24 + 0x12);
        if ((int)fVar37 < (int)(uint)uVar5) {
          plVar29 = (long *)((long)plVar29 + (long)iVar57 * 0x18 + lVar24);
          uVar6 = (int)fVar37 + (int)fVar32 * (uint)uVar5;
          fVar45 = *(float *)(local_e8 + 0x40);
          puVar7 = (ushort *)
                   ((long)plVar29 +
                   (-(ulong)((uVar6 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                   (ulong)(uVar6 * 4) << 2) + *plVar29);
          auVar33._2_2_ = 0;
          auVar33._0_2_ = *puVar7;
          auVar33._4_2_ = puVar7[1];
          auVar33._6_2_ = 0;
          auVar33._8_2_ = puVar7[2];
          auVar33._10_2_ = 0;
          auVar33._12_2_ = puVar7[3];
          auVar33._14_2_ = 0;
          auVar41._2_2_ = 0;
          auVar41._0_2_ = puVar7[4];
          auVar41._4_2_ = puVar7[5];
          auVar41._6_2_ = 0;
          auVar41._8_2_ = puVar7[6];
          auVar41._10_2_ = 0;
          auVar41._12_2_ = puVar7[7];
          auVar41._14_2_ = 0;
          auVar33 = NEON_ucvtf(auVar33,4);
          auVar42 = NEON_ucvtf(auVar41,4);
          fVar31 = *(float *)(local_e8 + 0x30) + auVar33._0_4_ * fVar45;
          fVar34 = *(float *)(local_e8 + 0x34) + auVar33._4_4_ * fVar45;
          fVar36 = *(float *)(local_e8 + 0x38) + auVar33._8_4_ * fVar45;
          fVar38 = *(float *)(local_e8 + 0x3c) + auVar33._12_4_ * fVar45;
          fVar39 = *(float *)(local_e8 + 0x30) + auVar42._0_4_ * fVar45;
          fVar43 = *(float *)(local_e8 + 0x34) + auVar42._4_4_ * fVar45;
          fVar44 = *(float *)(local_e8 + 0x38) + auVar42._8_4_ * fVar45;
          fVar45 = *(float *)(local_e8 + 0x3c) + auVar42._12_4_ * fVar45;
        }
      }
    }
    local_f0 = (int)lVar28;
    auVar33 = *(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -4);
    auVar42 = *(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -8);
    fVar35 = (float)((int)fVar35 + -1);
    fVar50 = (auVar42._0_4_ + auVar33._0_4_) * 0.5;
    fVar51 = (auVar42._4_4_ + auVar33._4_4_) * 0.5;
    fVar52 = (auVar42._8_4_ + auVar33._8_4_) * 0.5;
    fVar53 = (auVar42._12_4_ + auVar33._12_4_) * 0.5;
    auVar8._4_4_ = fVar51;
    auVar8._0_4_ = fVar50;
    auVar8._8_4_ = fVar52;
    auVar8._12_4_ = fVar53;
    auVar48 = auVar42 ^ (auVar42 ^ auVar8) & pauVar30[1];
    auVar46._4_4_ = fVar51;
    auVar46._0_4_ = fVar50;
    auVar46._8_4_ = fVar52;
    auVar46._12_4_ = fVar53;
    auVar55 = auVar42 ^ (auVar42 ^ auVar46) & *pauVar30;
    auVar9._4_4_ = fVar51;
    auVar9._0_4_ = fVar50;
    auVar9._8_4_ = fVar52;
    auVar9._12_4_ = fVar53;
    auVar56._4_4_ = fVar51;
    auVar56._0_4_ = fVar50;
    auVar56._8_4_ = fVar52;
    auVar56._12_4_ = fVar53;
    auVar56 = auVar56 ^ (auVar9 ^ auVar33) & *pauVar30;
    auVar10._4_4_ = fVar51;
    auVar10._0_4_ = fVar50;
    auVar10._8_4_ = fVar52;
    auVar10._12_4_ = fVar53;
    auVar49._4_4_ = fVar51;
    auVar49._0_4_ = fVar50;
    auVar49._8_4_ = fVar52;
    auVar49._12_4_ = fVar53;
    auVar49 = auVar49 ^ (auVar10 ^ auVar33) & pauVar30[1];
    iVar60 = -(uint)(auVar55._0_4_ <= 3.40282e+38);
    iVar61 = -(uint)(fVar31 <= 3.40282e+38);
    iVar62 = -(uint)(auVar55._8_4_ <= 3.40282e+38);
    iVar57 = -(uint)(-3.40282e+38 <= auVar56._0_4_);
    iVar58 = -(uint)(-3.40282e+38 <= fVar39);
    iVar59 = -(uint)(-3.40282e+38 <= auVar56._8_4_);
    auVar8 = pauVar30[4];
    auVar41 = pauVar30[4];
    auVar11._4_4_ = fVar51;
    auVar11._0_4_ = fVar50;
    auVar11._8_4_ = fVar52;
    auVar11._12_4_ = fVar53;
    auVar46 = auVar42 ^ (auVar42 ^ auVar11) & pauVar30[5];
    auVar12._4_4_ = fVar51;
    auVar12._0_4_ = fVar50;
    auVar12._8_4_ = fVar52;
    auVar12._12_4_ = fVar53;
    auVar47._4_4_ = fVar51;
    auVar47._0_4_ = fVar50;
    auVar47._8_4_ = fVar52;
    auVar47._12_4_ = fVar53;
    auVar47 = auVar47 ^ (auVar12 ^ auVar33) & pauVar30[5];
    if (CONCAT13((byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                 (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                 (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                 CONCAT12((byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                          (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                          (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar59 >> 0x10),
                          CONCAT11((byte)((uint)iVar61 >> 8) & (byte)((uint)iVar58 >> 8) &
                                   (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar57 >> 8) &
                                   (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar59 >> 8),
                                   (byte)iVar61 & (byte)iVar58 & (byte)iVar60 & (byte)iVar57 &
                                   (byte)iVar62 & (byte)iVar59))) != 0) {
      local_f0 = iVar54;
      afStack_9d0[lVar28 * 0xc] = fVar35;
      afStack_9d0[lVar28 * 0xc + 1] = (float)((int)fVar32 << 1);
      afStack_9d0[lVar28 * 0xc + 2] = (float)((int)fVar37 << 1);
      *(long *)(afStack_9d0 + lVar28 * 0xc + -6) = auVar55._8_8_;
      *(ulong *)*(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -8) =
           CONCAT44(fVar31,auVar55._0_4_);
      *(long *)(afStack_9d0 + lVar28 * 0xc + -2) = auVar56._8_8_;
      *(ulong *)*(undefined1 (*) [16])(afStack_9d0 + lVar28 * 0xc + -4) =
           CONCAT44(fVar39,auVar56._0_4_);
    }
    auVar55._4_4_ = fVar51;
    auVar55._0_4_ = fVar50;
    auVar55._8_4_ = fVar52;
    auVar55._12_4_ = fVar53;
    auVar42 = auVar42 ^ (auVar42 ^ auVar55) & auVar41;
    auVar13._4_4_ = fVar51;
    auVar13._0_4_ = fVar50;
    auVar13._8_4_ = fVar52;
    auVar13._12_4_ = fVar53;
    auVar33 = auVar33 ^ (auVar33 ^ auVar13) & ~auVar8;
    fVar31 = (float)((int)fVar32 << 1 | 1);
    iVar54 = -(uint)(-3.40282e+38 <= auVar49._0_4_);
    iVar57 = -(uint)(-3.40282e+38 <= fVar43);
    iVar58 = -(uint)(-3.40282e+38 <= auVar49._8_4_);
    iVar59 = -(uint)(auVar48._0_4_ <= 3.40282e+38);
    iVar60 = -(uint)(fVar34 <= 3.40282e+38);
    iVar61 = -(uint)(auVar48._8_4_ <= 3.40282e+38);
    if (CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar60 >> 0x18) &
                 (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                 (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                 CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar60 >> 0x10) &
                          (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                          (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar61 >> 0x10),
                          CONCAT11((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar60 >> 8) &
                                   (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar59 >> 8) &
                                   (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar61 >> 8),
                                   (byte)iVar57 & (byte)iVar60 & (byte)iVar54 & (byte)iVar59 &
                                   (byte)iVar58 & (byte)iVar61))) != 0) {
      lVar28 = (long)local_f0;
      local_f0 = local_f0 + 1;
      afStack_9d0[lVar28 * 0xc] = fVar35;
      afStack_9d0[lVar28 * 0xc + 1] = fVar31;
      afStack_9d0[lVar28 * 0xc + 2] = (float)((int)fVar37 << 1);
      *(long *)(afStack_9d0 + lVar28 * 0xc + -6) = auVar48._8_8_;
      *(ulong *)(afStack_9d0 + lVar28 * 0xc + -8) = CONCAT44(fVar34,auVar48._0_4_);
      *(long *)(afStack_9d0 + lVar28 * 0xc + -2) = auVar49._8_8_;
      *(ulong *)(afStack_9d0 + lVar28 * 0xc + -4) = CONCAT44(fVar43,auVar49._0_4_);
    }
    iVar54 = -(uint)(-3.40282e+38 <= auVar47._0_4_);
    iVar57 = -(uint)(-3.40282e+38 <= fVar44);
    iVar58 = -(uint)(-3.40282e+38 <= auVar47._8_4_);
    fVar37 = (float)((int)fVar37 << 1 | 1);
    iVar59 = -(uint)(auVar46._0_4_ <= 3.40282e+38);
    iVar60 = -(uint)(fVar36 <= 3.40282e+38);
    iVar61 = -(uint)(auVar46._8_4_ <= 3.40282e+38);
    if (CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar60 >> 0x18) &
                 (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                 (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                 CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar60 >> 0x10) &
                          (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                          (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar61 >> 0x10),
                          CONCAT11((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar60 >> 8) &
                                   (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar59 >> 8) &
                                   (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar61 >> 8),
                                   (byte)iVar57 & (byte)iVar60 & (byte)iVar54 & (byte)iVar59 &
                                   (byte)iVar58 & (byte)iVar61))) != 0) {
      lVar28 = (long)local_f0;
      local_f0 = local_f0 + 1;
      afStack_9d0[lVar28 * 0xc] = fVar35;
      afStack_9d0[lVar28 * 0xc + 1] = fVar31;
      afStack_9d0[lVar28 * 0xc + 2] = fVar37;
      *(long *)(afStack_9d0 + lVar28 * 0xc + -6) = auVar46._8_8_;
      *(ulong *)(afStack_9d0 + lVar28 * 0xc + -8) = CONCAT44(fVar36,auVar46._0_4_);
      *(long *)(afStack_9d0 + lVar28 * 0xc + -2) = auVar47._8_8_;
      *(ulong *)(afStack_9d0 + lVar28 * 0xc + -4) = CONCAT44(fVar44,auVar47._0_4_);
    }
    iVar54 = -(uint)(-3.40282e+38 <= auVar33._0_4_);
    iVar57 = -(uint)(-3.40282e+38 <= fVar45);
    iVar58 = -(uint)(-3.40282e+38 <= auVar33._8_4_);
    iVar59 = -(uint)(auVar42._0_4_ <= 3.40282e+38);
    iVar60 = -(uint)(fVar38 <= 3.40282e+38);
    iVar61 = -(uint)(auVar42._8_4_ <= 3.40282e+38);
    if (CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar60 >> 0x18) &
                 (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar59 >> 0x18) &
                 (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                 CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar60 >> 0x10) &
                          (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar59 >> 0x10) &
                          (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar61 >> 0x10),
                          CONCAT11((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar60 >> 8) &
                                   (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar59 >> 8) &
                                   (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar61 >> 8),
                                   (byte)iVar57 & (byte)iVar60 & (byte)iVar54 & (byte)iVar59 &
                                   (byte)iVar58 & (byte)iVar61))) != 0) {
      lVar28 = (long)local_f0;
      local_f0 = local_f0 + 1;
      afStack_9d0[lVar28 * 0xc] = fVar35;
      afStack_9d0[lVar28 * 0xc + 1] = (float)((int)fVar32 << 1);
      afStack_9d0[lVar28 * 0xc + 2] = fVar37;
      *(long *)(afStack_9d0 + lVar28 * 0xc + -6) = auVar42._8_8_;
      *(ulong *)(afStack_9d0 + lVar28 * 0xc + -8) = CONCAT44(fVar38,auVar42._0_4_);
      *(long *)(afStack_9d0 + lVar28 * 0xc + -2) = auVar33._8_8_;
      *(ulong *)(afStack_9d0 + lVar28 * 0xc + -4) = CONCAT44(fVar45,auVar33._0_4_);
    }
  }
  goto joined_r0x02eb5354;
LAB_02eb54f0:
  if (local_cc == 1) {
    iVar57 = *(int *)(param_3 + 0x30);
    lVar28 = (long)iVar57;
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) <= iVar57) {
      FUN_02ebb440(lVar3,puVar22,lVar28 + 1);
      iVar57 = *(int *)(param_3 + 0x30);
    }
    uVar23 = local_d0;
    piVar2 = (int *)(*(long *)(param_3 + 0x28) + (long)iVar57 * 0x10);
    *(int *)(param_3 + 0x30) = (int)(lVar28 + 1);
    *piVar2 = iVar54;
    piVar2[1] = iVar54 + 3;
    piVar2[2] = iVar54 + 1;
    piVar2[3] = (uint)uVar5;
    pauVar30 = (undefined1 (*) [16])PTR_DAT_047d19e0;
    iVar57 = *(int *)(param_3 + 0x30);
    lVar28 = (long)iVar57;
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) <= iVar57) {
      FUN_02ebb440(lVar3,puVar22,lVar28 + 1);
      iVar57 = *(int *)(param_3 + 0x30);
    }
    piVar2 = (int *)(*(long *)(param_3 + 0x28) + (long)iVar57 * 0x10);
    *(int *)(param_3 + 0x30) = (int)(lVar28 + 1);
    *piVar2 = iVar54;
    piVar2[1] = iVar54 + 2;
    piVar2[2] = iVar54 + 3;
    piVar2[3] = (uint)uVar23;
    if (cVar4 == '\0') goto LAB_02eb57b4;
    lVar24 = param_4[1];
    lVar28 = (long)(int)lVar24 + 10;
    iVar54 = (int)lVar28;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar54) {
      FUN_02e8df28(param_4,puVar22,lVar28);
    }
    *(int *)(param_4 + 1) = iVar54;
    puVar26 = (undefined8 *)(*param_4 + (long)(int)lVar24 * 0x10);
    uVar40 = *local_a80;
    puVar26[1] = local_a80[1];
    *puVar26 = uVar40;
    uVar40 = local_a80[6];
    puVar26[3] = local_a80[7];
    puVar26[2] = uVar40;
    uVar40 = local_a80[6];
    puVar26[5] = local_a80[7];
    puVar26[4] = uVar40;
    uVar40 = local_a80[2];
    puVar26[7] = local_a80[3];
    puVar26[6] = uVar40;
    uVar40 = local_a80[2];
    puVar26[9] = local_a80[3];
    puVar26[8] = uVar40;
    uVar40 = *local_a80;
    puVar26[0xb] = local_a80[1];
    puVar26[10] = uVar40;
    uVar40 = *local_a80;
    puVar26[0xd] = local_a80[1];
    puVar26[0xc] = uVar40;
    uVar40 = local_a80[4];
    puVar26[0xf] = local_a80[5];
    puVar26[0xe] = uVar40;
    uVar40 = local_a80[4];
    puVar26[0x11] = local_a80[5];
    puVar26[0x10] = uVar40;
    auVar33 = *(undefined1 (*) [16])(local_a80 + 6);
  }
  else {
    iVar57 = *(int *)(param_3 + 0x30);
    lVar28 = (long)iVar57;
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) <= iVar57) {
      FUN_02ebb440(lVar3,puVar22,lVar28 + 1);
      iVar57 = *(int *)(param_3 + 0x30);
    }
    uVar23 = local_d0;
    piVar2 = (int *)(*(long *)(param_3 + 0x28) + (long)iVar57 * 0x10);
    *(int *)(param_3 + 0x30) = (int)(lVar28 + 1);
    *piVar2 = iVar54;
    piVar2[1] = iVar54 + 2;
    piVar2[2] = iVar54 + 1;
    piVar2[3] = (uint)uVar5;
    pauVar30 = (undefined1 (*) [16])PTR_DAT_047d19e0;
    iVar57 = *(int *)(param_3 + 0x30);
    lVar28 = (long)iVar57;
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) <= iVar57) {
      FUN_02ebb440(lVar3,puVar22,lVar28 + 1);
      iVar57 = *(int *)(param_3 + 0x30);
    }
    piVar2 = (int *)(*(long *)(param_3 + 0x28) + (long)iVar57 * 0x10);
    *(int *)(param_3 + 0x30) = (int)(lVar28 + 1);
    *piVar2 = iVar54 + 1;
    piVar2[1] = iVar54 + 2;
    piVar2[2] = iVar54 + 3;
    piVar2[3] = (uint)uVar23;
    if (cVar4 == '\0') goto LAB_02eb57b4;
    lVar24 = param_4[1];
    lVar28 = (long)(int)lVar24 + 10;
    iVar54 = (int)lVar28;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar54) {
      FUN_02e8df28(param_4,puVar22,lVar28);
    }
    *(int *)(param_4 + 1) = iVar54;
    puVar26 = (undefined8 *)(*param_4 + (long)(int)lVar24 * 0x10);
    uVar40 = *local_a80;
    puVar26[1] = local_a80[1];
    *puVar26 = uVar40;
    uVar40 = local_a80[4];
    puVar26[3] = local_a80[5];
    puVar26[2] = uVar40;
    uVar40 = local_a80[4];
    puVar26[5] = local_a80[5];
    puVar26[4] = uVar40;
    uVar40 = local_a80[2];
    puVar26[7] = local_a80[3];
    puVar26[6] = uVar40;
    uVar40 = local_a80[2];
    puVar26[9] = local_a80[3];
    puVar26[8] = uVar40;
    uVar40 = *local_a80;
    puVar26[0xb] = local_a80[1];
    puVar26[10] = uVar40;
    uVar40 = local_a80[4];
    puVar26[0xd] = local_a80[5];
    puVar26[0xc] = uVar40;
    uVar40 = local_a80[6];
    puVar26[0xf] = local_a80[7];
    puVar26[0xe] = uVar40;
    uVar40 = local_a80[6];
    puVar26[0x11] = local_a80[7];
    puVar26[0x10] = uVar40;
    auVar33 = *(undefined1 (*) [16])(local_a80 + 2);
  }
  puVar26[0x13] = auVar33._8_8_;
  puVar26[0x12] = auVar33._0_8_;
LAB_02eb57b4:
  lVar28 = local_a78;
  uVar27 = (ulong)local_a78._4_4_;
  local_a78 = (ulong)local_a78._4_4_ << 0x20;
  if ((-1 < lVar28) && (local_a80 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar22 + 0x20))(puVar22,local_a80,uVar27 << 4);
  }
joined_r0x02eb5354:
  if (local_f0 == 0) {
    return 0;
  }
  goto LAB_02eb50d4;
}


