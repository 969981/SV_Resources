/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030594e0; name: FUN_030594e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_030594e0(float param_1,float param_2,float param_3,long param_4,uint *param_5,
            undefined8 *param_6,undefined8 param_7,long param_8,undefined8 *param_9,uint *param_10)

{
  long lVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fVar59;
  undefined8 uVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar67;
  undefined1 auVar65 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_78;
  uint local_74;
  
  uVar27 = *param_5 & ((int)*param_5 >> 0x1f ^ 0xffffffffU);
  if (*(int *)(param_4 + 0x20) <= (int)uVar27) {
    return 1;
  }
  param_1 = param_1 * param_1;
  local_74 = param_5[2];
  uVar30 = (ulong)uVar27;
  uVar27 = 0xffffffff;
  do {
    lVar20 = *(long *)(param_4 + 0x18);
    uVar28 = *(uint *)(lVar20 + uVar30 * 0x90 + 0x70);
    uVar16 = (ulong)uVar28;
    if (param_8 == 0) {
      lVar18 = _DAT_00000038;
    }
    else {
      lVar18 = *(long *)(param_8 + 0x38);
      lVar24 = *(long *)(*(long *)(lVar18 + ((ulong)(uVar28 >> 0xe) & 0x3ff00)) + 0x20);
      uVar16 = uVar16 & 0x3fffff;
      uVar17 = *(uint *)(*(long *)(lVar24 + 0x168) + uVar16 * 4);
      if ((int)uVar17 < 0) {
        if ((*(int *)(lVar24 + 0x108) != 0) &&
           ((*(byte *)(*(long *)(lVar24 + 0x100) + uVar16) & 1) != 0)) goto LAB_03059614;
        if (*(short *)(lVar20 + uVar30 * 0x90 + 0x74) != -1) {
          uVar28 = 0xffffffff;
        }
        uVar16 = (ulong)uVar28;
      }
      else {
        iVar23 = *(int *)(lVar24 + 0x170);
        lVar25 = (long)iVar23;
        if (iVar23 <= (int)(uVar17 + 1)) {
          iVar23 = uVar17 + 1;
        }
        lVar26 = (ulong)uVar17 + 1;
        do {
          if (lVar25 <= lVar26) goto LAB_030595bc;
          lVar1 = lVar26 * 4;
          lVar26 = lVar26 + 1;
        } while (*(int *)(*(long *)(lVar24 + 0x168) + lVar1) == (int)uVar16);
        iVar23 = (int)lVar26 + -1;
LAB_030595bc:
        iVar19 = (int)*(short *)(lVar20 + uVar30 * 0x90 + 0x74);
        if ((iVar19 == -1) || (uVar17 = uVar17 + iVar19, iVar23 <= (int)uVar17)) {
LAB_03059614:
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = (ulong)(uVar17 | uVar28 & 0xffc00000);
        }
      }
    }
    uVar28 = (uint)uVar16 & 0x3fffff;
    uVar29 = *(undefined8 *)(lVar18 + (uVar16 >> 0x16) * 0x100);
    local_78 = uVar28;
    fVar31 = (float)FUN_03098e0c(uVar29,&local_78,param_7,param_6,&local_90);
    if (fVar31 < param_1) {
      local_98[0] = uVar28;
      fVar32 = (float)FUN_030992dc(uVar29,local_98,param_7,&local_90,&local_90);
      if (fVar32 < param_2) {
        uStack_a8 = uStack_88;
        local_b0 = local_90;
        uVar27 = (uint)uVar30;
        if (fVar31 == 0.0) break;
        param_1 = fVar31;
      }
    }
    uVar30 = uVar30 + 1;
  } while ((long)uVar30 < (long)*(int *)(param_4 + 0x20));
  if ((int)uVar27 < 0) {
    return 1;
  }
  param_9[1] = uStack_a8;
  *param_9 = local_b0;
  lVar20 = *(long *)(param_4 + 0x18);
  uVar17 = *(uint *)(lVar20 + (ulong)uVar27 * 0x90 + 0x70);
  uVar21 = uVar17 >> 0x16;
  uVar30 = (ulong)uVar27;
  lVar18 = *(long *)(*(long *)(*(long *)(param_8 + 0x38) + (ulong)uVar21 * 0x100) + 0x20);
  uVar16 = (ulong)uVar17 & 0x3fffff;
  uVar28 = *(uint *)(*(long *)(lVar18 + 0x168) + uVar16 * 4);
  if ((int)uVar28 < 0) {
    if ((*(int *)(lVar18 + 0x108) != 0) &&
       ((*(byte *)(*(long *)(lVar18 + 0x100) + uVar16) & 1) != 0)) goto LAB_03059778;
    if (*(short *)(lVar20 + uVar30 * 0x90 + 0x74) != -1) {
      uVar17 = 0xffffffff;
    }
  }
  else {
    iVar23 = *(int *)(lVar18 + 0x170);
    lVar25 = (long)iVar23;
    lVar24 = (ulong)uVar28 + 1;
    if (iVar23 <= (int)(uVar28 + 1)) {
      iVar23 = uVar28 + 1;
    }
    do {
      if (lVar25 <= lVar24) goto LAB_0305971c;
      lVar26 = lVar24 * 4;
      lVar24 = lVar24 + 1;
    } while (*(int *)(*(long *)(lVar18 + 0x168) + lVar26) == (int)uVar16);
    iVar23 = (int)lVar24 + -1;
LAB_0305971c:
    iVar19 = (int)*(short *)(lVar20 + uVar30 * 0x90 + 0x74);
    if ((iVar19 == -1) || (uVar28 = uVar28 + iVar19, iVar23 <= (int)uVar28)) {
LAB_03059778:
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = uVar28 | uVar17 & 0xffc00000;
    }
  }
  lVar18 = *(long *)(*(long *)(param_8 + 0x38) + (ulong)(uVar17 >> 0x16) * 0x100);
  pauVar2 = (undefined1 (*) [12])(lVar18 + 0x80);
  uVar45 = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x88) >> 0x20);
  fVar32 = (float)*param_6 - (float)*(undefined8 *)(lVar18 + 0x90);
  fVar34 = (float)((ulong)*param_6 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar18 + 0x90) >> 0x20)
  ;
  fVar36 = (float)param_6[1] - (float)*(undefined8 *)(lVar18 + 0x98);
  pauVar3 = (undefined1 (*) [12])(lVar18 + 0x60);
  uVar40 = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x68) >> 0x20);
  pauVar4 = (undefined1 (*) [12])(lVar18 + 0x70);
  uVar50 = (undefined4)((ulong)*(undefined8 *)(lVar18 + 0x78) >> 0x20);
  auVar53._12_4_ = uVar50;
  auVar53._0_12_ = *pauVar4;
  auVar9._12_4_ = uVar50;
  auVar9._0_12_ = *pauVar4;
  auVar53 = NEON_ext(auVar53,auVar9,8,1);
  auVar51._12_4_ = uVar40;
  auVar51._0_12_ = *pauVar3;
  auVar54._12_4_ = uVar40;
  auVar54._0_12_ = *pauVar3;
  auVar51 = NEON_ext(auVar51,auVar54,8,1);
  auVar5._12_4_ = uVar45;
  auVar5._0_12_ = *pauVar2;
  auVar6._12_4_ = uVar45;
  auVar6._0_12_ = *pauVar2;
  auVar54 = NEON_ext(auVar5,auVar6,8,1);
  fVar31 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  fVar33 = auVar51._0_4_ * fVar36 +
           (float)*(undefined8 *)*pauVar3 * fVar32 +
           (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20) * fVar34;
  fVar35 = auVar53._0_4_ * fVar36 +
           (float)*(undefined8 *)*pauVar4 * fVar32 +
           (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar34;
  fVar37 = auVar54._0_4_ * fVar36 + (float)*(undefined8 *)*pauVar2 * fVar32 + fVar31 * fVar34;
  uVar29 = NEON_fmov(0x3f800000,4);
  fVar39 = (float)((ulong)uVar29 >> 0x20);
  if ((((int)local_74 < (int)uVar27) && ((*(byte *)(lVar20 + uVar30 * 0x90 + 0x80) >> 4 & 1) != 0))
     && (uVar17 >> 0x16 == uVar21)) {
    puVar22 = (undefined8 *)(lVar20 + uVar30 * 0x90);
    fVar55 = -param_3;
    fVar46 = (float)*puVar22;
    fVar49 = (float)((ulong)*puVar22 >> 0x20);
    fVar38 = *(float *)(puVar22 + 4);
    fVar61 = *(float *)((long)puVar22 + 0x24);
    fVar62 = *(float *)(puVar22 + 5);
    fVar63 = *(float *)((long)puVar22 + 0x2c);
    fVar47 = *(float *)(puVar22 + 2) - fVar46;
    fVar48 = *(float *)((long)puVar22 + 0x14) - fVar49;
    fVar44 = *(float *)(puVar22 + 3) - (float)puVar22[1];
    fVar56 = fVar38 * fVar47;
    fVar59 = fVar61 * fVar48;
    fVar60 = fVar62 * fVar44;
    fVar57 = fVar56 + fVar59 + fVar60;
    fVar60 = fVar56 + fVar59 + fVar60;
    fVar46 = fVar33 - fVar46;
    fVar49 = fVar35 - fVar49;
    fVar56 = fVar37 - (float)puVar22[1];
    fVar59 = fVar38 * fVar46;
    fVar66 = fVar61 * fVar49;
    fVar67 = fVar62 * fVar56;
    fVar64 = fVar67 + fVar59 + fVar66;
    fVar67 = fVar67 + fVar59 + fVar66;
    fVar47 = fVar47 - fVar38 * fVar57;
    fVar48 = fVar48 - fVar61 * fVar60;
    fVar44 = fVar44 - fVar62 * fVar57;
    fVar46 = fVar46 - fVar38 * fVar64;
    fVar49 = fVar49 - fVar61 * fVar67;
    fVar56 = fVar56 - fVar62 * fVar64;
    fVar57 = fVar47 * fVar46;
    fVar59 = fVar48 * fVar49;
    fVar64 = fVar44 * fVar56;
    uVar58 = NEON_fminnm(CONCAT44((fVar57 + fVar59 + fVar64) *
                                  (fVar39 / (fVar47 * fVar47 + fVar48 * fVar48 + fVar44 * fVar44)),
                                  (fVar57 + fVar59 + fVar64) *
                                  ((float)uVar29 /
                                  (fVar47 * fVar47 + fVar48 * fVar48 + fVar44 * fVar44))),uVar29,4);
    uVar58 = NEON_fmax(uVar58,0,4);
    fVar57 = (float)uVar58;
    fVar64 = (float)((ulong)uVar58 >> 0x20);
    fVar59 = fVar55 + (-param_3 - fVar55) * fVar57;
    fVar46 = fVar46 - fVar57 * fVar47;
    fVar49 = fVar49 - fVar64 * fVar48;
    fVar56 = fVar56 - fVar57 * fVar44;
    fVar47 = fVar38 * fVar46;
    fVar44 = fVar61 * fVar49;
    fVar57 = fVar62 * fVar56;
    fVar48 = fVar47 + fVar44 + fVar57;
    fVar57 = fVar47 + fVar44 + fVar57;
    fVar46 = fVar46 - fVar38 * fVar48;
    fVar49 = fVar49 - fVar61 * fVar57;
    fVar56 = fVar56 - fVar62 * fVar48;
    fVar31 = ((((auVar54._4_4_ * fVar36 + fVar31 * fVar32 + auVar54._4_4_ * fVar34) - fVar55) -
              fVar63 * fVar67) - fVar64 * ((param_3 - fVar55) - fVar63 * fVar60)) - fVar63 * fVar57;
    fVar46 = fVar46 * fVar46;
    fVar49 = fVar49 * fVar49;
    uVar41 = (undefined1)((uint)fVar49 >> 8);
    uVar42 = (undefined1)((uint)fVar49 >> 0x10);
    uVar43 = (undefined1)((uint)fVar49 >> 0x18);
    fVar56 = fVar56 * fVar56;
    fVar31 = fVar31 * fVar31;
    auVar7[4] = SUB41(fVar49,0);
    auVar7._0_4_ = fVar46;
    auVar7[5] = uVar41;
    auVar7[6] = uVar42;
    auVar7[7] = uVar43;
    auVar7._8_4_ = fVar56;
    auVar7._12_4_ = fVar31;
    auVar8[4] = SUB41(fVar49,0);
    auVar8._0_4_ = fVar46;
    auVar8[5] = uVar41;
    auVar8[6] = uVar42;
    auVar8[7] = uVar43;
    auVar8._8_4_ = fVar56;
    auVar8._12_4_ = fVar31;
    auVar51 = NEON_ext(auVar7,auVar8,8,1);
    if (!(bool)(~(fVar46 + fVar49 + auVar51._0_4_ < fVar59 * fVar59) & 1)) {
      uVar28 = uVar27 + 1;
      local_74 = uVar27;
      uVar21 = uVar28;
      if (*(int *)(param_4 + 0x20) <= (int)uVar28) {
        return 1;
      }
      goto LAB_03059a74;
    }
  }
  uVar21 = uVar27;
  if ((int)(local_74 + 1) <= (int)uVar27) {
    uVar21 = local_74 + 1;
  }
  puVar22 = (undefined8 *)(lVar20 + uVar30 * 0x90 + -0x40);
  do {
    uVar28 = uVar27;
    if ((long)uVar30 <= (long)(int)(local_74 + 1)) goto LAB_03059a74;
    fVar31 = *(float *)(puVar22 + -6);
    fVar32 = *(float *)((long)puVar22 + -0x2c);
    fVar34 = *(float *)(puVar22 + -5);
    fVar36 = *(float *)((long)puVar22 + -0x24);
    fVar55 = *(float *)((long)puVar22 + -0x1c) * fVar33;
    fVar47 = *(float *)(puVar22 + -3) * fVar33;
    fVar46 = *(float *)((long)puVar22 + -0x14) * fVar33;
    fVar48 = *(float *)(puVar22 + -1) * fVar35;
    fVar49 = *(float *)((long)puVar22 + -4) * fVar35;
    fVar38 = (float)((ulong)puVar22[1] >> 0x20) * fVar37;
    fVar33 = *(float *)(puVar22 + 2) + *(float *)(puVar22 + -4) * fVar33 +
             *(float *)(puVar22 + -2) * fVar35 + (float)*puVar22 * fVar37;
    fVar35 = *(float *)((long)puVar22 + 0x14) + fVar55 + *(float *)((long)puVar22 + -0xc) * fVar35 +
             (float)((ulong)*puVar22 >> 0x20) * fVar37;
    fVar37 = *(float *)(puVar22 + 3) + fVar47 + fVar48 + (float)puVar22[1] * fVar37;
    fVar38 = *(float *)((long)puVar22 + 0x1c) + fVar46 + fVar49 + fVar38;
    fVar55 = *(float *)(puVar22 + -10);
    fVar47 = *(float *)((long)puVar22 + -0x4c);
    fVar46 = *(float *)(puVar22 + -9);
    fVar48 = *(float *)((long)puVar22 + -0x44);
    fVar49 = *(float *)((long)puVar22 + -0x34);
    fVar61 = *(float *)(puVar22 + -8) - fVar33;
    fVar63 = *(float *)((long)puVar22 + -0x3c) - fVar35;
    fVar56 = *(float *)(puVar22 + -7) - fVar37;
    fVar57 = fVar49 - fVar38;
    auVar10._4_4_ = fVar63;
    auVar10._0_4_ = fVar61;
    auVar10._8_4_ = fVar56;
    auVar10._12_4_ = fVar57;
    auVar11._4_4_ = fVar63;
    auVar11._0_4_ = fVar61;
    auVar11._8_4_ = fVar56;
    auVar11._12_4_ = fVar57;
    auVar51 = NEON_ext(auVar10,auVar11,4,1);
    auVar65._0_4_ = fVar55 - fVar33;
    auVar65._4_4_ = fVar47 - fVar35;
    auVar65._8_4_ = fVar46 - fVar37;
    auVar65._12_4_ = fVar48 - fVar38;
    auVar54 = NEON_ext(auVar65,auVar65,4,1);
    fVar62 = fVar61 * auVar54._0_4_ - auVar65._0_4_ * auVar51._0_4_;
    fVar44 = fVar63 * auVar54._4_4_ - auVar65._4_4_ * auVar51._4_4_;
    fVar61 = fVar56 * auVar65._0_4_ - auVar65._8_4_ * fVar61;
    fVar63 = fVar57 * auVar65._4_4_ - auVar65._12_4_ * fVar63;
    auVar12._4_4_ = fVar44;
    auVar12._0_4_ = fVar62;
    auVar12._8_4_ = fVar61;
    auVar12._12_4_ = fVar63;
    auVar13._4_4_ = fVar44;
    auVar13._0_4_ = fVar62;
    auVar13._8_4_ = fVar61;
    auVar13._12_4_ = fVar63;
    auVar51 = NEON_ext(auVar12,auVar13,4,1);
    fVar61 = fVar31 * auVar51._0_4_;
    fVar63 = fVar32 * auVar51._4_4_;
    auVar14._4_4_ = fVar63;
    auVar14._0_4_ = fVar61;
    auVar14._8_4_ = fVar34 * fVar62;
    auVar14._12_4_ = fVar36 * 0.0;
    auVar15._4_4_ = fVar63;
    auVar15._0_4_ = fVar61;
    auVar15._8_4_ = fVar34 * fVar62;
    auVar15._12_4_ = fVar36 * 0.0;
    auVar51 = NEON_ext(auVar14,auVar15,8,1);
    if (0.0 < fVar61 + fVar63 + auVar51._0_4_) {
      uVar21 = (uint)uVar30;
      goto LAB_03059a74;
    }
    fVar62 = *(float *)(puVar22 + -8) - fVar55;
    fVar63 = *(float *)((long)puVar22 + -0x3c) - fVar47;
    fVar44 = *(float *)(puVar22 + -7) - fVar46;
    uVar30 = uVar30 - 1;
    fVar61 = fVar31 * fVar62;
    fVar57 = fVar32 * fVar63;
    fVar59 = fVar34 * fVar44;
    fVar56 = fVar59 + fVar61 + fVar57;
    fVar59 = fVar59 + fVar61 + fVar57;
    fVar61 = fVar31 * (fVar33 - fVar55);
    fVar60 = fVar32 * (fVar35 - fVar47);
    fVar64 = fVar34 * (fVar37 - fVar46);
    fVar57 = fVar64 + fVar61 + fVar60;
    fVar64 = fVar64 + fVar61 + fVar60;
    fVar62 = fVar62 - fVar31 * fVar56;
    fVar63 = fVar63 - fVar32 * fVar59;
    fVar44 = fVar44 - fVar34 * fVar56;
    fVar55 = (fVar33 - fVar55) - fVar31 * fVar57;
    fVar47 = (fVar35 - fVar47) - fVar32 * fVar64;
    fVar46 = (fVar37 - fVar46) - fVar34 * fVar57;
    fVar61 = fVar62 * fVar55;
    fVar56 = fVar63 * fVar47;
    fVar57 = fVar44 * fVar46;
    uVar58 = NEON_fminnm(CONCAT44((fVar39 / (fVar62 * fVar62 + fVar63 * fVar63 + fVar44 * fVar44)) *
                                  (fVar61 + fVar56 + fVar57),
                                  ((float)uVar29 /
                                  (fVar62 * fVar62 + fVar63 * fVar63 + fVar44 * fVar44)) *
                                  (fVar61 + fVar56 + fVar57)),uVar29,4);
    uVar58 = NEON_fmax(uVar58,0,4);
    fVar56 = (float)uVar58;
    fVar57 = (float)((ulong)uVar58 >> 0x20);
    fVar61 = fVar48 + (-fVar49 - fVar48) * fVar56;
    fVar55 = fVar55 - fVar62 * fVar56;
    fVar47 = fVar47 - fVar63 * fVar57;
    fVar46 = fVar46 - fVar44 * fVar56;
    puVar22 = puVar22 + -0x12;
    fVar62 = fVar31 * fVar55;
    fVar44 = fVar32 * fVar47;
    fVar56 = fVar34 * fVar46;
    fVar63 = fVar62 + fVar44 + fVar56;
    fVar56 = fVar62 + fVar44 + fVar56;
    fVar55 = fVar55 - fVar31 * fVar63;
    fVar47 = fVar47 - fVar32 * fVar56;
    fVar46 = fVar46 - fVar34 * fVar63;
    fVar31 = (((fVar38 - fVar48) - fVar36 * fVar64) - ((fVar49 - fVar48) - fVar36 * fVar59) * fVar57
             ) - fVar36 * fVar56;
    auVar52._0_4_ = fVar55 * fVar55;
    auVar52._4_4_ = fVar47 * fVar47;
    auVar52._8_4_ = fVar46 * fVar46;
    auVar52._12_4_ = fVar31 * fVar31;
    auVar51 = NEON_ext(auVar52,auVar52,8,1);
  } while (auVar52._0_4_ + auVar52._4_4_ + auVar51._0_4_ < fVar61 * fVar61);
  uVar21 = (int)uVar30 + 1;
LAB_03059a74:
  *param_5 = uVar28;
  param_5[1] = uVar21;
  param_5[2] = local_74;
  *param_10 = uVar17;
  return 0;
}


