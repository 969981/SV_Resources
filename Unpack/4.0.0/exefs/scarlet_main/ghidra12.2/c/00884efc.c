/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00884efc; name: FUN_00884efc
 */


void FUN_00884efc(float param_1,long param_2,long param_3,long param_4,int param_5,uint *param_6,
                 long param_7,long param_8,int param_9,long param_10,int param_11,byte param_12)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar11 = (long)param_11;
  lVar12 = *(long *)(param_2 + 0xa0);
  lVar13 = (ulong)*(byte *)(*(long *)(param_2 + 0xa8) + lVar11) * 4;
  iVar8 = *(int *)(param_10 + lVar13);
  iVar9 = *(int *)(param_7 + lVar13);
  *(int *)(param_10 + lVar13) = iVar8 + 1;
  lVar13 = 0x40;
  if (param_4 != 0) {
    lVar13 = 0x60;
  }
  pfVar14 = (float *)(lVar12 + lVar11 * 0x38);
  pfVar1 = (float *)(param_8 + param_3 + lVar13 * (ulong)(uint)(iVar8 + iVar9 * param_9));
  fVar22 = pfVar14[1];
  fVar19 = *pfVar14 * (float)param_6[4];
  fVar17 = fVar22 * (float)param_6[5];
  if ((param_12 & 1) == 0) {
    fVar18 = *(float *)(lVar12 + lVar11 * 0x38 + 8);
  }
  else {
    fVar18 = fVar19 * -0.5;
  }
  lVar13 = lVar12 + lVar11 * 0x38;
  uVar2 = *param_6;
  uVar3 = param_6[1];
  fVar18 = fVar18 + (float)param_6[2];
  fVar20 = (fVar22 - fVar17) + (*(float *)(lVar13 + 0xc) - (float)param_6[3]);
  fVar21 = (float)param_6[4] * (float)param_6[6] + (float)(int)*(short *)(lVar13 + 0x30);
  fVar22 = (fVar22 * fVar21) / *(float *)(param_2 + 0xbc);
  uVar16 = ((uVar2 >> 0x18) * (uint)*(byte *)(lVar13 + 0x33)) / 0xff;
  uVar15 = ((uVar3 >> 0x18) * (uint)*(byte *)(lVar13 + 0x33)) / 0xff;
  if (param_4 == 0) {
    lVar12 = lVar12 + lVar11 * 0x38;
    bVar10 = *(byte *)(lVar12 + 0x32);
    *pfVar1 = fVar19;
    pfVar1[1] = fVar17;
    pfVar1[2] = fVar18;
    pfVar1[3] = fVar20;
    uVar4 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined8 *)(pfVar1 + 4) = *(undefined8 *)(lVar12 + 0x18);
    *(undefined8 *)(pfVar1 + 6) = uVar4;
    pfVar1[8] = (float)(uVar2 & 0xffffff | uVar16 << 0x18);
    pfVar1[9] = (float)(uVar3 & 0xffffff | uVar15 << 0x18);
    pfVar1[10] = (float)~(uint)bVar10;
    pfVar1[0xb] = fVar22;
    pfVar1[0xf] = fVar21;
    return;
  }
  fVar23 = fVar20;
  if ((param_12 & 1) == 0) {
    if (param_5 == 1) {
      fVar23 = fVar17 + fVar20;
    }
    else if (param_5 == 0) {
      fVar23 = (fVar17 + fVar20 + fVar20) * 0.5;
    }
    else {
      fVar23 = 0.0;
    }
    fVar23 = fVar23 - param_1;
  }
  pfVar14 = (float *)(param_4 + lVar11 * 0x34);
  fVar29 = pfVar14[2];
  fVar28 = pfVar14[3];
  fVar31 = pfVar14[6];
  fVar30 = pfVar14[7];
  fVar25 = pfVar14[4];
  fVar26 = pfVar14[5];
  fVar27 = *pfVar14;
  fVar32 = pfVar14[1];
  fVar6 = pfVar14[8];
  fVar7 = pfVar14[10];
  fVar24 = (pfVar14[9] - fVar23) - (float)param_6[3];
  if ((param_12 & 1) == 0) {
    fVar24 = pfVar14[9];
  }
  if (*(char *)(param_2 + 0xbb) != '\0') {
    param_4 = param_4 + lVar11 * 0x34;
    uVar16 = (uVar16 * *(byte *)(param_4 + 0x2f) & 0xffff) / 0xff;
    uVar15 = (uVar15 * *(byte *)(param_4 + 0x33) & 0xffff) / 0xff;
  }
  lVar12 = lVar12 + lVar11 * 0x38;
  bVar10 = *(byte *)(lVar12 + 0x32);
  *pfVar1 = fVar19;
  pfVar1[1] = fVar17;
  pfVar1[2] = fVar18;
  pfVar1[3] = fVar20;
  uVar4 = *(undefined8 *)(lVar12 + 0x18);
  uVar5 = *(undefined8 *)(lVar12 + 0x20);
  pfVar1[8] = (float)(uVar2 & 0xffffff | uVar16 << 0x18);
  pfVar1[9] = (float)(uVar3 & 0xffffff | uVar15 << 0x18);
  pfVar1[0xb] = fVar22;
  pfVar1[0x10] = fVar25 * fVar28 * fVar27;
  pfVar1[0x11] = fVar28 * fVar30 * fVar27;
  *(undefined8 *)(pfVar1 + 4) = uVar4;
  *(undefined8 *)(pfVar1 + 6) = uVar5;
  pfVar1[10] = (float)~(uint)bVar10;
  pfVar1[0x12] = fVar27 * -fVar31;
  pfVar1[0x13] = (fVar19 + fVar18 + fVar18 + fVar21) * 0.5;
  pfVar1[0x14] = (fVar25 * fVar31 * fVar26 - fVar30 * fVar29) * fVar32;
  pfVar1[0x15] = (fVar30 * fVar31 * fVar26 + fVar25 * fVar29) * fVar32;
  pfVar1[0x16] = fVar28 * fVar26 * fVar32;
  pfVar1[0x17] = fVar23;
  pfVar1[0xc] = fVar6;
  pfVar1[0xd] = fVar24;
  pfVar1[0xe] = fVar7;
  pfVar1[0xf] = fVar21;
  return;
}


