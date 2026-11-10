/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031cbbc4; name: FUN_031cbbc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031cbbc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float *pfVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
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
  float afStack_98 [2];
  undefined8 uStack_90;
  float fStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  memcpy(&local_70,param_1,0x30);
  uVar12 = _UNK_03cabe68;
  uVar11 = _DAT_03cabe60;
  uVar10 = DAT_03cab628;
  uVar9 = DAT_03cab620;
  fVar8 = _UNK_03caa5bc;
  fVar7 = _UNK_03caa5b8;
  fVar6 = _UNK_03caa5b4;
  fVar5 = _DAT_03caa5b0;
  param_2[1] = DAT_03cab628;
  *param_2 = uVar9;
  param_2[3] = uVar12;
  param_2[2] = uVar11;
  *(float *)(param_2 + 5) = fVar7;
  *(float *)((long)param_2 + 0x2c) = fVar8;
  *(float *)(param_2 + 4) = fVar5;
  *(float *)((long)param_2 + 0x24) = fVar6;
  if (0 < param_4) {
    fVar18 = (float)param_1[1];
    fVar19 = (float)((ulong)param_1[1] >> 0x20);
    fVar16 = (float)*param_1;
    fVar17 = (float)((ulong)*param_1 >> 0x20);
    auVar20._0_4_ = *(float *)(param_1 + 2) * *(float *)(param_1 + 2);
    auVar20._4_4_ = *(float *)((long)param_1 + 0x14) * *(float *)((long)param_1 + 0x14);
    auVar20._8_4_ = *(float *)(param_1 + 3) * *(float *)(param_1 + 3);
    auVar20._12_4_ = *(float *)((long)param_1 + 0x1c) * *(float *)((long)param_1 + 0x1c);
    fVar16 = fVar16 * fVar16;
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    auVar21._4_4_ = fVar17;
    auVar21._0_4_ = fVar16;
    auVar21._8_4_ = fVar18;
    auVar21._12_4_ = fVar19;
    auVar23._4_4_ = fVar17;
    auVar23._0_4_ = fVar16;
    auVar23._8_4_ = fVar18;
    auVar23._12_4_ = fVar19;
    auVar23 = NEON_ext(auVar21,auVar23,8,1);
    auVar24 = NEON_ext(auVar20,auVar20,8,1);
    auVar25._0_4_ = *(float *)(param_1 + 4) * *(float *)(param_1 + 4);
    auVar25._4_4_ = *(float *)((long)param_1 + 0x24) * *(float *)((long)param_1 + 0x24);
    auVar25._8_4_ = *(float *)(param_1 + 5) * *(float *)(param_1 + 5);
    auVar25._12_4_ = *(float *)((long)param_1 + 0x2c) * *(float *)((long)param_1 + 0x2c);
    auVar21 = NEON_ext(auVar25,auVar25,8,1);
    uVar15 = local_60 & 0xffffffff;
    uVar29 = uVar11;
    uVar30 = uVar12;
    uVar33 = uVar9;
    uVar36 = uVar10;
    fVar18 = (float)local_50;
    fVar19 = local_50._4_4_;
    fVar22 = fVar5;
    fVar26 = fVar6;
    fVar27 = fVar7;
    fVar28 = fVar8;
    do {
      bVar4 = ABS(fVar18) <= ABS((float)uVar15);
      fVar19 = ABS(fVar19);
      fVar18 = ABS(fVar18);
      if (bVar4) {
        fVar18 = ABS((float)uVar15);
      }
      fVar38 = fVar19;
      if (fVar19 <= fVar18) {
        fVar38 = fVar18;
      }
      if (fVar38 * fVar38 <
          (fVar16 + fVar17 + auVar23._0_4_ + auVar20._0_4_ + auVar20._4_4_ + auVar24._0_4_ +
          auVar25._0_4_ + auVar25._4_4_ + auVar21._0_4_) * 1.4210855e-14) break;
      lVar1 = 1;
      if (!bVar4 || fVar18 < fVar19) {
        lVar1 = 2;
      }
      afStack_98[0] = (float)uVar10;
      fVar38 = afStack_98[0];
      fStack_88 = (float)uVar12;
      fVar13 = fStack_88;
      uStack_90 = uVar11;
      pfVar14 = (float *)(&local_70 + lVar1 * 2);
      pfVar2 = (float *)((ulong)pfVar14 | 8);
      if (bVar4 && fVar19 <= fVar18) {
        pfVar2 = (float *)((ulong)pfVar14 | 4);
      }
      uVar15 = (ulong)(fVar18 < fVar19);
      pfVar3 = (float *)((ulong)pfVar14 | 4);
      if (fVar19 <= fVar18) {
        pfVar3 = pfVar14;
      }
      fStack_78 = fVar7;
      local_80 = fVar5;
      fStack_7c = fVar6;
      pfVar14 = (float *)((ulong)(&local_70 + uVar15 * 2) | 4);
      if (fVar19 <= fVar18) {
        pfVar14 = (float *)(&local_70 + uVar15 * 2);
      }
      fVar39 = (*pfVar2 - *pfVar14) / (*pfVar3 + *pfVar3);
      fVar50 = SQRT(fVar39 * fVar39 + 1.0);
      fVar40 = -fVar50;
      if (0.0 <= fVar39) {
        fVar40 = fVar50;
      }
      fVar39 = 1.0 / (fVar39 + fVar40);
      fVar40 = 1.0 / SQRT(fVar39 * fVar39 + 1.0);
      fVar39 = fVar39 * fVar40;
      if (fVar18 < fVar19) {
        afStack_98[uVar15 * 4 + -1] = fVar40;
        afStack_98[lVar1 * 4 + -1] = fVar39;
LAB_031cbd88:
        fVar50 = -fVar39;
        afStack_98[uVar15 * 4] = fVar50;
        afStack_98[lVar1 * 4] = fVar40;
        if (fVar18 < fVar19) {
          afStack_98[uVar15 * 4 + -0xd] = fVar40;
          afStack_98[lVar1 * 4 + -0xd] = fVar50;
        }
        else {
          afStack_98[uVar15 * 4 + -0xe] = fVar40;
          afStack_98[lVar1 * 4 + -0xe] = fVar50;
        }
        pfVar14 = (float *)((ulong)(afStack_98 + lVar1 * 4 + -0xe) | 8);
        afStack_98[uVar15 * 4 + -0xc] = fVar39;
      }
      else {
        afStack_98[uVar15 * 4 + -2] = fVar40;
        afStack_98[lVar1 * 4 + -2] = fVar39;
        if (!bVar4 || fVar18 < fVar19) goto LAB_031cbd88;
        afStack_98[uVar15 * 4 + -1] = -fVar39;
        afStack_98[lVar1 * 4 + -1] = fVar40;
        afStack_98[uVar15 * 4 + -0xe] = fVar40;
        afStack_98[uVar15 * 4 + -0xd] = fVar39;
        afStack_98[lVar1 * 4 + -0xe] = -fVar39;
        pfVar14 = (float *)((ulong)(afStack_98 + lVar1 * 4 + -0xe) | 4);
      }
      *pfVar14 = fVar40;
      param_4 = param_4 + -1;
      fVar53 = (float)uStack_90;
      fVar18 = (float)local_70;
      fVar19 = (float)((ulong)local_70 >> 0x20);
      fVar40 = (float)uStack_68;
      fVar51 = (float)uVar9;
      fVar52 = (float)((ulong)uVar9 >> 0x20);
      fVar39 = (float)local_60;
      fVar50 = (float)(local_60 >> 0x20);
      fVar31 = (float)uStack_58;
      fVar54 = (float)((ulong)uStack_90 >> 0x20);
      fVar32 = (float)local_50;
      fVar34 = (float)((ulong)local_50 >> 0x20);
      fVar35 = (float)uStack_48;
      fVar47 = fVar32 * afStack_98[0] + fVar18 * fVar51 + fVar39 * fVar52;
      fVar48 = fVar34 * afStack_98[0] + fVar19 * fVar51 + fVar50 * fVar52;
      fVar49 = fVar35 * afStack_98[0] + fVar40 * fVar51 + fVar31 * fVar52;
      fVar41 = fVar32 * fStack_88 + fVar18 * fVar53 + fVar39 * fVar54;
      fVar42 = fVar34 * fStack_88 + fVar19 * fVar53 + fVar50 * fVar54;
      fVar43 = fVar35 * fStack_88 + fVar40 * fVar53 + fVar31 * fVar54;
      fVar44 = fVar32 * fStack_78 + fVar18 * local_80 + fVar39 * fStack_7c;
      fVar45 = fVar34 * fStack_78 + fVar19 * local_80 + fVar50 * fStack_7c;
      fVar46 = fVar35 * fStack_78 + fVar40 * local_80 + fVar31 * fStack_7c;
      fVar56 = (float)uVar11;
      fVar57 = (float)((ulong)uVar11 >> 0x20);
      fVar58 = (float)((ulong)uVar12 >> 0x20);
      fVar55 = (float)((ulong)uVar10 >> 0x20);
      fVar32 = (float)uVar33;
      fVar34 = (float)((ulong)uVar33 >> 0x20);
      fVar35 = (float)uVar36;
      fVar37 = (float)((ulong)uVar36 >> 0x20);
      uVar15 = CONCAT44(fVar6 * fVar43 + fVar52 * fVar41 + fVar57 * fVar42,
                        fVar5 * fVar43 + fVar51 * fVar41 + fVar56 * fVar42);
      fVar18 = fVar5 * fVar46 + fVar51 * fVar44 + fVar56 * fVar45;
      fVar19 = fVar6 * fVar46 + fVar52 * fVar44 + fVar57 * fVar45;
      fVar40 = (float)uVar29;
      fVar39 = (float)((ulong)uVar29 >> 0x20);
      fVar50 = (float)uVar30;
      fVar31 = (float)((ulong)uVar30 >> 0x20);
      uStack_68 = CONCAT44(fVar8 * fVar49 + fVar55 * fVar47 + fVar58 * fVar48,
                           fVar7 * fVar49 + fVar38 * fVar47 + fVar13 * fVar48);
      local_70 = CONCAT44(fVar6 * fVar49 + fVar52 * fVar47 + fVar57 * fVar48,
                          fVar5 * fVar49 + fVar51 * fVar47 + fVar56 * fVar48);
      uStack_58 = CONCAT44(fVar8 * fVar43 + fVar55 * fVar41 + fVar58 * fVar42,
                           fVar7 * fVar43 + fVar38 * fVar41 + fVar13 * fVar42);
      local_60 = uVar15;
      uVar33 = CONCAT44(fVar26 * afStack_98[0] + fVar34 * fVar51 + fVar39 * fVar52,
                        fVar22 * afStack_98[0] + fVar32 * fVar51 + fVar40 * fVar52);
      uVar36 = CONCAT44(fVar28 * afStack_98[0] + fVar37 * fVar51 + fVar31 * fVar52,
                        fVar27 * afStack_98[0] + fVar35 * fVar51 + fVar50 * fVar52);
      uVar29 = CONCAT44(fVar26 * fStack_88 + fVar34 * fVar53 + fVar39 * fVar54,
                        fVar22 * fStack_88 + fVar32 * fVar53 + fVar40 * fVar54);
      uVar30 = CONCAT44(fVar28 * fStack_88 + fVar37 * fVar53 + fVar31 * fVar54,
                        fVar27 * fStack_88 + fVar35 * fVar53 + fVar50 * fVar54);
      uStack_48 = CONCAT44(fVar8 * fVar46 + fVar55 * fVar44 + fVar58 * fVar45,
                           fVar7 * fVar46 + fVar38 * fVar44 + fVar13 * fVar45);
      local_50 = CONCAT44(fVar19,fVar18);
      fVar22 = fVar22 * fStack_78 + fVar32 * local_80 + fVar40 * fStack_7c;
      fVar26 = fVar26 * fStack_78 + fVar34 * local_80 + fVar39 * fStack_7c;
      fVar27 = fVar27 * fStack_78 + fVar35 * local_80 + fVar50 * fStack_7c;
      fVar28 = fVar28 * fStack_78 + fVar37 * local_80 + fVar31 * fStack_7c;
      param_2[1] = uVar36;
      *param_2 = uVar33;
      param_2[3] = uVar30;
      param_2[2] = uVar29;
      *(float *)(param_2 + 5) = fVar27;
      *(float *)((long)param_2 + 0x2c) = fVar28;
      *(float *)(param_2 + 4) = fVar22;
      *(float *)((long)param_2 + 0x24) = fVar26;
    } while (param_4 != 0);
  }
  param_3[1] = CONCAT44((undefined4)uStack_48,(undefined4)uStack_48);
  *param_3 = CONCAT44(local_60._4_4_,(undefined4)local_70);
  return;
}


