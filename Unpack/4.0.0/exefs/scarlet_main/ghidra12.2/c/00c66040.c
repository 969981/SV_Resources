/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c66040; name: FUN_00c66040
 */


void FUN_00c66040(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,uint param_6)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_s0;
  float fVar17;
  float fVar18;
  float extraout_var;
  float fVar19;
  float fVar20;
  float extraout_var_00;
  float fVar21;
  float extraout_var_01;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar34;
  float fVar36;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  float fVar58;
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  
  fVar14 = param_4._12_4_;
  fVar24 = param_4._8_4_;
  fVar44 = param_4._4_4_;
  fVar43 = param_4._0_4_;
  uVar12 = (ulong)(short)param_6;
  uVar2 = *(ushort *)(*(long *)(param_5 + 0x2b8) + uVar12 * 2);
  if ((short)uVar2 < 0) {
    uVar2 = *(ushort *)(*(long *)(param_5 + 0xd8) + uVar12 * 2);
    if ((short)uVar2 < 0) {
      pfVar9 = (float *)(*(long *)(param_5 + 0x248) + uVar12 * 0x30);
      fVar14 = *pfVar9;
      fVar43 = pfVar9[1];
      fVar44 = pfVar9[2];
      pauVar3 = (undefined1 (*) [12])(pfVar9 + 4);
      fVar58 = (float)*(undefined8 *)(pfVar9 + 6);
      fVar45 = (float)((ulong)*(undefined8 *)(pfVar9 + 6) >> 0x20);
      fVar18 = (float)*(undefined8 *)*pauVar3;
      fVar20 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
      uVar6 = *(undefined8 *)(pfVar9 + 10);
      uVar5 = *(undefined8 *)(pfVar9 + 8);
      auVar25._12_4_ = fVar45;
      auVar25._0_12_ = *pauVar3;
      auVar4._12_4_ = fVar45;
      auVar4._0_12_ = *pauVar3;
      auVar25 = NEON_ext(auVar25,auVar4,0xc,1);
      pfVar9 = (float *)(*(long *)(param_5 + 0x280) + uVar12 * 0x40);
      uVar13 = SUB124(*pauVar3,0);
      auVar30._4_12_ = auVar25._4_12_;
      auVar30._0_4_ = uVar13;
      auVar32._12_4_ = auVar25._12_4_;
      auVar32._0_8_ = auVar30._0_8_;
      auVar32._8_4_ = SUB124(*pauVar3,4);
      auVar31._8_8_ = auVar32._8_8_;
      auVar31._4_4_ = auVar25._0_4_;
      auVar31._0_4_ = uVar13;
      auVar33._0_12_ = auVar31._0_12_;
      auVar33._12_4_ = auVar25._4_4_;
      auVar25 = NEON_ext(auVar33,auVar33,8,1);
      fVar15 = fVar20 * fVar20 + fVar20 * fVar20;
      fVar36 = fVar58 * fVar58 + fVar58 * fVar58;
      fVar24 = auVar25._0_4_ * SUB124(*pauVar3,8);
      fVar21 = auVar25._4_4_ * SUB124(*pauVar3,8);
      fVar16 = auVar25._8_4_ * fVar20;
      fVar14 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ 0x2b8cbccc) & -(uint)(ABS(fVar14) < 1e-12));
      auVar25 = NEON_fmov(0x3f800000,4);
      fVar24 = fVar24 + fVar24;
      fVar21 = fVar21 + fVar21;
      fVar16 = fVar16 + fVar16;
      auVar53._0_4_ = auVar25._0_4_ - (fVar18 * fVar18 + fVar18 * fVar18);
      auVar53._4_4_ = auVar25._4_4_ - fVar15;
      auVar53._8_4_ = auVar25._8_4_ - fVar36;
      auVar53._12_4_ = auVar25._12_4_ - (fVar45 * fVar45 + fVar45 * fVar45);
      auVar54._4_12_ = auVar53._4_12_;
      auVar54._0_4_ = auVar53._0_4_;
      auVar56._0_8_ = auVar54._0_8_;
      auVar56._8_4_ = auVar53._4_4_;
      auVar56._12_4_ = auVar53._12_4_;
      auVar55._8_8_ = auVar56._8_8_;
      auVar55._4_4_ = auVar53._0_4_;
      auVar55._0_4_ = auVar53._0_4_;
      auVar57._0_12_ = auVar55._0_12_;
      auVar57._12_4_ = auVar53._4_4_;
      auVar25 = NEON_ext(auVar57,auVar57,0xc,1);
      fVar43 = (float)((uint)fVar43 ^ ((uint)fVar43 ^ 0x2b8cbccc) & -(uint)(ABS(fVar43) < 1e-12));
      fVar18 = fVar18 * fVar45 + fVar18 * fVar45;
      fVar20 = fVar20 * fVar45 + fVar20 * fVar45;
      fVar58 = fVar58 * fVar45 + fVar58 * fVar45;
      fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ 0x2b8cbccc) & -(uint)(ABS(fVar44) < 1e-12));
      pfVar9[2] = (fVar21 - fVar20) * fVar14;
      pfVar9[3] = fVar14 * 0.0;
      *pfVar9 = (auVar25._0_4_ - fVar36) * fVar14;
      pfVar9[1] = (fVar16 + fVar58) * fVar14;
      pfVar9[6] = (fVar24 + fVar18) * fVar43;
      pfVar9[7] = fVar43 * 0.0;
      pfVar9[4] = (fVar16 - fVar58) * fVar43;
      pfVar9[5] = (auVar25._4_4_ - fVar36) * fVar43;
      pfVar9[10] = (auVar25._8_4_ - fVar15) * fVar44;
      pfVar9[0xb] = fVar44 * 0.0;
      pfVar9[8] = (fVar21 + fVar20) * fVar44;
      pfVar9[9] = (fVar24 - fVar18) * fVar44;
      *(ulong *)(pfVar9 + 0xe) = CONCAT44(0x3f800000,(int)uVar6);
      *(undefined8 *)(pfVar9 + 0xc) = uVar5;
    }
    else {
      if ((*(uint *)(*(long *)(param_5 + 0x110) + ((ulong)(uVar2 >> 3) & 0x1ffc)) >>
           (ulong)(uVar2 & 0x1f) & 1) != 0) {
        FUN_00c66040(param_5,(uint)uVar2);
      }
      lVar11 = *(long *)(param_5 + 0x248);
      pfVar9 = (float *)(lVar11 + uVar12 * 0x30);
      lVar10 = *(long *)(param_5 + 0x280);
      if ((*(uint *)(*(long *)(param_5 + 0x150) + (uVar12 >> 3 & 0x1ffffffffffffffc)) >>
           (ulong)(param_6 & 0x1f) & 1) == 0) {
        fVar21 = *pfVar9;
        fVar58 = pfVar9[1];
        fVar45 = pfVar9[2];
        if (ABS(fVar21) < 1e-12) {
          fVar21 = 1e-12;
        }
        if (ABS(fVar58) < 1e-12) {
          fVar58 = 1e-12;
        }
        if (ABS(fVar45) < 1e-12) {
          fVar45 = 1e-12;
        }
        lVar11 = lVar11 + uVar12 * 0x30;
        auVar25 = *(undefined1 (*) [16])(lVar11 + 0x10);
        fVar24 = (float)*(undefined8 *)(lVar11 + 0x28);
        fVar43 = (float)*(undefined8 *)(lVar11 + 0x20);
        fVar44 = (float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20);
        fVar14 = auVar25._0_4_;
        fVar36 = auVar25._4_4_;
        fVar34 = auVar25._8_4_;
        fVar16 = auVar25._12_4_;
        auVar25 = NEON_ext(auVar25,auVar25,0xc,1);
        fVar51 = fVar36 * fVar36 + fVar36 * fVar36;
        fVar52 = fVar34 * fVar34 + fVar34 * fVar34;
        auVar26._4_12_ = auVar25._4_12_;
        auVar26._0_4_ = fVar14;
        auVar28._12_4_ = auVar25._12_4_;
        auVar28._0_8_ = auVar26._0_8_;
        auVar28._8_4_ = fVar36;
        auVar27._8_8_ = auVar28._8_8_;
        auVar27._4_4_ = auVar25._0_4_;
        auVar27._0_4_ = fVar14;
        auVar29._0_12_ = auVar27._0_12_;
        auVar29._12_4_ = auVar25._4_4_;
        auVar25 = NEON_ext(auVar29,auVar29,8,1);
        fVar15 = fVar14 * fVar16 + fVar14 * fVar16;
        fVar17 = fVar36 * fVar16 + fVar36 * fVar16;
        fVar19 = fVar34 * fVar16 + fVar34 * fVar16;
        fVar22 = auVar25._0_4_ * fVar34;
        fVar34 = auVar25._4_4_ * fVar34;
        fVar36 = auVar25._8_4_ * fVar36;
        auVar25 = NEON_fmov(0x3f800000,4);
        auVar46._0_4_ = auVar25._0_4_ - (fVar14 * fVar14 + fVar14 * fVar14);
        auVar46._4_4_ = auVar25._4_4_ - fVar51;
        auVar46._8_4_ = auVar25._8_4_ - fVar52;
        auVar46._12_4_ = auVar25._12_4_ - (fVar16 * fVar16 + fVar16 * fVar16);
        fVar22 = fVar22 + fVar22;
        fVar34 = fVar34 + fVar34;
        fVar36 = fVar36 + fVar36;
        auVar47._4_12_ = auVar46._4_12_;
        auVar47._0_4_ = auVar46._0_4_;
        auVar49._0_8_ = auVar47._0_8_;
        auVar49._8_4_ = auVar46._4_4_;
        auVar49._12_4_ = auVar46._12_4_;
        auVar48._8_8_ = auVar49._8_8_;
        auVar48._4_4_ = auVar46._0_4_;
        auVar48._0_4_ = auVar46._0_4_;
        auVar50._0_12_ = auVar48._0_12_;
        auVar50._12_4_ = auVar46._4_4_;
        auVar25 = NEON_ext(auVar50,auVar50,0xc,1);
        fVar14 = 1.0;
        fVar16 = (auVar25._0_4_ - fVar52) * fVar21;
        fVar18 = (fVar36 + fVar19) * fVar21;
        fVar20 = (fVar34 - fVar17) * fVar21;
        fVar21 = fVar21 * 0.0;
        param_2._0_4_ = (fVar36 - fVar19) * fVar58;
        param_2._4_4_ = (auVar25._4_4_ - fVar52) * fVar58;
        param_2._8_4_ = (fVar22 + fVar15) * fVar58;
        param_2._12_4_ = fVar58 * 0.0;
        param_3._0_4_ = (fVar34 + fVar17) * fVar45;
        param_3._4_4_ = (fVar22 - fVar15) * fVar45;
        param_3._8_4_ = (auVar25._8_4_ - fVar51) * fVar45;
        param_3._12_4_ = fVar45 * 0.0;
        lVar11 = lVar10;
      }
      else {
        FUN_00c6a138(*(undefined1 (*) [16])(lVar11 + (ulong)uVar2 * 0x30));
        lVar11 = *(long *)(param_5 + 0x280);
        fVar16 = extraout_s0;
        fVar18 = extraout_var;
        fVar20 = extraout_var_00;
        fVar21 = extraout_var_01;
      }
      pfVar9 = (float *)(lVar10 + (ulong)uVar2 * 0x40);
      fVar58 = *pfVar9;
      fVar45 = pfVar9[1];
      fVar15 = pfVar9[2];
      fVar36 = pfVar9[3];
      fVar17 = pfVar9[4];
      fVar34 = pfVar9[5];
      fVar19 = pfVar9[6];
      fVar22 = pfVar9[7];
      fVar23 = param_2._0_4_;
      fVar35 = param_2._4_4_;
      fVar39 = param_3._0_4_;
      fVar40 = param_3._4_4_;
      fVar51 = pfVar9[8];
      fVar52 = pfVar9[9];
      fVar7 = pfVar9[10];
      fVar8 = pfVar9[0xb];
      puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x40);
      fVar37 = param_2._8_4_;
      fVar41 = param_3._8_4_;
      fVar59 = (float)*(undefined8 *)(pfVar9 + 0xc);
      fVar60 = (float)((ulong)*(undefined8 *)(pfVar9 + 0xc) >> 0x20);
      fVar61 = (float)*(undefined8 *)(pfVar9 + 0xe);
      fVar62 = (float)((ulong)*(undefined8 *)(pfVar9 + 0xe) >> 0x20);
      fVar38 = param_2._12_4_;
      fVar42 = param_3._12_4_;
      puVar1[1] = CONCAT44(fVar36 * fVar16 + fVar22 * fVar18 + fVar8 * fVar20 + fVar62 * fVar21,
                           fVar15 * fVar16 + fVar19 * fVar18 + fVar7 * fVar20 + fVar61 * fVar21);
      *puVar1 = CONCAT44(fVar45 * fVar16 + fVar34 * fVar18 + fVar52 * fVar20 + fVar60 * fVar21,
                         fVar58 * fVar16 + fVar17 * fVar18 + fVar51 * fVar20 + fVar59 * fVar21);
      puVar1[3] = CONCAT44(fVar36 * fVar23 + fVar22 * fVar35 + fVar8 * fVar37 + fVar62 * fVar38,
                           fVar15 * fVar23 + fVar19 * fVar35 + fVar7 * fVar37 + fVar61 * fVar38);
      puVar1[2] = CONCAT44(fVar45 * fVar23 + fVar34 * fVar35 + fVar52 * fVar37 + fVar60 * fVar38,
                           fVar58 * fVar23 + fVar17 * fVar35 + fVar51 * fVar37 + fVar59 * fVar38);
      puVar1[5] = CONCAT44(fVar36 * fVar39 + fVar22 * fVar40 + fVar8 * fVar41 + fVar62 * fVar42,
                           fVar15 * fVar39 + fVar19 * fVar40 + fVar7 * fVar41 + fVar61 * fVar42);
      puVar1[4] = CONCAT44(fVar45 * fVar39 + fVar34 * fVar40 + fVar52 * fVar41 + fVar60 * fVar42,
                           fVar58 * fVar39 + fVar17 * fVar40 + fVar51 * fVar41 + fVar59 * fVar42);
      *(float *)(puVar1 + 7) = fVar15 * fVar43 + fVar19 * fVar44 + fVar7 * fVar24 + fVar61 * fVar14;
      *(float *)((long)puVar1 + 0x3c) =
           fVar36 * fVar43 + fVar22 * fVar44 + fVar8 * fVar24 + fVar62 * fVar14;
      *(float *)(puVar1 + 6) = fVar58 * fVar43 + fVar17 * fVar44 + fVar51 * fVar24 + fVar59 * fVar14
      ;
      *(float *)((long)puVar1 + 0x34) =
           fVar45 * fVar43 + fVar34 * fVar44 + fVar52 * fVar24 + fVar60 * fVar14;
    }
  }
  else if (*(short *)(*(long *)(param_5 + 0x2f0) + (ulong)uVar2 * 0xd0 + 0x50) == 3) {
    FUN_00c67c6c(param_5,param_6);
  }
  else {
    FUN_00c66720();
  }
  uVar12 = uVar12 >> 3 & 0x1ffffffffffffffc;
  *(uint *)(*(long *)(param_5 + 0x110) + uVar12) =
       *(uint *)(*(long *)(param_5 + 0x110) + uVar12) & (1 << (ulong)(param_6 & 0x1f) ^ 0xffffffffU)
  ;
  return;
}


