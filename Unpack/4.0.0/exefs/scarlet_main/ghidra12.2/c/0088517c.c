/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088517c; name: FUN_0088517c
 */


void FUN_0088517c(float param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
                 long param_7,int param_8,long param_9,int param_10,byte param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  float fVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  float *pfVar29;
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
  
  lVar26 = (long)param_10;
  lVar27 = *(long *)(param_2 + 0xa0);
  lVar25 = (ulong)*(byte *)(*(long *)(param_2 + 0xa8) + lVar26) * 4;
  iVar5 = *(int *)(param_6 + lVar25);
  iVar6 = *(int *)(param_9 + lVar25);
  *(int *)(param_9 + lVar25) = iVar6 + 1;
  lVar25 = 0x40;
  if (param_4 != 0) {
    lVar25 = 0x60;
  }
  pfVar28 = (float *)(lVar27 + lVar26 * 0x38);
  fVar32 = *pfVar28;
  fVar31 = pfVar28[1];
  pfVar28 = (float *)(param_7 + param_3 + lVar25 * (ulong)(uint)(iVar6 + iVar5 * param_8));
  if ((param_11 & 1) == 0) {
    fVar33 = *(float *)(lVar27 + lVar26 * 0x38 + 8);
  }
  else {
    fVar33 = fVar32 * -0.5;
  }
  lVar25 = lVar27 + lVar26 * 0x38;
  fVar24 = (float)(int)*(short *)(lVar25 + 0x30);
  fVar30 = (fVar31 * fVar24) / *(float *)(param_2 + 0xbc);
  fVar34 = *(float *)(lVar25 + 0xc);
  if (param_4 == 0) {
    lVar27 = lVar27 + lVar26 * 0x38;
    bVar7 = *(byte *)(lVar27 + 0x32);
    *pfVar28 = fVar32;
    pfVar28[1] = fVar31;
    pfVar28[2] = fVar33;
    pfVar28[3] = fVar34;
    uVar1 = *(undefined8 *)(lVar27 + 0x20);
    *(undefined8 *)(pfVar28 + 4) = *(undefined8 *)(lVar27 + 0x18);
    *(undefined8 *)(pfVar28 + 6) = uVar1;
    pfVar28[8] = *(float *)(lVar25 + 0x10);
    pfVar28[9] = *(float *)(lVar25 + 0x14);
    pfVar28[10] = (float)(uint)bVar7;
    pfVar28[0xb] = fVar30;
    pfVar28[0xf] = fVar24;
    return;
  }
  fVar35 = fVar34;
  if ((param_11 & 1) == 0) {
    if (param_5 == 1) {
      fVar35 = fVar31 + fVar34;
    }
    else if (param_5 == 0) {
      fVar35 = (fVar31 + fVar34 + fVar34) * 0.5;
    }
    else {
      fVar35 = 0.0;
    }
    fVar35 = fVar35 - param_1;
  }
  bVar7 = *(byte *)(lVar25 + 0x14);
  pfVar29 = (float *)(param_4 + lVar26 * 0x34);
  lVar27 = lVar27 + lVar26 * 0x38;
  bVar8 = *(byte *)(lVar25 + 0x10);
  bVar9 = *(byte *)(pfVar29 + 0xb);
  bVar10 = *(byte *)(lVar27 + 0x11);
  bVar11 = *(byte *)((long)pfVar29 + 0x2d);
  bVar12 = *(byte *)(lVar27 + 0x12);
  bVar13 = *(byte *)((long)pfVar29 + 0x2e);
  bVar14 = *(byte *)(pfVar29 + 0xc);
  fVar38 = pfVar29[6];
  fVar37 = pfVar29[7];
  bVar15 = *(byte *)(lVar27 + 0x13);
  fVar39 = pfVar29[4];
  fVar40 = pfVar29[5];
  fVar43 = pfVar29[2];
  fVar41 = pfVar29[3];
  bVar16 = *(byte *)((long)pfVar29 + 0x2f);
  bVar17 = *(byte *)(lVar27 + 0x15);
  bVar18 = *(byte *)((long)pfVar29 + 0x31);
  fVar36 = *pfVar29;
  fVar42 = pfVar29[1];
  bVar19 = *(byte *)((long)pfVar29 + 0x32);
  bVar20 = *(byte *)(lVar27 + 0x16);
  fVar3 = pfVar29[8];
  fVar44 = pfVar29[9];
  fVar4 = pfVar29[10];
  bVar21 = *(byte *)(lVar27 + 0x17);
  bVar22 = *(byte *)((long)pfVar29 + 0x33);
  bVar23 = *(byte *)(lVar27 + 0x32);
  *pfVar28 = fVar32;
  pfVar28[1] = fVar31;
  pfVar28[2] = fVar33;
  pfVar28[3] = fVar34;
  uVar1 = *(undefined8 *)(lVar27 + 0x18);
  uVar2 = *(undefined8 *)(lVar27 + 0x20);
  pfVar28[0xb] = fVar30;
  *(undefined8 *)(pfVar28 + 4) = uVar1;
  *(undefined8 *)(pfVar28 + 6) = uVar2;
  pfVar28[0x13] = (fVar32 + fVar33 + fVar33 + fVar24) * 0.5;
  pfVar28[0x11] = fVar41 * fVar37 * fVar36;
  pfVar28[0x16] = fVar41 * fVar40 * fVar42;
  fVar31 = (fVar44 - fVar35) + 0.0;
  if ((param_11 & 1) == 0) {
    fVar31 = fVar44;
  }
  pfVar28[10] = (float)(uint)bVar23;
  pfVar28[0x10] = fVar39 * fVar41 * fVar36;
  pfVar28[0x14] = (fVar39 * fVar38 * fVar40 - fVar37 * fVar43) * fVar42;
  pfVar28[0x17] = fVar35;
  pfVar28[0xc] = fVar3;
  pfVar28[0xd] = fVar31;
  pfVar28[0xe] = fVar4;
  pfVar28[0xf] = fVar24;
  pfVar28[8] = (float)(((uint)((ulong)((uint)bVar11 * (uint)bVar10) * 0x80808081 >> 0x20) & 0x7f80)
                       << 1 | ((uint)bVar9 * (uint)bVar8) / 0xff |
                       ((uint)bVar13 * (uint)bVar12) / 0xff << 0x10 |
                      ((uint)bVar16 * (uint)bVar15) / 0xff << 0x18);
  pfVar28[9] = (float)(((uint)((ulong)((uint)bVar18 * (uint)bVar17) * 0x80808081 >> 0x20) & 0x7f80)
                       << 1 | ((uint)bVar14 * (uint)bVar7) / 0xff |
                       ((uint)bVar19 * (uint)bVar20) / 0xff << 0x10 |
                      ((uint)bVar22 * (uint)bVar21) / 0xff << 0x18);
  pfVar28[0x12] = fVar36 * -fVar38;
  pfVar28[0x15] = (fVar37 * fVar38 * fVar40 + fVar39 * fVar43) * fVar42;
  return;
}


