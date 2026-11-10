/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eb5814; name: FUN_02eb5814
 */


void FUN_02eb5814(undefined8 *param_1,long param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  ushort *puVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  lVar14 = *(long *)(param_2 + 0x50);
  lVar6 = 0;
  if (lVar14 != 0) {
    lVar6 = lVar14 + param_2 + 0x50;
  }
  param_1[0x121] = lVar6;
  param_1[0x126] = *(undefined8 *)(param_2 + 0x48);
  iVar9 = *(int *)(param_2 + 0x58);
  iVar10 = *(int *)(param_2 + 0x5c);
  fVar26 = (float)(iVar9 + -1);
  *(int *)(param_1 + 300) = iVar9;
  *(int *)((long)param_1 + 0x964) = iVar10;
  fVar16 = *param_3;
  fVar28 = fVar26;
  if (fVar16 <= fVar26) {
    fVar28 = fVar16;
  }
  fVar27 = 0.0;
  if (0.0 <= fVar16) {
    fVar27 = fVar28;
  }
  fVar19 = param_3[2];
  fVar25 = *param_4;
  fVar28 = (float)(iVar10 + -1);
  fVar16 = fVar28;
  if (fVar19 <= fVar28) {
    fVar16 = fVar19;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar19) {
    fVar20 = fVar16;
  }
  fVar16 = param_4[2];
  if (fVar25 <= fVar26) {
    fVar26 = fVar25;
  }
  fVar19 = 0.0;
  if (0.0 <= fVar25) {
    fVar19 = fVar26;
  }
  if (fVar16 <= fVar28) {
    fVar28 = fVar16;
  }
  fVar26 = 0.0;
  if (0.0 <= fVar16) {
    fVar26 = fVar28;
  }
  uVar7 = (int)fVar19 ^ (int)fVar27;
  uVar8 = (int)fVar26 ^ (int)fVar20;
  fVar28 = (float)LZCOUNT(uVar7);
  fVar19 = (float)LZCOUNT(uVar7);
  fVar25 = 0.0;
  fVar18 = 0.0;
  fVar16 = (float)LZCOUNT(uVar8);
  fVar22 = (float)LZCOUNT(uVar8);
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar26 = fVar28;
  if ((uint)fVar16 <= (uint)fVar28) {
    fVar26 = fVar16;
  }
  uVar8 = 0x20 - (int)fVar26;
  uVar7 = -(int)fVar26;
  iVar1 = (int)fVar27 >> (uVar7 & 0x1f);
  iVar2 = (int)fVar20 >> (uVar7 & 0x1f);
  iVar12 = 1 << (ulong)(uVar7 & 0x1f);
  if (iVar12 < iVar9 || iVar12 < iVar10) {
    plVar15 = (long *)(lVar6 + 0x20);
    lVar14 = *plVar15;
    iVar10 = *(int *)(lVar6 + 0x50);
    uVar7 = iVar10 - uVar8;
    iVar9 = 0;
    if (uVar7 == 0 || iVar10 < (int)uVar8) {
      iVar9 = uVar8 - iVar10;
    }
    if (uVar7 == 0 || iVar10 < (int)uVar8) {
      uVar7 = 0;
    }
    uVar3 = iVar2 >> (uVar7 & 0x1f);
    uVar7 = iVar1 >> (uVar7 & 0x1f);
    uVar4 = uVar7;
    if ((int)uVar7 < 0) {
      uVar4 = uVar7 + 1;
    }
    uVar5 = uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = uVar3 + 1;
    }
    if ((int)uVar4 >> 1 < (int)(uint)*(ushort *)((long)plVar15 + (long)iVar9 * 0x18 + lVar14 + 0x10)
       ) {
      uVar11 = *(ushort *)((long)plVar15 + (long)iVar9 * 0x18 + lVar14 + 0x12);
      if ((int)uVar5 >> 1 < (int)(uint)uVar11) {
        uVar4 = ((int)uVar5 >> 1) + ((int)uVar4 >> 1) * (uint)uVar11;
        plVar15 = (long *)((long)plVar15 + (long)iVar9 * 0x18 + lVar14);
        puVar13 = (ushort *)
                  ((long)plVar15 +
                  (-(ulong)((uVar4 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                  (ulong)(uVar4 * 4) << 2) + *plVar15);
        auVar21._2_2_ = 0;
        auVar21._0_2_ = *puVar13;
        auVar21._4_2_ = puVar13[1];
        auVar21._6_2_ = 0;
        auVar21._8_2_ = puVar13[2];
        auVar21._10_2_ = 0;
        auVar21._12_2_ = puVar13[3];
        auVar21._14_2_ = 0;
        auVar17._2_2_ = 0;
        auVar17._0_2_ = puVar13[4];
        auVar17._4_2_ = puVar13[5];
        auVar17._6_2_ = 0;
        auVar17._8_2_ = puVar13[6];
        auVar17._10_2_ = 0;
        auVar17._12_2_ = puVar13[7];
        auVar17._14_2_ = 0;
        fVar26 = *(float *)(lVar6 + 0x40);
        auVar21 = NEON_ucvtf(auVar21,4);
        auVar17 = NEON_ucvtf(auVar17,4);
        fVar28 = (float)*(undefined8 *)(lVar6 + 0x30);
        fVar16 = fVar28 + auVar21._0_4_ * fVar26;
        fVar19 = (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20);
        fVar22 = fVar19 + auVar21._4_4_ * fVar26;
        fVar25 = (float)*(undefined8 *)(lVar6 + 0x38);
        fVar23 = fVar25 + auVar21._8_4_ * fVar26;
        fVar18 = (float)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
        fVar24 = fVar18 + auVar21._12_4_ * fVar26;
        fVar28 = fVar28 + auVar17._0_4_ * fVar26;
        fVar19 = fVar19 + auVar17._4_4_ * fVar26;
        fVar25 = fVar25 + auVar17._8_4_ * fVar26;
        fVar18 = fVar18 + auVar17._12_4_ * fVar26;
      }
    }
    uVar4 = uVar7 & 1;
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar7 & 1 ^ 3;
    }
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        fVar28 = fVar19;
        fVar16 = fVar22;
      }
      else if (uVar4 == 2) {
        fVar28 = fVar25;
        fVar16 = fVar23;
      }
      else {
        fVar28 = fVar18;
        fVar16 = fVar24;
      }
    }
  }
  else {
    fVar16 = *(float *)(param_2 + 0x94) * *(float *)(param_2 + 0x74);
    fVar28 = *(float *)(param_2 + 0x74) * *(float *)(param_2 + 0xa4);
  }
  *(uint *)(param_1 + 4) = uVar8;
  *(int *)((long)param_1 + 0x24) = iVar1;
  *(int *)(param_1 + 5) = iVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(float *)(param_1 + 1) = (float)(iVar2 << (ulong)(uVar8 & 0x1f));
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *param_1 = CONCAT44(fVar16,(float)(iVar1 << (ulong)(uVar8 & 0x1f)));
  param_1[3] = (ulong)(uint)(float)(iVar2 + 1 << (ulong)(uVar8 & 0x1f));
  param_1[2] = CONCAT44(fVar28,(float)(iVar1 + 1 << (ulong)(uVar8 & 0x1f)));
  return;
}


