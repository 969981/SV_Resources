/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086dc4c; name: FUN_0086dc4c
 */


undefined4 FUN_0086dc4c(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  double *pdVar2;
  short *psVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  undefined *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  char cVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  double dVar32;
  float fVar35;
  float fVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar45;
  double dVar42;
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float local_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0;
  *(undefined4 *)(param_1 + 0x9bd) = 8;
  puVar12 = PTR_DAT_047d19b0;
  fVar31 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x240);
  fVar34 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x240) >> 0x20);
  auVar38._0_8_ = CONCAT44(-fVar34,-fVar31);
  fVar36 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x248);
  auVar38._8_4_ = -fVar36;
  fVar41 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x248) >> 0x20);
  auVar38._12_4_ = -fVar41;
  uStack_88 = auVar38._8_8_;
  local_a0 = fVar31;
  fStack_9c = fVar34;
  fStack_98 = fVar36;
  fStack_94 = fVar41;
  local_90 = auVar38._0_8_;
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1[1],&local_a0);
  fVar40 = (float)local_90 - local_a0;
  fVar33 = (float)((ulong)local_90 >> 0x20);
  fVar44 = fVar33 - fStack_9c;
  fVar46 = (float)uStack_88 - fStack_98;
  fVar30 = (float)local_90 + local_a0;
  fVar33 = fVar33 + fStack_9c;
  fVar35 = (float)uStack_88 + fStack_98;
  auVar54 = *(undefined1 (*) [16])(puVar12 + 0x150);
  auVar39 = NEON_ext(auVar54,auVar54,8,1);
  auVar43 = NEON_ext(auVar39,auVar54,8,1);
  local_b0 = CONCAT44(-fVar34,-fVar31);
  auVar39._8_4_ = auVar38._8_4_;
  auVar39._0_8_ = local_b0;
  auVar39._12_4_ = auVar38._12_4_;
  uStack_a8 = auVar39._8_8_;
  local_c0 = fVar31;
  fStack_bc = fVar34;
  fStack_b8 = fVar36;
  fStack_b4 = fVar41;
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1[2],&local_c0);
  fVar41 = (float)local_b0 - local_c0;
  fVar34 = (float)((ulong)local_b0 >> 0x20);
  fVar45 = fVar34 - fStack_bc;
  fVar47 = (float)uStack_a8 - fStack_b8;
  auVar39 = *(undefined1 (*) [16])(param_1 + 4);
  auVar38 = *(undefined1 (*) [16])(param_1 + 8);
  auVar49 = NEON_ext(auVar39,auVar39,8,1);
  fVar31 = auVar43._0_4_ * ((float)local_b0 + local_c0) - *(float *)(param_1 + 10);
  fVar34 = auVar43._4_4_ * (fVar34 + fStack_bc) - *(float *)((long)param_1 + 0x54);
  fVar36 = auVar43._8_4_ * ((float)uStack_a8 + fStack_b8) - *(float *)(param_1 + 0xb);
  auVar10 = *(undefined1 (*) [16])(param_1 + 6);
  auVar50 = NEON_ext(auVar10,auVar10,8,1);
  auVar51 = NEON_ext(auVar38,auVar38,8,1);
  fVar40 = fVar40 * fVar40;
  fVar44 = fVar44 * fVar44;
  fVar46 = fVar46 * fVar46;
  fVar41 = fVar41 * fVar41;
  fVar45 = fVar45 * fVar45;
  fVar47 = fVar47 * fVar47;
  local_d0 = auVar54._0_4_;
  fStack_cc = auVar54._4_4_;
  fVar30 = fVar30 * auVar43._0_4_ -
           (auVar49._0_4_ * fVar36 + auVar39._0_4_ * fVar31 + auVar39._4_4_ * fVar34);
  fVar33 = fVar33 * auVar43._4_4_ -
           (auVar50._0_4_ * fVar36 + auVar10._0_4_ * fVar31 + auVar10._4_4_ * fVar34);
  fVar31 = fVar35 * auVar43._8_4_ -
           (auVar51._0_4_ * fVar36 + auVar38._0_4_ * fVar31 + auVar38._4_4_ * fVar34);
  fVar30 = fVar30 * fVar30;
  fVar33 = fVar33 * fVar33;
  fVar31 = fVar31 * fVar31;
  fVar34 = (local_d0 *
            ((float)(((int)(fVar46 + fVar40 + fVar44) >> 1) + 0x1fbb4000) +
            (float)(((int)(fVar47 + fVar41 + fVar45) >> 1) + 0x1fbb4000)) +
           (float)(((int)(fVar30 + fVar33 + fVar31) >> 1) + 0x1fbb4000)) * 1.03;
  fVar30 = (fStack_cc *
            ((float)(((int)(fVar46 + fVar40 + fVar44) >> 1) + 0x1fbb4000) +
            (float)(((int)(fVar47 + fVar41 + fVar45) >> 1) + 0x1fbb4000)) +
           (float)(((int)(fVar30 + fVar33 + fVar31) >> 1) + 0x1fbb4000)) * 1.03;
  fVar33 = (float)param_1[0xc] * 1024.0 * 1024.0;
  fVar31 = fVar34;
  if (fVar34 <= fVar33) {
    fVar31 = fVar33;
  }
  fVar33 = (float)((uint)fVar31 & 0x7f800000) * 6.0;
  auVar54._0_8_ = CONCAT44(fVar33,fVar33);
  auVar54._8_4_ = fVar33;
  auVar54._12_4_ = fVar33;
  fVar33 = fVar33 * fVar33;
  param_1[0x13] = auVar54._8_8_;
  param_1[0x12] = auVar54._0_8_;
  *(float *)(param_1 + 0x15) = fVar33;
  *(float *)((long)param_1 + 0xac) = fVar33;
  *(float *)(param_1 + 0x14) = fVar33;
  *(float *)((long)param_1 + 0xa4) = fVar33;
  fVar33 = (float)((uint)fVar31 & 0x7f800000) * 4.0 * 1.1920929e-07;
  uVar48 = NEON_fmov(0x41800000,4);
  param_1[0x17] =
       CONCAT44(fVar30 * fVar30 * fVar30 * (float)((ulong)uVar48 >> 0x20) *
                SUB164(ZEXT816(0x3400000034000000),4),
                fVar34 * fVar34 * fVar34 * (float)uVar48 * SUB164(ZEXT816(0x3400000034000000),0));
  uVar48 = NEON_fmax(param_1[0xc],CONCAT44(fVar33 + fVar33,fVar33 + fVar33),4);
  param_1[0xc] = uVar48;
  fVar31 = (float)((ulong)uVar48 >> 0x20);
  *(float *)(param_1 + 0x16) = fVar33;
  param_1[0xd] = CONCAT44(fVar31 * fVar31,(float)uVar48 * (float)uVar48);
  uVar14 = FUN_0086bd00(param_1);
  if ((uVar14 & 1) == 0) {
    uVar48 = param_1[0x9c0];
    param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]);
    param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar48 >> 0x20),0.0 - (float)uVar48);
    *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
    iVar25 = *(int *)((long)param_1 + 0x4dec);
    if (iVar25 == 1) {
      uVar26 = *(uint *)(param_1 + 0x9be);
      uVar18 = (ulong)(int)uVar26;
      uVar52 = param_1[uVar18 * 2 + 0x1b];
      uVar48 = param_1[uVar18 * 2 + 0x1a];
      uVar14 = (ulong)uVar26;
      uVar16 = (ulong)uVar26;
    }
    else {
      if (iVar25 == 2) {
        uVar26 = *(uint *)(param_1 + 0x9be);
        uVar16 = (ulong)*(byte *)((long)param_1 + (long)(int)uVar26 * 4 + 0xd62);
        uVar18 = (ulong)*(byte *)((long)param_1 +
                                 (long)(int)(0x2dU >> (ulong)((uVar26 & 3) << 1) & 3 ^ uVar26) * 4 +
                                 0xd62);
        uVar52 = (param_1 + uVar16 * 2 + 0x1a)[1];
        uVar48 = param_1[uVar16 * 2 + 0x1a];
        fVar31 = *(float *)(param_1 + 0x9c6);
        pfVar20 = (float *)(param_1 + uVar18 * 2 + 0x1a);
        fVar30 = (*pfVar20 - (float)uVar48) * fVar31;
        fVar34 = (pfVar20[1] - (float)((ulong)uVar48 >> 0x20)) * fVar31;
        fVar33 = (pfVar20[2] - (float)uVar52) * fVar31;
        fVar31 = (pfVar20[3] - (float)((ulong)uVar52 >> 0x20)) * fVar31;
        uVar14 = uVar18;
      }
      else {
        if (iVar25 != 3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar26 = *(uint *)(param_1 + 0x9be) << 2;
        uVar18 = (ulong)(long)(int)uVar26 >> 2;
        uVar16 = (ulong)*(byte *)((long)param_1 +
                                 (-(ulong)((*(uint *)(param_1 + 0x9be) & 0x3fffffff) >> 0x1d) &
                                  0xfffffffc00000000 | (ulong)uVar26 << 2) + 0xd62);
        uVar14 = (ulong)*(byte *)((long)param_1 + (uVar18 << 4 | 4) + 0xd62);
        uVar52 = (param_1 + uVar16 * 2 + 0x1a)[1];
        uVar48 = param_1[uVar16 * 2 + 0x1a];
        pfVar20 = (float *)(param_1 + uVar14 * 2 + 0x1a);
        uVar18 = (ulong)*(byte *)((long)param_1 + (uVar18 << 4 | 8) + 0xd62);
        fVar30 = *(float *)(param_1 + 0x9c4);
        fVar34 = *(float *)((long)param_1 + 0x4e24);
        fVar31 = *(float *)(param_1 + 0x9c5);
        pfVar8 = (float *)(param_1 + uVar18 * 2 + 0x1a);
        uVar48 = CONCAT44((float)((ulong)uVar48 >> 0x20) * fVar30 + pfVar20[1] * fVar34,
                          (float)uVar48 * fVar30 + *pfVar20 * fVar34);
        uVar52 = CONCAT44((float)((ulong)uVar52 >> 0x20) * fVar30 + pfVar20[3] * fVar34,
                          (float)uVar52 * fVar30 + pfVar20[2] * fVar34);
        fVar30 = *pfVar8 * fVar31;
        fVar34 = pfVar8[1] * fVar31;
        fVar33 = pfVar8[2] * fVar31;
        fVar31 = pfVar8[3] * fVar31;
      }
      uVar48 = CONCAT44((float)((ulong)uVar48 >> 0x20) + fVar34,(float)uVar48 + fVar30);
      uVar52 = CONCAT44((float)((ulong)uVar52 >> 0x20) + fVar31,(float)uVar52 + fVar33);
    }
    param_2[5] = uVar52;
    param_2[4] = uVar48;
    uVar16 = -(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4;
    puVar21 = (undefined8 *)param_1[0xe];
    puVar9 = (undefined8 *)((long)param_1 + uVar16 + 0xd0);
    uVar48 = *puVar9;
    uVar19 = -(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4;
    puVar21[1] = puVar9[1];
    *puVar21 = uVar48;
    puVar9 = (undefined8 *)((long)param_1 + uVar19 + 0xd0);
    uVar48 = *puVar9;
    lVar23 = param_1[0xe];
    *(undefined8 *)(lVar23 + 0x18) = puVar9[1];
    *(undefined8 *)(lVar23 + 0x10) = uVar48;
    uVar14 = -(uVar18 >> 0x1f & 1) & 0xfffffff000000000 | (uVar18 & 0xffffffff) << 4;
    puVar9 = (undefined8 *)((long)param_1 + uVar14 + 0xd0);
    uVar48 = *puVar9;
    lVar23 = param_1[0xe];
    *(undefined8 *)(lVar23 + 0x28) = puVar9[1];
    *(undefined8 *)(lVar23 + 0x20) = uVar48;
    puVar9 = (undefined8 *)((long)param_1 + uVar16 + 0x4d0);
    uVar48 = *puVar9;
    puVar21 = (undefined8 *)param_1[0xf];
    puVar21[1] = puVar9[1];
    *puVar21 = uVar48;
    puVar9 = (undefined8 *)((long)param_1 + uVar19 + 0x4d0);
    uVar48 = *puVar9;
    lVar23 = param_1[0xf];
    *(undefined8 *)(lVar23 + 0x18) = puVar9[1];
    *(undefined8 *)(lVar23 + 0x10) = uVar48;
    puVar9 = (undefined8 *)((long)param_1 + uVar14 + 0x4d0);
    uVar48 = *puVar9;
    lVar23 = param_1[0xf];
    *(undefined8 *)(lVar23 + 0x28) = puVar9[1];
    *(undefined8 *)(lVar23 + 0x20) = uVar48;
    iVar25 = *(int *)(param_1 + 0x18);
joined_r0x0086e640:
    if (iVar25 < 0x40) {
      uVar13 = *(undefined4 *)(param_1 + 0x9bd);
    }
    else {
      uVar13 = 3;
    }
    return uVar13;
  }
  uVar48 = *(undefined8 *)(puVar12 + 0x60);
  fVar31 = *(float *)(param_1 + 0x4ec);
  uVar26 = *(uint *)(param_1 + 0x1ab);
joined_r0x0086ded4:
  if ((int)uVar26 < 2) goto LAB_0086e454;
LAB_0086df14:
  uVar14 = (ulong)(uVar26 - 1) & 3;
  if ((ulong)uVar26 - 2 < 3) {
    iVar25 = 0;
    lVar17 = 1;
  }
  else {
    iVar25 = 0;
    lVar23 = 0;
    pfVar20 = (float *)(param_1 + 0x4ee);
    do {
      lVar17 = lVar23;
      iVar24 = (int)lVar17;
      if (fVar31 < pfVar20[-3]) {
        iVar25 = iVar24 + 1;
        fVar31 = pfVar20[-3];
      }
      fVar34 = pfVar20[-1];
      iVar7 = iVar24 + 2;
      fVar30 = pfVar20[-2];
      if (pfVar20[-2] <= fVar31) {
        iVar7 = iVar25;
        fVar30 = fVar31;
      }
      fVar33 = fVar34;
      if (fVar34 <= fVar30) {
        fVar33 = fVar30;
      }
      iVar4 = iVar24 + 3;
      if (fVar34 <= fVar30) {
        iVar4 = iVar7;
      }
      iVar25 = iVar24 + 4;
      fVar31 = *pfVar20;
      if (*pfVar20 <= fVar33) {
        iVar25 = iVar4;
        fVar31 = fVar33;
      }
      lVar23 = lVar17 + 4;
      pfVar20 = pfVar20 + 4;
    } while (~uVar14 + (ulong)uVar26 != lVar17 + 4);
    lVar17 = lVar17 + 5;
  }
  iVar24 = iVar25;
  if ((uVar26 - 1 & 3) != 0) {
    do {
      fVar30 = *(float *)((long)param_1 + lVar17 * 4 + 0x2760);
      iVar25 = (int)lVar17;
      if (fVar30 <= fVar31) {
        iVar25 = iVar24;
        fVar30 = fVar31;
      }
      fVar31 = fVar30;
      lVar17 = lVar17 + 1;
      uVar14 = uVar14 - 1;
      iVar24 = iVar25;
    } while (uVar14 != 0);
  }
  do {
    if (fVar31 < 0.0) {
      *(undefined4 *)(param_1 + 0x9bd) = 1;
    }
    auVar54 = *(undefined1 (*) [16])(param_1 + (long)iVar25 * 2 + 0x3ac);
    uVar53 = param_1[(long)iVar25 * 2 + 0x2ad];
    uVar52 = param_1[(long)iVar25 * 2 + 0x2ac];
    auVar39 = *(undefined1 (*) [16])(param_1 + 0x12);
    pcVar1 = (char *)((long)param_1 + (long)iVar25 + 0x2b60);
    fStack_b8 = auVar54._8_4_;
    fStack_b4 = auVar54._12_4_;
    local_c0 = auVar54._0_4_;
    fStack_bc = auVar54._4_4_;
    cVar5 = *pcVar1;
    if (0x3f < *(int *)(param_1 + 0x18)) {
LAB_0086e19c:
      bVar11 = false;
      if (*(int *)(param_1 + 0x9bd) != 0) goto LAB_0086e200;
LAB_0086e558:
      if (bVar11) {
        *(undefined4 *)((long)param_1 + 0x4dec) = 1;
        *(int *)(param_1 + 0x9be) = *(int *)(param_1 + 0x18) + -1;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x4dec) = 3;
        *(int *)(param_1 + 0x9be) = iVar25;
        FUN_0086d980(param_1,iVar25);
      }
      uVar48 = param_1[0x9c0];
      param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]
                           );
      param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar48 >> 0x20),0.0 - (float)uVar48);
      *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
      iVar25 = *(int *)((long)param_1 + 0x4dec);
      if (iVar25 == 1) goto LAB_0086e710;
      if (iVar25 == 2) goto LAB_0086e728;
      if (iVar25 != 3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_0086e6a4:
      uVar26 = *(uint *)(param_1 + 0x9be) << 2;
      uVar18 = (ulong)(long)(int)uVar26 >> 2;
      uVar16 = (ulong)*(byte *)((long)param_1 +
                               (-(ulong)((*(uint *)(param_1 + 0x9be) & 0x3fffffff) >> 0x1d) &
                                0xfffffffc00000000 | (ulong)uVar26 << 2) + 0xd62);
      uVar14 = (ulong)*(byte *)((long)param_1 + (uVar18 << 4 | 4) + 0xd62);
      uVar52 = (param_1 + uVar16 * 2 + 0x1a)[1];
      uVar48 = param_1[uVar16 * 2 + 0x1a];
      pfVar20 = (float *)(param_1 + uVar14 * 2 + 0x1a);
      uVar18 = (ulong)*(byte *)((long)param_1 + (uVar18 << 4 | 8) + 0xd62);
      fVar30 = *(float *)(param_1 + 0x9c4);
      fVar34 = *(float *)((long)param_1 + 0x4e24);
      fVar31 = *(float *)(param_1 + 0x9c5);
      pfVar8 = (float *)(param_1 + uVar18 * 2 + 0x1a);
      uVar48 = CONCAT44((float)((ulong)uVar48 >> 0x20) * fVar30 + pfVar20[1] * fVar34,
                        (float)uVar48 * fVar30 + *pfVar20 * fVar34);
      uVar52 = CONCAT44((float)((ulong)uVar52 >> 0x20) * fVar30 + pfVar20[3] * fVar34,
                        (float)uVar52 * fVar30 + pfVar20[2] * fVar34);
      fVar30 = *pfVar8 * fVar31;
      fVar34 = pfVar8[1] * fVar31;
      fVar33 = pfVar8[2] * fVar31;
      fVar31 = pfVar8[3] * fVar31;
LAB_0086e770:
      uVar48 = CONCAT44((float)((ulong)uVar48 >> 0x20) + fVar34,(float)uVar48 + fVar30);
      uVar52 = CONCAT44((float)((ulong)uVar52 >> 0x20) + fVar31,(float)uVar52 + fVar33);
LAB_0086e774:
      param_2[5] = uVar52;
      param_2[4] = uVar48;
      uVar16 = -(uVar16 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4;
      puVar21 = (undefined8 *)param_1[0xe];
      puVar9 = (undefined8 *)((long)param_1 + uVar16 + 0xd0);
      uVar48 = *puVar9;
      uVar19 = -(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4;
      puVar21[1] = puVar9[1];
      *puVar21 = uVar48;
      puVar9 = (undefined8 *)((long)param_1 + uVar19 + 0xd0);
      uVar48 = *puVar9;
      lVar23 = param_1[0xe];
      *(undefined8 *)(lVar23 + 0x18) = puVar9[1];
      *(undefined8 *)(lVar23 + 0x10) = uVar48;
      uVar14 = -(uVar18 >> 0x1f & 1) & 0xfffffff000000000 | (uVar18 & 0xffffffff) << 4;
      puVar9 = (undefined8 *)((long)param_1 + uVar14 + 0xd0);
      uVar48 = *puVar9;
      lVar23 = param_1[0xe];
      *(undefined8 *)(lVar23 + 0x28) = puVar9[1];
      *(undefined8 *)(lVar23 + 0x20) = uVar48;
      puVar9 = (undefined8 *)((long)param_1 + uVar16 + 0x4d0);
      uVar48 = *puVar9;
      puVar21 = (undefined8 *)param_1[0xf];
      puVar21[1] = puVar9[1];
      *puVar21 = uVar48;
      puVar9 = (undefined8 *)((long)param_1 + uVar19 + 0x4d0);
      uVar48 = *puVar9;
      lVar23 = param_1[0xf];
      *(undefined8 *)(lVar23 + 0x18) = puVar9[1];
      *(undefined8 *)(lVar23 + 0x10) = uVar48;
      puVar9 = (undefined8 *)((long)param_1 + uVar14 + 0x4d0);
      uVar48 = *puVar9;
      lVar23 = param_1[0xf];
      *(undefined8 *)(lVar23 + 0x28) = puVar9[1];
      *(undefined8 *)(lVar23 + 0x20) = uVar48;
      iVar25 = *(int *)(param_1 + 0x18);
      goto joined_r0x0086e640;
    }
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_c0,param_1[2],
               (undefined1 (*) [16])(param_1 + 4),&local_a0);
    auVar54 = *(undefined1 (*) [16])(param_1 + 4);
    auVar38 = *(undefined1 (*) [16])(param_1 + 6);
    auVar49 = NEON_ext(auVar54,auVar54,8,1);
    auVar10 = *(undefined1 (*) [16])(param_1 + 8);
    auVar50 = NEON_ext(auVar38,auVar38,8,1);
    auVar43 = NEON_ext(auVar10,auVar10,8,1);
    fVar31 = (float)local_90 - (float)param_1[10];
    fVar34 = local_90._4_4_ - (float)((ulong)param_1[10] >> 0x20);
    fVar36 = (float)uStack_88 - (float)param_1[0xb];
    fVar30 = auVar49._0_4_ * fVar36 + auVar54._0_4_ * fVar31 + auVar54._4_4_ * fVar34;
    fVar33 = auVar50._0_4_ * fVar36 + auVar38._0_4_ * fVar31 + auVar38._4_4_ * fVar34;
    fVar31 = auVar43._0_4_ * fVar36 + auVar10._0_4_ * fVar31 + auVar10._4_4_ * fVar34;
    auVar10._8_4_ = fStack_98;
    auVar10._0_8_ = CONCAT44(fStack_9c,local_a0);
    auVar10._12_4_ = fStack_94;
    fVar45 = local_c0 * local_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8;
    fVar40 = SQRT(fVar45);
    fVar44 = SQRT(local_c0 * local_c0 + fStack_bc * fStack_bc + fStack_b8 * fStack_b8);
    fVar34 = local_a0 - fVar30;
    fVar36 = fStack_9c - fVar33;
    fVar35 = fStack_98 - fVar31;
    fVar41 = (float)uVar48 / fVar40;
    auVar43._0_4_ = local_c0 * (fVar34 - ((float)uVar52 - auVar39._0_4_));
    auVar43._4_4_ = fStack_bc * (fVar36 - ((float)((ulong)uVar52 >> 0x20) - auVar39._4_4_));
    auVar43._8_4_ = fStack_b8 * (fVar35 - ((float)uVar53 - auVar39._8_4_));
    auVar43._12_4_ =
         fStack_b4 *
         ((fStack_94 - uStack_88._4_4_) - ((float)((ulong)uVar53 >> 0x20) - auVar39._12_4_));
    auVar54 = NEON_ext(auVar43,auVar43,8,1);
    if (*(int *)(param_1 + 0x9bd) == 8) {
      fVar46 = (float)param_1[0xc];
      if (fVar46 < fVar41 * -(fStack_b8 * fVar35 + local_c0 * fVar34 + fStack_bc * fVar36)) {
        uVar52 = 0;
        uVar53 = 0;
        if (fVar45 != 0.0) {
          uVar52 = CONCAT44(fStack_bc / fVar44,local_c0 / fVar40);
          uVar53 = CONCAT44(fStack_b4 / fVar44,fStack_b8 / fVar40);
        }
        fVar40 = -(fVar34 * (float)uVar52 + fVar36 * (float)((ulong)uVar52 >> 0x20) +
                  fVar35 * (float)uVar53);
        if (fVar46 < fVar40) {
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = uVar53;
          param_1[0x9c0] = uVar52;
          *(float *)(param_1 + 0x9c2) = fVar40;
        }
      }
    }
    else {
      fVar46 = (float)param_1[0xc];
    }
    if (fVar41 * (auVar43._0_4_ + auVar43._4_4_ + auVar54._0_4_) < fVar46) goto LAB_0086e19c;
    iVar24 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar24 * 2 + 0x1b] = auVar10._8_8_;
    param_1[(long)iVar24 * 2 + 0x1a] = CONCAT44(fStack_9c,local_a0);
    iVar24 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar24 * 2 + 0x9b] = CONCAT44(uStack_88._4_4_,fVar31);
    param_1[(long)iVar24 * 2 + 0x9a] = CONCAT44(fVar33,fVar30);
    uVar52 = param_1[0x12];
    iVar24 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar24 * 2 + 0x11b] =
         CONCAT44((fStack_94 - uStack_88._4_4_) + (float)((ulong)param_1[0x13] >> 0x20),
                  fVar35 + (float)param_1[0x13]);
    param_1[(long)iVar24 * 2 + 0x11a] =
         CONCAT44(fVar36 + (float)((ulong)uVar52 >> 0x20),fVar34 + (float)uVar52);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    bVar11 = true;
    if (*(int *)(param_1 + 0x9bd) == 0) goto LAB_0086e558;
LAB_0086e200:
    if (!bVar11) {
LAB_0086def0:
      if (*pcVar1 == '\0') {
        if ((float)param_1[0xc] < *(float *)((long)param_1 + (long)iVar25 * 4 + 0x2960)) {
          FUN_0086d3b0(param_1,iVar25);
          cVar15 = *pcVar1;
          goto joined_r0x0086df68;
        }
      }
      else {
        cVar15 = '\x01';
joined_r0x0086df68:
        if ((cVar5 == '\0') && (cVar15 != '\0')) {
          fVar31 = *(float *)(param_1 + 0x4ec);
          uVar26 = *(uint *)(param_1 + 0x1ab);
          goto joined_r0x0086ded4;
        }
      }
      FUN_0086d980(param_1,iVar25);
      uVar48 = param_1[0x9c0];
      param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]
                           );
      param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar48 >> 0x20),0.0 - (float)uVar48);
      *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
      iVar25 = *(int *)((long)param_1 + 0x4dec);
      if (iVar25 != 1) {
        if (iVar25 != 2) {
          if (iVar25 != 3) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          goto LAB_0086e6a4;
        }
LAB_0086e728:
        uVar26 = *(uint *)(param_1 + 0x9be);
        uVar16 = (ulong)*(byte *)((long)param_1 + (long)(int)uVar26 * 4 + 0xd62);
        uVar18 = (ulong)*(byte *)((long)param_1 +
                                 (long)(int)(0x2dU >> (ulong)((uVar26 & 3) << 1) & 3 ^ uVar26) * 4 +
                                 0xd62);
        uVar52 = (param_1 + uVar16 * 2 + 0x1a)[1];
        uVar48 = param_1[uVar16 * 2 + 0x1a];
        fVar31 = *(float *)(param_1 + 0x9c6);
        pfVar20 = (float *)(param_1 + uVar18 * 2 + 0x1a);
        fVar30 = (*pfVar20 - (float)uVar48) * fVar31;
        fVar34 = (pfVar20[1] - (float)((ulong)uVar48 >> 0x20)) * fVar31;
        fVar33 = (pfVar20[2] - (float)uVar52) * fVar31;
        fVar31 = (pfVar20[3] - (float)((ulong)uVar52 >> 0x20)) * fVar31;
        uVar14 = uVar18;
        goto LAB_0086e770;
      }
LAB_0086e710:
      uVar26 = *(uint *)(param_1 + 0x9be);
      uVar18 = (ulong)(int)uVar26;
      uVar52 = param_1[uVar18 * 2 + 0x1b];
      uVar48 = param_1[uVar18 * 2 + 0x1a];
      uVar14 = (ulong)uVar26;
      uVar16 = (ulong)uVar26;
      goto LAB_0086e774;
    }
    uVar26 = *(uint *)(param_1 + 0x1ab);
    uVar14 = (ulong)uVar26;
    if ((int)uVar26 < 1) {
      *(undefined4 *)((long)param_1 + 0x4de4) = 0;
      *(uint *)(param_1 + 0x97c) = uVar26;
LAB_0086dee4:
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      goto LAB_0086def0;
    }
    iVar7 = *(int *)(param_1 + 0x18);
    lVar17 = uVar14 * 0x10 + 0x1550;
    lVar29 = uVar14 * 4 + 0x4be0;
    lVar28 = uVar14 * 4 + 0x275c;
    lVar27 = uVar14 + 0x2b5f;
    lVar22 = uVar14 * 0x20 + 0x2bc0;
    iVar24 = 0;
    lVar23 = uVar14 + 1;
    do {
      uVar26 = uVar26 - 1;
      pfVar20 = (float *)((long)param_1 + lVar17);
      fVar30 = (float)param_1[(long)iVar7 * 2 + 0x118] - *pfVar20;
      fVar34 = (float)((ulong)param_1[(long)iVar7 * 2 + 0x118] >> 0x20) - pfVar20[1];
      fVar33 = (float)param_1[(long)iVar7 * 2 + 0x119] - pfVar20[2];
      fVar31 = (float)*(undefined8 *)(pfVar20 + 0x200) * fVar30 +
               (float)((ulong)*(undefined8 *)(pfVar20 + 0x200) >> 0x20) * fVar34 +
               (float)*(undefined8 *)(pfVar20 + 0x202) * fVar33;
      if ((float)param_1[0x17] < ABS(fVar31)) {
        if (fVar31 <= 0.0) goto LAB_0086e268;
LAB_0086e374:
        iVar24 = iVar24 + 1;
        *(int *)((long)param_1 + lVar29) = (int)uVar14;
        uVar14 = (ulong)uVar26;
      }
      else {
        if (-3.40282e+38 < *(float *)((long)param_1 + lVar28)) {
          if (*(char *)((long)param_1 + lVar27) == '\0') {
            FUN_0086d3b0(param_1,uVar26);
          }
          pdVar2 = (double *)((long)param_1 + lVar22);
          dVar37 = (double)fVar30;
          dVar32 = (double)fVar34;
          dVar42 = (double)fVar33;
          if (0.0 < *pdVar2 * dVar37 + pdVar2[1] * dVar32 + pdVar2[2] * dVar42 +
                    pdVar2[0x200] * dVar37 + pdVar2[0x201] * dVar32 + pdVar2[0x202] * dVar42)
          goto LAB_0086e374;
        }
LAB_0086e268:
        *(undefined4 *)((long)param_1 + lVar29) = 0;
      }
      lVar23 = lVar23 + -1;
      lVar17 = lVar17 + -0x10;
      lVar29 = lVar29 + -4;
      lVar28 = lVar28 + -4;
      lVar27 = lVar27 + -1;
      lVar22 = lVar22 + -0x20;
    } while (1 < lVar23);
    *(int *)((long)param_1 + 0x4de4) = iVar24;
    uVar26 = (uint)uVar14;
    *(uint *)(param_1 + 0x97c) = uVar26;
    if (iVar24 == 0) goto LAB_0086dee4;
    if (iVar24 < 1) goto LAB_0086def0;
    if (iVar24 == 1) {
      *(undefined4 *)((long)param_1 + 0xd54) = 3;
      psVar3 = (short *)((long)param_1 +
                        (-(ulong)((uVar26 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                        (ulong)(uVar26 << 2) << 2) + 0xd60);
      sVar6 = *psVar3;
      *(short *)((long)param_1 + (ulong)*(byte *)(psVar3 + 1) * 2 + 0xcd4) = sVar6;
      uVar14 = (ulong)(long)(int)(uVar26 << 2) >> 2;
      *(int *)(param_1 + 0x19a) = (int)sVar6;
      psVar3 = (short *)((long)param_1 + (uVar14 << 4 | 4) + 0xd60);
      sVar6 = *psVar3;
      *(short *)((long)param_1 + (ulong)*(byte *)(psVar3 + 1) * 2 + 0xcd4) = sVar6;
      *(int *)(param_1 + 0x19a) = (int)sVar6;
      psVar3 = (short *)((long)param_1 + (uVar14 << 4 | 8) + 0xd60);
      sVar6 = *psVar3;
      *(short *)((long)param_1 + (ulong)*(byte *)(psVar3 + 1) * 2 + 0xcd4) = sVar6;
      *(int *)(param_1 + 0x19a) = (int)sVar6;
    }
    else {
      FUN_0086d5dc(param_1);
    }
    FUN_0086cfcc(param_1);
    fVar31 = *(float *)(param_1 + 0x4ec);
    uVar26 = *(uint *)(param_1 + 0x1ab);
    if (1 < (int)uVar26) goto LAB_0086df14;
LAB_0086e454:
    iVar25 = 0;
  } while( true );
}


