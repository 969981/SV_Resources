/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cb7b0; name: FUN_031cb7b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_031cb7b0(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,int param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float afStack_98 [2];
  undefined8 uStack_90;
  float local_88;
  undefined8 local_80;
  float fStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  memcpy(&local_70,param_2,0x30);
  uVar10 = _UNK_03cabe68;
  uVar9 = _DAT_03cabe60;
  uVar8 = DAT_03cab628;
  uVar7 = DAT_03cab620;
  uVar6 = _UNK_03caa5b8;
  uVar14 = _DAT_03caa5b0;
  param_3[1] = DAT_03cab628;
  *param_3 = uVar7;
  param_3[3] = uVar10;
  param_3[2] = uVar9;
  param_3[5] = uVar6;
  param_3[4] = uVar14;
  fVar21 = (float)param_2[1];
  fVar22 = (float)((ulong)param_2[1] >> 0x20);
  fVar19 = (float)*param_2;
  fVar20 = (float)((ulong)*param_2 >> 0x20);
  fVar25 = (float)param_2[3];
  fVar26 = (float)((ulong)param_2[3] >> 0x20);
  fVar23 = (float)param_2[2];
  fVar24 = (float)((ulong)param_2[2] >> 0x20);
  fVar23 = fVar23 * fVar23;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  fVar26 = fVar26 * fVar26;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  auVar27._4_4_ = fVar20;
  auVar27._0_4_ = fVar19;
  auVar27._8_4_ = fVar21;
  auVar27._12_4_ = fVar22;
  auVar28._4_4_ = fVar20;
  auVar28._0_4_ = fVar19;
  auVar28._8_4_ = fVar21;
  auVar28._12_4_ = fVar22;
  auVar27 = NEON_ext(auVar27,auVar28,8,1);
  auVar29._4_4_ = fVar24;
  auVar29._0_4_ = fVar23;
  auVar29._8_4_ = fVar25;
  auVar29._12_4_ = fVar26;
  auVar3._4_4_ = fVar24;
  auVar3._0_4_ = fVar23;
  auVar3._8_4_ = fVar25;
  auVar3._12_4_ = fVar26;
  auVar28 = NEON_ext(auVar29,auVar3,8,1);
  fVar25 = (float)param_2[5];
  fVar26 = (float)((ulong)param_2[5] >> 0x20);
  fVar21 = (float)param_2[4];
  fVar22 = (float)((ulong)param_2[4] >> 0x20);
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  fVar25 = fVar25 * fVar25;
  fVar26 = fVar26 * fVar26;
  auVar4._4_4_ = fVar22;
  auVar4._0_4_ = fVar21;
  auVar4._8_4_ = fVar25;
  auVar4._12_4_ = fVar26;
  auVar5._4_4_ = fVar22;
  auVar5._0_4_ = fVar21;
  auVar5._8_4_ = fVar25;
  auVar5._12_4_ = fVar26;
  auVar29 = NEON_ext(auVar4,auVar5,8,1);
  fVar19 = param_1 * param_1 *
           (fVar19 + fVar20 + auVar27._0_4_ + fVar23 + fVar24 + auVar28._0_4_ +
           fVar21 + fVar22 + auVar29._0_4_);
  iVar13 = 0;
  uVar30 = uVar14;
  uVar31 = uVar6;
  uVar32 = uVar9;
  uVar33 = uVar10;
  uVar35 = uVar7;
  uVar38 = uVar8;
  while( true ) {
    fVar20 = (float)local_50;
    fVar21 = (float)((ulong)local_50 >> 0x20);
    fVar23 = (float)local_60;
    fVar25 = fVar21 * fVar21 + fVar20 * fVar20 + fVar23 * fVar23;
    fVar25 = fVar25 + fVar25;
    fVar24 = (float)((ulong)local_60 >> 0x20);
    fVar22 = (float)uStack_48;
    if ((param_5 <= iVar13) || (fVar25 <= fVar19)) break;
    fVar26 = ABS(fVar23);
    fVar47 = ABS(fVar20);
    fVar50 = ABS(fVar21);
    fVar25 = fVar47;
    if (fVar47 <= fVar26) {
      fVar25 = fVar26;
    }
    uVar15 = 1;
    if (fVar47 > fVar26) {
      uVar15 = 2;
    }
    if (fVar50 <= fVar25) {
      uVar16 = (ulong)uVar15;
      fVar26 = *(float *)(&local_70 + uVar16 * 2);
    }
    else {
      uVar16 = 2;
      uVar15 = 2;
      fVar26 = fVar21;
    }
    uVar17 = (ulong)(fVar25 < fVar50);
    if (fVar26 == 0.0) {
      fVar47 = 1.0;
      fVar26 = 0.0;
    }
    else {
      puVar1 = &local_70 + uVar16 * 2;
      pfVar18 = (float *)((ulong)puVar1 | 0xc);
      if (uVar15 == 1) {
        pfVar18 = (float *)((ulong)puVar1 | 4);
      }
      pfVar2 = (float *)((ulong)puVar1 | 8);
      if (uVar15 != 2) {
        pfVar2 = pfVar18;
      }
      pfVar18 = (float *)(&local_70 + uVar17 * 2);
      if (fVar25 < fVar50) {
        pfVar18 = (float *)((ulong)(&local_70 + uVar17 * 2) | 4);
      }
      fVar47 = (*pfVar2 - *pfVar18) / (fVar26 + fVar26);
      fVar43 = SQRT(fVar47 * fVar47 + 1.0);
      fVar26 = -fVar43;
      if (0.0 <= fVar47) {
        fVar26 = fVar43;
      }
      fVar26 = 1.0 / (fVar47 + fVar26);
      fVar47 = 1.0 / SQRT(fVar26 * fVar26 + 1.0);
      fVar26 = fVar26 * fVar47;
    }
    afStack_98[0] = (float)uVar8;
    fVar43 = afStack_98[0];
    local_88 = (float)uVar10;
    fVar11 = local_88;
    uStack_90 = uVar9;
    fStack_78 = (float)uVar6;
    fVar12 = fStack_78;
    local_80 = uVar14;
    if (fVar25 < fVar50) {
      afStack_98[uVar17 * 4 + -1] = fVar47;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -2) | 4);
    }
    else {
      afStack_98[uVar17 * 4 + -2] = fVar47;
      pfVar18 = afStack_98 + uVar16 * 4 + -2;
    }
    fVar44 = -fVar26;
    *pfVar18 = fVar26;
    if (uVar15 == 2) {
      afStack_98[uVar17 * 4] = fVar44;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -2) | 8);
    }
    else if (uVar15 == 1) {
      afStack_98[uVar17 * 4 + -1] = fVar44;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -2) | 4);
    }
    else {
      afStack_98[uVar17 * 4 + 1] = fVar44;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -2) | 0xc);
    }
    *pfVar18 = fVar47;
    if (fVar25 < fVar50) {
      afStack_98[uVar17 * 4 + -0xd] = fVar47;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -0xe) | 4);
    }
    else {
      afStack_98[uVar17 * 4 + -0xe] = fVar47;
      pfVar18 = afStack_98 + uVar16 * 4 + -0xe;
    }
    *pfVar18 = fVar44;
    if (uVar15 == 2) {
      afStack_98[uVar17 * 4 + -0xc] = fVar26;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -0xe) | 8);
    }
    else if (uVar15 == 1) {
      afStack_98[uVar17 * 4 + -0xd] = fVar26;
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -0xe) | 4);
    }
    else {
      pfVar18 = (float *)((ulong)(afStack_98 + uVar16 * 4 + -0xe) | 0xc);
      afStack_98[uVar17 * 4 + -0xb] = fVar26;
    }
    fVar49 = (float)((ulong)uStack_90 >> 0x20);
    fVar26 = (float)uStack_58;
    fVar48 = (float)uStack_90;
    fVar25 = (float)local_70;
    fVar50 = (float)((ulong)local_70 >> 0x20);
    fVar45 = (float)uVar7;
    *pfVar18 = fVar47;
    fVar46 = (float)((ulong)uVar7 >> 0x20);
    iVar13 = iVar13 + 1;
    fVar59 = (float)local_80;
    fVar60 = (float)((ulong)local_80 >> 0x20);
    fVar40 = fVar20 * afStack_98[0] + fVar25 * fVar45 + fVar23 * fVar46;
    fVar41 = fVar21 * afStack_98[0] + fVar50 * fVar45 + fVar24 * fVar46;
    fVar42 = fVar22 * afStack_98[0] + (float)uStack_68 * fVar45 + fVar26 * fVar46;
    fVar44 = fVar20 * local_88 + fVar25 * fVar48 + fVar23 * fVar49;
    fVar51 = fVar21 * local_88 + fVar50 * fVar48 + fVar24 * fVar49;
    fVar52 = fVar22 * local_88 + (float)uStack_68 * fVar48 + fVar26 * fVar49;
    fVar25 = fVar20 * fStack_78 + fVar25 * fVar59 + fVar23 * fVar60;
    fVar24 = fVar21 * fStack_78 + fVar50 * fVar59 + fVar24 * fVar60;
    fVar26 = fVar22 * fStack_78 + (float)uStack_68 * fVar59 + fVar26 * fVar60;
    fVar53 = (float)uVar9;
    fVar54 = (float)((ulong)uVar9 >> 0x20);
    fVar55 = (float)((ulong)uVar10 >> 0x20);
    fVar47 = (float)((ulong)uVar8 >> 0x20);
    fVar56 = (float)uVar14;
    fVar57 = (float)((ulong)uVar14 >> 0x20);
    fVar58 = (float)((ulong)uVar6 >> 0x20);
    fVar34 = (float)uVar35;
    fVar36 = (float)((ulong)uVar35 >> 0x20);
    fVar37 = (float)uVar38;
    fVar39 = (float)((ulong)uVar38 >> 0x20);
    local_60 = CONCAT44(fVar57 * fVar52 + fVar46 * fVar44 + fVar54 * fVar51,
                        fVar56 * fVar52 + fVar45 * fVar44 + fVar53 * fVar51);
    uStack_58 = CONCAT44(fVar58 * fVar52 + fVar47 * fVar44 + fVar55 * fVar51,
                         fVar12 * fVar52 + fVar43 * fVar44 + fVar11 * fVar51);
    fVar50 = (float)uVar32;
    fVar44 = (float)((ulong)uVar32 >> 0x20);
    fVar51 = (float)uVar33;
    fVar52 = (float)((ulong)uVar33 >> 0x20);
    fVar20 = (float)uVar30;
    fVar21 = (float)((ulong)uVar30 >> 0x20);
    fVar22 = (float)uVar31;
    fVar23 = (float)((ulong)uVar31 >> 0x20);
    uStack_48 = CONCAT44(fVar58 * fVar26 + fVar47 * fVar25 + fVar55 * fVar24,
                         fVar12 * fVar26 + fVar43 * fVar25 + fVar11 * fVar24);
    uStack_68 = CONCAT44(fVar58 * fVar42 + fVar47 * fVar40 + fVar55 * fVar41,
                         fVar12 * fVar42 + fVar43 * fVar40 + fVar11 * fVar41);
    local_70 = CONCAT44(fVar57 * fVar42 + fVar46 * fVar40 + fVar54 * fVar41,
                        fVar56 * fVar42 + fVar45 * fVar40 + fVar53 * fVar41);
    local_50 = CONCAT44(fVar57 * fVar26 + fVar46 * fVar25 + fVar54 * fVar24,
                        fVar56 * fVar26 + fVar45 * fVar25 + fVar53 * fVar24);
    uVar35 = CONCAT44(fVar21 * afStack_98[0] + fVar36 * fVar45 + fVar44 * fVar46,
                      fVar20 * afStack_98[0] + fVar34 * fVar45 + fVar50 * fVar46);
    uVar38 = CONCAT44(fVar23 * afStack_98[0] + fVar39 * fVar45 + fVar52 * fVar46,
                      fVar22 * afStack_98[0] + fVar37 * fVar45 + fVar51 * fVar46);
    uVar32 = CONCAT44(fVar21 * local_88 + fVar36 * fVar48 + fVar44 * fVar49,
                      fVar20 * local_88 + fVar34 * fVar48 + fVar50 * fVar49);
    uVar33 = CONCAT44(fVar23 * local_88 + fVar39 * fVar48 + fVar52 * fVar49,
                      fVar22 * local_88 + fVar37 * fVar48 + fVar51 * fVar49);
    uVar30 = CONCAT44(fVar21 * fStack_78 + fVar36 * fVar59 + fVar44 * fVar60,
                      fVar20 * fStack_78 + fVar34 * fVar59 + fVar50 * fVar60);
    uVar31 = CONCAT44(fVar23 * fStack_78 + fVar39 * fVar59 + fVar52 * fVar60,
                      fVar22 * fStack_78 + fVar37 * fVar59 + fVar51 * fVar60);
    param_3[1] = uVar38;
    *param_3 = uVar35;
    param_3[3] = uVar33;
    param_3[2] = uVar32;
    param_3[5] = uVar31;
    param_3[4] = uVar30;
  }
  param_4[1] = CONCAT44(fVar22,fVar22);
  *param_4 = CONCAT44(fVar24,(undefined4)local_70);
  uVar14 = 0x80040200;
  if (fVar25 <= fVar19) {
    uVar14 = 0;
  }
  return uVar14;
}


