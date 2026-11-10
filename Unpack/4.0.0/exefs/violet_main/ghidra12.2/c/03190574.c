/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03190574; name: FUN_03190574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03190574(float param_1,float param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16],
            undefined1 (*param_5) [16],float *param_6)

{
  int *piVar1;
  char cVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar33;
  ulong uVar22;
  float fVar34;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  byte bVar55;
  int iVar56;
  float fVar57;
  float fVar58;
  byte bVar66;
  undefined1 auVar59 [12];
  byte bVar64;
  byte bVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar68;
  uint uVar69;
  undefined1 auVar70 [12];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar81;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar88;
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar119 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar124 [16];
  float fVar125;
  undefined1 auVar126 [16];
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  undefined1 auVar131 [12];
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  float local_d0 [4];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  puVar11 = PTR_PTR_047d1a50;
  uVar13 = 0x80040200;
  if ((0.0 < param_1) && (0.0 <= param_2)) {
    auVar23 = *param_5;
    auVar114 = *param_4;
    auVar73 = *param_3;
    fVar34 = auVar114._0_4_;
    fVar87 = auVar23._0_4_;
    auVar48._0_4_ = fVar87 - fVar34;
    fVar18 = auVar114._4_4_;
    fVar19 = auVar23._4_4_;
    auVar48._4_4_ = fVar19 - fVar18;
    fVar80 = auVar114._8_4_;
    fVar33 = auVar23._8_4_;
    auVar48._8_4_ = fVar33 - fVar80;
    fVar81 = auVar114._12_4_;
    fVar35 = auVar23._12_4_;
    auVar48._12_4_ = fVar35 - fVar81;
    auVar71 = NEON_ext(auVar48,auVar48,4,1);
    fVar125 = auVar73._0_4_;
    auVar90._0_4_ = fVar125 - fVar34;
    fVar127 = auVar73._4_4_;
    auVar90._4_4_ = fVar127 - fVar18;
    fVar130 = auVar73._8_4_;
    auVar90._8_4_ = fVar130 - fVar80;
    fVar132 = auVar73._12_4_;
    auVar90._12_4_ = fVar132 - fVar81;
    auVar82 = NEON_ext(auVar90,auVar90,4,1);
    auVar91._0_4_ = auVar48._0_4_ * auVar82._0_4_ - auVar90._0_4_ * auVar71._0_4_;
    auVar91._4_4_ = auVar48._4_4_ * auVar82._4_4_ - auVar90._4_4_ * auVar71._4_4_;
    auVar91._8_4_ = auVar48._8_4_ * auVar90._0_4_ - auVar90._8_4_ * auVar48._0_4_;
    auVar91._12_4_ = auVar48._12_4_ * auVar90._4_4_ - auVar90._12_4_ * auVar48._4_4_;
    auVar48 = NEON_ext(auVar91,auVar91,4,1);
    fVar102 = auVar48._0_4_;
    fVar103 = auVar48._4_4_;
    fVar67 = fVar102 * fVar102 + fVar103 * fVar103 + auVar91._0_4_ * auVar91._0_4_;
    fVar120 = SQRT(fVar67);
    fVar122 = SQRT(fVar102 * fVar102 + fVar103 * fVar103 + auVar91._0_4_ * auVar91._0_4_);
    if (1e-05 <= param_2) {
      if (1e-05 <= fVar120) {
        if (fVar67 == 0.0) {
          fVar102 = 0.0;
          fVar103 = 0.0;
          fVar34 = 0.0;
          fVar122 = 0.0;
        }
        else {
          fVar102 = fVar102 / fVar120;
          fVar103 = fVar103 / fVar122;
          fVar34 = auVar91._0_4_ / fVar120;
          fVar122 = 0.0 / fVar122;
        }
        fVar18 = param_2 * 0.5;
        local_f0 = (float *)0x0;
        auVar23._4_4_ = fVar18;
        auVar23._0_4_ = fVar18;
        auVar23._8_8_ = 0;
        local_d8 = 0x8000000000000000;
        local_e8 = 0x8000000000000000;
        local_e0 = (undefined8 *)0x0;
        FUN_02e8df28(&local_f0,PTR_PTR_047d1a50,6);
        if ((int)local_e8 != 6) {
          local_e8 = CONCAT44(local_e8._4_4_,6);
        }
        fVar80 = *(float *)*param_3;
        fVar81 = *(float *)(*param_3 + 4);
        fVar87 = *(float *)(*param_3 + 0xc);
        fVar19 = fVar102 * fVar18;
        fVar33 = fVar103 * fVar18;
        fVar35 = fVar34 * fVar18;
        fVar18 = fVar122 * fVar18;
        local_f0[2] = fVar35 + *(float *)(*param_3 + 8);
        local_f0[3] = fVar18 + fVar87;
        *local_f0 = fVar19 + fVar80;
        local_f0[1] = fVar33 + fVar81;
        fVar102 = -auVar23._0_4_ * fVar102;
        fVar103 = -auVar23._4_4_ * fVar103;
        fVar34 = -auVar23._0_4_ * fVar34;
        fVar122 = -auVar23._4_4_ * fVar122;
        fVar80 = *(float *)*param_3;
        fVar81 = *(float *)(*param_3 + 4);
        fVar87 = *(float *)(*param_3 + 0xc);
        local_f0[6] = fVar34 + *(float *)(*param_3 + 8);
        local_f0[7] = fVar122 + fVar87;
        local_f0[4] = fVar102 + fVar80;
        local_f0[5] = fVar103 + fVar81;
        fVar80 = *(float *)*param_4;
        fVar81 = *(float *)(*param_4 + 4);
        fVar87 = *(float *)(*param_4 + 0xc);
        local_f0[10] = fVar35 + *(float *)(*param_4 + 8);
        local_f0[0xb] = fVar18 + fVar87;
        local_f0[8] = fVar19 + fVar80;
        local_f0[9] = fVar33 + fVar81;
        fVar80 = *(float *)*param_4;
        fVar81 = *(float *)(*param_4 + 4);
        fVar87 = *(float *)(*param_4 + 0xc);
        local_f0[0xe] = fVar34 + *(float *)(*param_4 + 8);
        local_f0[0xf] = fVar122 + fVar87;
        local_f0[0xc] = fVar102 + fVar80;
        local_f0[0xd] = fVar103 + fVar81;
        auVar23 = *param_5;
        local_f0[0x12] = fVar35 + auVar23._8_4_;
        local_f0[0x13] = fVar18 + auVar23._12_4_;
        local_f0[0x10] = fVar19 + auVar23._0_4_;
        local_f0[0x11] = fVar33 + auVar23._4_4_;
        auVar114._0_8_ = CONCAT44(fVar103 + *(float *)(*param_5 + 4),fVar102 + *(float *)*param_5);
        auVar114._8_4_ = fVar34 + *(float *)(*param_5 + 8);
        auVar114._12_4_ = fVar122 + *(float *)(*param_5 + 0xc);
        *(long *)(local_f0 + 0x16) = auVar114._8_8_;
        *(undefined8 *)(local_f0 + 0x14) = auVar114._0_8_;
        if ((local_d8 & 0x7ffffff800000000) == 0) {
          FUN_02ebb440(&local_e0,PTR_PTR_047d1a50,8);
        }
        if ((int)local_d8 != 8) {
          local_d8 = CONCAT44(local_d8._4_4_,8);
        }
        uVar12 = local_d8;
        *local_e0 = 0x200000000;
        local_e0[1] = 0xffffffff00000004;
        local_e0[2] = 0x500000001;
        local_e0[3] = 0xffffffff00000003;
        local_e0[4] = 0x300000000;
        local_e0[5] = 0xffffffff00000002;
        local_e0[6] = 0x100000000;
        local_e0[7] = 0xffffffff00000003;
        local_e0[8] = 1;
        local_e0[9] = 0xffffffff00000004;
        local_e0[10] = 0x400000001;
        local_e0[0xb] = 0xffffffff00000005;
        local_e0[0xc] = 0x500000002;
        local_e0[0xd] = 0xffffffff00000004;
        uVar36 = NEON_fmov(0x3f800000,4);
        local_e0[0xe] = 0x300000002;
        local_e0[0xf] = 0xffffffff00000005;
        uVar22 = CONCAT44(param_1,param_1) ^
                 (CONCAT44(param_1,param_1) ^ uVar36) &
                 CONCAT44(-(uint)(param_1 <= 0.0),-(uint)(param_1 <= 0.0));
        if ((int)local_e8 < 1) {
          auVar71._8_4_ = 0x7f7fffee;
          auVar71._0_8_ = 0x7f7fffee7f7fffee;
          auVar71._12_4_ = 0x7f7fffee;
          auVar73._8_4_ = 0xff7fffee;
          auVar73._0_8_ = 0xff7fffeeff7fffee;
          auVar73._12_4_ = 0xff7fffee;
        }
        else {
          if ((int)local_e8 == 1) {
            auVar73._8_4_ = 0xff7fffee;
            auVar73._0_8_ = 0xff7fffeeff7fffee;
            auVar73._12_4_ = 0xff7fffee;
            lVar15 = 0;
            auVar71._8_4_ = 0x7f7fffee;
            auVar71._0_8_ = 0x7f7fffee7f7fffee;
            auVar71._12_4_ = 0x7f7fffee;
          }
          else {
            auVar73._8_4_ = 0xff7fffee;
            auVar73._0_8_ = 0xff7fffeeff7fffee;
            auVar73._12_4_ = 0xff7fffee;
            auVar71._8_4_ = 0x7f7fffee;
            auVar71._0_8_ = 0x7f7fffee7f7fffee;
            auVar71._12_4_ = 0x7f7fffee;
            lVar15 = 0;
            lVar16 = -(local_e8 & 0xfffffffe);
            do {
              pauVar14 = (undefined1 (*) [16])((long)local_f0 + lVar15);
              lVar15 = lVar15 + 0x20;
              lVar16 = lVar16 + 2;
              auVar23 = *pauVar14;
              auVar114 = pauVar14[1];
              auVar48 = NEON_fmin(auVar23,auVar71,4);
              auVar23 = NEON_fmax(auVar23,auVar73,4);
              auVar71 = NEON_fmin(auVar114,auVar48,4);
              auVar73 = NEON_fmax(auVar114,auVar23,4);
            } while (lVar16 != 0);
          }
          if ((local_e8 & 1) != 0) {
            auVar73 = NEON_fmax(*(undefined1 (*) [16])(lVar15 + (long)local_f0),auVar73,4);
            auVar71 = NEON_fmin(*(undefined1 (*) [16])(lVar15 + (long)local_f0),auVar71,4);
          }
        }
        fVar81 = auVar73._0_4_ - auVar71._0_4_;
        fVar122 = auVar73._4_4_ - auVar71._4_4_;
        fVar87 = auVar73._8_4_ - auVar71._8_4_;
        fVar19 = auVar73._12_4_ - auVar71._12_4_;
        iVar56 = -(uint)((int)local_e8 == 0);
        bVar55 = ~(byte)iVar56;
        bVar64 = ~(byte)((uint)iVar56 >> 8);
        bVar65 = ~(byte)((uint)iVar56 >> 0x10);
        bVar66 = ~(byte)((uint)iVar56 >> 0x18);
        fVar102 = auVar71._0_4_ + fVar81 * 0.5;
        fVar18 = auVar71._4_4_ + fVar122 * 0.5;
        fVar103 = auVar71._8_4_ + fVar87 * 0.5;
        fVar80 = auVar71._12_4_ + fVar19 * 0.5;
        auVar107 = ZEXT816(0);
        fVar34 = (float)uVar22;
        auVar82 = auVar107;
        if (0.0 < fVar34) {
          fVar81 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & bVar66,
                                   CONCAT12((byte)((uint)fVar81 >> 0x10) & bVar65,
                                            CONCAT11((byte)((uint)fVar81 >> 8) & bVar64,
                                                     SUB41(fVar81,0) & bVar55)));
          auVar59._0_8_ =
               CONCAT17((byte)((uint)fVar122 >> 0x18) & bVar66,
                        CONCAT16((byte)((uint)fVar122 >> 0x10) & bVar65,
                                 CONCAT15((byte)((uint)fVar122 >> 8) & bVar64,
                                          CONCAT14(SUB41(fVar122,0) & bVar55,fVar81))));
          auVar59[8] = SUB41(fVar87,0) & bVar55;
          auVar59[9] = (byte)((uint)fVar87 >> 8) & bVar64;
          auVar59[10] = (byte)((uint)fVar87 >> 0x10) & bVar65;
          auVar59[0xb] = (byte)((uint)fVar87 >> 0x18) & bVar66;
          auVar110[0xc] = SUB41(fVar19,0) & bVar55;
          auVar110._0_12_ = auVar59;
          auVar110[0xd] = (byte)((uint)fVar19 >> 8) & bVar64;
          auVar110[0xe] = (byte)((uint)fVar19 >> 0x10) & bVar65;
          auVar110[0xf] = (byte)((uint)fVar19 >> 0x18) & bVar66;
          auVar111._0_4_ = fVar81 * fVar81;
          fVar81 = (float)((ulong)auVar59._0_8_ >> 0x20);
          auVar111._4_4_ = fVar81 * fVar81;
          auVar111._8_4_ = auVar59._8_4_ * auVar59._8_4_;
          auVar111._12_4_ = auVar110._12_4_ * auVar110._12_4_;
          auVar112._8_8_ = _UNK_03cab388;
          auVar112._0_8_ = _DAT_03cab380;
          auVar92._8_8_ = _UNK_03cabbe8;
          auVar92._0_8_ = _DAT_03cabbe0;
          auVar114 = a64_TBL(ZEXT816(0),auVar111,auVar112);
          auVar23 = a64_TBL(ZEXT816(0),auVar111,auVar92);
          fVar81 = fVar34 * 0.33333334;
          auVar82._0_4_ = (auVar114._0_4_ + auVar23._0_4_) * fVar81;
          auVar82._4_4_ = (auVar114._4_4_ + auVar23._4_4_) * fVar81;
          auVar82._8_4_ = (auVar114._8_4_ + auVar23._8_4_) * fVar81;
          auVar82._12_4_ = 0x3f800000;
        }
        auVar128._0_8_ =
             CONCAT17((byte)((uint)fVar18 >> 0x18) & bVar66,
                      CONCAT16((byte)((uint)fVar18 >> 0x10) & bVar65,
                               CONCAT15((byte)((uint)fVar18 >> 8) & bVar64,
                                        CONCAT14(SUB41(fVar18,0) & bVar55,
                                                 CONCAT13((byte)((uint)fVar102 >> 0x18) & bVar66,
                                                          CONCAT12((byte)((uint)fVar102 >> 0x10) &
                                                                   bVar65,CONCAT11((byte)((uint)
                                                  fVar102 >> 8) & bVar64,SUB41(fVar102,0) & bVar55))
                                                  )))));
        auVar128[8] = SUB41(fVar103,0) & bVar55;
        auVar128[9] = (byte)((uint)fVar103 >> 8) & bVar64;
        auVar128[10] = (byte)((uint)fVar103 >> 0x10) & bVar65;
        auVar128[0xb] = (byte)((uint)fVar103 >> 0x18) & bVar66;
        auVar128[0xc] = SUB41(fVar80,0) & bVar55;
        auVar128[0xd] = (byte)((uint)fVar80 >> 8) & bVar64;
        auVar128[0xe] = (byte)((uint)fVar80 >> 0x10) & bVar65;
        auVar128[0xf] = (byte)((uint)fVar80 >> 0x18) & bVar66;
        fVar102 = (float)(uVar36 >> 0x20);
        auVar129 = auVar128;
        if ((int)local_d8 < 1) {
          uVar13 = 0;
          fVar80 = 0.0;
          fVar81 = 0.0;
          fVar18 = 0.0;
          fVar103 = 0.0;
          auVar62 = ZEXT816(0);
        }
        else {
          auVar107 = ZEXT816(0);
          uVar13 = 0;
          auVar62 = ZEXT816(0);
          fVar80 = 0.0;
          fVar81 = 0.0;
          fVar18 = 0.0;
          fVar103 = 0.0;
          uVar17 = 0;
          do {
            piVar1 = (int *)(local_e0 + uVar17 * 2);
            pfVar3 = local_f0 + (long)*piVar1 * 4;
            fVar122 = auVar129._0_4_;
            local_d0[0] = *pfVar3 - fVar122;
            fVar87 = auVar129._4_4_;
            local_d0[1] = pfVar3[1] - fVar87;
            fVar19 = auVar129._8_4_;
            local_d0[2] = pfVar3[2] - fVar19;
            fVar33 = auVar129._12_4_;
            local_d0[3] = pfVar3[3] - fVar33;
            pfVar3 = local_f0 + (long)piVar1[1] * 4;
            fStack_b8 = pfVar3[2] - fVar19;
            fStack_b4 = pfVar3[3] - fVar33;
            local_c0 = *pfVar3 - fVar122;
            fStack_bc = pfVar3[1] - fVar87;
            auVar46._0_4_ = (*pfVar3 - fVar122) - local_d0[0];
            auVar46._4_4_ = (pfVar3[1] - fVar87) - local_d0[1];
            auVar46._8_4_ = (pfVar3[2] - fVar19) - local_d0[2];
            auVar46._12_4_ = (pfVar3[3] - fVar33) - local_d0[3];
            auVar23 = NEON_ext(auVar46,auVar46,4,1);
            pfVar3 = local_f0 + (long)piVar1[2] * 4;
            fStack_a8 = pfVar3[2] - fVar19;
            fStack_a4 = pfVar3[3] - fVar33;
            local_b0 = *pfVar3 - fVar122;
            fStack_ac = pfVar3[1] - fVar87;
            auVar75._0_4_ = (*pfVar3 - fVar122) - local_d0[0];
            auVar75._4_4_ = (pfVar3[1] - fVar87) - local_d0[1];
            auVar75._8_4_ = (pfVar3[2] - fVar19) - local_d0[2];
            auVar75._12_4_ = (pfVar3[3] - fVar33) - local_d0[3];
            auVar114 = NEON_ext(auVar75,auVar75,4,1);
            auVar76._0_4_ = auVar46._0_4_ * auVar114._0_4_ - auVar23._0_4_ * auVar75._0_4_;
            auVar76._4_4_ = auVar46._4_4_ * auVar114._4_4_ - auVar23._4_4_ * auVar75._4_4_;
            auVar76._8_4_ = auVar46._8_4_ * auVar75._0_4_ - auVar46._0_4_ * auVar75._8_4_;
            auVar76._12_4_ = auVar46._12_4_ * auVar75._4_4_ - auVar46._4_4_ * auVar75._12_4_;
            auVar23 = NEON_ext(auVar76,auVar76,4,1);
            fVar122 = auVar23._0_4_;
            fVar87 = auVar23._4_4_;
            fVar19 = fVar122 * fVar122 + fVar87 * fVar87 + auVar76._0_4_ * auVar76._0_4_;
            if (0.0 < fVar19) {
              fVar130 = 0.0;
              fVar125 = 0.0;
              fVar135 = 0.0;
              fVar136 = 0.0;
              fVar137 = 0.0;
              fVar138 = 0.0;
              fVar19 = SQRT(fVar19);
              fVar35 = SQRT(fVar122 * fVar122 + fVar87 * fVar87 + auVar76._0_4_ * auVar76._0_4_);
              local_140 = (float)uVar13;
              fStack_13c = (float)((ulong)uVar13 >> 0x20);
              fStack_128 = auVar107._8_4_;
              fStack_124 = auVar107._12_4_;
              local_130 = auVar107._0_4_;
              fStack_12c = auVar107._4_4_;
              fVar127 = 0.0;
              fVar122 = fVar122 / fVar19;
              fVar87 = fVar87 / fVar35;
              fVar19 = auVar76._0_4_ / fVar19;
              fVar35 = 0.0 / fVar35;
              uVar13 = CONCAT44(ABS(fVar87),ABS(fVar122));
              fVar33 = ABS(fVar19);
              uVar13 = NEON_fmaxp(uVar13,uVar13,4);
              uVar13 = NEON_fmax(CONCAT44(fVar33,fVar33),uVar13,4);
              fVar133 = 0.0;
              fVar134 = 0.0;
              fVar132 = 0.0;
              fVar67 = 0.0;
              lVar15 = 0;
              cVar2 = PTR_DAT_047d1a18
                      [(-(uint)((float)((ulong)uVar13 >> 0x20) <= ABS(fVar87)) & 2) +
                       (uint)((float)uVar13 <= ABS(fVar122)) | -(uint)((float)uVar13 <= fVar33) & 4]
              ;
              pauVar14 = (undefined1 (*) [16])local_d0;
              fVar33 = fVar125;
              do {
                if (cVar2 == '\x01') {
                  auVar23 = *pauVar14;
                  auVar77._8_8_ = _UNK_03cabbc8;
                  auVar77._0_8_ = _DAT_03cabbc0;
LAB_03190cb8:
                  auVar23 = a64_TBL(ZEXT816(0),auVar23,auVar77);
                  fVar123 = auVar23._0_4_;
                  fVar97 = auVar23._4_4_;
                  auVar23 = a64_TBL(ZEXT816(0),
                                    *(undefined1 (*) [16])
                                     (local_d0 + (long)*(int *)((long)&DAT_03cabde0 + lVar15) * 4),
                                    auVar77);
                  uVar13 = auVar23._0_8_;
                }
                else {
                  if (cVar2 == '\0') {
                    auVar23 = *pauVar14;
                    auVar77._8_8_ = _UNK_03cabbd8;
                    auVar77._0_8_ = _DAT_03cabbd0;
                    goto LAB_03190cb8;
                  }
                  fVar123 = (float)*(undefined8 *)*pauVar14;
                  uVar13 = *(undefined8 *)
                            (local_d0 + (long)*(int *)((long)&DAT_03cabde0 + lVar15) * 4);
                  fVar97 = (float)((ulong)*(undefined8 *)*pauVar14 >> 0x20);
                }
                fVar99 = (float)uVar13;
                fVar98 = fVar99 * fVar99;
                fVar101 = (float)((ulong)uVar13 >> 0x20);
                fVar100 = fVar101 * fVar101;
                lVar15 = lVar15 + 4;
                fVar20 = fVar97 * fVar97;
                pauVar14 = pauVar14 + 1;
                uVar13 = NEON_fmov(0x40400000,4);
                fVar96 = fVar101 - fVar97;
                fVar139 = (float)uVar13;
                fVar95 = fVar123 * (fVar99 + fVar99);
                fVar88 = fVar123 * fVar123;
                fVar57 = fVar99 - fVar123;
                uVar13 = NEON_fmov(0x40800000,4);
                fVar68 = fVar88 + (fVar123 + fVar99) * fVar99;
                fVar121 = fVar88 + fVar139 * fVar98 + fVar95;
                fVar109 = fVar97 * fVar20;
                fVar21 = fVar20 + (fVar97 + fVar101) * fVar101;
                fVar58 = (float)uVar13;
                fVar89 = fVar88 * fVar139 + fVar98 + fVar95;
                fVar95 = fVar123 * fVar88 + fVar68 * fVar99;
                fVar104 = fVar109 + fVar21 * fVar101;
                fVar135 = fVar135 + fVar96 * fVar68;
                fVar136 = fVar136 + (fVar101 - fVar97) * fVar95;
                fVar137 = fVar137 + fVar96 * (fVar88 * fVar88 + fVar95 * fVar99);
                fVar138 = fVar138 + (fVar101 - fVar97) * 2.0;
                fVar33 = fVar33 + fVar96 * (fVar123 + fVar99);
                fVar132 = fVar132 + fVar57 * fVar21;
                fVar67 = fVar67 + (fVar99 - fVar123) * fVar104;
                fVar133 = fVar133 + fVar57 * (fVar20 * fVar20 + fVar104 * fVar101);
                fVar134 = fVar134 + (fVar99 - fVar123) * 2.0;
                fVar130 = fVar130 + fVar96 * (fVar121 * fVar101 + fVar97 * fVar89);
                fVar127 = fVar127 + fVar96 * ((fVar99 * fVar98 * fVar58 + fVar123 * fVar121) *
                                              fVar101 +
                                             fVar97 * (fVar123 * fVar88 * fVar58 + fVar89 * fVar99))
                ;
                fVar125 = fVar125 + fVar57 * ((fVar109 +
                                              fVar20 * (fVar101 + fVar101) +
                                              fVar101 * fVar100 * fVar58 +
                                              fVar97 * fVar139 * fVar100) * fVar99 +
                                             fVar123 * (fVar109 * fVar58 +
                                                       fVar20 * fVar139 * fVar101 +
                                                       fVar101 * fVar100 +
                                                       fVar97 * (fVar100 + fVar100)));
              } while (lVar15 != 0xc);
              fVar135 = fVar135 * (float)_DAT_03cabaa0;
              fVar136 = fVar136 * (float)((ulong)_DAT_03cabaa0 >> 0x20);
              fVar137 = fVar137 * (float)_UNK_03cabaa8;
              fVar132 = fVar132 * (float)_DAT_03cab6b0;
              fVar67 = fVar67 * (float)((ulong)_DAT_03cab6b0 >> 0x20);
              fVar133 = fVar133 * (float)_UNK_03cab6b8;
              auVar131._4_4_ = fVar87;
              auVar131._0_4_ = fVar122;
              auVar131._8_4_ = fVar19;
              auVar10._12_4_ = fVar35;
              auVar10._0_12_ = auVar131;
              fVar127 = fVar127 * 0.016666668;
              fVar125 = fVar125 * -0.016666668;
              fVar123 = local_d0[2] * fVar19 + local_d0[0] * fVar122 + local_d0[1] * fVar87;
              if (cVar2 == '\x01') {
                auVar28._8_8_ = _UNK_03cabbc8;
                auVar28._0_8_ = _DAT_03cabbc0;
LAB_03190ec0:
                auVar23 = a64_TBL(ZEXT816(0),auVar10,auVar28);
                auVar131 = auVar23._0_12_;
              }
              else if (cVar2 == '\0') {
                auVar28._8_8_ = _UNK_03cabbd8;
                auVar28._0_8_ = _DAT_03cabbd0;
                goto LAB_03190ec0;
              }
              fVar98 = auVar131._0_4_;
              fVar100 = auVar131._4_4_;
              fVar88 = fVar100 * fVar100;
              fVar101 = fVar133 * fVar100;
              fVar97 = fVar136 * fVar98;
              fVar89 = fVar137 * fVar98;
              fVar20 = fVar100 * (fVar98 + fVar98);
              fVar99 = fVar135 * fVar98 + fVar132 * fVar100;
              fVar21 = (float)uVar36 / auVar131._8_4_;
              fVar95 = fVar102 / auVar131._8_4_;
              fVar57 = fVar33 * 0.5 * -fVar123;
              uVar13 = NEON_fmov(0xc0400000,4);
              fVar96 = fVar21 * fVar21;
              fVar58 = fVar67 * fVar100 * fVar100 + fVar98 * fVar97 + fVar130 * 0.041666668 * fVar20
              ;
              fVar68 = -fVar96;
              fVar33 = fVar21 * fVar96 * (fVar58 - fVar123 * (fVar57 + fVar99 + fVar99));
              auVar84._0_4_ = fVar135 * fVar21;
              auVar84._4_4_ = fVar136 * fVar95;
              auVar84._8_4_ = fVar137 * fVar21;
              auVar84._12_4_ = fVar138 * (float)((ulong)_UNK_03cabaa8 >> 0x20) * fVar95;
              auVar93._0_4_ = fVar132 * fVar21;
              auVar93._4_4_ = fVar67 * fVar95;
              auVar93._8_4_ = fVar133 * fVar21;
              auVar93._12_4_ = fVar134 * (float)((ulong)_UNK_03cab6b8 >> 0x20) * fVar95;
              auVar126._12_4_ = 0x40000000;
              auVar126._8_4_ =
                   fVar96 * fVar68 *
                   (fVar123 * fVar123 * (fVar57 + fVar139 * fVar99) +
                   fVar123 * (float)uVar13 * fVar58 +
                   fVar88 * fVar101 +
                   fVar125 * fVar139 * fVar98 * fVar88 +
                   fVar98 * fVar98 * fVar89 + fVar127 * fVar139 * fVar98 * fVar98 * fVar100);
              fVar97 = fVar130 * 0.041666668 * fVar100 + fVar97;
              auVar124._12_4_ = 0x40000000;
              auVar124._8_4_ = fVar33;
              auVar124._4_4_ = auVar93._4_4_;
              auVar124._0_4_ = auVar84._4_4_;
              auVar23 = NEON_ext(auVar84,auVar84,8,1);
              auVar114 = NEON_ext(auVar93,auVar93,8,1);
              auVar126._4_4_ = auVar114._0_4_;
              auVar126._0_4_ = auVar23._0_4_;
              if (cVar2 != -1) {
                if (cVar2 == '\0') {
                  fVar33 = (fVar57 + fVar99) * fVar68;
                }
                else if (cVar2 == '\x01') {
                  fVar33 = auVar93._0_4_;
                }
                else {
                  fVar33 = auVar84._0_4_;
                }
              }
              fVar130 = fVar127 * fVar21;
              fVar68 = ((fVar125 * fVar98 + fVar101) - fVar123 * fVar67) * fVar68;
              fVar125 = fVar21 * fVar96 *
                        ((fVar125 * fVar88 + fVar98 * fVar89 + fVar127 * fVar20) -
                        fVar123 * ((fVar97 + fVar97) - fVar123 * fVar135));
              if (cVar2 == '\x01') {
                auVar30._8_8_ = _UNK_03cabbd8;
                auVar30._0_8_ = _DAT_03cabbd0;
                auVar124 = a64_TBL(ZEXT816(0),auVar124,auVar30);
                auVar126 = a64_TBL(ZEXT816(0),auVar126,auVar30);
                fVar127 = fVar130;
                fVar132 = fVar68;
              }
              else if (cVar2 == '\0') {
                auVar29._8_8_ = _UNK_03cabbc8;
                auVar29._0_8_ = _DAT_03cabbc0;
                auVar124 = a64_TBL(ZEXT816(0),auVar124,auVar29);
                auVar126 = a64_TBL(ZEXT816(0),auVar126,auVar29);
                fVar127 = fVar68;
                fVar132 = fVar125;
                fVar125 = fVar130;
              }
              else {
                fVar127 = fVar125;
                fVar132 = fVar130;
                fVar125 = fVar68;
              }
              fStack_150 = auVar62._0_4_;
              fStack_14c = auVar62._4_4_;
              fStack_148 = auVar62._8_4_;
              fStack_144 = auVar62._12_4_;
              auVar129._8_8_ = auVar128._8_8_;
              auVar129._0_8_ = auVar128._0_8_;
              fVar18 = fVar18 + fVar122 * auVar126._0_4_;
              fVar103 = fVar103 + fVar87 * auVar126._4_4_;
              fVar80 = fVar80 + fVar19 * auVar126._8_4_;
              fVar81 = fVar81 + fVar35 * auVar126._12_4_;
              uVar13 = CONCAT44(fStack_13c + fVar122 * fVar33,local_140 + fVar122 * fVar33);
              auVar62._0_4_ = fStack_150 + fVar122 * auVar124._0_4_;
              auVar62._4_4_ = fStack_14c + fVar87 * auVar124._4_4_;
              auVar62._8_4_ = fStack_148 + fVar19 * auVar124._8_4_;
              auVar62._12_4_ = fStack_144 + fVar35 * auVar124._12_4_;
              auVar107._0_4_ = local_130 + fVar122 * fVar132;
              auVar107._4_4_ = fStack_12c + fVar87 * fVar125;
              auVar107._8_4_ = fStack_128 + fVar19 * fVar127;
              auVar107._12_4_ = fStack_124 + fVar35 * fVar127;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != (local_d8 & 0xffffffff));
        }
        local_1c0 = (float)DAT_03cab620;
        fStack_1bc = (float)((ulong)DAT_03cab620 >> 0x20);
        fStack_1b8 = (float)DAT_03cab628;
        fStack_1b4 = (float)((ulong)DAT_03cab628 >> 0x20);
        fVar122 = auVar82._0_4_;
        auVar45._0_4_ = fVar122 * local_1c0;
        fVar87 = auVar82._4_4_;
        auVar45._4_4_ = fVar87 * fStack_1bc;
        fVar19 = auVar82._8_4_;
        auVar45._8_4_ = fVar19 * fStack_1b8;
        fVar33 = auVar82._12_4_;
        auVar45._12_4_ = fVar33 * fStack_1b4;
        local_1d0 = (float)_DAT_03cabe60;
        fStack_1cc = (float)((ulong)_DAT_03cabe60 >> 0x20);
        fStack_1c8 = (float)_UNK_03cabe68;
        fStack_1c4 = (float)((ulong)_UNK_03cabe68 >> 0x20);
        auVar116._0_4_ = fVar122 * local_1d0;
        auVar116._4_4_ = fVar87 * fStack_1cc;
        auVar116._8_4_ = fVar19 * fStack_1c8;
        auVar116._12_4_ = fVar33 * fStack_1c4;
        auVar39._0_4_ = fVar122 * (float)_DAT_03caa5b0;
        auVar39._4_4_ = fVar87 * (float)((ulong)_DAT_03caa5b0 >> 0x20);
        auVar39._8_4_ = fVar19 * (float)_UNK_03caa5b8;
        auVar39._12_4_ = fVar33 * (float)((ulong)_UNK_03caa5b8 >> 0x20);
        fVar122 = (float)uVar13;
        if (0.0 < fVar122) {
          fVar87 = (float)uVar36 / fVar122;
          fVar19 = (float)((ulong)uVar13 >> 0x20);
          fVar102 = fVar102 / fVar19;
          auVar31._0_4_ = fVar18 * 0.33333334;
          auVar31._4_4_ = fVar103 * 0.33333334;
          auVar31._8_4_ = fVar80 * 0.33333334;
          auVar31._12_4_ = fVar81 * 0.33333334;
          fVar18 = (float)(uVar22 >> 0x20);
          auVar63._8_8_ = _UNK_03cabbd8;
          auVar63._0_8_ = _DAT_03cabbd0;
          auVar40._0_4_ = fVar87 * auVar62._0_4_ * 0.5;
          auVar40._4_4_ = fVar102 * auVar62._4_4_ * 0.5;
          auVar40._8_4_ = fVar87 * auVar62._8_4_ * 0.5;
          auVar40._12_4_ = fVar102 * auVar62._12_4_ * 0.5;
          auVar51._8_8_ = _UNK_03cabbc8;
          auVar51._0_8_ = _DAT_03cabbc0;
          auVar73 = a64_TBL(ZEXT816(0),auVar31,auVar63);
          auVar23 = a64_TBL(ZEXT816(0),auVar31,auVar51);
          fVar122 = fVar34 / fVar122;
          fVar19 = fVar18 / fVar19;
          fVar102 = -fVar19;
          auVar85._8_8_ = _UNK_03cab388;
          auVar85._0_8_ = _DAT_03cab380;
          auVar94._8_8_ = _UNK_03cabbe8;
          auVar94._0_8_ = _DAT_03cabbe0;
          auVar78._0_4_ = auVar40._0_4_ * auVar40._0_4_;
          auVar78._4_4_ = auVar40._4_4_ * auVar40._4_4_;
          auVar78._8_4_ = auVar40._8_4_ * auVar40._8_4_;
          auVar78._12_4_ = auVar40._12_4_ * auVar40._12_4_;
          auVar90 = a64_TBL(ZEXT816(0),auVar78,auVar85);
          auVar48 = a64_TBL(ZEXT816(0),auVar78,auVar94);
          auVar114 = a64_TBL(ZEXT816(0),auVar40,auVar63);
          auVar47._0_4_ = -fVar122 * auVar107._0_4_ * 0.5 + fVar34 * auVar40._0_4_ * auVar114._0_4_;
          auVar47._4_4_ = fVar102 * auVar107._4_4_ * 0.5 + fVar18 * auVar40._4_4_ * auVar114._4_4_;
          auVar47._8_4_ = -fVar122 * auVar107._8_4_ * 0.5 + fVar34 * auVar40._8_4_ * auVar114._8_4_;
          auVar47._12_4_ =
               fVar102 * auVar107._12_4_ * 0.5 + fVar18 * auVar40._12_4_ * auVar114._12_4_;
          auVar52._8_8_ = _UNK_03caba78;
          auVar52._0_8_ = _DAT_03caba70;
          auVar32._0_4_ =
               fVar122 * (auVar73._0_4_ + auVar23._0_4_) - fVar34 * (auVar90._0_4_ + auVar48._0_4_);
          auVar32._4_4_ =
               fVar19 * (auVar73._4_4_ + auVar23._4_4_) - fVar18 * (auVar90._4_4_ + auVar48._4_4_);
          auVar32._8_4_ =
               fVar122 * (auVar73._8_4_ + auVar23._8_4_) - fVar34 * (auVar90._8_4_ + auVar48._8_4_);
          auVar23 = *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x40);
          auVar73 = a64_TBL(ZEXT816(0),auVar47,auVar52);
          auVar32._12_4_ = 0;
          auVar73 = auVar73 ^ (auVar73 ^ auVar32) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x90);
          auVar53._8_8_ = _UNK_03cab138;
          auVar53._0_8_ = _DAT_03cab130;
          auVar86._8_8_ = _UNK_03caa768;
          auVar86._0_8_ = _DAT_03caa760;
          auVar48 = a64_TBL(ZEXT816(0),auVar47,auVar53);
          auVar114 = a64_TBL(ZEXT816(0),auVar47,auVar86);
          auVar48 = auVar48 ^ (auVar48 ^ auVar32) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xa0);
          auVar32 = auVar32 ^ (auVar32 ^ auVar114) &
                              ~*(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xc0);
          auVar114 = *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x20);
          auVar90 = auVar73 ^ (auVar73 ^ auVar48) & auVar114;
          auVar90 = auVar90 ^ (auVar90 ^ auVar32) & auVar23;
          auVar45 = auVar45 ^ (auVar45 ^ auVar116) & auVar114;
          auVar45 = auVar45 ^ (auVar45 ^ auVar39) & auVar23;
          fVar34 = auVar45._0_4_ * 0.1;
          fVar102 = auVar45._4_4_ * 0.1;
          fVar18 = auVar45._8_4_ * 0.1;
          fVar103 = auVar45._12_4_ * 0.1;
          auVar54._0_4_ = -(uint)(auVar90._0_4_ < fVar34);
          auVar54._4_4_ = -(uint)(auVar90._4_4_ < fVar102);
          auVar54._8_4_ = -(uint)(auVar90._8_4_ < fVar18);
          auVar54._12_4_ = -(uint)(auVar90._12_4_ < fVar103);
          auVar9._4_4_ = fVar102;
          auVar9._0_4_ = fVar34;
          auVar9._8_4_ = fVar18;
          auVar9._12_4_ = fVar103;
          auVar90 = auVar90 ^ (auVar90 ^ auVar9) & auVar54;
          auVar45 = auVar73 ^ (auVar73 ^ auVar90) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x10);
          auVar32 = auVar32 ^ (auVar32 ^ auVar90) & auVar23;
          auVar23 = ZEXT816(0);
          auVar48 = auVar48 ^ (auVar48 ^ auVar90) & auVar114;
          uVar69 = (uint)(byte)((byte)auVar54._0_4_ & (byte)_DAT_03cab270);
          auVar70._0_8_ =
               CONCAT17((byte)((uint)auVar54._4_4_ >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                        (uint7)CONCAT14((byte)auVar54._4_4_ & (byte)((ulong)_DAT_03cab270 >> 0x20),
                                        uVar69));
          auVar70[8] = (byte)auVar54._8_4_ & (byte)_UNK_03cab278;
          auVar70[9] = (byte)((uint)auVar54._8_4_ >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
          auVar70[10] = (byte)((uint)auVar54._8_4_ >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
          auVar70[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
          auVar79[0xc] = (byte)auVar54._12_4_ & (byte)((ulong)_UNK_03cab278 >> 0x20);
          auVar79._0_12_ = auVar70;
          auVar79[0xd] = (byte)((uint)auVar54._12_4_ >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
          auVar79[0xe] = (byte)((uint)auVar54._12_4_ >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30)
          ;
          auVar79[0xf] = (byte)((uint)auVar54._12_4_ >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38)
          ;
          uVar69 = uVar69 + (int)((ulong)auVar70._0_8_ >> 0x20) + auVar70._8_4_ + auVar79._12_4_;
          if ((uVar69 & 1) == 0) {
            auVar116 = auVar48;
            auVar39 = auVar32;
          }
          else {
            auVar114 = NEON_fmax(auVar45,auVar23,4);
            auVar116._4_12_ = auVar48._4_12_;
            auVar116._0_4_ = (float)auVar114._4_4_;
            auVar39._4_12_ = auVar32._4_12_;
            auVar39._0_4_ = (float)auVar114._8_4_;
            auVar114 = NEON_ext(auVar45,auVar114,0xc,1);
            auVar73 = NEON_ext(auVar114,auVar45,4,1);
            auVar114 = NEON_ext(auVar114,auVar114,8,1);
            auVar45 = NEON_ext(auVar73,auVar114,0xc,1);
          }
          auVar41._0_4_ = auVar40._0_4_ + auVar129._0_4_;
          auVar41._4_4_ = auVar40._4_4_ + auVar129._4_4_;
          auVar41._8_4_ = auVar40._8_4_ + auVar129._8_4_;
          auVar41._12_4_ = auVar40._12_4_ + auVar129._12_4_;
          if ((uVar69 >> 1 & 1) != 0) {
            auVar114 = NEON_fmax(auVar48,auVar23,4);
            auVar73 = NEON_rev64(auVar114,4);
            auVar45._4_4_ = (float)auVar114._0_4_;
            auVar117._4_12_ = auVar116._4_12_;
            auVar117._0_4_ = auVar73._4_4_;
            auVar119._12_4_ = auVar116._12_4_;
            auVar119._0_8_ = auVar117._0_8_;
            auVar119._8_4_ = auVar73._12_4_;
            auVar118._8_8_ = auVar119._8_8_;
            auVar118._4_4_ = auVar116._4_4_;
            auVar118._0_4_ = auVar73._4_4_;
            auVar116._0_12_ = auVar118._0_12_;
            auVar116._12_4_ = (float)auVar119._12_4_;
            auVar39._4_4_ = (float)auVar114._8_4_;
          }
          auVar129 = auVar129 ^ (auVar129 ^ auVar41) & ~auVar54;
          if ((uVar69 >> 2 & 1) != 0) {
            auVar23 = NEON_fmax(auVar32,auVar23,4);
            auVar114 = NEON_ext(auVar39,auVar23,8,1);
            auVar45._8_4_ = (float)auVar23._0_4_;
            auVar39 = NEON_ext(auVar114,auVar114,8,1);
            auVar116._8_4_ = (float)auVar23._4_4_;
          }
        }
        uVar22 = local_d8 >> 0x20;
        local_d8 = uVar22 << 0x20;
        if ((local_e0 != (undefined8 *)0x0) && (-1 < (long)uVar12)) {
          (**(code **)(*(long *)puVar11 + 0x20))(puVar11,local_e0,uVar22 << 4);
        }
        uVar12 = local_e8;
        local_d8 = CONCAT44(0x80000000,(int)local_d8);
        uVar22 = (ulong)local_e8._4_4_;
        local_e0 = (undefined8 *)0x0;
        local_e8 = (ulong)local_e8._4_4_ << 0x20;
        if ((-1 < (long)uVar12) && (local_f0 != (float *)0x0)) {
          (**(code **)(*(long *)puVar11 + 0x20))(puVar11,local_f0,uVar22 << 4);
        }
      }
      else {
        auVar50._8_8_ = _UNK_03cab388;
        auVar50._0_8_ = _DAT_03cab380;
        auVar37._8_8_ = _UNK_03cabbe8;
        auVar37._0_8_ = _DAT_03cabbe0;
        auVar129._0_4_ = (fVar87 + fVar34 + fVar125) * 0.33333334;
        auVar129._4_4_ = (fVar19 + fVar18 + fVar127) * 0.33333334;
        auVar129._8_4_ = (fVar33 + fVar80 + fVar130) * 0.33333334;
        auVar129._12_4_ = (fVar35 + fVar81 + fVar132) * 0.33333334;
        auVar26._0_4_ = auVar129._0_4_ * auVar129._0_4_;
        auVar26._4_4_ = auVar129._4_4_ * auVar129._4_4_;
        auVar26._8_4_ = auVar129._8_4_ * auVar129._8_4_;
        auVar26._12_4_ = auVar129._12_4_ * auVar129._12_4_;
        auVar44._8_8_ = _UNK_03cab138;
        auVar44._0_8_ = _DAT_03cab130;
        auVar61._8_8_ = _UNK_03cab158;
        auVar61._0_8_ = _DAT_03cab150;
        auVar73 = a64_TBL(ZEXT816(0),auVar26,auVar50);
        auVar23 = a64_TBL(ZEXT816(0),auVar26,auVar37);
        auVar48 = a64_TBL(ZEXT816(0),auVar129,auVar44);
        auVar114 = a64_TBL(ZEXT816(0),auVar129,auVar61);
        auVar27._0_4_ = (auVar73._0_4_ + auVar23._0_4_) * param_1;
        auVar27._4_4_ = (auVar73._4_4_ + auVar23._4_4_) * param_1;
        auVar27._8_4_ = (auVar73._8_4_ + auVar23._8_4_) * param_1;
        auVar27._12_4_ = 0;
        auVar38._0_4_ = -param_1 * auVar48._0_4_ * auVar114._0_4_;
        auVar38._4_4_ = -param_1 * auVar48._4_4_ * auVar114._4_4_;
        auVar38._8_4_ = -param_1 * auVar48._8_4_ * auVar114._8_4_;
        auVar38._12_4_ = -param_1 * auVar48._12_4_ * auVar114._12_4_;
        auVar45 = a64_TBL(ZEXT816(0),auVar38,auVar44);
        auVar116 = auVar38 ^ (auVar38 ^ auVar27) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xa0);
        auVar45 = auVar45 ^ (auVar45 ^ auVar27) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x90);
        auVar39 = a64_TBL(ZEXT816(0),auVar38,auVar61);
        auVar39 = auVar39 ^ (auVar39 ^ auVar27) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xc0);
      }
    }
    else {
      auVar83._8_8_ = _UNK_03cab138;
      auVar83._0_8_ = _DAT_03cab130;
      uVar105 = (undefined4)_UNK_03cab158;
      uVar106 = (undefined4)((ulong)_UNK_03cab158 >> 0x20);
      auVar129._0_4_ = (fVar87 + fVar34 + fVar125) * 0.33333334;
      auVar129._4_4_ = (fVar19 + fVar18 + fVar127) * 0.33333334;
      auVar129._8_4_ = (fVar33 + fVar80 + fVar130) * 0.33333334;
      auVar129._12_4_ = (fVar35 + fVar81 + fVar132) * 0.33333334;
      auVar4._8_4_ = uVar105;
      auVar4._0_8_ = _DAT_03cab150;
      auVar4._12_4_ = uVar106;
      auVar110 = a64_TBL(ZEXT816(0),auVar23,auVar4);
      auVar48 = a64_TBL(ZEXT816(0),auVar23,auVar83);
      auVar90 = a64_TBL(ZEXT816(0),auVar73,auVar83);
      auVar5._8_4_ = uVar105;
      auVar5._0_8_ = _DAT_03cab150;
      auVar5._12_4_ = uVar106;
      auVar82 = a64_TBL(ZEXT816(0),auVar73,auVar5);
      auVar72._0_4_ = auVar129._0_4_ * auVar129._0_4_;
      auVar72._4_4_ = auVar129._4_4_ * auVar129._4_4_;
      auVar72._8_4_ = auVar129._8_4_ * auVar129._8_4_;
      auVar72._12_4_ = auVar129._12_4_ * auVar129._12_4_;
      fVar102 = param_1 * 0.083333336;
      fVar103 = param_1 * 0.083333336;
      auVar111 = NEON_fmov(0x41100000,4);
      auVar91 = a64_TBL(ZEXT816(0),auVar129,auVar83);
      auVar6._8_4_ = uVar105;
      auVar6._0_8_ = _DAT_03cab150;
      auVar6._12_4_ = uVar106;
      auVar107 = a64_TBL(ZEXT816(0),auVar129,auVar6);
      auVar108._8_8_ = _UNK_03cab388;
      auVar108._0_8_ = _DAT_03cab380;
      auVar115._8_8_ = _UNK_03cabbe8;
      auVar115._0_8_ = _DAT_03cabbe0;
      auVar112 = a64_TBL(ZEXT816(0),auVar72,auVar108);
      auVar73 = a64_TBL(ZEXT816(0),auVar72,auVar115);
      auVar71 = a64_TBL(ZEXT816(0),auVar114,auVar83);
      auVar7._8_4_ = uVar105;
      auVar7._0_8_ = _DAT_03cab150;
      auVar7._12_4_ = uVar106;
      auVar23 = a64_TBL(ZEXT816(0),auVar114,auVar7);
      auVar113._8_8_ = _UNK_03cabbd8;
      auVar113._0_8_ = _DAT_03cabbd0;
      auVar114 = a64_TBL(ZEXT816(0),auVar129,auVar113);
      auVar42._0_4_ =
           fVar102 * (fVar87 * fVar87 +
                     fVar34 * fVar34 + fVar125 * fVar125 + auVar72._0_4_ * auVar111._0_4_);
      auVar42._4_4_ =
           fVar103 * (fVar19 * fVar19 +
                     fVar18 * fVar18 + fVar127 * fVar127 + auVar72._4_4_ * auVar111._4_4_);
      auVar42._8_4_ =
           fVar102 * (fVar33 * fVar33 +
                     fVar80 * fVar80 + fVar130 * fVar130 + auVar72._8_4_ * auVar111._8_4_);
      auVar42._12_4_ =
           fVar103 * (fVar35 * fVar35 +
                     fVar81 * fVar81 + fVar132 * fVar132 + auVar72._12_4_ * auVar111._12_4_);
      auVar60._0_4_ = auVar129._0_4_ * auVar114._0_4_ * param_1;
      auVar60._4_4_ = auVar129._4_4_ * auVar114._4_4_ * param_1;
      auVar60._8_4_ = auVar129._8_4_ * auVar114._8_4_ * param_1;
      auVar60._12_4_ = auVar129._12_4_ * auVar114._12_4_ * param_1;
      auVar24._0_4_ =
           -fVar102 *
           (auVar91._0_4_ * auVar107._0_4_ * auVar111._0_4_ + auVar90._0_4_ * auVar82._0_4_ +
            auVar71._0_4_ * auVar23._0_4_ + auVar48._0_4_ * auVar110._0_4_);
      auVar24._4_4_ =
           -fVar103 *
           (auVar91._4_4_ * auVar107._4_4_ * auVar111._4_4_ + auVar90._4_4_ * auVar82._4_4_ +
            auVar71._4_4_ * auVar23._4_4_ + auVar48._4_4_ * auVar110._4_4_);
      auVar24._8_4_ =
           -fVar102 *
           (auVar91._8_4_ * auVar107._8_4_ * auVar111._8_4_ + auVar90._8_4_ * auVar82._8_4_ +
            auVar71._8_4_ * auVar23._8_4_ + auVar48._8_4_ * auVar110._8_4_);
      auVar24._12_4_ =
           -fVar103 *
           (auVar91._12_4_ * auVar107._12_4_ * auVar111._12_4_ + auVar90._12_4_ * auVar82._12_4_ +
            auVar71._12_4_ * auVar23._12_4_ + auVar48._12_4_ * auVar110._12_4_);
      auVar114 = a64_TBL(ZEXT816(0),auVar42,auVar115);
      auVar23 = a64_TBL(ZEXT816(0),auVar42,auVar108);
      auVar43._0_4_ = auVar23._0_4_ + auVar114._0_4_;
      auVar43._4_4_ = auVar23._4_4_ + auVar114._4_4_;
      auVar43._8_4_ = auVar23._8_4_ + auVar114._8_4_;
      auVar49._0_4_ = -param_1 * (auVar112._0_4_ + auVar73._0_4_);
      auVar49._4_4_ = -param_1 * (auVar112._4_4_ + auVar73._4_4_);
      auVar49._8_4_ = -param_1 * (auVar112._8_4_ + auVar73._8_4_);
      auVar74._8_8_ = _UNK_03caba78;
      auVar74._0_8_ = _DAT_03caba70;
      auVar43._12_4_ = 0;
      auVar49._12_4_ = 0;
      auVar73 = a64_TBL(ZEXT816(0),auVar60,auVar83);
      auVar114 = a64_TBL(ZEXT816(0),auVar60,auVar74);
      auVar23 = a64_TBL(ZEXT816(0),auVar24,auVar83);
      auVar73 = auVar73 ^ (auVar73 ^ auVar49) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xa0);
      auVar8._8_4_ = uVar105;
      auVar8._0_8_ = _DAT_03cab150;
      auVar8._12_4_ = uVar106;
      auVar48 = a64_TBL(ZEXT816(0),auVar24,auVar8);
      auVar24 = auVar24 ^ (auVar24 ^ auVar43) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xa0);
      auVar114 = auVar114 ^ (auVar114 ^ auVar49) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x90);
      auVar23 = auVar23 ^ (auVar23 ^ auVar43) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x90);
      auVar116._0_4_ = auVar24._0_4_ + auVar73._0_4_;
      auVar116._4_4_ = auVar24._4_4_ + auVar73._4_4_;
      auVar116._8_4_ = auVar24._8_4_ + auVar73._8_4_;
      auVar116._12_4_ = auVar24._12_4_ + auVar73._12_4_;
      auVar25._8_8_ = _UNK_03caa768;
      auVar25._0_8_ = _DAT_03caa760;
      auVar45._0_4_ = auVar23._0_4_ + auVar114._0_4_;
      auVar45._4_4_ = auVar23._4_4_ + auVar114._4_4_;
      auVar45._8_4_ = auVar23._8_4_ + auVar114._8_4_;
      auVar45._12_4_ = auVar23._12_4_ + auVar114._12_4_;
      auVar43 = auVar43 ^ (auVar43 ^ auVar48) & ~*(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xc0);
      auVar23 = a64_TBL(ZEXT816(0),auVar60,auVar25);
      auVar23 = auVar23 ^ (auVar23 ^ auVar49) & *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0xc0);
      auVar39._0_4_ = auVar43._0_4_ + auVar23._0_4_;
      auVar39._4_4_ = auVar43._4_4_ + auVar23._4_4_;
      auVar39._8_4_ = auVar43._8_4_ + auVar23._8_4_;
      auVar39._12_4_ = auVar43._12_4_ + auVar23._12_4_;
    }
    uVar13 = 0;
    *(long *)(param_6 + 0xe) = auVar116._8_8_;
    *(long *)(param_6 + 0xc) = auVar116._0_8_;
    *(long *)(param_6 + 0x12) = auVar39._8_8_;
    *(long *)(param_6 + 0x10) = auVar39._0_8_;
    *param_6 = fVar120 * 0.5 * param_2;
    param_6[1] = param_1;
    *(long *)(param_6 + 6) = auVar129._8_8_;
    *(long *)(param_6 + 4) = auVar129._0_8_;
    *(long *)(param_6 + 10) = auVar45._8_8_;
    *(long *)(param_6 + 8) = auVar45._0_8_;
  }
  return uVar13;
}


