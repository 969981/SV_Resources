/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a37fc; name: FUN_008a37fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a37fc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,long param_6,float *param_7,uint *param_8,
                 float *param_9,int param_10)

{
  float *pfVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
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
  float fVar59;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ushort local_80;
  ushort local_7e;
  
  bVar2 = *(byte *)(param_9 + 4);
  bVar3 = *(byte *)(param_5 + 0x49);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      plVar4 = *(long **)(*(long *)(param_5 + 0x18) + (long)param_10 * 0x10 + 8);
      if (plVar4 == (long *)0x0) {
        auVar16 = ZEXT816(0);
        auVar25 = ZEXT816(0);
      }
      else {
        (**(code **)(*plVar4 + 0x20))(&local_80);
        auVar25._4_12_ = param_4._4_12_;
        auVar25._0_4_ = (float)NEON_ucvtf((uint)local_80);
        param_1 = ZEXT216(local_7e);
        auVar16._4_12_ = param_3._4_12_;
        auVar16._0_4_ = (float)NEON_ucvtf((uint)local_7e);
      }
    }
    else {
      auVar25 = ZEXT416(*param_8);
      auVar16 = ZEXT416(param_8[1]);
    }
  }
  else {
    auVar25 = ZEXT416(*(uint *)(*(long *)(param_6 + 0xc0) + 0x28));
    auVar16 = ZEXT416(*(uint *)(*(long *)(param_6 + 0xc0) + 0x2c));
  }
  uVar9 = (ulong)(*(uint *)(param_5 + 0x10) << 4) & 0x30;
  uVar8 = (uint)*(byte *)(*(long *)(param_5 + 0x18) +
                          uVar9 + ((ulong)(*(uint *)(param_5 + 0x10) >> 2) & 3) * 0x14 +
                          (long)param_10 * 0x10 + 1);
  if (3 < uVar8 - 3) goto joined_r0x008a39e4;
  fVar42 = *param_7;
  fVar43 = param_7[1];
  fVar44 = param_7[2];
  fVar45 = param_7[3];
  fVar40 = param_7[4];
  fVar47 = param_7[5];
  fVar51 = param_7[6];
  fVar52 = param_7[7];
  lVar6 = *(long *)(param_5 + 0x18) + uVar9;
  fVar31 = auVar25._0_4_;
  fVar34 = fVar31 * 0.5;
  fVar29 = auVar16._0_4_;
  fVar30 = fVar29 * 0.5;
  switch(uVar8) {
  case 3:
    fVar45 = 1.0 / (fVar34 + fVar34);
    fVar47 = 0.5 / param_9[2];
    fVar33 = (fVar45 + fVar45) * fVar47;
    fVar40 = 1.0 / (-fVar30 - fVar30);
    fVar51 = 0.5 / param_9[3];
    fVar50 = (fVar40 + fVar40) * fVar51;
    fVar43 = (float)*(undefined8 *)(param_6 + 0x88);
    fVar44 = (float)((ulong)*(undefined8 *)(param_6 + 0x88) >> 0x20);
    fVar52 = (float)*(undefined8 *)(param_6 + 0x80);
    fVar42 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_6 + 0x90);
    fVar46 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
    fVar49 = (float)*(undefined8 *)(param_6 + 0x98);
    fVar53 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
    fVar22 = (float)*(undefined8 *)(param_6 + 0xa0);
    fVar24 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
    fVar27 = (float)*(undefined8 *)(param_6 + 0xa8);
    fVar28 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
    param_1._12_4_ = _UNK_03cabe5c;
    param_1._8_4_ = _UNK_03cabe58;
    param_1._4_4_ = _UNK_03cabe54;
    param_1._0_4_ = _DAT_03cabe50;
    param_2._0_4_ = fVar52 * fVar33 + fVar15 * 0.0 + fVar22 * 0.0 + 0.0;
    param_2._4_4_ = fVar42 * fVar33 + fVar46 * 0.0 + fVar24 * 0.0 + 0.0;
    param_2._8_4_ = fVar43 * fVar33 + fVar49 * 0.0 + fVar27 * 0.0 + 0.0;
    param_2._12_4_ =
         ((0.5 - (*param_9 / param_9[2]) / fVar31) - fVar45 * (fVar34 - fVar34) * fVar47) +
         fVar44 * fVar33 + fVar53 * 0.0 + fVar28 * 0.0;
    auVar16._0_4_ = fVar52 * 0.0 + fVar15 * fVar50 + fVar22 * 0.0 + 0.0;
    auVar16._4_4_ = fVar42 * 0.0 + fVar46 * fVar50 + fVar24 * 0.0 + 0.0;
    auVar16._8_4_ = fVar43 * 0.0 + fVar49 * fVar50 + fVar27 * 0.0 + 0.0;
    auVar16._12_4_ =
         (((param_9[1] / param_9[3]) / fVar29 + 0.5) - fVar40 * (fVar30 - fVar30) * fVar51) +
         fVar44 * 0.0 + fVar53 * fVar50 + fVar28 * 0.0;
    auVar25._0_4_ = fVar52 * 0.0 + fVar15 * 0.0 + fVar22 * 0.0 + _DAT_03cabe50;
    auVar25._4_4_ = fVar42 * 0.0 + fVar46 * 0.0 + fVar24 * 0.0 + _UNK_03cabe54;
    auVar25._8_4_ = fVar43 * 0.0 + fVar49 * 0.0 + fVar27 * 0.0 + _UNK_03cabe58;
    auVar25._12_4_ = fVar44 * 0.0 + fVar53 * 0.0 + fVar28 * 0.0 + _UNK_03cabe5c;
    goto joined_r0x008a39e4;
  case 4:
    fVar53 = param_9[2];
    fVar46 = param_9[3];
    fVar15 = 0.5 / fVar46;
    fVar49 = 0.5 / fVar53;
    if ((bVar2 >> 2 & 1) == 0) {
      fVar40 = 1.0 / (fVar34 + fVar34);
      fVar47 = 1.0 / (-fVar30 - fVar30);
      fVar31 = (0.5 - ((fVar45 + *param_9) / fVar53) / fVar31) - fVar40 * (fVar34 - fVar34) * fVar49
      ;
      fVar43 = (fVar40 + fVar40) * fVar49;
      fVar24 = (fVar47 + fVar47) * fVar15;
      fVar29 = (((fVar52 + param_9[1]) / fVar46) / fVar29 + 0.5) -
               fVar47 * (fVar30 - fVar30) * fVar15;
      fVar45 = 0.0;
      fVar44 = 0.0;
      fVar40 = 0.0;
      fVar22 = 0.0;
      fVar47 = _DAT_03cabe50;
      fVar51 = _UNK_03cabe54;
      fVar52 = _UNK_03cabe58;
      fVar42 = _UNK_03cabe5c;
    }
    else {
      fVar50 = 1.0 / (fVar34 + fVar34);
      fVar36 = (fVar50 + fVar50) * fVar49;
      fVar33 = 1.0 / (-fVar30 - fVar30);
      fVar32 = (fVar33 + fVar33) * fVar15;
      fVar27 = (float)*(undefined8 *)(param_7 + 10);
      fVar28 = (float)((ulong)*(undefined8 *)(param_7 + 10) >> 0x20);
      fVar22 = (float)*(undefined8 *)(param_7 + 8);
      fVar24 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
      fVar39 = (((fVar44 * fVar40 * fVar24 + fVar42 * fVar47 * fVar27 + fVar43 * fVar51 * fVar22) -
                fVar47 * fVar22 * fVar44) - fVar43 * fVar40 * fVar27) - fVar42 * fVar24 * fVar51;
      if (fVar39 == 0.0) {
        fVar39 = 0.0;
      }
      else {
        fVar39 = 1.0 / fVar39;
      }
      fVar59 = fVar47 * fVar27 - fVar51 * fVar24;
      fVar35 = fVar59 * fVar39;
      fVar58 = (fVar43 * fVar51 - fVar44 * fVar47) * fVar39;
      fVar48 = (fVar44 * fVar24 - fVar43 * fVar27) * fVar39;
      fVar57 = (fVar44 * fVar40 - fVar42 * fVar51) * fVar39;
      fVar41 = fVar40 * fVar24 - fVar47 * fVar22;
      fVar38 = fVar51 * fVar22 - fVar40 * fVar27;
      fVar51 = fVar38 * fVar39;
      fVar55 = (fVar42 * fVar27 - fVar44 * fVar22) * fVar39;
      fVar27 = fVar41 * fVar39;
      fVar37 = (fVar43 * fVar22 - fVar42 * fVar24) * fVar39;
      fVar56 = (-(fVar59 * fVar39) * fVar45 - fVar48 * fVar52) - fVar58 * fVar28;
      fVar59 = (fVar42 * fVar47 - fVar43 * fVar40) * fVar39;
      fVar38 = (-(fVar38 * fVar39) * fVar45 - fVar55 * fVar52) - fVar57 * fVar28;
      fVar42 = (-(fVar41 * fVar39) * fVar45 - fVar37 * fVar52) - fVar59 * fVar28;
      fVar22 = fVar35 * 0.0 + fVar51 * fVar32 + fVar27 * 0.0 + 0.0;
      fVar24 = fVar48 * 0.0 + fVar55 * fVar32 + fVar37 * 0.0 + 0.0;
      fVar40 = fVar58 * 0.0 + fVar57 * fVar32 + fVar59 * 0.0 + 0.0;
      fVar29 = (((param_9[1] / fVar46) / fVar29 + 0.5) - fVar33 * (fVar30 - fVar30) * fVar15) +
               fVar56 * 0.0 + fVar38 * fVar32 + fVar42 * 0.0;
      fVar43 = fVar35 * fVar36 + fVar51 * 0.0 + fVar27 * 0.0 + 0.0;
      fVar44 = fVar48 * fVar36 + fVar55 * 0.0 + fVar37 * 0.0 + 0.0;
      fVar45 = fVar58 * fVar36 + fVar57 * 0.0 + fVar59 * 0.0 + 0.0;
      fVar31 = ((0.5 - (*param_9 / fVar53) / fVar31) - fVar50 * (fVar34 - fVar34) * fVar49) +
               fVar56 * fVar36 + fVar38 * 0.0 + fVar42 * 0.0;
      fVar47 = fVar35 * 0.0 + fVar51 * 0.0 + fVar27 * 0.0 + _DAT_03cabe50;
      fVar51 = fVar48 * 0.0 + fVar55 * 0.0 + fVar37 * 0.0 + _UNK_03cabe54;
      fVar52 = fVar58 * 0.0 + fVar57 * 0.0 + fVar59 * 0.0 + _UNK_03cabe58;
      fVar42 = fVar56 * 0.0 + fVar38 * 0.0 + fVar42 * 0.0 + _UNK_03cabe5c;
    }
    fVar15 = (float)*(undefined8 *)(param_6 + 0x88);
    fVar46 = (float)((ulong)*(undefined8 *)(param_6 + 0x88) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_6 + 0x80);
    fVar34 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
    fVar39 = (float)*(undefined8 *)(param_6 + 0xa8);
    fVar36 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
    fVar28 = (float)*(undefined8 *)(param_6 + 0xa0);
    fVar33 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
    fVar49 = (float)*(undefined8 *)(param_6 + 0x90);
    fVar53 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
    fVar50 = (float)*(undefined8 *)(param_6 + 0x98);
    fVar27 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
    param_2._0_4_ = fVar30 * fVar43 + fVar49 * fVar44 + fVar28 * fVar45 + 0.0;
    param_2._4_4_ = fVar34 * fVar43 + fVar53 * fVar44 + fVar33 * fVar45 + 0.0;
    param_2._8_4_ = fVar15 * fVar43 + fVar50 * fVar44 + fVar39 * fVar45 + 0.0;
    param_2._12_4_ = fVar31 + fVar46 * fVar43 + fVar27 * fVar44 + fVar36 * fVar45;
    auVar16._0_4_ = fVar30 * fVar22 + fVar49 * fVar24 + fVar28 * fVar40 + 0.0;
    auVar16._4_4_ = fVar34 * fVar22 + fVar53 * fVar24 + fVar33 * fVar40 + 0.0;
    auVar16._8_4_ = fVar15 * fVar22 + fVar50 * fVar24 + fVar39 * fVar40 + 0.0;
    auVar16._12_4_ = fVar29 + fVar46 * fVar22 + fVar27 * fVar24 + fVar36 * fVar40;
    auVar25._0_4_ = fVar30 * fVar47 + fVar49 * fVar51 + fVar28 * fVar52 + 0.0;
    auVar25._4_4_ = fVar34 * fVar47 + fVar53 * fVar51 + fVar33 * fVar52 + 0.0;
    auVar25._8_4_ = fVar15 * fVar47 + fVar50 * fVar51 + fVar39 * fVar52 + 0.0;
    auVar25._12_4_ = fVar42 + fVar46 * fVar47 + fVar27 * fVar51 + fVar36 * fVar52;
    param_1._12_4_ = _UNK_03cabe5c;
    param_1._8_4_ = _UNK_03cabe58;
    param_1._4_4_ = _UNK_03cabe54;
    param_1._0_4_ = _DAT_03cabe50;
    goto joined_r0x008a39e4;
  case 5:
    if ((bVar3 >> 6 & 1) == 0) {
      fVar40 = *(float *)(param_6 + 0x108);
      fVar47 = *(float *)(param_6 + 0x10c);
    }
    else {
      fVar47 = (float)*(int *)(param_6 + 0xe4);
      fVar40 = (float)*(int *)(param_6 + 0xe0);
    }
    fVar47 = ((fVar47 / fVar29) * -0.5) / param_9[3];
    auVar16 = NEON_ext(ZEXT816(0),ZEXT416((uint)(((fVar40 / fVar31) * 0.5) / param_9[2])),4,1);
    auVar25 = NEON_ext(auVar16,ZEXT816(0),0xc,1);
    auVar23._0_12_ = auVar25._0_12_;
    auVar23._12_4_ = 0.5 - (*param_9 / param_9[2]) / fVar31;
    auVar10._4_12_ = auVar16._4_12_;
    auVar10._0_4_ = fVar47;
    auVar12._12_4_ = auVar16._12_4_;
    auVar12._0_8_ = auVar10._0_8_;
    auVar12._8_4_ = fVar47;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = 0;
    auVar11._0_4_ = fVar47;
    auVar13._0_12_ = auVar11._0_12_;
    auVar13._12_4_ = 0;
    auVar16 = NEON_ext(auVar13,auVar13,0xc,1);
    auVar16 = NEON_ext(auVar16,ZEXT816(0),8,1);
    auVar14._0_12_ = auVar16._0_12_;
    auVar14._12_4_ = (param_9[1] / param_9[3]) / fVar29 + 0.5;
    uStack_98 = auVar14._8_8_;
    local_a0 = auVar16._0_8_;
    uStack_88 = auVar23._8_8_;
    uStack_90 = auVar25._0_8_;
    break;
  case 6:
    if ((bVar3 >> 6 & 1) == 0) {
      fVar40 = *(float *)(param_6 + 0x108);
      fVar47 = *(float *)(param_6 + 0x10c);
    }
    else {
      fVar47 = (float)*(int *)(param_6 + 0xe4);
      fVar40 = (float)*(int *)(param_6 + 0xe0);
    }
    fVar47 = ((fVar47 / fVar29) * -0.5) / param_9[3];
    auVar16 = NEON_ext(ZEXT816(0),ZEXT416((uint)(((fVar40 / fVar31) * 0.5) / param_9[2])),4,1);
    auVar25 = NEON_ext(auVar16,ZEXT816(0),0xc,1);
    auVar26._0_12_ = auVar25._0_12_;
    auVar26._12_4_ = 0.5 - ((fVar45 + *param_9) / param_9[2]) / fVar31;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar47;
    auVar19._12_4_ = auVar16._12_4_;
    auVar19._0_8_ = auVar17._0_8_;
    auVar19._8_4_ = fVar47;
    auVar18._8_8_ = auVar19._8_8_;
    auVar18._4_4_ = 0;
    auVar18._0_4_ = fVar47;
    auVar20._0_12_ = auVar18._0_12_;
    auVar20._12_4_ = 0;
    auVar16 = NEON_ext(auVar20,auVar20,0xc,1);
    auVar16 = NEON_ext(auVar16,ZEXT816(0),8,1);
    auVar21._0_12_ = auVar16._0_12_;
    auVar21._12_4_ = ((fVar52 + param_9[1]) / param_9[3]) / fVar29 + 0.5;
    uStack_98 = auVar21._8_8_;
    local_a0 = auVar16._0_8_;
    uStack_88 = auVar26._8_8_;
    uStack_90 = auVar25._0_8_;
  }
  FUN_008afcd0(&local_80);
  fVar40 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  lVar5 = lVar6 + (long)param_10 * 0x14;
  fVar22 = *(float *)(lVar5 + 4);
  uVar9 = (ulong)(*(float *)(lVar5 + 8) * (fVar40 / *(float *)PTR_FloatDegree180_047d2390));
  pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar9 >> 0x18 & 0xff) * 0x10);
  fVar40 = (float)((uint)uVar9 & 0xffffff) * 5.9604645e-08;
  fVar15 = pfVar1[1] + pfVar1[3] * fVar40;
  fVar34 = *pfVar1 + pfVar1[2] * fVar40;
  fVar41 = *(float *)(lVar5 + 0xc) * fVar34;
  fVar48 = *(float *)(lVar5 + 0x10) * -fVar15;
  fVar15 = *(float *)(lVar5 + 0xc) * fVar15;
  fVar35 = *(float *)(lVar6 + (long)param_10 * 0x14);
  fVar34 = *(float *)(lVar5 + 0x10) * fVar34;
  FUN_008afd38(&local_80);
  fVar40 = *(float *)(param_6 + 0x80);
  fVar47 = *(float *)(param_6 + 0x84);
  fVar51 = *(float *)(param_6 + 0x88);
  fVar52 = *(float *)(param_6 + 0x8c);
  auVar16 = *(undefined1 (*) [16])(param_6 + 0x90);
  fVar42 = *(float *)(param_6 + 0xa0);
  fVar43 = *(float *)(param_6 + 0xa4);
  fVar44 = *(float *)(param_6 + 0xa8);
  fVar45 = *(float *)(param_6 + 0xac);
  fVar29 = *(float *)(param_6 + 0x10);
  fVar31 = *(float *)(param_6 + 0x14);
  fVar30 = *(float *)(param_6 + 0x18);
  fVar36 = (float)*(undefined8 *)(param_6 + 0x28);
  fVar33 = (float)*(undefined8 *)(param_6 + 0x20);
  fVar39 = (float)((ulong)*(undefined8 *)(param_6 + 0x20) >> 0x20);
  fVar46 = auVar16._0_4_;
  fVar49 = auVar16._4_4_;
  fVar53 = auVar16._8_4_;
  fVar50 = auVar16._12_4_;
  fVar24 = fVar40 * fVar29 + fVar46 * fVar31 + fVar42 * fVar30 + 0.0;
  fVar27 = fVar47 * fVar29 + fVar49 * fVar31 + fVar43 * fVar30 + 0.0;
  fVar28 = fVar51 * fVar29 + fVar53 * fVar31 + fVar44 * fVar30 + 0.0;
  fVar29 = *(float *)(param_6 + 0x1c) + fVar52 * fVar29 + fVar50 * fVar31 + fVar45 * fVar30;
  fVar58 = (float)*(undefined8 *)(param_6 + 0x48);
  fVar56 = (float)*(undefined8 *)(param_6 + 0x40);
  fVar57 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
  fVar31 = fVar40 * fVar33 + fVar46 * fVar39 + fVar42 * fVar36 + 0.0;
  fVar30 = fVar47 * fVar33 + fVar49 * fVar39 + fVar43 * fVar36 + 0.0;
  fVar32 = fVar51 * fVar33 + fVar53 * fVar39 + fVar44 * fVar36 + 0.0;
  fVar33 = (float)((ulong)*(undefined8 *)(param_6 + 0x28) >> 0x20) +
           fVar52 * fVar33 + fVar50 * fVar39 + fVar45 * fVar36;
  fVar39 = (float)*(undefined8 *)(param_6 + 0x30);
  fVar59 = (float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20);
  fVar55 = (float)*(undefined8 *)(param_6 + 0x38);
  fVar36 = fVar40 * fVar39 + fVar46 * fVar59 + fVar42 * fVar55 + 0.0;
  fVar37 = fVar47 * fVar39 + fVar49 * fVar59 + fVar43 * fVar55 + 0.0;
  fVar38 = fVar51 * fVar39 + fVar53 * fVar59 + fVar44 * fVar55 + 0.0;
  fVar39 = (float)((ulong)*(undefined8 *)(param_6 + 0x38) >> 0x20) +
           fVar52 * fVar39 + fVar50 * fVar59 + fVar45 * fVar55;
  param_1._0_4_ = fVar40 * fVar56 + fVar46 * fVar57 + fVar42 * fVar58 + 0.0;
  param_1._4_4_ = fVar47 * fVar56 + fVar49 * fVar57 + fVar43 * fVar58 + 0.0;
  param_1._8_4_ = fVar51 * fVar56 + fVar53 * fVar57 + fVar44 * fVar58 + 0.0;
  param_1._12_4_ =
       (float)((ulong)*(undefined8 *)(param_6 + 0x48) >> 0x20) +
       fVar52 * fVar56 + fVar50 * fVar57 + fVar45 * fVar58;
  fVar46 = (float)uStack_90;
  fVar53 = (float)((ulong)uStack_90 >> 0x20);
  fVar59 = (float)uStack_88;
  fVar55 = (float)((ulong)uStack_88 >> 0x20);
  fVar56 = (float)local_a0;
  fVar57 = (float)((ulong)local_a0 >> 0x20);
  fVar58 = (float)uStack_98;
  fVar54 = (float)((ulong)uStack_98 >> 0x20);
  fVar40 = (float)_DAT_03caa5b0;
  fVar47 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
  fVar51 = (float)_UNK_03caa5b8;
  fVar52 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
  fVar42 = fVar46 * fVar41 + fVar56 * fVar48 + fVar40 * 0.0 + 0.0;
  fVar43 = fVar53 * fVar41 + fVar57 * fVar48 + fVar47 * 0.0 + 0.0;
  fVar44 = fVar59 * fVar41 + fVar58 * fVar48 + fVar51 * 0.0 + 0.0;
  fVar45 = fVar35 + 0.5 + fVar41 * -0.5 + fVar48 * -0.5 +
           fVar55 * fVar41 + fVar54 * fVar48 + fVar52 * 0.0;
  fVar49 = fVar46 * fVar15 + fVar56 * fVar34 + fVar40 * 0.0 + 0.0;
  fVar50 = fVar53 * fVar15 + fVar57 * fVar34 + fVar47 * 0.0 + 0.0;
  fVar35 = fVar59 * fVar15 + fVar58 * fVar34 + fVar51 * 0.0 + 0.0;
  fVar34 = fVar55 * fVar15 + fVar54 * fVar34 + fVar52 * 0.0 +
           (1.0 - ((fVar34 * 0.5 - (fVar22 + 0.5 + fVar15 * -0.5)) + 1.0));
  fVar40 = fVar46 * 0.0 + fVar56 * 0.0 + fVar40 * 0.0 + 0.0;
  fVar47 = fVar53 * 0.0 + fVar57 * 0.0 + fVar47 * 0.0 + 0.0;
  fVar51 = fVar59 * 0.0 + fVar58 * 0.0 + fVar51 * 0.0 + 0.0;
  fVar52 = fVar55 * 0.0 + fVar54 * 0.0 + fVar52 * 0.0 + 0.0;
  auVar16._0_4_ = fVar24 * fVar49 + fVar31 * fVar50 + fVar36 * fVar35 + param_1._0_4_ * fVar34;
  auVar16._4_4_ = fVar27 * fVar49 + fVar30 * fVar50 + fVar37 * fVar35 + param_1._4_4_ * fVar34;
  auVar16._8_4_ = fVar28 * fVar49 + fVar32 * fVar50 + fVar38 * fVar35 + param_1._8_4_ * fVar34;
  auVar16._12_4_ = fVar29 * fVar49 + fVar33 * fVar50 + fVar39 * fVar35 + param_1._12_4_ * fVar34;
  param_2._0_4_ = fVar24 * fVar42 + fVar31 * fVar43 + fVar36 * fVar44 + param_1._0_4_ * fVar45;
  param_2._4_4_ = fVar27 * fVar42 + fVar30 * fVar43 + fVar37 * fVar44 + param_1._4_4_ * fVar45;
  param_2._8_4_ = fVar28 * fVar42 + fVar32 * fVar43 + fVar38 * fVar44 + param_1._8_4_ * fVar45;
  param_2._12_4_ = fVar29 * fVar42 + fVar33 * fVar43 + fVar39 * fVar44 + param_1._12_4_ * fVar45;
  auVar25._0_4_ = fVar24 * fVar40 + fVar31 * fVar47 + fVar36 * fVar51 + param_1._0_4_ * fVar52;
  auVar25._4_4_ = fVar27 * fVar40 + fVar30 * fVar47 + fVar37 * fVar51 + param_1._4_4_ * fVar52;
  auVar25._8_4_ = fVar28 * fVar40 + fVar32 * fVar47 + fVar38 * fVar51 + param_1._8_4_ * fVar52;
  auVar25._12_4_ = fVar29 * fVar40 + fVar33 * fVar47 + fVar39 * fVar51 + param_1._12_4_ * fVar52;
joined_r0x008a39e4:
  if (param_10 == 2) {
    lVar6 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x160);
  }
  else if (param_10 == 1) {
    lVar6 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x120);
  }
  else {
    if (param_10 != 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    if (lVar6 != 0) {
      lVar6 = lVar6 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0xe0);
  }
  puVar7[1] = param_2._8_8_;
  *puVar7 = param_2._0_8_;
  puVar7[3] = auVar16._8_8_;
  puVar7[2] = auVar16._0_8_;
  puVar7[5] = auVar25._8_8_;
  puVar7[4] = auVar25._0_8_;
  puVar7[7] = param_1._8_8_;
  puVar7[6] = param_1._0_8_;
  return;
}


