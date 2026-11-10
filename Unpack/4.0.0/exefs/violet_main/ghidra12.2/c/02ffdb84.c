/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ffdb84; name: FUN_02ffdb84
 */


void FUN_02ffdb84(float param_1,long param_2,long param_3,long *param_4)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  float *pfVar26;
  float *pfVar27;
  ulong uVar28;
  int iVar34;
  int iVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar36;
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar52;
  float fVar54;
  float fVar61;
  float fVar64;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar53;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  float fVar65;
  undefined1 auVar60 [16];
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined8 uVar73;
  undefined1 auVar74 [16];
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110 [4];
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_e0;
  float fStack_dc;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar19 = *(uint *)(param_4 + 1);
  if (*(uint *)(param_4 + 1) != uVar3) {
    *(uint *)(param_4 + 1) = uVar3;
    uVar19 = uVar3;
  }
  if (0 < (int)uVar3) {
    lVar25 = 0;
    lVar23 = 0;
    do {
      pauVar20 = (undefined1 (*) [16])(*(long *)(param_2 + 0x18) + lVar23);
      auVar59 = pauVar20[1];
      auVar69._0_12_ = auVar59._0_12_;
      auVar69._12_4_ = *(float *)pauVar20[2] - *(float *)(param_2 + 0x140);
      pfVar2 = (float *)(*param_4 + lVar25);
      *(long *)(pfVar2 + 2) = auVar69._8_8_;
      *(long *)pfVar2 = auVar59._0_8_;
      pfVar2[0xc] = *(float *)(param_2 + 0x124);
      fVar52 = *(float *)(param_2 + 0x120);
      pfVar2[6] = 0.0;
      pfVar2[7] = 0.0;
      pfVar2[10] = 0.0;
      pfVar2[0xb] = 0.0;
      pfVar2[0xf] = fVar52;
      pfVar2[0x10] = 0.0;
      pfVar2[0xd] = 0.0;
      pfVar2[0xe] = 0.0;
      pfVar26 = pfVar2 + 4;
      pfVar26[0] = 0.0;
      pfVar26[1] = 0.0;
      pfVar27 = pfVar2 + 8;
      pfVar27[0] = 0.0;
      pfVar27[1] = 0.0;
      iVar12 = (**(code **)(**(long **)(param_2 + 0x48) + 0x78))
                         (*(long **)(param_2 + 0x48),*(undefined8 *)(pauVar20[2] + 8));
      if (iVar12 != 0) {
        lVar13 = (**(code **)(**(long **)(param_2 + 0x48) + 0x80))
                           (*(long **)(param_2 + 0x48),*(undefined8 *)(pauVar20[2] + 8));
        pauVar14 = (undefined1 (*) [16])
                   (**(code **)(**(long **)(param_2 + 0x48) + 0x100))
                             (*(long **)(param_2 + 0x48),*(undefined4 *)(lVar13 + 0x80));
        uVar67 = NEON_fmax(CONCAT44(*(undefined4 *)(param_2 + 0x118),
                                    *(undefined4 *)(param_2 + 0x118)),0x3dcccccd3dcccccd,4);
        auVar59 = *(undefined1 (*) [16])(param_2 + 0x130);
        auVar55 = *pauVar20;
        auVar69 = pauVar20[1];
        fVar51 = auVar69._0_4_ * auVar59._0_4_;
        fVar61 = auVar69._4_4_ * auVar59._4_4_;
        fVar64 = auVar69._8_4_ * auVar59._8_4_;
        fVar52 = fVar51 + fVar61 + fVar64;
        local_120 = auVar55._0_4_;
        fStack_11c = auVar55._4_4_;
        fStack_118 = auVar55._8_4_;
        if ((bool)(~((float)uVar67 < fVar52) & 1)) {
          fStack_114 = auVar55._12_4_;
        }
        else {
          auVar55 = *(undefined1 (*) [16])(param_2 + 0x90);
          fVar54 = auVar69._0_4_ * (local_120 - auVar55._0_4_);
          fVar63 = auVar69._4_4_ * (fStack_11c - auVar55._4_4_);
          fVar65 = auVar69._8_4_ * (fStack_118 - auVar55._8_4_);
          fVar52 = (fVar54 + fVar63 + fVar65) / fVar52;
          fVar51 = (fVar54 + fVar63 + fVar65) / (fVar51 + fVar61 + fVar64);
          local_120 = auVar55._0_4_ + auVar59._0_4_ * fVar52;
          fStack_11c = auVar55._4_4_ + auVar59._4_4_ * fVar51;
          fStack_118 = auVar55._8_4_ + auVar59._8_4_ * fVar52;
          fStack_114 = auVar55._12_4_ + auVar59._12_4_ * fVar51;
        }
        lVar15 = (**(code **)(**(long **)(param_2 + 0x48) + 0x30))();
        plVar16 = *(long **)(*(long *)(lVar15 + 0x48) + (ulong)*(ushort *)(lVar13 + 0x8a) * 0x50 + 8
                            );
        if (plVar16 == (long *)0x0) {
          uVar73 = CONCAT44(fStack_114,fStack_118);
          uVar67 = CONCAT44(fStack_11c,local_120);
        }
        else {
          (**(code **)(*plVar16 + 0x20))(plVar16,pauVar20,pauVar20 + 1,lVar13,pfVar26,pfVar27);
          fVar52 = *(float *)(param_3 + 8);
          uVar67 = CONCAT44(fStack_11c + pfVar2[5] * fVar52,local_120 + pfVar2[4] * fVar52);
          uVar73 = CONCAT44(fStack_114 + pfVar2[7] * fVar52,fStack_118 + pfVar2[6] * fVar52);
        }
        lVar15 = *(long *)(lVar13 + 0x78);
        if (*(short *)(lVar15 + 0x1a) < 0) {
          local_e0 = *(undefined4 *)pauVar20[3];
          local_110[0] = (float)((uint)local_110[0] & 0xffff0000);
          local_f0 = 0.0;
          fStack_ec = 0.0;
          fStack_e8 = 0.0;
          fStack_e4 = 0.0;
          local_100 = 0.0;
          fStack_fc = 0.0;
          fStack_f8 = 0.0;
          fStack_f4 = 0.0;
          fStack_118 = (float)uVar73;
          fStack_114 = (float)((ulong)uVar73 >> 0x20);
          local_120 = (float)uVar67;
          fStack_11c = (float)((ulong)uVar67 >> 0x20);
          lStack_d8 = lVar13;
          local_d0 = uVar67;
          uStack_c8 = uVar73;
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar15 + 0x18) * 0x200 + 0x40))
                    (lVar15,&local_e0,local_110);
          pfVar2[6] = pfVar2[6] + fStack_f8;
          pfVar2[7] = pfVar2[7] + fStack_f4;
          pfVar2[4] = pfVar2[4] + local_100;
          pfVar2[5] = pfVar2[5] + fStack_fc;
          pfVar2[10] = pfVar2[10] + fStack_e8;
          pfVar2[0xb] = pfVar2[0xb] + fStack_e4;
          pfVar2[8] = pfVar2[8] + local_f0;
          pfVar2[9] = pfVar2[9] + fStack_ec;
          auVar59._0_4_ = local_100 * *pfVar2;
          auVar59._4_4_ = fStack_fc * pfVar2[1];
          auVar59._8_4_ = fStack_f8 * pfVar2[2];
          auVar59._12_4_ = fStack_f4 * pfVar2[3];
          auVar69 = NEON_ext(auVar59,auVar59,8,1);
          fVar52 = *(float *)(param_3 + 8);
          pfVar2[2] = pfVar2[2];
          pfVar2[3] = pfVar2[3] + (auVar59._0_4_ + auVar59._4_4_ + auVar69._0_4_) * fVar52;
          *pfVar2 = *pfVar2;
          pfVar2[1] = pfVar2[1];
          fVar52 = *(float *)(param_3 + 8);
          uVar67 = CONCAT44(fStack_11c + fStack_fc * fVar52,local_120 + local_100 * fVar52);
          uVar73 = CONCAT44(fStack_114 + fStack_f4 * fVar52,fStack_118 + fStack_f8 * fVar52);
        }
        if ((*(uint *)(lVar13 + 0x54) >> 1 & 1) == 0) {
          fVar54 = pfVar2[4];
          fVar63 = pfVar2[5];
          fVar65 = pfVar2[6];
          fVar50 = pfVar2[7];
        }
        else {
          local_120 = (float)uVar67;
          fStack_11c = (float)((ulong)uVar67 >> 0x20);
          fStack_118 = (float)uVar73;
          fStack_114 = (float)((ulong)uVar73 >> 0x20);
          if ((*(uint *)(lVar13 + 0x54) >> 2 & 1) == 0) {
            pauVar1 = (undefined1 (*) [12])(pauVar14[2] + 8);
            fVar61 = (float)*(undefined8 *)pauVar14[3];
            fVar64 = (float)((ulong)*(undefined8 *)pauVar14[3] >> 0x20);
            uVar36 = *(undefined8 *)*pauVar1;
            fVar52 = (float)uVar36;
            fVar51 = (float)((ulong)uVar36 >> 0x20);
            uVar67 = CONCAT44(fVar64,fVar64);
            uVar73 = *(undefined8 *)(pauVar14[3] + 8);
            iVar12 = -(uint)(ABS(fVar52) <= 1.1920929e-07);
            iVar34 = -(uint)(ABS(fVar51) <= 1.1920929e-07);
            iVar35 = -(uint)(ABS(fVar61) <= 1.1920929e-07);
            auVar6._12_4_ = fVar64;
            auVar6._0_12_ = *pauVar1;
            auVar7._12_4_ = fVar64;
            auVar7._0_12_ = *pauVar1;
            auVar59 = NEON_ext(auVar6,auVar7,4,1);
            auVar74._0_8_ = auVar59._0_8_;
            if (CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar12 >> 0x18) &
                         (byte)((uint)iVar35 >> 0x18),
                         CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar12 >> 0x10) &
                                  (byte)((uint)iVar35 >> 0x10),
                                  CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar12 >> 8) &
                                           (byte)((uint)iVar35 >> 8),
                                           (byte)iVar34 & (byte)iVar12 & (byte)iVar35))) == 0) {
              auVar69 = *pauVar14;
              auVar55 = NEON_ext(auVar69,auVar69,8,1);
              fVar54 = auVar69._0_4_;
              fVar63 = auVar69._4_4_;
              fVar65 = auVar69._8_4_;
              fVar50 = auVar69._12_4_;
              fVar66 = auVar55._4_4_ * auVar55._4_4_;
              fVar68 = fVar52 * fVar54 + fVar51 * fVar63 + fVar61 * fVar65;
              fVar72 = fVar52 * fVar54 + fVar51 * fVar63 + fVar61 * fVar65;
              uVar67 = NEON_ext(auVar69._0_8_,auVar55._0_8_,4,1);
              fVar62 = fVar66 + -0.5;
              fVar66 = fVar66 + -0.5;
              local_170 = auVar59._0_4_;
              fStack_16c = auVar59._4_4_;
              auVar56._0_4_ = local_170 * fVar54 - fVar52 * (float)uVar67;
              auVar56._4_4_ = fStack_16c * fVar63 - fVar51 * (float)((ulong)uVar67 >> 0x20);
              auVar56._8_4_ = fVar52 * fVar65 - fVar61 * fVar54;
              auVar56._12_4_ = fVar51 * fVar50 - fVar64 * fVar63;
              auVar59 = NEON_ext(auVar56,auVar56,4,1);
              fVar53 = *(float *)(param_3 + 0xc);
              auVar70 = ZEXT816(0);
              fVar54 = fVar52 * fVar62 + fVar54 * fVar68 + auVar59._0_4_ * fVar50;
              fVar63 = fVar51 * fVar66 + fVar63 * fVar72 + auVar59._4_4_ * fVar50;
              fVar65 = fVar61 * fVar62 + fVar65 * fVar68 + auVar56._0_4_ * fVar50;
              fVar50 = fVar64 * fVar66 + fVar50 * fVar72 + fVar50 * 0.0;
              fVar54 = fVar54 + fVar54;
              fVar63 = fVar63 + fVar63;
              fVar65 = fVar65 + fVar65;
              fVar68 = fVar54 * fVar54 + fVar63 * fVar63 + fVar65 * fVar65;
              fVar62 = 0.0;
              fVar66 = 0.0;
              if (fVar68 != 0.0) {
                fVar62 = SQRT(fVar68);
                fVar66 = SQRT(fVar54 * fVar54 + fVar63 * fVar63 + fVar65 * fVar65);
                auVar70._0_4_ = fVar54 / fVar62;
                auVar70._4_4_ = fVar63 / fVar66;
                auVar70._8_4_ = fVar65 / fVar62;
                auVar70._12_4_ = (fVar50 + fVar50) / fVar66;
              }
              local_c0 = CONCAT44(*(float *)(param_3 + 8) * fVar66 * 0.5,
                                  *(float *)(param_3 + 8) * fVar62 * 0.5);
              uStack_b8 = local_c0;
              FUN_01170160(&local_c0,local_110,&local_e0);
              local_190 = auVar70._0_4_;
              fStack_18c = auVar70._4_4_;
              fStack_188 = auVar70._8_4_;
              fStack_184 = auVar70._12_4_;
              auVar37._0_4_ = local_190 * local_110[0];
              auVar37._4_4_ = fStack_18c * local_110[0];
              auVar37._8_4_ = fStack_188 * local_110[0];
              auVar39._12_4_ = fStack_184 * local_110[0];
              auVar39._0_12_ = auVar37;
              auVar59 = NEON_ext(auVar39,auVar39,4,1);
              auVar40._12_4_ = fStack_dc;
              auVar40._0_12_ = auVar37;
              auVar69 = NEON_ext(auVar40,auVar40,8,1);
              fVar50 = auVar69._4_4_ * auVar69._4_4_;
              auVar57._0_4_ = local_120 - (float)*(double *)pauVar14[1];
              auVar57._4_4_ = fStack_11c - (float)*(double *)(pauVar14[1] + 8);
              auVar57._8_4_ = fStack_118 - (float)*(double *)pauVar14[2];
              auVar57._12_4_ = fStack_114 - 0.0;
              fVar65 = fVar50 + -0.5;
              fVar50 = fVar50 + -0.5;
              fVar62 = auVar37._0_4_ * auVar57._0_4_ + auVar37._4_4_ * auVar57._4_4_ +
                       auVar37._8_4_ * auVar57._8_4_;
              fVar66 = auVar37._0_4_ * auVar57._0_4_ + auVar37._4_4_ * auVar57._4_4_ +
                       auVar37._8_4_ * auVar57._8_4_;
              auVar69 = NEON_ext(auVar57,auVar57,4,1);
              auVar41._0_4_ = auVar37._0_4_ * auVar69._0_4_ - auVar59._0_4_ * auVar57._0_4_;
              auVar41._4_4_ = auVar37._4_4_ * auVar69._4_4_ - auVar59._4_4_ * auVar57._4_4_;
              auVar41._8_4_ = auVar37._8_4_ * auVar57._0_4_ - auVar37._0_4_ * auVar57._8_4_;
              auVar41._12_4_ = fStack_dc * auVar57._4_4_ - auVar37._4_4_ * auVar57._12_4_;
              auVar59 = NEON_ext(auVar41,auVar41,4,1);
              auVar74._8_4_ = fVar52;
              auVar74._12_4_ = fVar51;
              fVar54 = fVar65 * auVar57._0_4_ + auVar37._0_4_ * fVar62 + auVar59._0_4_ * fStack_dc;
              fVar63 = fVar50 * auVar57._4_4_ + auVar37._4_4_ * fVar66 + auVar59._4_4_ * fStack_dc;
              fVar65 = fVar65 * auVar57._8_4_ + auVar37._8_4_ * fVar62 + auVar41._0_4_ * fStack_dc;
              fVar50 = fVar50 * auVar57._12_4_ + fStack_dc * fVar66 + fStack_dc * 0.0;
              uVar73 = CONCAT44((float)((ulong)uVar73 >> 0x20) +
                                ((fVar63 + fVar63) - auVar57._4_4_) * fVar53,
                                (float)uVar73 + ((fVar54 + fVar54) - auVar57._0_4_) * fVar53);
              uVar67 = CONCAT44(fVar64 + ((fVar50 + fVar50) - auVar57._12_4_) * fVar53,
                                fVar64 + ((fVar65 + fVar65) - auVar57._8_4_) * fVar53);
            }
            else {
              auVar74._8_8_ = uVar36;
            }
            auVar59 = *pauVar14;
            auVar69 = NEON_ext(auVar59,auVar59,8,1);
            fVar62 = auVar69._4_4_ * auVar69._4_4_;
            fVar54 = auVar59._0_4_;
            fVar63 = auVar59._4_4_;
            fVar65 = auVar59._8_4_;
            fVar50 = auVar59._12_4_;
            fVar66 = fVar52 * fVar54 + fVar51 * fVar63 + fVar61 * fVar65;
            fVar68 = fVar52 * fVar54 + fVar51 * fVar63 + fVar61 * fVar65;
            fVar53 = fVar62 + -0.5;
            fVar62 = fVar62 + -0.5;
            uVar36 = NEON_ext(auVar59._0_8_,auVar69._0_8_,4,1);
            auVar42._0_4_ = fVar52 * (float)uVar36 - auVar74._0_4_ * fVar54;
            auVar42._4_4_ = fVar51 * (float)((ulong)uVar36 >> 0x20) - auVar74._4_4_ * fVar63;
            auVar42._8_4_ = fVar61 * fVar54 - auVar74._8_4_ * fVar65;
            auVar42._12_4_ = fVar64 * fVar63 - auVar74._12_4_ * fVar50;
            auVar59 = NEON_ext(auVar42,auVar42,4,1);
            fVar52 = fVar52 * fVar53 + fVar54 * fVar66 + auVar59._0_4_ * fVar50;
            fVar51 = fVar51 * fVar62 + fVar63 * fVar68 + auVar59._4_4_ * fVar50;
            fVar61 = fVar61 * fVar53 + fVar65 * fVar66 + auVar42._0_4_ * fVar50;
            fVar64 = fVar64 * fVar62 + fVar50 * fVar68 + fVar50 * 0.0;
          }
          else {
            uVar67 = *(undefined8 *)(pauVar14[6] + 8);
            uVar73 = *(undefined8 *)pauVar14[6];
            auVar59 = pauVar14[7];
            fVar52 = auVar59._0_4_;
            fVar51 = auVar59._4_4_;
            fVar61 = auVar59._8_4_;
            iVar12 = -(uint)(ABS(fVar52) <= 1.1920929e-07);
            iVar34 = -(uint)(ABS(fVar51) <= 1.1920929e-07);
            iVar35 = -(uint)(ABS(fVar61) <= 1.1920929e-07);
            if (CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar12 >> 0x18) &
                         (byte)((uint)iVar35 >> 0x18),
                         CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar12 >> 0x10) &
                                  (byte)((uint)iVar35 >> 0x10),
                                  CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar12 >> 8) &
                                           (byte)((uint)iVar35 >> 8),
                                           (byte)iVar34 & (byte)iVar12 & (byte)iVar35))) == 0) {
              auVar69 = *pauVar14;
              auVar55 = NEON_ext(auVar69,auVar69,8,1);
              fVar62 = auVar55._4_4_ * auVar55._4_4_;
              fVar64 = auVar69._0_4_;
              fVar63 = auVar69._4_4_;
              fVar65 = auVar69._8_4_;
              fVar50 = auVar69._12_4_;
              fVar66 = fVar52 * fVar64 + fVar51 * fVar63 + fVar61 * fVar65;
              fVar68 = fVar52 * fVar64 + fVar51 * fVar63 + fVar61 * fVar65;
              fVar53 = fVar62 + -0.5;
              fVar62 = fVar62 + -0.5;
              uVar36 = NEON_ext(auVar69._0_8_,auVar55._0_8_,4,1);
              auVar69 = NEON_ext(auVar59,auVar59,4,1);
              auVar55._0_4_ = auVar69._0_4_ * fVar64 - fVar52 * (float)uVar36;
              auVar55._4_4_ = auVar69._4_4_ * fVar63 - fVar51 * (float)((ulong)uVar36 >> 0x20);
              auVar55._8_4_ = fVar52 * fVar65 - fVar61 * fVar64;
              auVar55._12_4_ = fVar51 * fVar50 - auVar59._12_4_ * fVar63;
              auVar69 = NEON_ext(auVar55,auVar55,4,1);
              fVar54 = *(float *)(param_3 + 0xc);
              fVar52 = fVar52 * fVar53 + fVar64 * fVar66 + auVar69._0_4_ * fVar50;
              fVar51 = fVar51 * fVar62 + fVar63 * fVar68 + auVar69._4_4_ * fVar50;
              fVar61 = fVar61 * fVar53 + fVar65 * fVar66 + auVar55._0_4_ * fVar50;
              fVar64 = auVar59._12_4_ * fVar62 + fVar50 * fVar68 + fVar50 * 0.0;
              auVar71 = ZEXT816(0);
              fVar52 = fVar52 + fVar52;
              fVar51 = fVar51 + fVar51;
              fVar61 = fVar61 + fVar61;
              fVar50 = fVar52 * fVar52 + fVar51 * fVar51 + fVar61 * fVar61;
              fVar63 = 0.0;
              fVar65 = 0.0;
              if (fVar50 != 0.0) {
                fVar63 = SQRT(fVar50);
                fVar65 = SQRT(fVar52 * fVar52 + fVar51 * fVar51 + fVar61 * fVar61);
                auVar71._0_4_ = fVar52 / fVar63;
                auVar71._4_4_ = fVar51 / fVar65;
                auVar71._8_4_ = fVar61 / fVar63;
                auVar71._12_4_ = (fVar64 + fVar64) / fVar65;
              }
              local_c0 = CONCAT44(*(float *)(param_3 + 8) * fVar65 * 0.5,
                                  *(float *)(param_3 + 8) * fVar63 * 0.5);
              fStack_168 = auVar71._8_4_;
              fStack_164 = auVar71._12_4_;
              local_170 = auVar71._0_4_;
              fStack_16c = auVar71._4_4_;
              uStack_b8 = local_c0;
              FUN_01170160(&local_c0,local_110,&local_e0);
              auVar38._0_4_ = local_170 * local_110[0];
              auVar38._4_4_ = fStack_16c * local_110[0];
              auVar38._8_4_ = fStack_168 * local_110[0];
              auVar43._12_4_ = fStack_164 * local_110[0];
              auVar43._0_12_ = auVar38;
              auVar59 = NEON_ext(auVar43,auVar43,4,1);
              auVar44._12_4_ = fStack_dc;
              auVar44._0_12_ = auVar38;
              auVar69 = NEON_ext(auVar44,auVar44,8,1);
              fVar64 = auVar69._4_4_ * auVar69._4_4_;
              auVar58._0_4_ = local_120 - (float)*(double *)pauVar14[1];
              auVar58._4_4_ = fStack_11c - (float)*(double *)(pauVar14[1] + 8);
              auVar58._8_4_ = fStack_118 - (float)*(double *)pauVar14[2];
              auVar58._12_4_ = fStack_114 - 0.0;
              fVar61 = fVar64 + -0.5;
              fVar64 = fVar64 + -0.5;
              fVar63 = auVar38._0_4_ * auVar58._0_4_ + auVar38._4_4_ * auVar58._4_4_ +
                       auVar38._8_4_ * auVar58._8_4_;
              fVar65 = auVar38._0_4_ * auVar58._0_4_ + auVar38._4_4_ * auVar58._4_4_ +
                       auVar38._8_4_ * auVar58._8_4_;
              auVar69 = NEON_ext(auVar58,auVar58,4,1);
              auVar45._0_4_ = auVar38._0_4_ * auVar69._0_4_ - auVar59._0_4_ * auVar58._0_4_;
              auVar45._4_4_ = auVar38._4_4_ * auVar69._4_4_ - auVar59._4_4_ * auVar58._4_4_;
              auVar45._8_4_ = auVar38._8_4_ * auVar58._0_4_ - auVar38._0_4_ * auVar58._8_4_;
              auVar45._12_4_ = fStack_dc * auVar58._4_4_ - auVar38._4_4_ * auVar58._12_4_;
              auVar59 = NEON_ext(auVar45,auVar45,4,1);
              fVar52 = fVar61 * auVar58._0_4_ + auVar38._0_4_ * fVar63 + auVar59._0_4_ * fStack_dc;
              fVar51 = fVar64 * auVar58._4_4_ + auVar38._4_4_ * fVar65 + auVar59._4_4_ * fStack_dc;
              fVar61 = fVar61 * auVar58._8_4_ + auVar38._8_4_ * fVar63 + auVar45._0_4_ * fStack_dc;
              fVar64 = fVar64 * auVar58._12_4_ + fStack_dc * fVar65 + fStack_dc * 0.0;
              uVar73 = CONCAT44((float)((ulong)uVar73 >> 0x20) +
                                ((fVar51 + fVar51) - auVar58._4_4_) * fVar54,
                                (float)uVar73 + ((fVar52 + fVar52) - auVar58._0_4_) * fVar54);
              uVar67 = CONCAT44((float)((ulong)uVar67 >> 0x20) +
                                ((fVar64 + fVar64) - auVar58._12_4_) * fVar54,
                                (float)uVar67 + ((fVar61 + fVar61) - auVar58._8_4_) * fVar54);
              auVar59 = pauVar14[7];
            }
            auVar69 = *pauVar14;
            auVar55 = NEON_ext(auVar69,auVar69,8,1);
            fVar53 = auVar55._4_4_ * auVar55._4_4_;
            fVar52 = auVar59._0_4_;
            fVar64 = auVar69._0_4_;
            fVar51 = auVar59._4_4_;
            fVar54 = auVar69._4_4_;
            fVar61 = auVar59._8_4_;
            fVar63 = auVar69._8_4_;
            fVar65 = auVar69._12_4_;
            fVar62 = fVar52 * fVar64 + fVar51 * fVar54 + fVar61 * fVar63;
            fVar66 = fVar52 * fVar64 + fVar51 * fVar54 + fVar61 * fVar63;
            fVar50 = fVar53 + -0.5;
            fVar53 = fVar53 + -0.5;
            uVar36 = NEON_ext(auVar69._0_8_,auVar55._0_8_,4,1);
            auVar69 = NEON_ext(auVar59,auVar59,4,1);
            auVar29._0_4_ = fVar52 * (float)uVar36 - fVar64 * auVar69._0_4_;
            auVar29._4_4_ = fVar51 * (float)((ulong)uVar36 >> 0x20) - fVar54 * auVar69._4_4_;
            auVar29._8_4_ = fVar61 * fVar64 - fVar63 * fVar52;
            auVar29._12_4_ = auVar59._12_4_ * fVar54 - fVar65 * fVar51;
            auVar69 = NEON_ext(auVar29,auVar29,4,1);
            fVar52 = fVar52 * fVar50 + fVar64 * fVar62 + auVar69._0_4_ * fVar65;
            fVar51 = fVar51 * fVar53 + fVar54 * fVar66 + auVar69._4_4_ * fVar65;
            fVar61 = fVar61 * fVar50 + fVar63 * fVar62 + auVar29._0_4_ * fVar65;
            fVar64 = auVar59._12_4_ * fVar53 + fVar65 * fVar66 + fVar65 * 0.0;
          }
          fVar54 = (float)uVar73 + pfVar2[4];
          fVar63 = (float)((ulong)uVar73 >> 0x20) + pfVar2[5];
          fVar65 = (float)uVar67 + pfVar2[6];
          fVar50 = (float)((ulong)uVar67 >> 0x20) + pfVar2[7];
          pfVar2[6] = fVar65;
          pfVar2[7] = fVar50;
          pfVar2[4] = fVar54;
          pfVar2[5] = fVar63;
          pfVar2[10] = fVar61 + fVar61 + pfVar2[10];
          pfVar2[0xb] = fVar64 + fVar64 + pfVar2[0xb];
          pfVar2[8] = fVar52 + fVar52 + pfVar2[8];
          pfVar2[9] = fVar51 + fVar51 + pfVar2[9];
        }
        auVar46._0_4_ = fVar54 * *pfVar2;
        auVar46._4_4_ = fVar63 * pfVar2[1];
        auVar46._8_4_ = fVar65 * pfVar2[2];
        auVar46._12_4_ = fVar50 * pfVar2[3];
        auVar59 = NEON_ext(auVar46,auVar46,8,1);
        pfVar2[2] = pfVar2[2];
        pfVar2[3] = pfVar2[3] - param_1 * (auVar46._0_4_ + auVar46._4_4_ + auVar59._0_4_);
        *pfVar2 = *pfVar2;
        pfVar2[1] = pfVar2[1];
        if ((*(uint *)(lVar13 + 0x54) & 1) == 0) {
          if ((*(uint *)(lVar13 + 0x54) >> 2 & 1) == 0) goto LAB_02ffe364;
          fVar52 = 1.4013e-45;
        }
        else {
          fVar52 = 2.8026e-45;
        }
        pfVar2[0x10] = fVar52;
      }
LAB_02ffe364:
      lVar13 = *param_4;
      pfVar2 = (float *)(lVar13 + lVar25);
      fVar52 = *pfVar2 * *(float *)(param_2 + 0x130);
      fVar51 = pfVar2[1] * *(float *)(param_2 + 0x134);
      fVar61 = pfVar2[2] * *(float *)(param_2 + 0x138);
      fVar64 = fVar52 + fVar51 + fVar61;
      fVar61 = fVar52 + fVar51 + fVar61;
      uVar28 = CONCAT44(-(uint)(fVar61 < *(float *)(param_2 + 0x118)),
                        -(uint)(fVar64 < *(float *)(param_2 + 0x118))) &
               CONCAT44(-(uint)(0.01 < fVar61),-(uint)(0.01 < fVar64));
      if (CONCAT13((byte)(uVar28 >> 0x38) | (byte)(uVar28 >> 0x18),
                   CONCAT12((byte)(uVar28 >> 0x30) | (byte)(uVar28 >> 0x10),
                            CONCAT11((byte)(uVar28 >> 0x28) | (byte)(uVar28 >> 8),
                                     (byte)(uVar28 >> 0x20) | (byte)uVar28))) != 0) {
        fVar52 = *(float *)(*(long *)(param_2 + 0x18) + lVar23 + 0x34);
        iVar12 = (int)param_4[1];
        lVar15 = (long)iVar12;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar12) {
          FUN_02ffbc8c(param_4,PTR_PTR_047d1a50,lVar15 + 1);
          iVar12 = (int)param_4[1];
          lVar13 = *param_4;
        }
        *(int *)(param_4 + 1) = (int)(lVar15 + 1);
        pfVar2 = (float *)(lVar13 + lVar25);
        fVar54 = *pfVar2;
        fVar63 = pfVar2[1];
        fVar65 = pfVar2[2];
        fVar50 = pfVar2[3];
        pauVar20 = (undefined1 (*) [16])(lVar13 + (long)iVar12 * 0x50);
        *(float *)(*pauVar20 + 8) = fVar65;
        *(float *)(*pauVar20 + 0xc) = fVar50;
        *(float *)*pauVar20 = fVar54;
        *(float *)(*pauVar20 + 4) = fVar63;
        uVar67 = *(undefined8 *)(pfVar2 + 4);
        pauVar14 = pauVar20 + 1;
        *(undefined8 *)(pauVar20[1] + 8) = *(undefined8 *)(pfVar2 + 6);
        *(undefined8 *)*pauVar14 = uVar67;
        uVar67 = *(undefined8 *)(pfVar2 + 8);
        *(undefined8 *)(pauVar20[2] + 8) = *(undefined8 *)(pfVar2 + 10);
        *(undefined8 *)pauVar20[2] = uVar67;
        fVar51 = pfVar2[0x10];
        *(undefined8 *)(pauVar20[3] + 8) = *(undefined8 *)(pfVar2 + 0xe);
        uVar67 = *(undefined8 *)(pfVar2 + 0xc);
        *(float *)pauVar20[4] = fVar51;
        *(undefined8 *)pauVar20[3] = uVar67;
        fVar54 = fVar54 - fVar64 * *(float *)(param_2 + 0x130);
        fVar63 = fVar63 - fVar61 * *(float *)(param_2 + 0x134);
        fVar65 = fVar65 - fVar64 * *(float *)(param_2 + 0x138);
        fVar61 = fVar50 - fVar61 * *(float *)(param_2 + 0x13c);
        fVar51 = fVar54 * fVar54 + fVar63 * fVar63 + fVar65 * fVar65;
        auVar30 = ZEXT816(0);
        *(float *)(*pauVar20 + 8) = fVar65;
        *(float *)(*pauVar20 + 0xc) = fVar61;
        *(float *)*pauVar20 = fVar54;
        *(float *)(*pauVar20 + 4) = fVar63;
        if (fVar51 != 0.0) {
          fVar51 = SQRT(fVar51);
          fVar64 = SQRT(fVar54 * fVar54 + fVar63 * fVar63 + fVar65 * fVar65);
          auVar30._0_4_ = fVar54 / fVar51;
          auVar30._4_4_ = fVar63 / fVar64;
          auVar30._8_4_ = fVar65 / fVar51;
          auVar30._12_4_ = fVar61 / fVar64;
        }
        auVar31._0_12_ = auVar30._0_12_;
        *(long *)(*pauVar20 + 8) = auVar30._8_8_;
        *(long *)*pauVar20 = auVar30._0_8_;
        if (0.0 <= fVar50) {
          pfVar2 = (float *)(*param_4 + lVar25);
          auVar47._0_4_ = auVar30._0_4_ * *pfVar2;
          auVar47._4_4_ = auVar30._4_4_ * pfVar2[1];
          auVar47._8_4_ = auVar30._8_4_ * pfVar2[2];
          auVar47._12_4_ = auVar30._12_4_ * pfVar2[3];
          auVar59 = NEON_ext(auVar47,auVar47,8,1);
          fVar50 = fVar50 * (auVar47._0_4_ + auVar47._4_4_ + auVar59._0_4_);
        }
        else {
          pfVar2 = (float *)(*param_4 + lVar25);
          uVar67 = NEON_fmin(CONCAT44(fVar52 + fVar50,fVar52 + fVar50),0,4);
          auVar60._0_4_ = auVar30._0_4_ * *pfVar2;
          auVar60._4_4_ = auVar30._4_4_ * pfVar2[1];
          auVar60._8_4_ = auVar30._8_4_ * pfVar2[2];
          auVar60._12_4_ = auVar30._12_4_ * pfVar2[3];
          auVar59 = NEON_ext(auVar60,auVar60,8,1);
          auVar31._12_4_ = (float)uVar67 / (auVar60._0_4_ + auVar60._4_4_ + auVar59._0_4_);
          *(long *)(*pauVar20 + 8) = auVar31._8_8_;
          *(long *)*pauVar20 = auVar30._0_8_;
          puVar4 = (undefined4 *)(*param_4 + lVar25);
          uVar8 = *puVar4;
          uVar9 = puVar4[1];
          puVar5 = (undefined4 *)(*param_4 + lVar25);
          *(ulong *)(puVar5 + 2) = (ulong)(uint)puVar4[2];
          *puVar5 = uVar8;
          puVar5[1] = uVar9;
          auVar59 = *pauVar20;
          auVar31._0_12_ = auVar59._0_12_;
          fVar64 = auVar59._12_4_;
          fVar54 = *(float *)(param_2 + 0x15c) * fVar64;
          fVar65 = *(float *)(param_2 + 0x15c) * fVar64;
          iVar12 = -(uint)(fVar64 < -1.1920929e-07);
          uVar28 = CONCAT44(-(uint)(fVar64 < -1.1920929e-07),iVar12) & 0x100000001;
          fVar52 = *(float *)*pauVar14;
          fVar51 = *(float *)(pauVar20[1] + 4);
          fVar61 = *(float *)(pauVar20[1] + 0xc);
          iVar34 = (int)uVar28;
          iVar35 = (int)(uVar28 >> 0x20);
          fVar63 = fVar52 - auVar59._0_4_ * fVar54;
          fVar50 = fVar51 - auVar59._4_4_ * fVar65;
          fVar54 = *(float *)(pauVar20[1] + 8) - auVar59._8_4_ * fVar54;
          fVar64 = fVar61 - fVar64 * fVar65;
          *(uint *)(pauVar20[1] + 8) =
               (uint)fVar54 ^
               ((uint)fVar54 ^ (uint)*(float *)(pauVar20[1] + 8)) & ~((iVar34 << 0x1f) >> 0x1f);
          *(uint *)(pauVar20[1] + 0xc) =
               (uint)fVar64 ^ ((uint)fVar64 ^ (uint)fVar61) & ~((iVar35 << 0x1f) >> 0x1f);
          *(uint *)*pauVar14 =
               (uint)fVar63 ^ ((uint)fVar63 ^ (uint)fVar52) & ~((iVar34 << 0x1f) >> 0x1f);
          *(uint *)(pauVar20[1] + 4) =
               (uint)fVar50 ^ ((uint)fVar50 ^ (uint)fVar51) & ~((iVar35 << 0x1f) >> 0x1f);
          fVar50 = (float)CONCAT13(auVar59[0xf] & ~(byte)((uint)iVar12 >> 0x18),
                                   CONCAT12(auVar59[0xe] & ~(byte)((uint)iVar12 >> 0x10),
                                            CONCAT11(auVar59[0xd] & ~(byte)((uint)iVar12 >> 8),
                                                     auVar59[0xc] & ~(byte)iVar12)));
        }
        auVar32._12_4_ = fVar50;
        auVar32._0_12_ = auVar31._0_12_;
        *(long *)(*pauVar20 + 8) = auVar32._8_8_;
        *(long *)*pauVar20 = auVar31._0_8_;
      }
      pauVar20 = (undefined1 (*) [16])(*param_4 + lVar25);
      lVar25 = lVar25 + 0x50;
      auVar59 = *pauVar20;
      auVar69 = pauVar20[1];
      fVar61 = auVar59._12_4_;
      fVar52 = *(float *)(param_2 + 0x15c) * fVar61;
      fVar51 = *(float *)(param_2 + 0x15c) * fVar61;
      iVar12 = -(uint)(fVar61 < -1.1920929e-07);
      uVar28 = CONCAT44(-(uint)(fVar61 < -1.1920929e-07),iVar12) & 0x100000001;
      auVar48[0xd] = auVar59[0xd] & ~(byte)((uint)iVar12 >> 8);
      auVar48[0xc] = auVar59[0xc] & ~(byte)iVar12;
      auVar48[0xe] = auVar59[0xe] & ~(byte)((uint)iVar12 >> 0x10);
      auVar48[0xf] = auVar59[0xf] & ~(byte)((uint)iVar12 >> 0x18);
      lVar23 = lVar23 + 0x40;
      auVar48._0_12_ = auVar59._0_12_;
      iVar12 = (int)uVar28;
      iVar34 = (int)(uVar28 >> 0x20);
      auVar33._0_4_ = auVar69._0_4_ - auVar59._0_4_ * fVar52;
      auVar33._4_4_ = auVar69._4_4_ - auVar59._4_4_ * fVar51;
      auVar33._8_4_ = auVar69._8_4_ - auVar59._8_4_ * fVar52;
      auVar33._12_4_ = auVar69._12_4_ - fVar61 * fVar51;
      *(long *)(*pauVar20 + 8) = auVar48._8_8_;
      *(long *)*pauVar20 = auVar59._0_8_;
      auVar49._0_4_ = (iVar12 << 0x1f) >> 0x1f;
      auVar49._4_4_ = (iVar34 << 0x1f) >> 0x1f;
      auVar49._8_4_ = (iVar12 << 0x1f) >> 0x1f;
      auVar49._12_4_ = (iVar34 << 0x1f) >> 0x1f;
      auVar33 = auVar33 ^ (auVar33 ^ auVar69) & ~auVar49;
      *(long *)(pauVar20[1] + 8) = auVar33._8_8_;
      *(long *)pauVar20[1] = auVar33._0_8_;
    } while ((ulong)uVar3 * 0x50 != lVar25);
    uVar19 = *(uint *)(param_4 + 1);
  }
  puVar11 = PTR_PTR_047d1a50;
  puVar10 = PTR_DAT_047d1a08;
  uVar3 = *(uint *)((long)param_4 + 0xc) & 0x7fffffff;
  if ((*(int *)(param_2 + 0x14c) <= (int)(uVar3 - uVar19)) ||
     (iVar12 = *(int *)(param_2 + 0x14c) + uVar19, iVar12 <= (int)uVar3)) {
    return;
  }
  uVar18 = (ulong)iVar12;
  uVar28 = (ulong)(uint)(*(int *)((long)param_4 + 0xc) << 1);
  if (uVar28 <= uVar18) {
    uVar28 = uVar18;
  }
  if (0x7ffffffe < uVar28) {
    if (0x7ffffffe < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar28 = 0x7ffffffe;
  }
  uVar18 = uVar28 * 0x50;
  puVar17 = (undefined8 *)
            (**(code **)PTR_DAT_047d1a08)
                      (PTR_PTR_047d1a50[8],auStack_b0 + 0x68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc)
                      );
  iVar12 = (int)param_4[1];
  if (0 < iVar12) {
    puVar21 = (undefined8 *)*param_4;
    puVar22 = puVar17;
    do {
      uVar67 = *puVar21;
      iVar12 = iVar12 + -1;
      puVar22[1] = puVar21[1];
      *puVar22 = uVar67;
      uVar67 = puVar21[2];
      puVar22[3] = puVar21[3];
      puVar22[2] = uVar67;
      auVar59 = *(undefined1 (*) [16])(puVar21 + 4);
      puVar22[5] = auVar59._8_8_;
      puVar22[4] = auVar59._0_8_;
      *(undefined4 *)(puVar22 + 6) = *(undefined4 *)(puVar21 + 6);
      *(undefined4 *)((long)puVar22 + 0x34) = *(undefined4 *)((long)puVar21 + 0x34);
      *(undefined4 *)(puVar22 + 7) = *(undefined4 *)(puVar21 + 7);
      *(undefined4 *)((long)puVar22 + 0x3c) = *(undefined4 *)((long)puVar21 + 0x3c);
      *(undefined4 *)(puVar22 + 8) = *(undefined4 *)(puVar21 + 8);
      puVar21 = puVar21 + 10;
      puVar22 = puVar22 + 10;
    } while (iVar12 != 0);
  }
  uVar24 = uVar28;
  if (uVar18 + 0x50 <= uVar18) {
    uVar24 = uVar28 + 1;
    if (uVar18 + 0x50 <= uVar18 - 0x50) {
      uVar24 = uVar24 + ((uVar18 - 0x50) + uVar28 * -0x50) / 0x50;
    }
  }
  if (-1 < *(int *)((long)param_4 + 0xc)) {
    (**(code **)(puVar10 + 8))(puVar11[8],*param_4,0);
  }
  *(int *)((long)param_4 + 0xc) = (int)uVar24;
  *param_4 = (long)puVar17;
  return;
}


