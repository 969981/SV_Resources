/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d20bf8; name: FUN_00d20bf8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d20bf8(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined3 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined5 uVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  long *plVar18;
  bool bVar19;
  undefined1 (*pauVar20) [16];
  long lVar21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  float *pfVar25;
  long lVar26;
  short *psVar27;
  short sVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float extraout_s0;
  undefined1 auVar35 [12];
  float fVar42;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar41 [16];
  float fVar44;
  uint uVar45;
  uint uVar52;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar74;
  float fVar75;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  char cVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  char cVar89;
  byte bVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  byte bVar93;
  undefined1 uVar94;
  byte bVar95;
  undefined1 uVar96;
  char cVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  char cVar103;
  byte bVar104;
  float fVar105;
  float fVar108;
  float fVar109;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar110;
  undefined8 uVar111;
  int iVar112;
  int iVar119;
  int iVar120;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar116 [16];
  undefined1 auVar115 [16];
  float fVar121;
  float fVar123;
  undefined1 auVar122 [16];
  uint uVar124;
  float fVar125;
  byte bVar131;
  byte bVar132;
  int iVar133;
  byte bVar134;
  undefined1 auVar126 [16];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  undefined1 auVar128 [16];
  undefined1 auVar127 [16];
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  float fVar145;
  float fVar146;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar152 [12];
  ulong uVar151;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float fVar162;
  float fVar165;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined8 local_e0;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  
  lVar23 = *(long *)(param_3 + 0x10);
  uVar111 = param_1._8_8_;
  auVar36._0_8_ = param_1._0_8_;
  if (((*PTR_DAT_047daf58 & 1) == 0) &&
     (iVar112 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar112 != 0)) {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  lVar23 = *(long *)(lVar23 + 0xc0);
  plVar1 = (long *)PTR_DAT_047daf60;
  if (lVar23 != 0) {
    plVar1 = (long *)(lVar23 + 0x70);
  }
  if (*plVar1 != 0) {
    fVar34 = *(float *)(param_3 + 0x164);
    fVar42 = param_1._0_4_;
    if (1.1920929e-07 < fVar34) {
      fVar64 = *(float *)(param_3 + 0x170);
      if (1.1920929e-07 < ABS(fVar64 - param_2)) {
        fVar44 = 0.0;
        fVar54 = 0.0;
        if (1.1920929e-07 < param_2) {
          fVar54 = *(float *)(param_3 + 0x16c) +
                   (fVar64 - *(float *)(param_3 + 0x16c)) * (*(float *)(param_3 + 0x168) / fVar34);
        }
        *(float *)(param_3 + 0x16c) = fVar54;
        *(float *)(param_3 + 0x170) = param_2;
        *(undefined4 *)(param_3 + 0x168) = 0;
      }
      else {
        fVar44 = *(float *)(param_3 + 0x168);
        fVar54 = *(float *)(param_3 + 0x16c);
        param_2 = fVar64;
      }
      fVar64 = fVar34;
      if (fVar44 + fVar42 <= fVar34) {
        fVar64 = fVar44 + fVar42;
      }
      param_2 = fVar54 + (param_2 - fVar54) * (fVar64 / fVar34);
      *(float *)(param_3 + 0x168) = fVar64;
    }
    if (*(int *)(param_3 + 0x160) < 1) {
      uVar17 = FUN_00d22188(param_3,*(undefined8 *)(param_3 + 0x60),0,1);
      if ((uVar17 & 1) != 0) {
        puVar24 = (ulong *)**(long **)(param_3 + 0x80);
        puVar3 = (ulong *)(*(long **)(param_3 + 0x80))[1];
        if (puVar24 != puVar3) {
          plVar18 = *(long **)(param_3 + 0x18);
          if ((*(byte *)(plVar18[7] + (*puVar24 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
            (**(code **)(*plVar18 + 0x370))(plVar18,*puVar24,0);
          }
          if (puVar24 + 8 != puVar3) {
            plVar18 = *(long **)(param_3 + 0x18);
            uVar17 = puVar24[8];
            if ((*(byte *)(plVar18[7] + (uVar17 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
              (**(code **)(*plVar18 + 0x370))(plVar18,uVar17,0);
            }
            if (puVar24 + 0x10 != puVar3) {
              plVar18 = *(long **)(param_3 + 0x18);
              uVar17 = puVar24[0x10];
              if ((*(byte *)(plVar18[7] + (uVar17 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
                (**(code **)(*plVar18 + 0x370))(plVar18,uVar17,0);
              }
              if (puVar24 + 0x18 != puVar3) {
                plVar18 = *(long **)(param_3 + 0x18);
                uVar17 = puVar24[0x18];
                if ((*(byte *)(plVar18[7] + (uVar17 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
                  (**(code **)(*plVar18 + 0x370))(plVar18,uVar17,0);
                }
                if (puVar24 + 0x20 != puVar3) {
                  plVar18 = *(long **)(param_3 + 0x18);
                  uVar17 = puVar24[0x20];
                  if ((*(byte *)(plVar18[7] + (uVar17 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
                    (**(code **)(*plVar18 + 0x370))(plVar18,uVar17,0);
                  }
                  if (puVar24 + 0x28 != puVar3) {
                    plVar18 = *(long **)(param_3 + 0x18);
                    uVar17 = puVar24[0x28];
                    if ((*(byte *)(plVar18[7] + (uVar17 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
                      (**(code **)(*plVar18 + 0x370))(plVar18,uVar17,0);
                    }
                    for (puVar24 = puVar24 + 0x30; puVar24 != puVar3; puVar24 = puVar24 + 8) {
                      plVar18 = *(long **)(param_3 + 0x18);
                      if ((*(byte *)(plVar18[7] + (*puVar24 & 0xffffff) * 0xc0 + 0x54) & 9) == 0) {
                        (**(code **)(*plVar18 + 0x370))(plVar18,*puVar24,0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      auVar36._8_8_ = uVar111;
      FUN_00d22848(auVar36,param_3);
      *(int *)(param_3 + 0x160) = *(int *)(param_3 + 0x160) + -1;
    }
    plVar18 = *(long **)(param_3 + 0x18);
    if ((plVar18 != (long *)0x0) && (*(char *)(param_3 + 0x174) == '\0')) {
      if (fVar42 <= 1.1920929e-07) {
        (**(code **)(*plVar18 + 0x488))();
      }
      else {
        local_7c = 0x100000000;
        local_80 = fVar42;
        FUN_00d21de0(plVar18,&local_80,0);
        FUN_00d21a40(*(undefined8 *)(param_3 + 0x18),0);
      }
    }
    puVar24 = (ulong *)**(long **)(param_3 + 0x80);
    puVar3 = (ulong *)(*(long **)(param_3 + 0x80))[1];
    if (puVar24 != puVar3) {
      uVar111 = NEON_fmov(0x3f800000,4);
      param_2 = param_2 * *(float *)(param_3 + 0x148) * *(float *)(param_3 + 0x154);
      do {
        uVar17 = *puVar24 & 0xffffff;
        lVar23 = *(long *)(*(long *)(param_3 + 0x18) + 0x38);
        lVar26 = lVar23 + uVar17 * 0xc0;
        psVar27 = (short *)(lVar26 + 0x98);
        sVar28 = *psVar27;
        if (sVar28 != -1) {
          pfVar25 = (float *)(lVar23 + uVar17 * 0xc0);
          uVar45 = *(uint *)(lVar26 + 0x9c);
          auVar36 = NEON_fmov(0x3f800000,4);
          fStack_88 = auVar36._8_4_;
          fStack_84 = auVar36._12_4_;
          local_90 = auVar36._0_4_;
          fStack_8c = auVar36._4_4_;
          fVar34 = (float)uVar111;
          if (uVar45 == 0xffffffff) {
            pauVar20 = (undefined1 (*) [16])(**(code **)(**(long **)(param_3 + 8) + 0x68))();
            auVar37 = *pauVar20;
            fVar73 = *(float *)pauVar20[1];
            fVar110 = *(float *)(pauVar20[1] + 4);
            fVar55 = *(float *)(pauVar20[1] + 8);
            lVar23 = lVar23 + uVar17 * 0xc0;
            fVar123 = *pfVar25;
            fVar162 = pfVar25[2];
            auVar46 = pauVar20[2];
            fVar42 = *(float *)pauVar20[3];
            fVar44 = *(float *)(pauVar20[3] + 4);
            fVar165 = *(float *)(pauVar20[3] + 8);
            fVar75 = *(float *)(pauVar20[3] + 0xc);
            fVar74 = auVar37._8_4_;
            fVar108 = auVar46._8_4_;
            fVar64 = auVar37._0_4_;
            fVar78 = (float)(CONCAT17(auVar46[3],
                                      CONCAT16(auVar46[2],
                                               CONCAT15(auVar46[1],CONCAT14(auVar46[0],fVar64)))) >>
                            0x20);
            uVar15 = CONCAT14(auVar37[7],
                              CONCAT13(auVar37[6],
                                       CONCAT12(auVar37[5],CONCAT11(auVar37[4],auVar46[3]))));
            fVar80 = (float)((uint5)uVar15 >> 8);
            fVar105 = (float)(CONCAT18(auVar46[7],
                                       CONCAT17(auVar46[6],
                                                CONCAT16(auVar46[5],CONCAT15(auVar46[4],uVar15))))
                             >> 0x28);
            fVar79 = *(float *)(lVar23 + 0x30);
            fVar81 = *(float *)(lVar23 + 0x34);
            fVar82 = *(float *)(lVar23 + 0x38);
            fVar72 = (float)*(undefined8 *)(lVar23 + 0x28);
            fVar54 = (float)((ulong)*(undefined8 *)(lVar23 + 0x20) >> 0x20);
            fVar109 = -(fVar64 * fVar42 + fVar80 * fVar44 + fVar74 * fVar165 +
                       auVar37._12_4_ * fVar75);
            fVar43 = -(fVar73 * fVar42 + fVar110 * fVar44 + fVar55 * fVar165 +
                      *(float *)(pauVar20[1] + 0xc) * fVar75);
            fVar75 = -(fVar78 * fVar42 + fVar105 * fVar44 + fVar108 * fVar165 +
                      auVar46._12_4_ * fVar75);
            fVar165 = *(float *)(lVar23 + 0x14);
            fVar44 = *(float *)(lVar23 + 0x18);
            fVar42 = (float)*(undefined8 *)(lVar23 + 0x20);
            if (fVar72 < 0.0) {
              fVar125 = pfVar25[1] + *(float *)(lVar23 + 0x10);
              uVar86 = (undefined1)((uint)fVar125 >> 8);
              uVar88 = (undefined1)((uint)fVar125 >> 0x10);
              uVar92 = (undefined1)((uint)fVar125 >> 0x18);
              if (fVar123 <= fVar165) {
                fVar72 = (fVar34 - fVar72) - (fVar123 - fVar165);
                fVar34 = fVar44 + fVar54;
                fVar54 = fVar42 - fVar162;
                uVar84 = SUB41(fVar72,0);
                uVar85 = (undefined1)((uint)fVar72 >> 8);
                uVar87 = (undefined1)((uint)fVar72 >> 0x10);
                uVar91 = (undefined1)((uint)fVar72 >> 0x18);
                uVar94 = SUB41(fVar125,0);
                uVar96 = uVar86;
                uVar99 = uVar88;
                uVar101 = uVar92;
              }
              else {
                fVar72 = (fVar123 - fVar165) + (fVar34 - fVar72);
                fVar34 = fVar162 + fVar42;
                fVar54 = fVar44 - fVar54;
                uVar94 = SUB41(fVar72,0);
                uVar96 = (char)((uint)fVar72 >> 8);
                uVar99 = (char)((uint)fVar72 >> 0x10);
                uVar101 = (char)((uint)fVar72 >> 0x18);
                uVar84 = SUB41(fVar125,0);
                uVar85 = uVar86;
                uVar87 = uVar88;
                uVar91 = uVar92;
              }
            }
            else {
              fVar125 = pfVar25[1] - *(float *)(lVar23 + 0x10);
              if (-fVar165 <= fVar123) {
                fVar44 = fVar44 - fVar54;
                fVar42 = fVar42 - fVar162;
                fVar54 = fVar123 + fVar165 + fVar72 + fVar34;
                uVar94 = SUB41(fVar44,0);
                uVar96 = (char)((uint)fVar44 >> 8);
                uVar99 = (char)((uint)fVar44 >> 0x10);
                uVar101 = (char)((uint)fVar44 >> 0x18);
                uVar84 = SUB41(fVar42,0);
                uVar85 = (char)((uint)fVar42 >> 8);
                uVar87 = (char)((uint)fVar42 >> 0x10);
                uVar91 = (char)((uint)fVar42 >> 0x18);
                fVar34 = fVar125;
              }
              else {
                fVar162 = fVar162 + fVar42;
                fVar44 = fVar44 + fVar54;
                uVar94 = SUB41(fVar162,0);
                uVar96 = (char)((uint)fVar162 >> 8);
                uVar99 = (char)((uint)fVar162 >> 0x10);
                uVar101 = (char)((uint)fVar162 >> 0x18);
                uVar84 = SUB41(fVar44,0);
                uVar85 = (char)((uint)fVar44 >> 8);
                uVar87 = (char)((uint)fVar44 >> 0x10);
                uVar91 = (char)((uint)fVar44 >> 0x18);
                fVar34 = (fVar72 + fVar34) - (fVar123 + fVar165);
                fVar54 = fVar125;
              }
            }
            fVar42 = (float)CONCAT13(uVar101,CONCAT12(uVar99,CONCAT11(uVar96,uVar94))) *
                     (float)CONCAT13(uVar101,CONCAT12(uVar99,CONCAT11(uVar96,uVar94))) +
                     (float)CONCAT13(uVar91,CONCAT12(uVar87,CONCAT11(uVar85,uVar84))) *
                     (float)CONCAT13(uVar91,CONCAT12(uVar87,CONCAT11(uVar85,uVar84)));
            fVar72 = fVar34 * fVar34 + fVar54 * fVar54;
            fVar44 = fVar42 + fVar72;
            auVar37 = ZEXT816(0);
            if (fVar44 != 0.0) {
              fVar44 = SQRT(fVar44);
              fVar42 = SQRT(fVar42 + fVar72);
              auVar37._0_4_ =
                   (float)CONCAT13(uVar101,CONCAT12(uVar99,CONCAT11(uVar96,uVar94))) / fVar44;
              auVar37._4_4_ =
                   (float)CONCAT13(uVar91,CONCAT12(uVar87,CONCAT11(uVar85,uVar84))) / fVar42;
              auVar37._8_4_ = fVar34 / fVar44;
              auVar37._12_4_ = fVar54 / fVar42;
            }
            fVar34 = auVar37._0_4_;
            fVar44 = auVar37._4_4_;
            fVar123 = auVar37._8_4_;
            fVar125 = auVar37._12_4_;
            fVar42 = fVar44 * fVar44 + fVar44 * fVar44;
            fVar54 = fVar123 * fVar123 + fVar123 * fVar123;
            auVar37 = NEON_ext(auVar37,auVar37,0xc,1);
            auVar127._4_12_ = auVar37._4_12_;
            auVar127._0_4_ = fVar34;
            auVar129._12_4_ = auVar37._12_4_;
            auVar129._0_8_ = auVar127._0_8_;
            auVar129._8_4_ = fVar44;
            auVar128._8_8_ = auVar129._8_8_;
            auVar128._4_4_ = auVar37._0_4_;
            auVar128._0_4_ = fVar34;
            auVar130._0_12_ = auVar128._0_12_;
            auVar130._12_4_ = auVar37._4_4_;
            sVar28 = *psVar27;
            auVar37 = NEON_ext(auVar130,auVar130,8,1);
            auVar114._0_4_ = local_90 - (fVar34 * fVar34 + fVar34 * fVar34);
            auVar114._4_4_ = fStack_8c - fVar42;
            auVar114._8_4_ = fStack_88 - fVar54;
            auVar114._12_4_ = fStack_84 - (fVar125 * fVar125 + fVar125 * fVar125);
            fVar162 = auVar37._0_4_ * fVar123;
            fVar72 = auVar37._4_4_ * fVar123;
            fVar165 = auVar37._8_4_ * fVar44;
            auVar115._4_12_ = auVar114._4_12_;
            auVar115._0_4_ = auVar114._0_4_;
            auVar117._0_8_ = auVar115._0_8_;
            auVar117._8_4_ = auVar114._4_4_;
            auVar117._12_4_ = auVar114._12_4_;
            auVar116._8_8_ = auVar117._8_8_;
            auVar116._4_4_ = auVar114._0_4_;
            auVar116._0_4_ = auVar114._0_4_;
            auVar118._0_12_ = auVar116._0_12_;
            auVar118._12_4_ = auVar114._4_4_;
            auVar37 = NEON_ext(auVar118,auVar118,0xc,1);
            fVar121 = fVar34 * fVar125 + fVar34 * fVar125;
            fVar44 = fVar44 * fVar125 + fVar44 * fVar125;
            fVar123 = fVar123 * fVar125 + fVar123 * fVar125;
            fVar162 = fVar162 + fVar162;
            fVar72 = fVar72 + fVar72;
            fVar165 = fVar165 + fVar165;
            fVar34 = auVar37._0_4_ - fVar54;
            fVar54 = auVar37._4_4_ - fVar54;
            fVar42 = auVar37._8_4_ - fVar42;
            fVar125 = fVar162 + fVar121;
            fVar145 = fVar72 + fVar44;
            fVar146 = fVar165 + fVar123;
            fVar162 = fVar162 - fVar121;
            fVar72 = fVar72 - fVar44;
            fVar165 = fVar165 - fVar123;
            local_e0 = CONCAT44(fVar73 * fVar79 + fVar110 * fVar81 + fVar55 * fVar82 + fVar43,
                                fVar64 * fVar79 + fVar80 * fVar81 + fVar74 * fVar82 + fVar109);
            fVar123 = fVar78 * fVar79 + fVar105 * fVar81 + fVar108 * fVar82 + fVar75;
            auVar150._0_4_ = fVar64 * fVar34 + fVar80 * fVar146 + fVar74 * fVar72 + fVar109 * 0.0;
            auVar150._4_4_ = fVar73 * fVar34 + fVar110 * fVar146 + fVar55 * fVar72 + fVar43 * 0.0;
            auVar150._8_4_ = fVar78 * fVar34 + fVar105 * fVar146 + fVar108 * fVar72 + fVar75 * 0.0;
            auVar150._12_4_ = fVar34 * 0.0 + fVar146 * 0.0 + fVar72 * 0.0 + 0.0;
            fVar34 = fVar64 * fVar165 + fVar80 * fVar54 + fVar74 * fVar125 + fVar109 * 0.0;
            fVar44 = fVar73 * fVar165 + fVar110 * fVar54 + fVar55 * fVar125 + fVar43 * 0.0;
            uVar86 = (undefined1)((uint)fVar44 >> 8);
            uVar88 = (undefined1)((uint)fVar44 >> 0x10);
            uVar92 = (undefined1)((uint)fVar44 >> 0x18);
            fVar72 = fVar78 * fVar165 + fVar105 * fVar54 + fVar108 * fVar125 + fVar75 * 0.0;
            uVar94 = (undefined1)((uint)fVar72 >> 8);
            uVar96 = (undefined1)((uint)fVar72 >> 0x10);
            uVar99 = (undefined1)((uint)fVar72 >> 0x18);
            fVar54 = fVar165 * 0.0 + fVar54 * 0.0 + fVar125 * 0.0 + 0.0;
            uVar101 = (undefined1)((uint)fVar54 >> 8);
            uVar84 = (undefined1)((uint)fVar54 >> 0x10);
            uVar85 = (undefined1)((uint)fVar54 >> 0x18);
            fVar79 = fVar64 * fVar145 + fVar80 * fVar162 + fVar74 * fVar42 + fVar109 * 0.0;
            fVar82 = fVar73 * fVar145 + fVar110 * fVar162 + fVar55 * fVar42 + fVar43 * 0.0;
            fVar42 = fVar78 * fVar145 + fVar105 * fVar162 + fVar108 * fVar42 + fVar75 * 0.0;
            auVar46[4] = SUB41(fVar44,0);
            auVar46._0_4_ = fVar34;
            auVar46[5] = uVar86;
            auVar46[6] = uVar88;
            auVar46[7] = uVar92;
            auVar46[8] = SUB41(fVar72,0);
            auVar46[9] = uVar94;
            auVar46[10] = uVar96;
            auVar46[0xb] = uVar99;
            auVar46[0xc] = SUB41(fVar54,0);
            auVar46[0xd] = uVar101;
            auVar46[0xe] = uVar84;
            auVar46[0xf] = uVar85;
            auVar68[4] = SUB41(fVar44,0);
            auVar68._0_4_ = fVar34;
            auVar68[5] = uVar86;
            auVar68[6] = uVar88;
            auVar68[7] = uVar92;
            auVar68[8] = SUB41(fVar72,0);
            auVar68[9] = uVar94;
            auVar68[10] = uVar96;
            auVar68[0xb] = uVar99;
            auVar68[0xc] = SUB41(fVar54,0);
            auVar68[0xd] = uVar101;
            auVar68[0xe] = uVar84;
            auVar68[0xf] = uVar85;
            auVar37 = NEON_ext(auVar46,auVar68,8,1);
            auVar46 = NEON_ext(auVar150,auVar150,8,1);
            fVar78 = local_90 + (float)_DAT_03cab3a0 * auVar150._0_4_ +
                     (float)_DAT_03cac210 * fVar44 + (float)_DAT_03cabb00 * fVar42;
            fVar74 = fStack_8c + (float)((ulong)_DAT_03cab3a0 >> 0x20) * auVar150._0_4_ +
                     (float)((ulong)_DAT_03cac210 >> 0x20) * fVar44 +
                     (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar42;
            fVar80 = fStack_88 + (float)_UNK_03cab3a8 * auVar150._0_4_ +
                     (float)_UNK_03cac218 * fVar44 + (float)_UNK_03cabb08 * fVar42;
            fVar105 = fStack_84 + (float)((ulong)_UNK_03cab3a8 >> 0x20) * auVar150._0_4_ +
                      (float)((ulong)_UNK_03cac218 >> 0x20) * fVar44 +
                      (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar42;
            fVar42 = auVar37._0_4_;
            fVar64 = (float)((uint)fVar78 ^
                            ((uint)fVar78 ^ (uint)fVar74) & -(uint)(fVar78 <= fVar74));
            fVar44 = (float)((uint)fVar78 ^
                            ((uint)fVar78 ^ (uint)fVar74) & -(uint)(fVar78 <= fVar74));
            fVar54 = (float)((uint)fVar78 ^
                            ((uint)fVar78 ^ (uint)fVar74) & -(uint)(fVar78 <= fVar74));
            fVar72 = (float)((uint)fVar78 ^
                            ((uint)fVar78 ^ (uint)fVar74) & -(uint)(fVar78 <= fVar74));
            auVar37 = NEON_fmov(0x40800000,4);
            fVar43 = SQRT(fVar78) * 0.5;
            fVar125 = SQRT(fVar80) * 0.5;
            fVar81 = auVar150._4_4_ - fVar34;
            auVar107._0_4_ = fVar43 * auVar37._0_4_;
            auVar107._4_4_ = SQRT(fVar74) * 0.5 * auVar37._4_4_;
            auVar107._8_4_ = fVar125 * auVar37._8_4_;
            auVar107._12_4_ = SQRT(fVar105) * 0.5 * auVar37._12_4_;
            auVar68 = NEON_frecpe(auVar107,4);
            auVar37 = NEON_frecps(auVar68,auVar107,4);
            auVar144._0_4_ = auVar68._0_4_ * auVar37._0_4_;
            auVar144._4_4_ = auVar68._4_4_ * auVar37._4_4_;
            auVar144._8_4_ = auVar68._8_4_ * auVar37._8_4_;
            auVar144._12_4_ = auVar68._12_4_ * auVar37._12_4_;
            auVar37 = NEON_frecps(auVar144,auVar107,4);
            fVar75 = auVar144._0_4_ * auVar37._0_4_;
            fVar108 = auVar144._4_4_ * auVar37._4_4_;
            fVar55 = auVar144._8_4_ * auVar37._8_4_;
            fVar109 = auVar144._12_4_ * auVar37._12_4_;
            fVar162 = (fVar34 + auVar150._4_4_) * fVar75;
            fVar165 = (auVar46._0_4_ + fVar79) * fVar75;
            fVar75 = (fVar42 + -fVar82) * fVar75;
            fVar73 = (fVar79 + auVar46._0_4_) * fVar55;
            fVar110 = (fVar82 + fVar42) * fVar55;
            fVar55 = (float)(CONCAT17((char)((uint)fVar81 >> 0x18),
                                      CONCAT16((char)((uint)fVar81 >> 0x10),
                                               CONCAT15((char)((uint)fVar81 >> 8),
                                                        CONCAT14(SUB41(fVar81,0),fVar81)))) >> 0x20)
                     * fVar55;
            uVar45 = (uint)fVar73 ^
                     ((uint)fVar73 ^
                     (uint)fVar43 ^
                     ((uint)fVar43 ^ (uint)((fVar34 + auVar150._4_4_) * fVar108)) &
                     -(uint)(fVar78 <= fVar74)) & ~-(uint)(fVar64 <= fVar80);
            uVar124 = (uint)fVar110 ^
                      ((uint)fVar110 ^
                      (uint)fVar162 ^
                      ((uint)fVar162 ^ (uint)(SQRT(fVar74) * 0.5)) & -(uint)(fVar78 <= fVar74)) &
                      ~-(uint)(fVar44 <= fVar80);
            uVar52 = (uint)fVar125 ^
                     ((uint)fVar125 ^
                     (uint)fVar165 ^
                     ((uint)fVar165 ^ (uint)((fVar42 + fVar82) * fVar108)) &
                     -(uint)(fVar78 <= fVar74)) & ~-(uint)(fVar54 <= fVar80);
            uVar53 = (uint)fVar55 ^
                     ((uint)fVar55 ^
                     (uint)fVar75 ^
                     ((uint)fVar75 ^ (uint)((fVar79 + -auVar150._8_4_) * fVar108)) &
                     -(uint)(fVar78 <= fVar74)) & ~-(uint)(fVar72 <= fVar80);
            fVar34 = (float)(uVar45 ^ (uVar45 ^ (uint)((fVar42 - fVar82) * fVar109)) &
                                      -(uint)((float)((uint)fVar64 ^
                                                     ((uint)fVar64 ^ (uint)fVar80) &
                                                     -(uint)(fVar64 <= fVar80)) <= fVar105));
            fVar42 = (float)(uVar124 ^
                            (uVar124 ^ (uint)((fVar79 - auVar150._8_4_) * fVar109)) &
                            -(uint)((float)((uint)fVar44 ^
                                           ((uint)fVar44 ^ (uint)fVar80) & -(uint)(fVar44 <= fVar80)
                                           ) <= fVar105));
            fVar64 = (float)(uVar52 ^ (uVar52 ^ (uint)(fVar81 * fVar109)) &
                                      -(uint)((float)((uint)fVar54 ^
                                                     ((uint)fVar54 ^ (uint)fVar80) &
                                                     -(uint)(fVar54 <= fVar80)) <= fVar105));
            fVar44 = (float)(uVar53 ^ (uVar53 ^ (uint)(SQRT(fVar105) * 0.5)) &
                                      -(uint)((float)((uint)fVar72 ^
                                                     ((uint)fVar72 ^ (uint)fVar80) &
                                                     -(uint)(fVar72 <= fVar80)) <= fVar105));
          }
          else {
            pauVar20 = (undefined1 (*) [16])(lVar23 + ((ulong)uVar45 & 0xffffff) * 0xc0);
            auVar37 = *pauVar20;
            auVar46 = pauVar20[1];
            fVar110 = auVar37._0_4_;
            fVar162 = auVar46._0_4_;
            fVar123 = auVar37._4_4_;
            fVar75 = auVar46._4_4_;
            auVar37 = NEON_ext(auVar37,auVar37,8,1);
            auVar46 = NEON_ext(auVar46,auVar46,8,1);
            fVar55 = auVar37._0_4_;
            fVar165 = auVar46._0_4_;
            auVar37 = pauVar20[2];
            lVar23 = lVar23 + uVar17 * 0xc0;
            auVar46 = NEON_ext(auVar37,auVar37,8,1);
            fVar81 = auVar37._4_4_;
            fVar42 = *pfVar25;
            fVar64 = pfVar25[1];
            fVar44 = pfVar25[2];
            fVar54 = pfVar25[4];
            fVar72 = pfVar25[5];
            fVar73 = pfVar25[6];
            fVar82 = auVar37._0_4_;
            fVar79 = auVar46._0_4_;
            fVar74 = fVar55 * fVar44 + fVar110 * fVar42 + fVar123 * fVar64;
            fVar78 = fVar165 * fVar44 + fVar162 * fVar42 + fVar75 * fVar64;
            fVar80 = fVar79 * fVar44 + fVar82 * fVar42 + fVar81 * fVar64;
            fVar105 = fVar55 * fVar73 + fVar110 * fVar54 + fVar123 * fVar72;
            fVar108 = fVar165 * fVar73 + fVar162 * fVar54 + fVar75 * fVar72;
            fVar109 = fVar79 * fVar73 + fVar82 * fVar54 + fVar81 * fVar72;
            fVar44 = pfVar25[8];
            fVar54 = pfVar25[9];
            fVar72 = pfVar25[10];
            fVar42 = fVar55 * fVar72 + fVar110 * fVar44 + fVar123 * fVar54;
            fVar64 = fVar165 * fVar72 + fVar162 * fVar44 + fVar75 * fVar54;
            fVar44 = fVar79 * fVar72 + fVar82 * fVar44 + fVar81 * fVar54;
            fVar54 = *(float *)(lVar23 + 0x30) - *(float *)pauVar20[3];
            fVar72 = *(float *)(lVar23 + 0x34) - *(float *)(pauVar20[3] + 4);
            fVar73 = *(float *)(lVar23 + 0x38) - *(float *)(pauVar20[3] + 8);
            auVar56._0_8_ =
                 CONCAT44(fVar165 * fVar73 + fVar162 * fVar54 + fVar75 * fVar72,
                          fVar55 * fVar73 + fVar110 * fVar54 + fVar123 * fVar72);
            auVar56._8_4_ = fVar79 * fVar73 + fVar82 * fVar54 + fVar81 * fVar72;
            auVar56._12_4_ = auVar46._4_4_ * fVar73 + fVar81 * fVar54 + fVar81 * fVar72;
            auVar37 = NEON_ext(auVar56,auVar56,8,1);
            fVar123 = auVar37._0_4_;
            fVar54 = fVar78 - fVar105;
            fVar72 = fVar109 - fVar64;
            fVar73 = fVar42 - fVar80;
            fVar80 = fVar80 + fVar42;
            fVar109 = fVar109 + fVar64;
            fVar42 = fVar74 + fVar108 + fVar44 + fVar34;
            fVar78 = fVar78 + fVar105;
            uVar96 = SUB41(fVar72,0);
            uVar99 = (undefined1)((uint)fVar72 >> 8);
            uVar101 = (undefined1)((uint)fVar72 >> 0x10);
            uVar84 = (undefined1)((uint)fVar72 >> 0x18);
            uVar86 = SUB41(fVar73,0);
            uVar88 = (char)((uint)fVar73 >> 8);
            uVar92 = (char)((uint)fVar73 >> 0x10);
            uVar94 = (char)((uint)fVar73 >> 0x18);
            if (fVar74 < -fVar108) {
              uVar96 = SUB41(fVar80,0);
              uVar99 = (undefined1)((uint)fVar80 >> 8);
              uVar101 = (undefined1)((uint)fVar80 >> 0x10);
              uVar84 = (undefined1)((uint)fVar80 >> 0x18);
              uVar86 = SUB41(fVar109,0);
              uVar88 = (char)((uint)fVar109 >> 8);
              uVar92 = (char)((uint)fVar109 >> 0x10);
              uVar94 = (char)((uint)fVar109 >> 0x18);
            }
            uVar12 = CONCAT17((char)((uint)fVar42 >> 0x18),
                              CONCAT16((char)((uint)fVar42 >> 0x10),
                                       CONCAT15((char)((uint)fVar42 >> 8),
                                                CONCAT14(SUB41(fVar42,0),fVar54))));
            if (fVar74 < -fVar108) {
              uVar12 = CONCAT44(fVar54,(fVar44 + fVar34) - (fVar74 + fVar108));
            }
            uVar13 = CONCAT44((fVar34 - fVar44) - (fVar74 - fVar108),fVar78);
            uVar14 = CONCAT44(fVar73,fVar109);
            if (fVar108 < fVar74) {
              uVar13 = CONCAT44(fVar78,(fVar74 - fVar108) + (fVar34 - fVar44));
              uVar14 = CONCAT44(fVar72,fVar80);
            }
            if (fVar44 < 0.0) {
              uVar12 = uVar14;
            }
            uVar14 = CONCAT17(uVar94,CONCAT16(uVar92,CONCAT15(uVar88,CONCAT14(uVar86,CONCAT13(uVar84
                                                  ,CONCAT12(uVar101,CONCAT11(uVar99,uVar96)))))));
            if (fVar44 < 0.0) {
              uVar14 = uVar13;
            }
            fVar34 = (float)uVar14;
            fVar42 = (float)((ulong)uVar14 >> 0x20);
            fVar64 = (float)uVar12;
            fVar44 = (float)((ulong)uVar12 >> 0x20);
            fVar54 = fVar34 * fVar34 + fVar42 * fVar42;
            fVar73 = fVar64 * fVar64 + fVar44 * fVar44;
            fVar72 = fVar54 + fVar73;
            local_e0 = auVar56._0_8_;
            if (fVar72 == 0.0) {
              fVar34 = 0.0;
              fVar42 = 0.0;
              fVar64 = 0.0;
              fVar44 = 0.0;
            }
            else {
              fVar72 = SQRT(fVar72);
              fVar54 = SQRT(fVar54 + fVar73);
              fVar34 = fVar34 / fVar72;
              fVar42 = fVar42 / fVar54;
              fVar64 = fVar64 / fVar72;
              fVar44 = fVar44 / fVar54;
            }
          }
          lVar26 = *plVar1;
          plVar18 = (long *)(lVar26 + 0x450);
          lVar23 = nn::os::GetCurrentThread();
          do {
            lVar21 = *plVar18;
            lVar22 = *(long *)(lVar26 + 0x458);
            cVar83 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar19) {
              *plVar18 = lVar21;
              *(long *)(lVar26 + 0x458) = lVar22;
              cVar83 = ExclusiveMonitorsStatus();
            }
          } while (cVar83 != '\0');
LAB_00d210a0:
          while ((lVar21 != 0 && (lVar23 != lVar21))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x460));
            do {
              lVar21 = *plVar18;
              lVar22 = *(long *)(lVar26 + 0x458);
              cVar83 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar19) {
                *plVar18 = lVar21;
                *(long *)(lVar26 + 0x458) = lVar22;
                cVar83 = ExclusiveMonitorsStatus();
              }
            } while (cVar83 != '\0');
          }
          do {
            lVar2 = *plVar18;
            if (lVar2 != lVar21 || *(long *)(lVar26 + 0x458) != lVar22) {
              bVar19 = false;
              ClearExclusiveLocal();
              goto LAB_00d210d0;
            }
            cVar83 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar19) {
              *plVar18 = lVar21;
              *(long *)(lVar26 + 0x454) = lVar22 + 1;
              cVar83 = ExclusiveMonitorsStatus();
            }
          } while (cVar83 != '\0');
          bVar19 = true;
LAB_00d210d0:
          if (!bVar19) {
            lVar21 = lVar2;
            lVar22 = *(long *)(lVar26 + 0x458);
            goto LAB_00d210a0;
          }
          lVar23 = *(long *)(lVar26 + 0x248) +
                   (long)*(short *)(*(long *)(lVar26 + 0xa0) + (long)sVar28 * 2) * 0x30;
          uVar12 = *(undefined8 *)(lVar23 + 0x10);
          uVar13 = *(undefined8 *)(lVar23 + 0x18);
          do {
            lVar23 = *plVar18;
            lVar21 = *(long *)(lVar26 + 0x458);
            cVar83 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar19) {
              *plVar18 = lVar23;
              *(long *)(lVar26 + 0x458) = lVar21;
              cVar83 = ExclusiveMonitorsStatus();
            }
          } while (cVar83 != '\0');
          do {
            lVar22 = *plVar18;
            lVar2 = *(long *)(lVar26 + 0x458);
            if (lVar22 != lVar23 || lVar2 != lVar21) {
              bVar19 = false;
              ClearExclusiveLocal();
              goto LAB_00d21140;
            }
            cVar83 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar19) {
              *plVar18 = lVar23;
              *(long *)(lVar26 + 0x454) = lVar21 + -1;
              cVar83 = ExclusiveMonitorsStatus();
            }
          } while (cVar83 != '\0');
          bVar19 = true;
LAB_00d21140:
          if (!bVar19) {
            do {
              lVar23 = *plVar18;
              lVar21 = *(long *)(lVar26 + 0x458);
              if (lVar23 != lVar22 || lVar21 != lVar2) {
                bVar19 = false;
                ClearExclusiveLocal();
                goto joined_r0x00d21560;
              }
              cVar83 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar19) {
                *plVar18 = lVar22;
                *(long *)(lVar26 + 0x454) = lVar2 + -1;
                cVar83 = ExclusiveMonitorsStatus();
              }
            } while (cVar83 != '\0');
            bVar19 = true;
joined_r0x00d21560:
            if (!bVar19) {
              do {
                lVar22 = *plVar18;
                lVar2 = *(long *)(lVar26 + 0x458);
                if (lVar22 != lVar23 || lVar2 != lVar21) {
                  bVar19 = false;
                  ClearExclusiveLocal();
                  lVar23 = lVar22;
                  lVar21 = lVar2;
                  goto joined_r0x00d21560;
                }
                cVar83 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar19) {
                  *plVar18 = lVar23;
                  *(long *)(lVar26 + 0x454) = lVar21 + -1;
                  cVar83 = ExclusiveMonitorsStatus();
                }
              } while (cVar83 != '\0');
              bVar19 = true;
              lVar23 = lVar22;
              lVar21 = lVar2;
              goto joined_r0x00d21560;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x460));
          fVar80 = (float)uVar13;
          fVar105 = (float)((ulong)uVar13 >> 0x20);
          fVar78 = (float)uVar12;
          fVar74 = (float)((ulong)uVar12 >> 0x20);
          auVar68 = NEON_fmov(0xbf800000,4);
          auVar29._0_4_ = fVar34 * fVar78 + fVar42 * fVar74;
          auVar29._4_4_ = fVar64 * fVar80 + fVar44 * fVar105;
          auVar29._8_4_ = fVar34 * fVar78 + fVar42 * fVar74;
          auVar29._12_4_ = fVar64 * fVar80 + fVar44 * fVar105;
          auVar37 = NEON_ext(auVar29,auVar29,4,1);
          auVar30._0_4_ = auVar37._0_4_ + auVar37._4_4_;
          auVar30._4_4_ = auVar37._8_4_ + auVar37._12_4_;
          auVar30._8_4_ = auVar37._0_4_ + auVar37._4_4_;
          auVar30._12_4_ = auVar37._8_4_ + auVar37._12_4_;
          auVar37 = NEON_fmax(auVar30,auVar68,4);
          auVar37 = NEON_fmin(auVar37,auVar36,4);
          auVar38._0_8_ = CONCAT44(-(uint)(auVar37._4_4_ < 0.0),-(uint)(auVar37._0_4_ < 0.0));
          auVar38._8_4_ = -(uint)(auVar37._8_4_ < 0.0);
          auVar38._12_4_ = -(uint)(auVar37._12_4_ < 0.0);
          auVar57._8_8_ = auVar38._8_8_;
          auVar57._0_8_ = auVar38._0_8_;
          auVar46 = auVar36 ^ (auVar36 ^ auVar68) & auVar57;
          fVar75 = auVar37._0_4_ * auVar46._0_4_;
          fVar79 = auVar37._4_4_ * auVar46._4_4_;
          fVar81 = auVar37._8_4_ * auVar46._8_4_;
          fVar82 = auVar37._12_4_ * auVar46._12_4_;
          fVar34 = fVar34 * auVar46._0_4_;
          fVar42 = fVar42 * auVar46._4_4_;
          fVar64 = fVar64 * auVar46._8_4_;
          fVar44 = fVar44 * auVar46._12_4_;
          auVar58._8_4_ = 0xc0490fdb;
          auVar58._0_8_ = 0xc0490fdbc0490fdb;
          auVar58._12_4_ = 0xc0490fdb;
          iVar112 = -(uint)(fVar75 == INFINITY);
          iVar119 = -(uint)(fVar81 == INFINITY);
          iVar120 = -(uint)(fVar82 == INFINITY);
          auVar113[0] = ~(byte)iVar112;
          auVar113[1] = ~(byte)((uint)iVar112 >> 8);
          auVar113[2] = ~(byte)((uint)iVar112 >> 0x10);
          auVar113[3] = ~(byte)((uint)iVar112 >> 0x18);
          auVar113._4_3_ = 0;
          auVar113[7] = ~(byte)(-(uint)(fVar79 == INFINITY) >> 0x18);
          auVar113[8] = ~(byte)iVar119;
          auVar113[9] = ~(byte)((uint)iVar119 >> 8);
          auVar113[10] = ~(byte)((uint)iVar119 >> 0x10);
          auVar113[0xb] = ~(byte)((uint)iVar119 >> 0x18);
          auVar113[0xc] = ~(byte)iVar120;
          auVar113[0xd] = ~(byte)((uint)iVar120 >> 8);
          auVar113[0xe] = ~(byte)((uint)iVar120 >> 0x10);
          auVar113[0xf] = ~(byte)((uint)iVar120 >> 0x18);
          fVar54 = SQRT(local_90 - fVar75 * fVar75);
          cVar83 = (char)((uint)fVar54 >> 0x18);
          fVar72 = SQRT(fStack_8c - fVar79 * fVar79);
          cVar89 = (char)((uint)fVar72 >> 0x18);
          fVar73 = SQRT(fStack_88 - fVar81 * fVar81);
          cVar97 = (char)((uint)fVar73 >> 0x18);
          fVar110 = SQRT(fStack_84 - fVar82 * fVar82);
          cVar103 = (char)((uint)fVar110 >> 0x18);
          iVar112 = -(uint)(fVar75 == -INFINITY);
          iVar119 = -(uint)(fVar81 == -INFINITY);
          iVar120 = -(uint)(fVar82 == -INFINITY);
          auVar122[0] = ~(byte)iVar112;
          auVar122[1] = ~(byte)((uint)iVar112 >> 8);
          auVar122[2] = ~(byte)((uint)iVar112 >> 0x10);
          auVar122[3] = ~(byte)((uint)iVar112 >> 0x18);
          auVar122._4_3_ = 0;
          auVar122[7] = ~(byte)(-(uint)(fVar79 == -INFINITY) >> 0x18);
          auVar122[8] = ~(byte)iVar119;
          auVar122[9] = ~(byte)((uint)iVar119 >> 8);
          auVar122[10] = ~(byte)((uint)iVar119 >> 0x10);
          auVar122[0xb] = ~(byte)((uint)iVar119 >> 0x18);
          auVar122[0xc] = ~(byte)iVar120;
          auVar122[0xd] = ~(byte)((uint)iVar120 >> 8);
          auVar122[0xe] = ~(byte)((uint)iVar120 >> 0x10);
          auVar122[0xf] = ~(byte)((uint)iVar120 >> 0x18);
          bVar135 = cVar83 >> 7;
          iVar112 = (int)cVar89 >> 7;
          bVar137 = cVar89 >> 7;
          bVar138 = cVar97 >> 7;
          iVar119 = (int)cVar103 >> 7;
          bVar140 = cVar103 >> 7;
          auVar143._8_4_ = 0x40490fdb;
          auVar143._0_8_ = 0x40490fdb40490fdb;
          auVar143._12_4_ = 0x40490fdb;
          auVar142[0xb] = bVar138;
          auVar142._8_3_ = (int3)((int)cVar97 >> 7);
          auVar142[0xc] = (char)iVar119;
          auVar142[0xd] = (char)((uint)iVar119 >> 8);
          auVar142[0xe] = (char)((uint)iVar119 >> 0x10);
          auVar142[0xf] = bVar140;
          auVar142[3] = bVar135;
          auVar142._0_3_ = (int3)((int)cVar83 >> 7);
          auVar142[4] = (char)iVar112;
          auVar142[5] = (char)((uint)iVar112 >> 8);
          auVar142[6] = (char)((uint)iVar112 >> 0x10);
          auVar142[7] = bVar137;
          iVar112 = -(uint)(fVar54 == 0.0);
          iVar119 = -(uint)(fVar73 == 0.0);
          iVar120 = -(uint)(fVar110 == 0.0);
          auVar106[0] = ~(byte)iVar112;
          auVar106[1] = ~(byte)((uint)iVar112 >> 8);
          auVar106[2] = ~(byte)((uint)iVar112 >> 0x10);
          auVar106[3] = ~(byte)((uint)iVar112 >> 0x18);
          auVar106._4_3_ = 0;
          auVar106[7] = ~(byte)(-(uint)(fVar72 == 0.0) >> 0x18);
          auVar106[8] = ~(byte)iVar119;
          auVar106[9] = ~(byte)((uint)iVar119 >> 8);
          auVar106[10] = ~(byte)((uint)iVar119 >> 0x10);
          auVar106[0xb] = ~(byte)((uint)iVar119 >> 0x18);
          auVar106[0xc] = ~(byte)iVar120;
          auVar106[0xd] = ~(byte)((uint)iVar120 >> 8);
          auVar106[0xe] = ~(byte)((uint)iVar120 >> 0x10);
          auVar106[0xf] = ~(byte)((uint)iVar120 >> 0x18);
          auVar149._0_4_ = -(uint)(0.0 <= fVar54 / fVar75);
          auVar149._4_4_ = -(uint)(0.0 <= fVar72 / fVar79);
          auVar149._8_4_ = -(uint)(0.0 <= fVar73 / fVar81);
          auVar149._12_4_ = -(uint)(0.0 <= fVar110 / fVar82);
          auVar147._0_4_ = ABS(fVar54 / fVar75);
          auVar147._4_4_ = ABS(fVar72 / fVar79);
          auVar147._8_4_ = ABS(fVar73 / fVar81);
          auVar147._12_4_ = ABS(fVar110 / fVar82);
          auVar163._0_8_ =
               CONCAT44(-(uint)(auVar147._4_4_ <= 2.4142137),-(uint)(auVar147._0_4_ <= 2.4142137));
          auVar163._8_4_ = -(uint)(auVar147._8_4_ <= 2.4142137);
          auVar163._12_4_ = -(uint)(auVar147._12_4_ <= 2.4142137);
          auVar167._8_8_ = auVar163._8_8_;
          auVar167._0_8_ = auVar163._0_8_;
          auVar37 = auVar68 ^ (auVar68 ^ auVar36) & auVar149;
          fVar55 = -auVar37._4_4_;
          fVar162 = -auVar37._8_4_;
          fVar165 = -auVar37._12_4_;
          auVar9[4] = SUB41(fVar55,0);
          auVar9._0_4_ = -auVar37._0_4_;
          auVar9[5] = (char)((uint)fVar55 >> 8);
          auVar9[6] = (char)((uint)fVar55 >> 0x10);
          auVar9[7] = (char)((uint)fVar55 >> 0x18);
          auVar9[8] = SUB41(fVar162,0);
          auVar9[9] = (char)((uint)fVar162 >> 8);
          auVar9[10] = (char)((uint)fVar162 >> 0x10);
          auVar9[0xb] = (char)((uint)fVar162 >> 0x18);
          auVar9[0xc] = SUB41(fVar165,0);
          auVar9[0xd] = (char)((uint)fVar165 >> 8);
          auVar9[0xe] = (char)((uint)fVar165 >> 0x10);
          auVar9[0xf] = (char)((uint)fVar165 >> 0x18);
          auVar37 = auVar37 ^ (auVar37 ^ auVar9) & ~auVar163;
          auVar153._0_4_ = -(uint)(auVar147._0_4_ <= 0.41421354);
          auVar153._4_4_ = -(uint)(auVar147._4_4_ <= 0.41421354);
          auVar153._8_4_ = -(uint)(auVar147._8_4_ <= 0.41421354);
          auVar153._12_4_ = -(uint)(auVar147._12_4_ <= 0.41421354);
          uVar124 = -(uint)(fVar54 == INFINITY);
          iVar120 = -(uint)(fVar73 == INFINITY);
          iVar133 = -(uint)(fVar110 == INFINITY);
          uVar45 = -(uint)(fVar54 == -0.0);
          bVar159 = (byte)(uVar45 >> 0x18);
          bVar90 = (byte)(-(uint)(fVar72 == -0.0) >> 0x18);
          iVar112 = -(uint)(fVar73 == -0.0);
          bVar93 = (byte)((uint)iVar112 >> 8);
          bVar95 = (byte)((uint)iVar112 >> 0x10);
          bVar98 = (byte)((uint)iVar112 >> 0x18);
          iVar119 = -(uint)(fVar110 == -0.0);
          bVar100 = (byte)((uint)iVar119 >> 8);
          bVar102 = (byte)((uint)iVar119 >> 0x10);
          bVar104 = (byte)((uint)iVar119 >> 0x18);
          auVar143 = auVar143 ^ (auVar143 ^ auVar58) & auVar142;
          fVar54 = (auVar147._4_4_ + auVar68._4_4_) / (auVar147._4_4_ + fStack_8c);
          fVar73 = (auVar147._8_4_ + auVar68._8_4_) / (auVar147._8_4_ + fStack_88);
          fVar110 = (auVar147._12_4_ + auVar68._12_4_) / (auVar147._12_4_ + fStack_84);
          auVar126[0] = ~(byte)uVar124;
          auVar126[1] = ~(byte)(uVar124 >> 8);
          auVar126[2] = ~(byte)(uVar124 >> 0x10);
          auVar126[3] = ~(byte)(uVar124 >> 0x18);
          auVar126._4_3_ = 0;
          bVar131 = (byte)(-(uint)(fVar72 == INFINITY) >> 0x18);
          auVar126[7] = ~bVar131;
          auVar126[8] = ~(byte)iVar120;
          bVar157 = (byte)((uint)iVar120 >> 8);
          auVar126[9] = ~bVar157;
          bVar158 = (byte)((uint)iVar120 >> 0x10);
          auVar126[10] = ~bVar158;
          bVar132 = (byte)((uint)iVar120 >> 0x18);
          auVar126[0xb] = ~bVar132;
          auVar126[0xc] = ~(byte)iVar133;
          bVar160 = (byte)((uint)iVar133 >> 8);
          auVar126[0xd] = ~bVar160;
          bVar161 = (byte)((uint)iVar133 >> 0x10);
          bVar134 = (byte)((uint)iVar133 >> 0x18);
          auVar126[0xe] = ~bVar161;
          auVar126[0xf] = ~bVar134;
          auVar36 = NEON_frecpe(auVar147,4);
          bVar137 = bVar137 & auVar126[7];
          auVar46 = NEON_frecps(auVar36,auVar147,4);
          auVar69._0_4_ = auVar36._0_4_ * auVar46._0_4_;
          auVar69._4_4_ = auVar36._4_4_ * auVar46._4_4_;
          auVar69._8_4_ = auVar36._8_4_ * auVar46._8_4_;
          auVar69._12_4_ = auVar36._12_4_ * auVar46._12_4_;
          auVar36 = NEON_frecps(auVar69,auVar147,4);
          auVar166._0_4_ = auVar69._0_4_ * auVar36._0_4_;
          auVar166._4_4_ = auVar69._4_4_ * auVar36._4_4_;
          auVar166._8_4_ = auVar69._8_4_ * auVar36._8_4_;
          auVar166._12_4_ = auVar69._12_4_ * auVar36._12_4_;
          auVar168._8_4_ = 0xbfc90fdb;
          auVar168._0_8_ = 0xbfc90fdbbfc90fdb;
          auVar168._12_4_ = 0xbfc90fdb;
          auVar10[4] = SUB41(fVar54,0);
          auVar10._0_4_ = (auVar147._0_4_ + auVar68._0_4_) / (auVar147._0_4_ + local_90);
          auVar10[5] = (char)((uint)fVar54 >> 8);
          auVar10[6] = (char)((uint)fVar54 >> 0x10);
          auVar10[7] = (char)((uint)fVar54 >> 0x18);
          auVar10[8] = SUB41(fVar73,0);
          auVar10[9] = (char)((uint)fVar73 >> 8);
          auVar10[10] = (char)((uint)fVar73 >> 0x10);
          auVar10[0xb] = (char)((uint)fVar73 >> 0x18);
          auVar10[0xc] = SUB41(fVar110,0);
          auVar10[0xd] = (char)((uint)fVar110 >> 8);
          auVar10[0xe] = (char)((uint)fVar110 >> 0x10);
          auVar10[0xf] = (char)((uint)fVar110 >> 0x18);
          bVar136 = (byte)((int)fVar75 >> 0x1f);
          bVar139 = (byte)((int)fVar79 >> 0x1f);
          bVar141 = (byte)((int)fVar81 >> 0x1f);
          bVar156 = (byte)((int)fVar82 >> 0x1f);
          auVar11[8] = 0xdb;
          auVar11._0_8_ = 0x3f490fdb3f490fdb;
          auVar11[9] = 0xf;
          auVar11[10] = 0x49;
          auVar11[0xb] = 0x3f;
          auVar11[0xc] = 0xdb;
          auVar11[0xd] = 0xf;
          auVar11[0xe] = 0x49;
          auVar11[0xf] = 0x3f;
          auVar168 = auVar168 ^ (auVar168 ^ auVar11) & auVar167;
          auVar147 = auVar147 ^ (auVar147 ^ auVar166 ^ (auVar166 ^ auVar10) & auVar163) & ~auVar153;
          fVar55 = (float)CONCAT13(auVar168[3] & ~(byte)((uint)auVar153._0_4_ >> 0x18),
                                   CONCAT12(auVar168[2] & ~(byte)((uint)auVar153._0_4_ >> 0x10),
                                            CONCAT11(auVar168[1] &
                                                     ~(byte)((uint)auVar153._0_4_ >> 8),
                                                     auVar168[0] & ~(byte)auVar153._0_4_)));
          auVar152._0_8_ =
               CONCAT17(auVar168[7] & ~(byte)((uint)auVar153._4_4_ >> 0x18),
                        CONCAT16(auVar168[6] & ~(byte)((uint)auVar153._4_4_ >> 0x10),
                                 CONCAT15(auVar168[5] & ~(byte)((uint)auVar153._4_4_ >> 8),
                                          CONCAT14(auVar168[4] & ~(byte)auVar153._4_4_,fVar55))));
          auVar152[8] = auVar168[8] & ~(byte)auVar153._8_4_;
          auVar152[9] = auVar168[9] & ~(byte)((uint)auVar153._8_4_ >> 8);
          auVar152[10] = auVar168[10] & ~(byte)((uint)auVar153._8_4_ >> 0x10);
          auVar152[0xb] = auVar168[0xb] & ~(byte)((uint)auVar153._8_4_ >> 0x18);
          auVar154[0xc] = auVar168[0xc] & ~(byte)auVar153._12_4_;
          auVar154._0_12_ = auVar152;
          auVar154[0xd] = auVar168[0xd] & ~(byte)((uint)auVar153._12_4_ >> 8);
          auVar154[0xe] = auVar168[0xe] & ~(byte)((uint)auVar153._12_4_ >> 0x10);
          auVar154[0xf] = auVar168[0xf] & ~(byte)((uint)auVar153._12_4_ >> 0x18);
          fVar54 = auVar147._0_4_;
          fVar162 = fVar54 * fVar54;
          fVar72 = auVar147._4_4_;
          fVar165 = fVar72 * fVar72;
          fVar73 = auVar147._8_4_;
          fVar75 = fVar73 * fVar73;
          fVar110 = auVar147._12_4_;
          fVar79 = fVar110 * fVar110;
          uVar17 = CONCAT17(bVar90,(uint7)uVar45) & 0xc0490fdbc0490fdb;
          uVar151 = (ulong)CONCAT13(~bVar159,CONCAT12(~(byte)(uVar45 >> 0x10),
                                                      CONCAT11(~(byte)(uVar45 >> 8),~(byte)uVar45)))
                    & 0x40490fdb40490fdb;
          auVar155._8_4_ = 0x4016cbe4;
          auVar155._0_8_ = 0x4016cbe44016cbe4;
          auVar155._12_4_ = 0x4016cbe4;
          auVar164._8_4_ = 0x3fc90fdb;
          auVar164._0_8_ = 0x3fc90fdb3fc90fdb;
          auVar164._12_4_ = 0x3fc90fdb;
          auVar148._0_4_ =
               auVar37._0_4_ *
               (fVar55 + (local_90 +
                         fVar162 * (fVar162 * (fVar162 * (fVar162 * (fVar162 * (fVar162 * 0.07692308
                                                                               + -0.09090909) +
                                                                    0.11111111) + -0.14285715) + 0.2
                                              ) + -0.33333334)) * fVar54) +
               (float)CONCAT13(auVar143[3] & bVar136,
                               CONCAT12(auVar143[2] & bVar136,
                                        CONCAT11(auVar143[1] & bVar136,auVar143[0] & bVar136)));
          auVar148._4_4_ =
               auVar37._4_4_ *
               ((float)((ulong)auVar152._0_8_ >> 0x20) +
               (fStack_8c +
               fVar165 * (fVar165 * (fVar165 * (fVar165 * (fVar165 * (fVar165 * 0.07692308 +
                                                                     -0.09090909) + 0.11111111) +
                                               -0.14285715) + 0.2) + -0.33333334)) * fVar72) +
               (float)CONCAT13(auVar143[7] & bVar139,
                               CONCAT12(auVar143[6] & bVar139,
                                        CONCAT11(auVar143[5] & bVar139,auVar143[4] & bVar139)));
          auVar148._8_4_ =
               auVar37._8_4_ *
               (auVar152._8_4_ +
               (fStack_88 +
               fVar75 * (fVar75 * (fVar75 * (fVar75 * (fVar75 * (fVar75 * 0.07692308 + -0.09090909)
                                                      + 0.11111111) + -0.14285715) + 0.2) +
                        -0.33333334)) * fVar73) +
               (float)CONCAT13(auVar143[0xb] & bVar141,
                               CONCAT12(auVar143[10] & bVar141,
                                        CONCAT11(auVar143[9] & bVar141,auVar143[8] & bVar141)));
          auVar148._12_4_ =
               auVar37._12_4_ *
               (auVar154._12_4_ +
               (fStack_84 +
               fVar79 * (fVar79 * (fVar79 * (fVar79 * (fVar79 * (fVar79 * 0.07692308 + -0.09090909)
                                                      + 0.11111111) + -0.14285715) + 0.2) +
                        -0.33333334)) * fVar110) +
               (float)CONCAT13(auVar143[0xf] & bVar156,
                               CONCAT12(auVar143[0xe] & bVar156,
                                        CONCAT11(auVar143[0xd] & bVar156,auVar143[0xc] & bVar156)));
          auVar76[0] = ((byte)uVar151 | (byte)uVar17) & bVar136;
          auVar76[1] = ((byte)(uVar151 >> 8) | (byte)(uVar17 >> 8)) & bVar136;
          auVar76[2] = ((byte)(uVar151 >> 0x10) | (byte)(uVar17 >> 0x10)) & bVar136;
          auVar76[8] = (~(byte)iVar112 & 0xdb | (byte)iVar112 & 0xdb) & bVar141;
          auVar76[9] = (~bVar93 & 0xf | bVar93 & 0xf) & bVar141;
          auVar76[10] = (~bVar95 & 0x49 | bVar95 & 0x49) & bVar141;
          auVar76[0xc] = (~(byte)iVar119 & 0xdb | (byte)iVar119 & 0xdb) & bVar156;
          auVar76[0xd] = (~bVar100 & 0xf | bVar100 & 0xf) & bVar156;
          auVar76[0xe] = (~bVar102 & 0x49 | bVar102 & 0x49) & bVar156;
          auVar76[3] = ((byte)(uVar151 >> 0x18) | (byte)(uVar17 >> 0x18)) & bVar136 |
                       bVar159 & ~bVar136 & 0x80;
          auVar76._4_3_ = 0;
          auVar76[7] = (byte)(uVar17 >> 0x38) & bVar139 | bVar90 & ~bVar139 & 0x80;
          auVar76[0xb] = (~bVar98 & 0x40 | bVar98 & 0xc0) & bVar141 | bVar98 & ~bVar141 & 0x80;
          auVar76[0xf] = (~bVar104 & 0x40 | bVar104 & 0xc0) & bVar156 | bVar104 & ~bVar156 & 0x80;
          auVar143 = auVar143 ^ (auVar143 ^ auVar155) & ~auVar126;
          uVar17 = CONCAT17(bVar131,(uint7)uVar124) & 0x3f490fdb3f490fdb;
          bVar156 = (byte)iVar120 & 0xdb;
          bVar157 = bVar157 & 0xf;
          bVar158 = bVar158 & 0x49;
          bVar159 = (byte)iVar133 & 0xdb;
          bVar160 = bVar160 & 0xf;
          bVar161 = bVar161 & 0x49;
          bVar136 = bVar135 & auVar126[3] & 0x80 | (byte)(uVar17 >> 0x18);
          bVar139 = bVar138 & auVar126[0xb] & 0x80 | bVar132 & 0x3f;
          bVar141 = bVar140 & auVar126[0xf] & 0x80 | bVar134 & 0x3f;
          uVar7 = (undefined3)uVar17;
          auVar6[8] = bVar156;
          auVar6._0_8_ = CONCAT17(bVar137,(uint7)CONCAT13(bVar136,uVar7)) & 0x80ffffffffffffff;
          auVar6[9] = bVar157;
          auVar6[10] = bVar158;
          auVar6[0xb] = bVar139;
          auVar6[0xc] = bVar159;
          auVar6[0xd] = bVar160;
          auVar6[0xe] = bVar161;
          auVar6[0xf] = bVar141;
          auVar8[8] = bVar156;
          auVar8._0_8_ = CONCAT17(bVar137,(uint7)CONCAT13(bVar136,uVar7)) & 0x80ffffffffffffff;
          auVar8[9] = bVar157;
          auVar8[10] = bVar158;
          auVar8[0xb] = bVar139;
          auVar8[0xc] = bVar159;
          auVar8[0xd] = bVar160;
          auVar8[0xe] = bVar161;
          auVar8[0xf] = bVar141;
          auVar76 = auVar76 ^ (auVar76 ^
                              auVar8 ^ (auVar6 ^ auVar143 ^
                                                 (auVar143 ^
                                                 auVar164 ^ (auVar164 ^ auVar148) & auVar126) &
                                                 auVar122) & auVar113) & auVar106;
          fVar73 = auVar76._0_4_;
          fVar72 = param_2 * fVar73;
          fVar110 = auVar76._12_4_;
          fVar54 = fVar73 - fVar73 * param_2;
          fVar110 = fVar110 - fVar110 * param_2;
          iVar112 = -(uint)(ABS(fVar54) == INFINITY);
          iVar119 = -(uint)(ABS(fVar72) == INFINITY);
          iVar120 = -(uint)(ABS(fVar73) == INFINITY);
          iVar133 = -(uint)(ABS(fVar110) == INFINITY);
          auVar65[0] = ~(byte)iVar112;
          auVar65[1] = ~(byte)((uint)iVar112 >> 8);
          auVar65[2] = ~(byte)((uint)iVar112 >> 0x10);
          auVar65[3] = ~(byte)((uint)iVar112 >> 0x18);
          auVar65[4] = ~(byte)iVar119;
          auVar65[5] = ~(byte)((uint)iVar119 >> 8);
          auVar65[6] = ~(byte)((uint)iVar119 >> 0x10);
          auVar65[7] = ~(byte)((uint)iVar119 >> 0x18);
          auVar65[8] = ~(byte)iVar120;
          auVar65[9] = ~(byte)((uint)iVar120 >> 8);
          auVar65[10] = ~(byte)((uint)iVar120 >> 0x10);
          auVar65[0xb] = ~(byte)((uint)iVar120 >> 0x18);
          auVar65[0xc] = ~(byte)iVar133;
          auVar65[0xd] = ~(byte)((uint)iVar133 >> 8);
          auVar65[0xe] = ~(byte)((uint)iVar133 >> 0x10);
          auVar65[0xf] = ~(byte)((uint)iVar133 >> 0x18);
          auVar77._0_4_ =
               (int)((float)(-(uint)(0.0 <= fVar54) & 0x80000000 ^ 0xbf000000) + fVar54 * 0.15915494
                    );
          auVar77._4_4_ =
               (int)((float)(-(uint)(0.0 <= fVar72) & 0x80000000 ^ 0xbf000000) + fVar72 * 0.15915494
                    );
          auVar77._8_4_ =
               (int)((float)(-(uint)(0.0 <= fVar73) & 0x80000000 ^ 0xbf000000) + fVar73 * 0.15915494
                    );
          auVar77._12_4_ =
               (int)((float)(-(uint)(0.0 <= fVar110) & 0x80000000 ^ 0xbf000000) +
                    fVar110 * 0.15915494);
          auVar36 = NEON_scvtf(auVar77,4);
          fVar54 = fVar54 + auVar36._0_4_ * -6.2831855;
          fVar72 = fVar72 + auVar36._4_4_ * -6.2831855;
          fVar73 = fVar73 + auVar36._8_4_ * -6.2831855;
          fVar110 = fVar110 + auVar36._12_4_ * -6.2831855;
          auVar70._0_4_ = -(uint)(fVar54 < -1.5707964);
          auVar70._4_4_ = -(uint)(fVar72 < -1.5707964);
          auVar70._8_4_ = -(uint)(fVar73 < -1.5707964);
          auVar70._12_4_ = -(uint)(fVar110 < -1.5707964);
          auVar59._0_4_ = -3.1415927 - fVar54;
          auVar59._4_4_ = -3.1415927 - fVar72;
          auVar59._8_4_ = -3.1415927 - fVar73;
          auVar59._12_4_ = -3.1415927 - fVar110;
          auVar4[4] = SUB41(fVar72,0);
          auVar4._0_4_ = fVar54;
          auVar4[5] = (char)((uint)fVar72 >> 8);
          auVar4[6] = (char)((uint)fVar72 >> 0x10);
          auVar4[7] = (char)((uint)fVar72 >> 0x18);
          auVar4[8] = SUB41(fVar73,0);
          auVar4[9] = (char)((uint)fVar73 >> 8);
          auVar4[10] = (char)((uint)fVar73 >> 0x10);
          auVar4[0xb] = (char)((uint)fVar73 >> 0x18);
          auVar4[0xc] = SUB41(fVar110,0);
          auVar4[0xd] = (char)((uint)fVar110 >> 8);
          auVar4[0xe] = (char)((uint)fVar110 >> 0x10);
          auVar4[0xf] = (char)((uint)fVar110 >> 0x18);
          auVar59 = auVar59 ^ (auVar59 ^ auVar4) & ~auVar70;
          auVar71._0_4_ = -(uint)(1.5707964 < auVar59._0_4_);
          auVar71._4_4_ = -(uint)(1.5707964 < auVar59._4_4_);
          auVar71._8_4_ = -(uint)(1.5707964 < auVar59._8_4_);
          auVar71._12_4_ = -(uint)(1.5707964 < auVar59._12_4_);
          auVar47._0_4_ = 3.1415927 - auVar59._0_4_;
          auVar47._4_4_ = 3.1415927 - auVar59._4_4_;
          auVar47._8_4_ = 3.1415927 - auVar59._8_4_;
          auVar47._12_4_ = 3.1415927 - auVar59._12_4_;
          auVar47 = auVar47 ^ (auVar47 ^ auVar59) & ~auVar71;
          fVar54 = auVar47._0_4_;
          fVar55 = fVar54 * fVar54;
          fVar72 = auVar47._4_4_;
          fVar162 = fVar72 * fVar72;
          fVar73 = auVar47._8_4_;
          fVar165 = fVar73 * fVar73;
          fVar110 = auVar47._12_4_;
          fVar75 = fVar110 * fVar110;
          auVar60._8_4_ = 0x7fc00000;
          auVar60._0_8_ = 0x7fc000007fc00000;
          auVar60._12_4_ = 0x7fc00000;
          auVar48._0_4_ =
               fVar54 * (local_90 +
                        fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar48._4_4_ =
               fVar72 * (fStack_8c +
                        fVar162 * (fVar162 * (fVar162 * (fVar162 * (fVar162 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
          auVar48._8_4_ =
               fVar73 * (fStack_88 +
                        fVar165 * (fVar165 * (fVar165 * (fVar165 * (fVar165 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
          auVar48._12_4_ =
               fVar110 * (fStack_84 +
                         fVar75 * (fVar75 * (fVar75 * (fVar75 * (fVar75 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                            0.008333334) + -0.16666667));
          auVar48 = auVar48 ^ (auVar48 ^ auVar60) & ~auVar65;
          fVar73 = auVar48._8_4_;
          fVar54 = auVar48._0_4_;
          fVar72 = auVar48._4_4_;
          fVar110 = fVar78 + param_2 * (fVar34 - fVar78);
          fVar55 = fVar74 + param_2 * (fVar42 - fVar74);
          fVar162 = fVar80 + param_2 * (fVar64 - fVar80);
          fVar165 = fVar105 + param_2 * (fVar44 - fVar105);
          iVar112 = -(uint)(fVar73 == 0.0);
          iVar119 = -(uint)(fVar73 == 0.0);
          iVar120 = -(uint)(fVar73 == 0.0);
          iVar133 = -(uint)(fVar73 == 0.0);
          auVar49[0] = ~(byte)iVar112;
          auVar49[1] = ~(byte)((uint)iVar112 >> 8);
          auVar49[2] = ~(byte)((uint)iVar112 >> 0x10);
          auVar49[3] = ~(byte)((uint)iVar112 >> 0x18);
          auVar49[4] = ~(byte)iVar119;
          auVar49[5] = ~(byte)((uint)iVar119 >> 8);
          auVar49[6] = ~(byte)((uint)iVar119 >> 0x10);
          auVar49[7] = ~(byte)((uint)iVar119 >> 0x18);
          auVar49[8] = ~(byte)iVar120;
          auVar49[9] = ~(byte)((uint)iVar120 >> 8);
          auVar49[10] = ~(byte)((uint)iVar120 >> 0x10);
          auVar49[0xb] = ~(byte)((uint)iVar120 >> 0x18);
          auVar49[0xc] = ~(byte)iVar133;
          auVar49[0xd] = ~(byte)((uint)iVar133 >> 8);
          auVar49[0xe] = ~(byte)((uint)iVar133 >> 0x10);
          auVar49[0xf] = ~(byte)((uint)iVar133 >> 0x18);
          auVar61._0_4_ = (fVar78 * fVar54 + fVar34 * fVar72) / fVar73;
          auVar61._4_4_ = (fVar74 * fVar54 + fVar42 * fVar72) / fVar73;
          auVar61._8_4_ = (fVar80 * fVar54 + fVar64 * fVar72) / fVar73;
          auVar61._12_4_ = (fVar105 * fVar54 + fVar44 * fVar72) / fVar73;
          auVar5._4_4_ = fVar55;
          auVar5._0_4_ = fVar110;
          auVar5._8_4_ = fVar162;
          auVar5._12_4_ = fVar165;
          auVar39._4_4_ = fVar55;
          auVar39._0_4_ = fVar110;
          auVar39._8_4_ = fVar162;
          auVar39._12_4_ = fVar165;
          auVar39 = auVar39 ^ (auVar5 ^ auVar61) & auVar49;
          fVar34 = auVar39._0_4_;
          fVar42 = auVar39._4_4_;
          fVar64 = auVar39._8_4_;
          fVar44 = auVar39._12_4_;
          auVar31._0_4_ = fVar34 * fVar34 + fVar42 * fVar42;
          auVar31._4_4_ = fVar64 * fVar64 + fVar44 * fVar44;
          auVar31._8_4_ = fVar34 * fVar34 + fVar42 * fVar42;
          auVar31._12_4_ = fVar64 * fVar64 + fVar44 * fVar44;
          auVar36 = NEON_ext(auVar31,auVar31,4,1);
          auVar32._0_4_ = auVar36._0_4_ + auVar36._4_4_;
          auVar32._4_4_ = auVar36._8_4_ + auVar36._12_4_;
          auVar32._8_4_ = auVar36._0_4_ + auVar36._4_4_;
          auVar32._12_4_ = auVar36._8_4_ + auVar36._12_4_;
          auVar36 = NEON_frsqrte(auVar32,4);
          auVar66._0_4_ = auVar32._0_4_ * auVar36._0_4_;
          auVar66._4_4_ = auVar32._4_4_ * auVar36._4_4_;
          auVar66._8_4_ = auVar32._8_4_ * auVar36._8_4_;
          auVar66._12_4_ = auVar32._12_4_ * auVar36._12_4_;
          auVar37 = NEON_frsqrts(auVar36,auVar66,4);
          auVar62._0_4_ = auVar36._0_4_ * auVar37._0_4_;
          auVar62._4_4_ = auVar36._4_4_ * auVar37._4_4_;
          auVar62._8_4_ = auVar36._8_4_ * auVar37._8_4_;
          auVar62._12_4_ = auVar36._12_4_ * auVar37._12_4_;
          auVar67._0_4_ = auVar32._0_4_ * auVar62._0_4_;
          auVar67._4_4_ = auVar32._4_4_ * auVar62._4_4_;
          auVar67._8_4_ = auVar32._8_4_ * auVar62._8_4_;
          auVar67._12_4_ = auVar32._12_4_ * auVar62._12_4_;
          iVar112 = -(uint)(auVar32._0_4_ == 0.0);
          iVar119 = -(uint)(auVar32._4_4_ == 0.0);
          iVar120 = -(uint)(auVar32._8_4_ == 0.0);
          iVar133 = -(uint)(auVar32._12_4_ == 0.0);
          auVar36 = NEON_frsqrts(auVar62,auVar67,4);
          fVar34 = auVar62._0_4_ * auVar36._0_4_ * fVar34;
          fVar42 = auVar62._4_4_ * auVar36._4_4_ * fVar42;
          fVar64 = auVar62._8_4_ * auVar36._8_4_ * fVar64;
          fVar44 = auVar62._12_4_ * auVar36._12_4_ * fVar44;
          fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar112 >> 0x18),
                                   CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                            ~(byte)((uint)iVar112 >> 0x10),
                                            CONCAT11((byte)((uint)fVar34 >> 8) &
                                                     ~(byte)((uint)iVar112 >> 8),
                                                     SUB41(fVar34,0) & ~(byte)iVar112)));
          auVar35._0_8_ =
               CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar119 >> 0x18),
                        CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar119 >> 0x10),
                                 CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar119 >> 8),
                                          CONCAT14(SUB41(fVar42,0) & ~(byte)iVar119,fVar34))));
          auVar35[8] = SUB41(fVar64,0) & ~(byte)iVar120;
          auVar35[9] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar120 >> 8);
          auVar35[10] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar120 >> 0x10);
          auVar35[0xb] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar120 >> 0x18);
          auVar40[0xc] = SUB41(fVar44,0) & ~(byte)iVar133;
          auVar40._0_12_ = auVar35;
          auVar40[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar133 >> 8);
          auVar40[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar133 >> 0x10);
          auVar40[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar133 >> 0x18);
          fVar42 = (float)((ulong)auVar35._0_8_ >> 0x20);
          fVar42 = fVar42 * fVar42;
          fVar64 = auVar35._8_4_ * auVar35._8_4_;
          fVar44 = auVar40._12_4_ * auVar40._12_4_;
          auVar33._0_4_ = fVar34 * fVar34 + fVar42;
          auVar33._4_4_ = fVar64 + fVar44;
          auVar33._8_4_ = fVar34 * fVar34 + fVar42;
          auVar33._12_4_ = fVar64 + fVar44;
          auVar36 = NEON_ext(auVar33,auVar33,4,1);
          auVar50._0_4_ = -(uint)(auVar36._0_4_ + auVar36._4_4_ == 0.0);
          auVar63._8_8_ = _UNK_03cabe58;
          auVar63._0_8_ = _DAT_03cabe50;
          auVar50._4_4_ = auVar50._0_4_;
          auVar50._8_4_ = auVar50._0_4_;
          auVar50._12_4_ = auVar50._0_4_;
          FUN_00d172e8(auVar40 ^ (auVar40 ^ auVar63) & auVar50,*plVar1,*psVar27);
          if (*(char *)(param_3 + 0x174) != '\0') {
            FUN_00c8ecec(*plVar1,*psVar27);
            auVar16._4_4_ = param_2;
            auVar16._0_4_ = param_2;
            auVar16._8_4_ = param_2;
            auVar16._12_4_ = param_2;
            auVar51._0_4_ = (float)local_e0 - extraout_s0;
            auVar51._4_4_ = local_e0._4_4_ - extraout_var;
            auVar51._8_4_ = fVar123 - extraout_var_00;
            auVar51._12_4_ = 0.0 - extraout_var_01;
            auVar41._0_4_ = extraout_s0 + param_2 * auVar51._0_4_;
            auVar41._4_4_ = extraout_var + param_2 * auVar51._4_4_;
            auVar41._8_4_ = extraout_var_00 + param_2 * auVar51._8_4_;
            auVar41._12_4_ = extraout_var_01 + param_2 * auVar51._12_4_;
            FUN_00cc3a84(auVar41,auVar51,auVar16,*plVar1,*psVar27);
          }
        }
        puVar24 = puVar24 + 8;
      } while (puVar24 != puVar3);
    }
  }
  return;
}


