/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e3540; name: FUN_008e3540
 */


void FUN_008e3540(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int *param_6)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float local_18 [4];
  float local_8;
  float fStack_4;
  
  uVar1 = *(uint *)(param_4 + 0x70);
  uVar9 = (ulong)uVar1;
  if ((int)uVar1 < 2) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    return;
  }
  iVar18 = param_6[0x16];
  pfVar10 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
  if (iVar18 == 1) {
    fVar20 = 0.0;
    iVar11 = uVar1 - 1;
    pfVar15 = pfVar10;
    do {
      pfVar15 = *(float **)(pfVar15 + 0x16);
      iVar11 = iVar11 + -1;
      pfVar16 = *(float **)(pfVar15 + 0x18);
      fVar21 = (float)*(undefined8 *)pfVar15 - *pfVar16;
      fVar22 = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20) - pfVar16[1];
      fVar23 = (float)*(undefined8 *)(pfVar15 + 2) - pfVar16[2];
      fVar24 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20) - pfVar16[3];
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      auVar25._4_4_ = fVar22;
      auVar25._0_4_ = fVar21;
      auVar25._8_4_ = fVar23;
      auVar25._12_4_ = fVar24;
      auVar3._4_4_ = fVar22;
      auVar3._0_4_ = fVar21;
      auVar3._8_4_ = fVar23;
      auVar3._12_4_ = fVar24;
      auVar25 = NEON_ext(auVar25,auVar3,8,1);
      fVar20 = fVar20 + SQRT(auVar25._0_4_ + fVar21 + auVar25._4_4_ + fVar22);
    } while (iVar11 != 0);
    fVar20 = 1.0 / fVar20;
    lVar12 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar2 = *(char *)(lVar12 + 0x75c);
  }
  else {
    fVar20 = 0.0;
    lVar12 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar2 = *(char *)(lVar12 + 0x75c);
  }
  if (cVar2 == '\0') {
    fVar21 = 1.0;
    cVar2 = *(char *)(lVar12 + 0x756);
  }
  else {
    fVar21 = *(float *)(param_5 + 0x74);
    cVar2 = *(char *)(lVar12 + 0x756);
  }
  if (cVar2 != '\0') {
    fVar21 = fVar21 * *(float *)(param_5 + 0x70);
  }
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    iVar18 = *param_6;
joined_r0x008e383c:
    if (((iVar18 != 0) && (iVar18 != 3)) && (0 < (int)uVar1)) {
      lVar12 = *(long *)(param_4 + 0x58);
      puVar14 = (undefined4 *)(param_3 + 0x98);
      do {
        lVar12 = *(long *)(lVar12 + 0x58);
        uVar9 = uVar9 - 1;
        uVar19 = *(undefined8 *)(lVar12 + 0x48);
        *(undefined8 *)(puVar14 + -0x16) = *(undefined8 *)(lVar12 + 0x40);
        puVar14[-0x14] = (int)uVar19;
        uVar19 = *(undefined8 *)(lVar12 + 0x48);
        *(undefined8 *)(puVar14 + -2) = *(undefined8 *)(lVar12 + 0x40);
        *puVar14 = (int)uVar19;
        puVar14 = puVar14 + 0x28;
      } while (uVar9 != 0);
    }
    return;
  }
  fVar22 = *(float *)(param_4 + 0x80);
  uVar13 = 0;
  puVar17 = (undefined8 *)(param_3 + 0x50);
  iVar11 = -2;
  if (iVar18 == 1) goto LAB_008e3674;
  do {
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    if (iVar18 != 0) goto LAB_008e3738;
    local_18[0] = (float)(int)uVar13 / (float)(int)(uVar1 - 1);
    local_18[1] = local_18[0];
    local_8 = ((fVar22 - (float)(int)fVar22) + param_1 + (float)(int)uVar13) /
              (float)((int)(float)param_6[6] + -1);
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
    fStack_4 = local_8;
    local_18[2] = local_18[0];
    local_18[3] = local_8;
    while( true ) {
      fVar24 = local_18[(long)param_6[3] * 3];
      fVar26 = local_18[(long)param_6[4] * 3 + 1];
      fVar23 = local_18[(long)param_6[5] * 3 + 2];
LAB_008e3738:
      fVar27 = pfVar10[1];
      fVar7 = pfVar10[2];
      fVar28 = pfVar10[0x14];
      *(float *)(puVar17 + -10) = *pfVar10;
      *(float *)((long)puVar17 + -0x4c) = fVar27;
      *(float *)(puVar17 + -9) = fVar7;
      uVar19 = *(undefined8 *)(pfVar10 + 2);
      *puVar17 = *(undefined8 *)pfVar10;
      *(int *)(puVar17 + 1) = (int)uVar19;
      *(float *)((long)puVar17 + -0x44) = fVar21 * fVar28;
      *(float *)((long)puVar17 + 0xc) = -(fVar21 * fVar28);
      fVar27 = pfVar10[9];
      fVar7 = pfVar10[10];
      *(float *)(puVar17 + -8) = pfVar10[8];
      *(float *)((long)puVar17 + -0x3c) = fVar27;
      *(float *)(puVar17 + -7) = fVar7;
      fVar27 = pfVar10[9];
      fVar7 = pfVar10[10];
      *(float *)(puVar17 + 2) = pfVar10[8];
      *(float *)((long)puVar17 + 0x14) = fVar27;
      *(float *)(puVar17 + 3) = fVar7;
      fVar27 = pfVar10[0xd];
      fVar7 = pfVar10[0xe];
      *(float *)(puVar17 + -6) = pfVar10[0xc];
      *(float *)((long)puVar17 + -0x2c) = fVar27;
      *(float *)(puVar17 + -5) = fVar7;
      fVar27 = pfVar10[0xd];
      fVar7 = pfVar10[0xe];
      *(float *)(puVar17 + 4) = pfVar10[0xc];
      *(float *)((long)puVar17 + 0x24) = fVar27;
      *(float *)(puVar17 + 5) = fVar7;
      puVar17[-4] = CONCAT44(fVar26,fVar24);
      *(float *)(puVar17 + -3) = fVar23;
      puVar17[6] = CONCAT44(fVar26,fVar24);
      *(float *)(puVar17 + 7) = fVar23;
      *(float *)((long)puVar17 + -0x34) = (float)(int)uVar13;
      *(float *)((long)puVar17 + 0x1c) = (float)(int)uVar13;
      if (uVar9 - 1 == uVar13) {
        *(uint *)(param_4 + 0x78) = uVar1 << 1;
        iVar18 = *param_6;
        goto joined_r0x008e383c;
      }
      pfVar10 = *(float **)(pfVar10 + 0x16);
      uVar13 = uVar13 + 1;
      iVar11 = iVar11 + 2;
      iVar18 = param_6[0x16];
      puVar17 = puVar17 + 0x14;
      if (iVar18 != 1) break;
LAB_008e3674:
      uVar6 = (*(undefined8 **)(pfVar10 + 0x18))[1];
      uVar19 = **(undefined8 **)(pfVar10 + 0x18);
      lVar12 = (long)iVar11;
      if (uVar13 < 2) {
        lVar12 = 0;
      }
      fVar23 = (float)uVar19 - *pfVar10;
      fVar24 = (float)((ulong)uVar19 >> 0x20) - pfVar10[1];
      fVar26 = (float)uVar6 - pfVar10[2];
      fVar27 = (float)((ulong)uVar6 >> 0x20) - pfVar10[3];
      lVar12 = param_3 + lVar12 * 0x50;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      auVar4._4_4_ = fVar24;
      auVar4._0_4_ = fVar23;
      auVar4._8_4_ = fVar26;
      auVar4._12_4_ = fVar27;
      auVar5._4_4_ = fVar24;
      auVar5._0_4_ = fVar23;
      auVar5._8_4_ = fVar26;
      auVar5._12_4_ = fVar27;
      auVar25 = NEON_ext(auVar4,auVar5,8,1);
      bVar8 = uVar13 != 0;
      fVar23 = SQRT(auVar25._0_4_ + fVar23 + auVar25._4_4_ + fVar24);
      fVar24 = fVar20 * fVar23;
      local_18[0] = 0.0;
      if (bVar8) {
        local_18[0] = *(float *)(lVar12 + 0x30) + fVar24;
      }
      local_18[1] = 0.0;
      if (bVar8) {
        local_18[1] = fVar24 + *(float *)(lVar12 + 0x34);
      }
      fStack_4 = *(float *)(param_4 + 0x8c) * 0.1;
      fVar23 = fVar23 * 0.1;
      local_18[3] = fStack_4;
      local_18[2] = 0.0;
      if (bVar8) {
        local_18[3] = *(float *)(lVar12 + 0x30) - fVar23;
        local_18[2] = fVar24 + *(float *)(lVar12 + 0x38);
      }
      local_8 = fStack_4;
      if (bVar8) {
        fStack_4 = *(float *)(lVar12 + 0x38) - fVar23;
        local_8 = *(float *)(lVar12 + 0x34) - fVar23;
      }
    }
  } while( true );
}


