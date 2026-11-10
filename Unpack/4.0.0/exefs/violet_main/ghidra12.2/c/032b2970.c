/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032b2970; name: FUN_032b2970
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b2970(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar32;
  undefined8 uVar25;
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
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
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar62;
  undefined1 auVar61 [16];
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [12];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float local_100;
  float local_e0;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 *local_b0 [2];
  ulong local_a0;
  undefined1 (*local_98 [2]) [12];
  ulong local_88;
  float *local_80 [2];
  ulong local_70;
  undefined1 (*local_68 [2]) [16];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [4];
  float fStack_3c;
  
  if (((*param_1 != 0) && (uVar21 = FUN_031e198c(param_1[1],"direction","",1), 1 < uVar21)) &&
     (FUN_031e32f0(local_68,param_1,uVar21), *param_1 != 0)) {
    auVar68 = *local_68[0];
    fStack_b8 = auVar68._8_4_;
    fStack_b4 = auVar68._12_4_;
    local_c0 = auVar68._0_4_;
    fStack_bc = auVar68._4_4_;
    uVar21 = FUN_031e198c(param_1[1],"maxUpDownAngle","",1);
    if ((1 < uVar21) && (FUN_031e32f0(local_80,param_1,uVar21), *param_1 != 0)) {
      fVar63 = *local_80[0];
      uVar21 = FUN_031e198c(param_1[1],&DAT_03ca1564,&DAT_03ca1566,1);
      if (1 < uVar21) {
        FUN_031e32f0(local_98,param_1,uVar21);
        auVar17 = *local_98[0];
        auVar48 = *local_98[0];
        fVar23 = fStack_b8 * fStack_b8 + local_c0 * local_c0 + fStack_bc * fStack_bc;
        if (fVar23 == 0.0) {
          fVar23 = 0.0;
          auVar68 = ZEXT816(0);
        }
        else {
          fVar23 = SQRT(fVar23);
          fVar32 = SQRT(fStack_b8 * fStack_b8 + local_c0 * local_c0 + fStack_bc * fStack_bc);
          auVar68._0_4_ = local_c0 / fVar23;
          auVar68._4_4_ = fStack_bc / fVar32;
          auVar68._8_4_ = fStack_b8 / fVar23;
          auVar68._12_4_ = fStack_b4 / fVar32;
        }
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        fVar32 = 0.0;
        fVar34 = (float)*(undefined8 *)*local_98[0];
        fVar81 = (float)((ulong)*(undefined8 *)*local_98[0] >> 0x20);
        fVar24 = (float)*(undefined8 *)(*local_98[0] + 8);
        fVar58 = (float)((ulong)*(undefined8 *)(*local_98[0] + 8) >> 0x20);
        if (fVar23 != 0.0) {
          fVar23 = fVar34 * auVar68._0_4_;
          fVar32 = fVar81 * auVar68._4_4_;
          fVar33 = fVar24 * auVar68._8_4_;
          uVar64 = NEON_fmov(0xbf800000,4);
          uVar25 = NEON_fmax(CONCAT44(fVar33 + fVar23 + fVar32,fVar33 + fVar23 + fVar32),uVar64,4);
          uVar64 = NEON_fmov(0x3f800000,4);
          uVar64 = NEON_fmin(uVar25,uVar64,4);
          auVar26 = NEON_fmov(0x3f800000,4);
          fVar66 = (float)uVar64;
          fVar65 = -(float)((ulong)uVar64 >> 0x20);
          fVar23 = ABS(fVar66);
          fVar32 = ABS(fVar66);
          fVar33 = ABS(fVar66);
          auVar67[4] = SUB41(fVar23,0);
          auVar67._0_4_ = ABS(fVar66);
          auVar67[5] = (char)((uint)fVar23 >> 8);
          auVar67[6] = (char)((uint)fVar23 >> 0x10);
          auVar67[7] = (char)((uint)fVar23 >> 0x18);
          auVar67[8] = SUB41(fVar32,0);
          auVar67[9] = (char)((uint)fVar32 >> 8);
          auVar67[10] = (char)((uint)fVar32 >> 0x10);
          auVar67[0xb] = (char)((uint)fVar32 >> 0x18);
          auVar67[0xc] = SUB41(fVar33,0);
          auVar67[0xd] = (char)((uint)fVar33 >> 8);
          auVar67[0xe] = (char)((uint)fVar33 >> 0x10);
          auVar67[0xf] = (char)((uint)fVar33 >> 0x18);
          auVar67 = NEON_fmin(auVar67,auVar26,4);
          fVar23 = auVar67._0_4_;
          fVar32 = auVar67._4_4_;
          fVar33 = auVar67._8_4_;
          fVar47 = auVar67._12_4_;
          auVar56._0_4_ = (auVar26._0_4_ - fVar23) * 0.5;
          auVar56._4_4_ = (auVar26._4_4_ - fVar32) * 0.5;
          auVar56._8_4_ = (auVar26._8_4_ - fVar33) * 0.5;
          auVar56._12_4_ = (auVar26._12_4_ - fVar47) * 0.5;
          auVar72._0_8_ = CONCAT44(-(uint)(0.5 < fVar32),-(uint)(0.5 < fVar23));
          auVar72._8_4_ = -(uint)(0.5 < fVar33);
          auVar73._12_4_ = -(uint)(0.5 < fVar47);
          auVar73._0_12_ = auVar72;
          auVar78._8_8_ = auVar73._8_8_;
          auVar78._0_8_ = auVar72._0_8_;
          auVar75._8_8_ = auVar73._8_8_;
          auVar75._0_8_ = auVar72._0_8_;
          auVar61._0_4_ = SQRT(auVar56._0_4_);
          auVar61._4_4_ = SQRT(auVar56._4_4_);
          auVar61._8_4_ = SQRT(auVar56._8_4_);
          auVar61._12_4_ = SQRT(auVar56._12_4_);
          auVar76._4_4_ = fVar32 * fVar32;
          auVar76._0_4_ = fVar23 * fVar23;
          auVar76._8_4_ = fVar33 * fVar33;
          auVar76._12_4_ = fVar47 * fVar47;
          auVar79._4_4_ = fVar32 * fVar32;
          auVar79._0_4_ = fVar23 * fVar23;
          auVar79._8_4_ = fVar33 * fVar33;
          auVar79._12_4_ = fVar47 * fVar47;
          auVar79 = auVar79 ^ (auVar76 ^ auVar56) & auVar78;
          auVar70._0_4_ = -(uint)(fVar23 < 0.0001);
          auVar70._4_4_ = 0;
          auVar70._8_4_ = -(uint)(fVar33 < 0.0001);
          auVar70._12_4_ = -(uint)(fVar47 < 0.0001);
          fVar23 = auVar79._0_4_;
          fVar32 = auVar79._8_4_;
          fVar33 = auVar79._12_4_;
          auVar76 = auVar67 ^ (auVar67 ^ auVar61) & auVar75;
          auVar77._0_4_ =
               auVar76._0_4_ +
               auVar76._0_4_ *
               fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar77._4_4_ = 0;
          auVar77._8_4_ =
               auVar76._8_4_ +
               auVar76._8_4_ *
               fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar77._12_4_ =
               auVar76._12_4_ +
               auVar76._12_4_ *
               fVar33 * (fVar33 * (fVar33 * (fVar33 * (fVar33 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar80._0_4_ = 1.5707964 - (auVar77._0_4_ + auVar77._0_4_);
          auVar80._4_4_ = 0;
          auVar80._8_4_ = 0.0 - (auVar77._8_4_ + auVar77._8_4_);
          auVar80._12_4_ = 0.0 - (auVar77._12_4_ + auVar77._12_4_);
          auVar15._12_4_ = 0;
          auVar15._0_12_ = auVar72;
          auVar67 = auVar67 ^ (auVar67 ^ auVar77 ^ (auVar77 ^ auVar80) & auVar15) & ~auVar70;
          fVar32 = auVar68._0_4_ + fVar34 * -fVar66;
          fVar33 = auVar68._4_4_ + fVar81 * fVar65;
          fVar47 = auVar68._8_4_ + fVar24 * -fVar66;
          fVar66 = (float)CONCAT13((byte)(-(uint)(fVar66 < 0.0) >> 0x18) & 0x80 ^ auVar67[3],
                                   auVar67._0_3_) + -1.5707964 + 1.5707964;
          fVar23 = fVar63;
          if (fVar66 <= fVar63) {
            fVar23 = fVar66;
          }
          fVar66 = -fVar63;
          if (-fVar63 <= fVar23) {
            fVar66 = fVar23;
          }
          fVar63 = fVar32 * fVar32 + fVar33 * fVar33 + fVar47 * fVar47;
          if (fVar63 == 0.0) {
            auVar46 = ZEXT816(0);
          }
          else {
            fVar63 = SQRT(fVar63);
            fVar23 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar47 * fVar47);
            auVar46._0_4_ = (fVar32 / fVar63) * (float)DAT_03cab620;
            auVar46._4_4_ = (fVar33 / fVar23) * (float)((ulong)DAT_03cab620 >> 0x20);
            auVar46._8_4_ = (fVar47 / fVar63) * (float)DAT_03cab628;
            auVar46._12_4_ =
                 ((auVar68._12_4_ + fVar58 * fVar65) / fVar23) *
                 (float)((ulong)DAT_03cab628 >> 0x20);
          }
          auVar68 = NEON_ext(auVar46,auVar46,8,1);
          fVar33 = auVar46._0_4_ + auVar46._4_4_ + auVar68._0_4_;
          auVar69._0_4_ = ABS(fVar33);
          auVar69._4_4_ = ABS(fVar33);
          auVar69._8_4_ = ABS(fVar33);
          auVar69._12_4_ = ABS(fVar33);
          auVar68 = NEON_fmin(auVar69,auVar26,4);
          fVar63 = auVar68._0_4_;
          fVar23 = auVar68._4_4_;
          fVar32 = auVar68._8_4_;
          fVar47 = auVar68._12_4_;
          auVar74._0_4_ = fVar63 * fVar63;
          auVar74._4_4_ = fVar23 * fVar23;
          auVar74._8_4_ = fVar32 * fVar32;
          auVar74._12_4_ = fVar47 * fVar47;
          auVar49._0_4_ = -(uint)(fVar63 < 0.0001);
          auVar49._4_4_ = 0;
          auVar49._8_4_ = -(uint)(fVar32 < 0.0001);
          auVar49._12_4_ = -(uint)(fVar47 < 0.0001);
          auVar27._0_4_ = (auVar26._0_4_ - fVar63) * 0.5;
          auVar27._4_4_ = (auVar26._4_4_ - fVar23) * 0.5;
          auVar27._8_4_ = (auVar26._8_4_ - fVar32) * 0.5;
          auVar27._12_4_ = (auVar26._12_4_ - fVar47) * 0.5;
          uVar10 = -(uint)(0.5 < fVar63);
          uVar35 = (undefined1)(-(uint)(0.5 < fVar23) >> 0x18);
          iVar11 = -(uint)(0.5 < fVar32);
          uVar36 = (undefined1)iVar11;
          uVar37 = (undefined1)((uint)iVar11 >> 8);
          uVar38 = (undefined1)((uint)iVar11 >> 0x10);
          uVar40 = (undefined1)((uint)iVar11 >> 0x18);
          iVar11 = -(uint)(0.5 < fVar47);
          uVar39 = (undefined1)iVar11;
          uVar41 = (undefined1)((uint)iVar11 >> 8);
          uVar42 = (undefined1)((uint)iVar11 >> 0x10);
          uVar43 = (undefined1)((uint)iVar11 >> 0x18);
          auVar71._0_4_ = SQRT(auVar27._0_4_);
          auVar71._4_4_ = SQRT(auVar27._4_4_);
          auVar71._8_4_ = SQRT(auVar27._8_4_);
          auVar71._12_4_ = SQRT(auVar27._12_4_);
          auVar26._4_3_ = 0;
          auVar26._0_4_ = uVar10;
          auVar26[7] = uVar35;
          auVar26[8] = uVar36;
          auVar26[9] = uVar37;
          auVar26[10] = uVar38;
          auVar26[0xb] = uVar40;
          auVar26[0xc] = uVar39;
          auVar26[0xd] = uVar41;
          auVar26[0xe] = uVar42;
          auVar26[0xf] = uVar43;
          auVar27 = auVar27 ^ (auVar27 ^ auVar74) & ~auVar26;
          fVar63 = auVar27._0_4_;
          fVar23 = auVar27._8_4_;
          fVar32 = auVar27._12_4_;
          auVar5._4_3_ = 0;
          auVar5._0_4_ = uVar10;
          auVar5[7] = uVar35;
          auVar5[8] = uVar36;
          auVar5[9] = uVar37;
          auVar5[10] = uVar38;
          auVar5[0xb] = uVar40;
          auVar5[0xc] = uVar39;
          auVar5[0xd] = uVar41;
          auVar5[0xe] = uVar42;
          auVar5[0xf] = uVar43;
          auVar71 = auVar71 ^ (auVar71 ^ auVar68) & ~auVar5;
          auVar28._0_4_ =
               auVar71._0_4_ +
               auVar71._0_4_ *
               fVar63 * (fVar63 * (fVar63 * (fVar63 * (fVar63 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar28._4_4_ = 0;
          auVar28._8_4_ =
               auVar71._8_4_ +
               auVar71._8_4_ *
               fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar28._12_4_ =
               auVar71._12_4_ +
               auVar71._12_4_ *
               fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * 0.0421632 + 0.024181312) +
                                            0.045470025) + 0.074953005) + 0.16666752);
          auVar57._0_4_ = 1.5707964 - (auVar28._0_4_ + auVar28._0_4_);
          auVar57._4_4_ = 0;
          auVar57._8_4_ = 0.0 - (auVar28._8_4_ + auVar28._8_4_);
          auVar57._12_4_ = 0.0 - (auVar28._12_4_ + auVar28._12_4_);
          auVar16._4_3_ = 0;
          auVar16._0_4_ = uVar10;
          auVar16[7] = uVar35;
          auVar16[8] = uVar36;
          auVar16[9] = uVar37;
          auVar16[10] = uVar38;
          auVar16[0xb] = uVar40;
          auVar16[0xc] = uVar39;
          auVar16[0xd] = uVar41;
          auVar16[0xe] = uVar42;
          auVar16[0xf] = 0;
          auVar28 = auVar28 ^ (auVar28 ^ auVar57) & auVar16;
          auVar28 = auVar28 ^ (auVar28 ^ auVar68) & auVar49;
          fVar32 = (1.5707964 -
                   (float)CONCAT13((byte)(-(uint)(fVar33 < 0.0) >> 0x18) & 0x80 ^ auVar28[3],
                                   auVar28._0_3_)) * 0.5;
          fVar66 = fVar66 * 0.5;
          uVar35 = SUB41(fVar66,0);
          uVar36 = (undefined1)((uint)fVar66 >> 8);
          uVar37 = (undefined1)((uint)fVar66 >> 0x10);
          uVar38 = (undefined1)((uint)fVar66 >> 0x18);
        }
        auVar29._0_8_ = CONCAT44(fVar32,fVar32);
        auVar29._8_4_ = fVar32;
        auVar29._12_4_ = fVar32;
        uStack_48 = auVar29._8_8_;
        uVar4 = CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)));
        local_50 = auVar29._0_8_;
        FUN_01170160(&local_50,local_b0,local_40);
        fVar63 = fStack_3c;
        puVar19 = local_b0[0];
        auVar30._0_8_ = CONCAT44(uVar4,uVar4);
        auVar30._8_4_ = uVar4;
        auVar30._12_4_ = uVar4;
        uStack_48 = auVar30._8_8_;
        local_50 = auVar30._0_8_;
        FUN_01170160(&local_50,local_b0,local_40);
        puVar20 = local_b0[0];
        if ((*param_1 != 0) && (uVar21 = FUN_031e198c(param_1[1],"forwardDir","",1), 1 < uVar21)) {
          local_100 = SUB84(puVar19,0);
          fVar32 = fVar34 * local_100;
          fVar47 = fVar81 * local_100;
          auVar31._0_8_ = CONCAT44(fVar47,fVar32);
          auVar31._8_4_ = fVar24 * local_100;
          auVar31._12_4_ = fVar58 * local_100;
          auVar50._8_8_ = auVar31._8_8_;
          auVar50._0_8_ = auVar31._0_8_;
          auVar51._0_12_ = auVar50._0_12_;
          auVar51._12_4_ = fVar63;
          auVar67 = NEON_ext(auVar31,auVar31,4,1);
          auVar68 = NEON_ext(auVar51,auVar51,8,1);
          fVar66 = (float)DAT_03cab620;
          fVar65 = (float)((ulong)DAT_03cab620 >> 0x20);
          fVar55 = (float)DAT_03cab628;
          fVar59 = (float)((ulong)DAT_03cab628 >> 0x20);
          fVar33 = auVar68._4_4_ * auVar68._4_4_;
          fVar60 = fVar32 * fVar66 + fVar47 * fVar65 + auVar31._8_4_ * fVar55;
          fVar62 = fVar32 * fVar66 + fVar47 * fVar65 + auVar31._8_4_ * fVar55;
          fVar23 = fVar33 + -0.5;
          fVar33 = fVar33 + -0.5;
          auVar45._0_4_ = fVar32 * (float)_DAT_03caa5b0 - auVar67._0_4_ * fVar66;
          auVar45._4_4_ = fVar47 * (float)((ulong)_DAT_03caa5b0 >> 0x20) - auVar67._4_4_ * fVar65;
          auVar45._8_4_ = auVar31._8_4_ * (float)_UNK_03caa5b8 - fVar32 * fVar55;
          auVar45._12_4_ = fVar63 * (float)((ulong)_UNK_03caa5b8 >> 0x20) - fVar47 * fVar59;
          auVar68 = NEON_ext(auVar45,auVar45,4,1);
          auVar12._12_4_ = fVar58;
          auVar12._0_12_ = auVar48;
          auVar13._12_4_ = fVar58;
          auVar13._0_12_ = auVar17;
          auVar67 = NEON_ext(auVar12,auVar13,4,1);
          fVar32 = fVar23 * fVar66 + fVar32 * fVar60 + auVar68._0_4_ * fVar63;
          fVar47 = fVar33 * fVar65 + fVar47 * fVar62 + auVar68._4_4_ * fVar63;
          fVar66 = fVar23 * fVar55 + auVar31._8_4_ * fVar60 + auVar45._0_4_ * fVar63;
          fVar33 = (float)CONCAT13((char)((uint)fVar33 >> 0x18),
                                   CONCAT12((char)((uint)fVar33 >> 0x10),
                                            (short)(CONCAT15((char)((uint)fVar33 >> 8),
                                                             CONCAT14(SUB41(fVar33,0),fVar23)) >>
                                                   0x20))) * fVar59 + fVar63 * fVar62 + fVar63 * 0.0
          ;
          fVar32 = fVar32 + fVar32;
          fVar47 = fVar47 + fVar47;
          uVar35 = SUB41(fVar47,0);
          uVar36 = (undefined1)((uint)fVar47 >> 8);
          uVar37 = (undefined1)((uint)fVar47 >> 0x10);
          uVar38 = (undefined1)((uint)fVar47 >> 0x18);
          fVar66 = fVar66 + fVar66;
          uVar40 = (undefined1)((uint)fVar66 >> 8);
          uVar39 = (undefined1)((uint)fVar66 >> 0x10);
          uVar41 = (undefined1)((uint)fVar66 >> 0x18);
          fVar33 = fVar33 + fVar33;
          uVar42 = (undefined1)((uint)fVar33 >> 8);
          uVar43 = (undefined1)((uint)fVar33 >> 0x10);
          uVar44 = (undefined1)((uint)fVar33 >> 0x18);
          auVar6[4] = uVar35;
          auVar6._0_4_ = fVar32;
          auVar6[5] = uVar36;
          auVar6[6] = uVar37;
          auVar6[7] = uVar38;
          auVar6[8] = SUB41(fVar66,0);
          auVar6[9] = uVar40;
          auVar6[10] = uVar39;
          auVar6[0xb] = uVar41;
          auVar6[0xc] = SUB41(fVar33,0);
          auVar6[0xd] = uVar42;
          auVar6[0xe] = uVar43;
          auVar6[0xf] = uVar44;
          auVar7[4] = uVar35;
          auVar7._0_4_ = fVar32;
          auVar7[5] = uVar36;
          auVar7[6] = uVar37;
          auVar7[7] = uVar38;
          auVar7[8] = SUB41(fVar66,0);
          auVar7[9] = uVar40;
          auVar7[10] = uVar39;
          auVar7[0xb] = uVar41;
          auVar7[0xc] = SUB41(fVar33,0);
          auVar7[0xd] = uVar42;
          auVar7[0xe] = uVar43;
          auVar7[0xf] = uVar44;
          auVar68 = NEON_ext(auVar6,auVar7,4,1);
          fVar65 = (float)(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,fVar32)))
                                   ) >> 0x20);
          auVar52._0_4_ = auVar67._0_4_ * fVar32 - fVar34 * auVar68._0_4_;
          auVar52._4_4_ = auVar67._4_4_ * fVar47 - fVar81 * auVar68._4_4_;
          auVar52._8_4_ = fVar34 * fVar66 - fVar24 * fVar32;
          auVar52._12_4_ = fVar81 * fVar33 - fVar58 * fVar65;
          auVar67 = NEON_ext(auVar52,auVar52,4,1);
          local_e0 = SUB84(puVar20,0);
          auVar48._0_4_ = auVar67._0_4_ * local_e0;
          auVar48._4_4_ = auVar67._4_4_ * local_e0;
          auVar48._8_4_ = auVar52._0_4_ * local_e0;
          auVar53._12_4_ = auVar52._4_4_ * local_e0;
          auVar53._0_12_ = auVar48;
          auVar76 = NEON_ext(auVar53,auVar53,4,1);
          auVar54._12_4_ = fStack_3c;
          auVar54._0_12_ = auVar48;
          auVar67 = NEON_ext(auVar54,auVar54,8,1);
          fVar58 = auVar67._4_4_ * auVar67._4_4_;
          fVar24 = fVar58 + -0.5;
          fVar58 = fVar58 + -0.5;
          fVar55 = fVar32 * auVar48._0_4_ + fVar47 * auVar48._4_4_ + fVar66 * auVar48._8_4_;
          fVar59 = fVar32 * auVar48._0_4_ + fVar47 * auVar48._4_4_ + fVar66 * auVar48._8_4_;
          fVar63 = auVar68._0_4_ * auVar48._0_4_ - fVar32 * auVar76._0_4_;
          fVar23 = auVar68._4_4_ * auVar48._4_4_ - fVar47 * auVar76._4_4_;
          uVar35 = (undefined1)((uint)fVar23 >> 8);
          uVar36 = (undefined1)((uint)fVar23 >> 0x10);
          uVar37 = (undefined1)((uint)fVar23 >> 0x18);
          fVar34 = fVar32 * auVar48._8_4_ - fVar66 * auVar48._0_4_;
          uVar38 = (undefined1)((uint)fVar34 >> 8);
          uVar40 = (undefined1)((uint)fVar34 >> 0x10);
          uVar39 = (undefined1)((uint)fVar34 >> 0x18);
          fVar81 = fVar65 * fStack_3c - fVar33 * auVar48._4_4_;
          uVar41 = (undefined1)((uint)fVar81 >> 8);
          uVar42 = (undefined1)((uint)fVar81 >> 0x10);
          uVar43 = (undefined1)((uint)fVar81 >> 0x18);
          auVar8[4] = SUB41(fVar23,0);
          auVar8._0_4_ = fVar63;
          auVar8[5] = uVar35;
          auVar8[6] = uVar36;
          auVar8[7] = uVar37;
          auVar8[8] = SUB41(fVar34,0);
          auVar8[9] = uVar38;
          auVar8[10] = uVar40;
          auVar8[0xb] = uVar39;
          auVar8[0xc] = SUB41(fVar81,0);
          auVar8[0xd] = uVar41;
          auVar8[0xe] = uVar42;
          auVar8[0xf] = uVar43;
          auVar9[4] = SUB41(fVar23,0);
          auVar9._0_4_ = fVar63;
          auVar9[5] = uVar35;
          auVar9[6] = uVar36;
          auVar9[7] = uVar37;
          auVar9[8] = SUB41(fVar34,0);
          auVar9[9] = uVar38;
          auVar9[10] = uVar40;
          auVar9[0xb] = uVar39;
          auVar9[0xc] = SUB41(fVar81,0);
          auVar9[0xd] = uVar41;
          auVar9[0xe] = uVar42;
          auVar9[0xf] = uVar43;
          auVar68 = NEON_ext(auVar8,auVar9,4,1);
          fVar23 = fVar32 * fVar24 + auVar48._0_4_ * fVar55 + auVar68._0_4_ * fStack_3c;
          fVar32 = fVar47 * fVar58 + auVar48._4_4_ * fVar59 + auVar68._4_4_ * fStack_3c;
          fVar63 = fVar66 * fVar24 + auVar48._8_4_ * fVar55 + fVar63 * fStack_3c;
          fVar34 = fVar33 * fVar58 + fStack_3c * fVar59 + fStack_3c * 0.0;
          FUN_031e32f0(local_b0,param_1,uVar21);
          uVar64 = CONCAT44(fVar32 + fVar32,fVar23 + fVar23);
          auVar14._8_4_ = fVar63 + fVar63;
          auVar14._0_8_ = uVar64;
          auVar14._12_4_ = fVar34 + fVar34;
          local_b0[0][1] = auVar14._8_8_;
          *local_b0[0] = uVar64;
          if ((local_a0 & 1) != 0) {
            plVar22 = (long *)(local_a0 & 0xfffffffffffffffe);
            plVar1 = plVar22 + 1;
            do {
              lVar18 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar22 != (long *)0x0) && ((int)lVar18 == 1)) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          if ((local_88 & 1) != 0) {
            plVar22 = (long *)(local_88 & 0xfffffffffffffffe);
            plVar1 = plVar22 + 1;
            do {
              lVar18 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar22 != (long *)0x0) && ((int)lVar18 == 1)) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          if ((local_70 & 1) != 0) {
            plVar22 = (long *)(local_70 & 0xfffffffffffffffe);
            plVar1 = plVar22 + 1;
            do {
              lVar18 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar22 != (long *)0x0) && ((int)lVar18 == 1)) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          if ((local_58 & 1) != 0) {
            plVar22 = (long *)(local_58 & 0xfffffffffffffffe);
            plVar1 = plVar22 + 1;
            do {
              lVar18 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar18 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar22 != (long *)0x0) && ((int)lVar18 == 1)) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


