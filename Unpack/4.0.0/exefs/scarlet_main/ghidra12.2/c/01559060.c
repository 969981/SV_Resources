/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01559060; name: FUN_01559060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01559060(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined5 uVar9;
  short sVar10;
  long *plVar11;
  undefined1 (*pauVar12) [16];
  float *pfVar13;
  long lVar14;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 in_q3 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  float fVar90;
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 in_q18 [16];
  undefined1 auVar105 [12];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar102 [16];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  auVar105 = in_q18._4_12_;
  auVar103._8_8_ = _UNK_03cabe68;
  auVar103._0_8_ = _DAT_03cabe60;
  auVar108._12_4_ = DAT_03cab628._4_4_;
  auVar108._8_4_ = (float)DAT_03cab628;
  auVar108._4_4_ = DAT_03cab620._4_4_;
  auVar108._0_4_ = (float)DAT_03cab620;
  auVar86._8_8_ = _UNK_03caa5b8;
  auVar86._0_8_ = _DAT_03caa5b0;
  lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
  fVar85 = _DAT_03cabe50;
  fVar87 = _UNK_03cabe54;
  fVar88 = _UNK_03cabe58;
  fVar89 = _UNK_03cabe5c;
  if ((lVar14 != 0) && (plVar11 = *(long **)(lVar14 + 0x48), plVar11 != (long *)0x0)) {
    pauVar12 = (undefined1 (*) [16])(**(code **)(*plVar11 + 0x68))();
    auVar105 = in_q18._4_12_;
    uVar2 = *(undefined8 *)(*pauVar12 + 8);
    uVar1 = *(undefined8 *)*pauVar12;
    auVar108 = *pauVar12;
    uVar3 = *(undefined8 *)pauVar12[1];
    fStack_68 = (float)*(undefined8 *)(pauVar12[1] + 8);
    fStack_64 = (float)((ulong)*(undefined8 *)(pauVar12[1] + 8) >> 0x20);
    local_70 = (float)uVar3;
    fStack_6c = (float)((ulong)uVar3 >> 0x20);
    uVar3 = *(undefined8 *)pauVar12[2];
    fStack_78 = (float)*(undefined8 *)(pauVar12[2] + 8);
    fStack_74 = (float)((ulong)*(undefined8 *)(pauVar12[2] + 8) >> 0x20);
    local_80 = (float)uVar3;
    fStack_7c = (float)((ulong)uVar3 >> 0x20);
    auVar86 = pauVar12[3];
    local_50 = auVar86._0_4_;
    fStack_4c = auVar86._4_4_;
    fStack_48 = auVar86._8_4_;
    fStack_44 = auVar86._12_4_;
    if (*(long *)(param_1 + 0x2d8) == 0) {
      auVar103._12_4_ = fStack_64;
      auVar103._0_12_ = *(undefined1 (*) [12])pauVar12[1];
      auVar86._12_4_ = fStack_74;
      auVar86._0_12_ = *(undefined1 (*) [12])pauVar12[2];
      fVar85 = local_50;
      fVar87 = fStack_4c;
      fVar88 = fStack_48;
      fVar89 = fStack_44;
    }
    else {
      sVar10 = FUN_00c9edd0(*(long *)(param_1 + 0x2d8),
                            *(undefined4 *)
                             (*(long *)(param_1 + 0x2a0) + (long)param_2 * 0x550 + 0x450));
      auVar105 = in_q18._4_12_;
      if (sVar10 < 0) {
        uVar39 = (undefined1)_UNK_03cabe68;
        uVar40 = (undefined1)((ulong)_UNK_03cabe68 >> 8);
        uVar41 = (undefined1)((ulong)_UNK_03cabe68 >> 0x10);
        uVar42 = (undefined1)((ulong)_UNK_03cabe68 >> 0x18);
        uVar43 = (undefined1)((ulong)_UNK_03cabe68 >> 0x20);
        uVar44 = (undefined1)((ulong)_UNK_03cabe68 >> 0x28);
        uVar45 = (undefined1)((ulong)_UNK_03cabe68 >> 0x30);
        uVar46 = (undefined1)((ulong)_UNK_03cabe68 >> 0x38);
        uVar31 = (undefined1)_DAT_03cabe60;
        uVar32 = (undefined1)((ulong)_DAT_03cabe60 >> 8);
        uVar33 = (undefined1)((ulong)_DAT_03cabe60 >> 0x10);
        uVar34 = (undefined1)((ulong)_DAT_03cabe60 >> 0x18);
        uVar35 = (undefined1)((ulong)_DAT_03cabe60 >> 0x20);
        uVar36 = (undefined1)((ulong)_DAT_03cabe60 >> 0x28);
        uVar37 = (undefined1)((ulong)_DAT_03cabe60 >> 0x30);
        uVar38 = (undefined1)((ulong)_DAT_03cabe60 >> 0x38);
        in_q3._8_8_ = _UNK_03caa5b8;
        in_q3._0_8_ = _DAT_03caa5b0;
        uVar55 = SUB41(_UNK_03cabe58,0);
        uVar56 = (undefined1)((uint)_UNK_03cabe58 >> 8);
        uVar57 = (undefined1)((uint)_UNK_03cabe58 >> 0x10);
        uVar58 = (undefined1)((uint)_UNK_03cabe58 >> 0x18);
        uVar59 = SUB41(_UNK_03cabe5c,0);
        uVar60 = (undefined1)((uint)_UNK_03cabe5c >> 8);
        uVar61 = (undefined1)((uint)_UNK_03cabe5c >> 0x10);
        uVar62 = (undefined1)((uint)_UNK_03cabe5c >> 0x18);
        uVar47 = SUB41(_DAT_03cabe50,0);
        uVar48 = (undefined1)((uint)_DAT_03cabe50 >> 8);
        uVar49 = (undefined1)((uint)_DAT_03cabe50 >> 0x10);
        uVar50 = (undefined1)((uint)_DAT_03cabe50 >> 0x18);
        uVar51 = SUB41(_UNK_03cabe54,0);
        uVar52 = (undefined1)((uint)_UNK_03cabe54 >> 8);
        uVar53 = (undefined1)((uint)_UNK_03cabe54 >> 0x10);
        uVar54 = (undefined1)((uint)_UNK_03cabe54 >> 0x18);
        fVar85 = (float)DAT_03cab620;
        fVar87 = DAT_03cab620._4_4_;
        fVar88 = (float)DAT_03cab628;
        fVar89 = DAT_03cab628._4_4_;
      }
      else {
        pfVar13 = (float *)FUN_00c4c40c(*(undefined8 *)(param_1 + 0x2d8));
        auVar105 = in_q18._4_12_;
        uVar3 = *(undefined8 *)(pfVar13 + 6);
        uVar39 = (undefined1)uVar3;
        uVar40 = (undefined1)((ulong)uVar3 >> 8);
        uVar41 = (undefined1)((ulong)uVar3 >> 0x10);
        uVar42 = (undefined1)((ulong)uVar3 >> 0x18);
        uVar43 = (undefined1)((ulong)uVar3 >> 0x20);
        uVar44 = (undefined1)((ulong)uVar3 >> 0x28);
        uVar45 = (undefined1)((ulong)uVar3 >> 0x30);
        uVar46 = (undefined1)((ulong)uVar3 >> 0x38);
        uVar3 = *(undefined8 *)(pfVar13 + 4);
        uVar31 = (undefined1)uVar3;
        uVar32 = (undefined1)((ulong)uVar3 >> 8);
        uVar33 = (undefined1)((ulong)uVar3 >> 0x10);
        uVar34 = (undefined1)((ulong)uVar3 >> 0x18);
        uVar35 = (undefined1)((ulong)uVar3 >> 0x20);
        uVar36 = (undefined1)((ulong)uVar3 >> 0x28);
        uVar37 = (undefined1)((ulong)uVar3 >> 0x30);
        uVar38 = (undefined1)((ulong)uVar3 >> 0x38);
        in_q3 = *(undefined1 (*) [16])(pfVar13 + 8);
        uVar3 = *(undefined8 *)(pfVar13 + 0xe);
        uVar55 = (undefined1)uVar3;
        uVar56 = (undefined1)((ulong)uVar3 >> 8);
        uVar57 = (undefined1)((ulong)uVar3 >> 0x10);
        uVar58 = (undefined1)((ulong)uVar3 >> 0x18);
        uVar59 = (undefined1)((ulong)uVar3 >> 0x20);
        uVar60 = (undefined1)((ulong)uVar3 >> 0x28);
        uVar61 = (undefined1)((ulong)uVar3 >> 0x30);
        uVar62 = (undefined1)((ulong)uVar3 >> 0x38);
        uVar3 = *(undefined8 *)(pfVar13 + 0xc);
        uVar47 = (undefined1)uVar3;
        uVar48 = (undefined1)((ulong)uVar3 >> 8);
        uVar49 = (undefined1)((ulong)uVar3 >> 0x10);
        uVar50 = (undefined1)((ulong)uVar3 >> 0x18);
        uVar51 = (undefined1)((ulong)uVar3 >> 0x20);
        uVar52 = (undefined1)((ulong)uVar3 >> 0x28);
        uVar53 = (undefined1)((ulong)uVar3 >> 0x30);
        uVar54 = (undefined1)((ulong)uVar3 >> 0x38);
        fVar85 = *pfVar13;
        fVar87 = pfVar13[1];
        fVar88 = pfVar13[2];
        fVar89 = pfVar13[3];
      }
      fVar109 = (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)));
      fVar29 = (float)uVar1;
      fVar30 = (float)((ulong)uVar1 >> 0x20);
      fVar90 = (float)uVar2;
      fVar91 = (float)((ulong)uVar2 >> 0x20);
      fVar110 = (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)));
      fVar26 = in_q3._0_4_;
      fVar27 = in_q3._4_4_;
      fVar111 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
      fVar22 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
      fVar20 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
      fVar28 = in_q3._8_4_;
      fVar23 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
      auVar108._4_4_ =
           fVar30 * fVar85 + fStack_6c * fVar87 + fStack_7c * fVar88 + fStack_4c * fVar89;
      auVar108._0_4_ = fVar29 * fVar85 + local_70 * fVar87 + local_80 * fVar88 + local_50 * fVar89;
      auVar108._12_4_ =
           fVar91 * fVar85 + fStack_64 * fVar87 + fStack_74 * fVar88 + fStack_44 * fVar89;
      auVar108._8_4_ =
           fVar90 * fVar85 + fStack_68 * fVar87 + fStack_78 * fVar88 + fStack_48 * fVar89;
      fVar21 = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
      fVar24 = fVar30 * fVar109 + fStack_6c * fVar110 + fStack_7c * fVar20 + fStack_4c * fVar21;
      auVar103._12_4_ =
           fVar91 * fVar109 + fStack_64 * fVar110 + fStack_74 * fVar20 + fStack_44 * fVar21;
      auVar103._8_4_ =
           fVar90 * fVar109 + fStack_68 * fVar110 + fStack_78 * fVar20 + fStack_48 * fVar21;
      fVar89 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)));
      fVar85 = fVar29 * fVar111 + local_70 * fVar22 + local_80 * fVar23 + local_50 * fVar89;
      fVar87 = fVar30 * fVar111 + fStack_6c * fVar22 + fStack_7c * fVar23 + fStack_4c * fVar89;
      fVar88 = fVar90 * fVar111 + fStack_68 * fVar22 + fStack_78 * fVar23 + fStack_48 * fVar89;
      fVar89 = fVar91 * fVar111 + fStack_64 * fVar22 + fStack_74 * fVar23 + fStack_44 * fVar89;
      fVar111 = in_q3._12_4_;
      auVar86._0_4_ = fVar29 * fVar26 + local_70 * fVar27 + local_80 * fVar28 + local_50 * fVar111;
      auVar86._4_4_ =
           fVar30 * fVar26 + fStack_6c * fVar27 + fStack_7c * fVar28 + fStack_4c * fVar111;
      auVar86._8_4_ =
           fVar90 * fVar26 + fStack_68 * fVar27 + fStack_78 * fVar28 + fStack_48 * fVar111;
      auVar86._12_4_ =
           fVar91 * fVar26 + fStack_64 * fVar27 + fStack_74 * fVar28 + fStack_44 * fVar111;
      auVar103[4] = SUB41(fVar24,0);
      auVar103._0_4_ = fVar29 * fVar109 + local_70 * fVar110 + local_80 * fVar20 + local_50 * fVar21
      ;
      auVar103[5] = (char)((uint)fVar24 >> 8);
      auVar103[6] = (char)((uint)fVar24 >> 0x10);
      auVar103[7] = (char)((uint)fVar24 >> 0x18);
    }
  }
  fVar20 = auVar108._4_4_;
  fVar23 = auVar108._8_4_;
  fVar27 = auVar108._12_4_;
  fVar110 = auVar103._0_4_;
  auVar63._4_12_ = in_q3._4_12_;
  auVar63._0_4_ = fVar110;
  fVar21 = auVar103._4_4_;
  auVar65._12_4_ = in_q3._12_4_;
  auVar65._0_8_ = auVar63._0_8_;
  auVar65._8_4_ = fVar21;
  auVar64._8_8_ = auVar65._8_8_;
  auVar64._4_4_ = fVar85;
  auVar64._0_4_ = fVar110;
  auVar66._0_12_ = auVar64._0_12_;
  auVar66._12_4_ = fVar87;
  fVar24 = auVar103._8_4_;
  fVar28 = auVar103._12_4_;
  fVar109 = auVar108._0_4_;
  fVar111 = (float)(CONCAT17(auVar86[3],
                             CONCAT16(auVar86[2],CONCAT15(auVar86[1],CONCAT14(auVar86[0],fVar109))))
                   >> 0x20);
  uVar9 = CONCAT14(auVar108[7],
                   CONCAT13(auVar108[6],CONCAT12(auVar108[5],CONCAT11(auVar108[4],auVar86[3]))));
  uVar25 = (undefined4)((uint5)uVar9 >> 8);
  auVar67._4_12_ = auVar66._4_12_;
  auVar67._0_4_ = uVar25;
  fVar29 = (float)(CONCAT18(auVar86[7],
                            CONCAT17(auVar86[6],CONCAT16(auVar86[5],CONCAT15(auVar86[4],uVar9)))) >>
                  0x28);
  auVar69._0_8_ = auVar67._0_8_;
  auVar69._8_4_ = fVar29;
  auVar69._12_4_ = fVar87;
  auVar68._8_8_ = auVar69._8_8_;
  auVar68._4_4_ = fVar21;
  auVar68._0_4_ = uVar25;
  auVar70._0_12_ = auVar68._0_12_;
  auVar70._12_4_ = fVar87;
  auVar76._4_12_ = auVar86._4_12_;
  auVar76._0_4_ = fVar23;
  fVar22 = (float)(CONCAT17(auVar86[0xb],
                            CONCAT16(auVar86[10],CONCAT15(auVar86[9],CONCAT14(auVar86[8],fVar23))))
                  >> 0x20);
  auVar78._12_4_ = auVar86._12_4_;
  auVar78._0_8_ = auVar76._0_8_;
  auVar78._8_4_ = fVar22;
  auVar77._8_8_ = auVar78._8_8_;
  auVar77._4_4_ = fVar24;
  auVar77._0_4_ = fVar23;
  auVar79._0_12_ = auVar77._0_12_;
  auVar79._12_4_ = fVar88;
  uVar9 = CONCAT14(auVar108[0xf],
                   CONCAT13(auVar108[0xe],
                            CONCAT12(auVar108[0xd],CONCAT11(auVar108[0xc],auVar86[0xb]))));
  fVar26 = (float)((uint5)uVar9 >> 8);
  auVar95._4_12_ = auVar105;
  auVar95._0_4_ = fVar26;
  fVar30 = (float)(CONCAT18(auVar86[0xf],
                            CONCAT17(auVar86[0xe],
                                     CONCAT16(auVar86[0xd],CONCAT15(auVar86[0xc],uVar9)))) >> 0x28);
  auVar97._12_4_ = auVar105._8_4_;
  auVar97._0_8_ = auVar95._0_8_;
  auVar97._8_4_ = fVar30;
  auVar96._8_8_ = auVar97._8_8_;
  auVar96._4_4_ = fVar28;
  auVar96._0_4_ = fVar26;
  auVar98._0_12_ = auVar96._0_12_;
  auVar98._12_4_ = fVar89;
  auVar99._4_12_ = auVar98._4_12_;
  auVar81._4_12_ = auVar79._4_12_;
  auVar71._4_12_ = auVar70._4_12_;
  if ((fVar89 == 1.0) &&
     (auVar15._0_4_ = fVar26 * fVar26 + fVar28 * fVar28, auVar15._4_4_ = fVar30 * fVar30 + 0.0,
     auVar15._8_4_ = fVar26 * fVar26 + fVar28 * fVar28, auVar15._12_4_ = fVar30 * fVar30 + 0.0,
     auVar86 = NEON_ext(auVar15,auVar15,4,1), auVar86._0_4_ + auVar86._4_4_ == 0.0)) {
    auVar104._4_4_ = fVar24;
    auVar104._0_4_ = fVar24;
    auVar104._8_4_ = fVar24;
    auVar104._12_4_ = fVar24;
    auVar81._0_4_ = fVar23;
    auVar83._0_8_ = auVar81._0_8_;
    auVar83._8_4_ = fVar22;
    auVar83._12_4_ = fVar88;
    auVar82._8_8_ = auVar83._8_8_;
    auVar82._4_4_ = fVar23;
    auVar82._0_4_ = fVar23;
    auVar84._0_12_ = auVar82._0_12_;
    auVar84._12_4_ = fVar22;
    auVar103 = NEON_ext(auVar84,auVar104,8,1);
    auVar94._4_4_ = fVar21;
    auVar94._0_4_ = fVar21;
    auVar94._8_4_ = fVar21;
    auVar94._12_4_ = fVar21;
    auVar71._0_4_ = uVar25;
    auVar73._0_8_ = auVar71._0_8_;
    auVar73._8_4_ = fVar29;
    auVar73._12_4_ = fVar87;
    auVar72._8_8_ = auVar73._8_8_;
    auVar72._4_4_ = uVar25;
    auVar72._0_4_ = uVar25;
    auVar74._0_12_ = auVar72._0_12_;
    auVar74._12_4_ = fVar29;
    auVar86 = NEON_ext(auVar74,auVar94,8,1);
    auVar93._4_4_ = fVar110;
    auVar93._0_4_ = fVar110;
    auVar93._8_4_ = fVar110;
    auVar93._12_4_ = fVar110;
    auVar4._4_4_ = fVar109;
    auVar4._0_4_ = fVar109;
    auVar4._8_4_ = fVar111;
    auVar4._12_4_ = fVar111;
    NEON_ext(auVar4,auVar93,8,1);
    fVar109 = fVar109 * (fVar21 * auVar103._0_4_ - auVar86._0_4_ * fVar24) * (float)_DAT_03cac270;
    fVar110 = fVar110 * (fVar20 * auVar103._4_4_ - auVar86._4_4_ * fVar23) *
                        (float)((ulong)_DAT_03cac270 >> 0x20);
    fVar111 = fVar111 * (fVar20 * auVar103._8_4_ - auVar86._8_4_ * fVar23) * (float)_UNK_03cac278;
    fVar85 = (fVar20 * auVar103._12_4_ - auVar86._12_4_ * fVar23) *
             (float)((ulong)_UNK_03cac278 >> 0x20) * 0.0;
    auVar18._0_4_ = fVar109 + fVar110;
    auVar18._4_4_ = fVar111 + fVar85;
    auVar18._8_4_ = fVar109 + fVar110;
    auVar18._12_4_ = fVar111 + fVar85;
    auVar86 = NEON_ext(auVar18,auVar18,4,1);
    auVar19._0_4_ = auVar86._0_4_ + auVar86._4_4_;
    auVar19._4_4_ = auVar86._8_4_ + auVar86._12_4_;
    auVar19._8_4_ = auVar86._0_4_ + auVar86._4_4_;
    auVar19._12_4_ = auVar86._8_4_ + auVar86._12_4_;
    auVar86 = NEON_frecpe(auVar19,4);
    auVar103 = NEON_frecps(auVar86,auVar19,4);
    auVar75._0_4_ = auVar86._0_4_ * auVar103._0_4_;
    auVar75._4_4_ = auVar86._4_4_ * auVar103._4_4_;
    auVar75._8_4_ = auVar86._8_4_ * auVar103._8_4_;
    auVar75._12_4_ = auVar86._12_4_ * auVar103._12_4_;
    NEON_frecps(auVar75,auVar19,4);
  }
  else {
    auVar107._4_4_ = fVar24;
    auVar107._0_4_ = fVar24;
    auVar107._8_4_ = fVar24;
    auVar107._12_4_ = fVar24;
    auVar5._4_4_ = fVar23;
    auVar5._0_4_ = fVar23;
    auVar5._8_4_ = fVar22;
    auVar5._12_4_ = fVar22;
    auVar108 = NEON_ext(auVar5,auVar107,8,1);
    auVar99._0_4_ = fVar26;
    auVar101._0_8_ = auVar99._0_8_;
    auVar101._8_4_ = fVar30;
    auVar101._12_4_ = fVar89;
    auVar100._8_8_ = auVar101._8_8_;
    auVar100._4_4_ = fVar26;
    auVar100._0_4_ = fVar26;
    auVar102._0_12_ = auVar100._0_12_;
    auVar102._12_4_ = fVar30;
    auVar6._4_4_ = fVar28;
    auVar6._0_4_ = fVar28;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar28;
    auVar103 = NEON_ext(auVar102,auVar6,8,1);
    auVar80._4_4_ = fVar21;
    auVar80._0_4_ = fVar21;
    auVar80._8_4_ = fVar21;
    auVar80._12_4_ = fVar21;
    auVar7._4_4_ = uVar25;
    auVar7._0_4_ = uVar25;
    auVar7._8_4_ = fVar29;
    auVar7._12_4_ = fVar29;
    auVar86 = NEON_ext(auVar7,auVar80,8,1);
    auVar106._4_4_ = fVar110;
    auVar106._0_4_ = fVar110;
    auVar106._8_4_ = fVar110;
    auVar106._12_4_ = fVar110;
    auVar8._4_4_ = fVar109;
    auVar8._0_4_ = fVar109;
    auVar8._8_4_ = fVar111;
    auVar8._12_4_ = fVar111;
    NEON_ext(auVar8,auVar106,8,1);
    fVar109 = fVar109 * (fVar21 * (fVar89 * auVar108._0_4_ - fVar88 * auVar103._0_4_) +
                         (fVar88 * fVar28 - fVar24 * fVar89) * auVar86._0_4_ +
                        (fVar24 * auVar103._0_4_ - auVar108._0_4_ * fVar28) * fVar87) *
                        (float)_DAT_03cabc00;
    fVar110 = fVar110 * (fVar20 * (fVar89 * auVar108._4_4_ - fVar88 * auVar103._4_4_) +
                         (fVar88 * fVar27 - fVar23 * fVar89) * auVar86._4_4_ +
                        (fVar23 * auVar103._4_4_ - auVar108._4_4_ * fVar27) * fVar87) *
                        (float)((ulong)_DAT_03cabc00 >> 0x20);
    fVar111 = fVar111 * (fVar20 * (fVar89 * auVar108._8_4_ - fVar88 * auVar103._8_4_) +
                         (fVar88 * fVar27 - fVar23 * fVar89) * auVar86._8_4_ +
                        (fVar23 * auVar103._8_4_ - auVar108._8_4_ * fVar27) * fVar87) *
                        (float)_UNK_03cabc08;
    fVar85 = fVar85 * (fVar20 * (fVar30 * auVar108._12_4_ - fVar22 * auVar103._12_4_) +
                       (fVar22 * fVar27 - fVar23 * fVar30) * auVar86._12_4_ +
                      (fVar23 * auVar103._12_4_ - auVar108._12_4_ * fVar27) * fVar29) *
                      (float)((ulong)_UNK_03cabc08 >> 0x20);
    auVar16._0_4_ = fVar109 + fVar110;
    auVar16._4_4_ = fVar111 + fVar85;
    auVar16._8_4_ = fVar109 + fVar110;
    auVar16._12_4_ = fVar111 + fVar85;
    auVar86 = NEON_ext(auVar16,auVar16,4,1);
    auVar17._0_4_ = auVar86._0_4_ + auVar86._4_4_;
    auVar17._4_4_ = auVar86._8_4_ + auVar86._12_4_;
    auVar17._8_4_ = auVar86._0_4_ + auVar86._4_4_;
    auVar17._12_4_ = auVar86._8_4_ + auVar86._12_4_;
    auVar86 = NEON_frecpe(auVar17,4);
    auVar103 = NEON_frecps(auVar86,auVar17,4);
    auVar92._0_4_ = auVar86._0_4_ * auVar103._0_4_;
    auVar92._4_4_ = auVar86._4_4_ * auVar103._4_4_;
    auVar92._8_4_ = auVar86._8_4_ * auVar103._8_4_;
    auVar92._12_4_ = auVar86._12_4_ * auVar103._12_4_;
    NEON_frecps(auVar92,auVar17,4);
  }
  return;
}


