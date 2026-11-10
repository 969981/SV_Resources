/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d76d8; name: FUN_008d76d8
 */


void FUN_008d76d8(undefined4 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                 long param_5,float *param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_50 [2];
  float local_48;
  
  fVar10 = param_4[2];
  fVar11 = param_4[3];
  fVar7 = *(float *)(*(long *)(param_5 + 0x10) + 0x9b0);
  param_4[2] = fVar10;
  param_4[3] = fVar11;
  *param_4 = fVar7;
  param_4[1] = param_4[1];
  fVar8 = *(float *)(*(long *)(param_5 + 0x10) + 0x9b4);
  param_4[2] = fVar10;
  param_4[3] = fVar11;
  *param_4 = fVar7;
  param_4[1] = fVar8;
  fVar9 = *(float *)(*(long *)(param_5 + 0x10) + 0x9b8);
  param_4[2] = fVar9;
  param_4[3] = fVar11;
  *param_4 = fVar7;
  param_4[1] = fVar8;
  fVar10 = *(float *)(*(long *)(param_5 + 0x10) + 0x9bc);
  param_4[2] = fVar9;
  param_4[3] = fVar10;
  *param_4 = fVar7;
  param_4[1] = fVar8;
  lVar6 = *(long *)(param_5 + 0x18);
  if (lVar6 == 0) {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x10);
  cVar1 = *(char *)(lVar4 + 0x99d);
  if (cVar1 == '\x03') {
    uVar3 = (uint)(*param_6 * (float)*(int *)(lVar6 + 0x18));
    uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4;
    fVar7 = *(float *)(lVar6 + uVar5 + 0x470);
    param_4[2] = fVar9;
    param_4[3] = fVar10;
    *param_4 = fVar7;
    param_4[1] = fVar8;
    fVar8 = *(float *)(*(long *)(param_5 + 0x18) + uVar5 + 0x474);
    param_4[2] = fVar9;
    param_4[3] = fVar10;
    *param_4 = fVar7;
    param_4[1] = fVar8;
    fVar9 = *(float *)(*(long *)(param_5 + 0x18) + uVar5 + 0x478);
    param_4[2] = fVar9;
    param_4[3] = fVar10;
    *param_4 = fVar7;
    param_4[1] = fVar8;
    lVar4 = *(long *)(param_5 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x99d);
  }
  if ((cVar1 == '\x02') && (0 < *(int *)(*(long *)(param_5 + 0x18) + 0x18))) {
    if (*(char *)(lVar4 + 0x8da) == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)*(int *)(lVar4 + 0x8ec);
    }
    uVar12 = NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8df));
    param_3 = FUN_008d4b90(*param_6,param_2,fVar10,uVar12,param_1,param_3,local_50,
                           *(long *)(param_5 + 0x18) + 0x470);
    fVar10 = param_4[3];
    fVar8 = *(float *)((ulong)local_50 | 4);
    param_4[2] = local_48;
    param_4[3] = fVar10;
    *param_4 = local_50[0];
    param_4[1] = fVar8;
    lVar4 = *(long *)(param_5 + 0x10);
    fVar7 = local_50[0];
    fVar9 = local_48;
  }
  if ((*(char *)(lVar4 + 0x99f) == '\x02') && (0 < *(int *)(*(long *)(param_5 + 0x18) + 0x1c))) {
    if (*(char *)(lVar4 + 0x8db) == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)*(int *)(lVar4 + 0x8f0);
    }
    uVar12 = NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8e0));
    FUN_008d4b90(*param_6,param_2,fVar10,uVar12,param_1,param_3,local_50,
                 *(long *)(param_5 + 0x18) + 0x4f0);
    fVar7 = *param_4;
    fVar8 = param_4[1];
    fVar9 = param_4[2];
    param_4[2] = fVar9;
    param_4[3] = local_50[0];
    *param_4 = fVar7;
    param_4[1] = fVar8;
    lVar4 = *(long *)(param_5 + 0x10);
    fVar10 = local_50[0];
  }
  if (*(char *)(lVar4 + 0x9e4) == '\0') {
    return;
  }
  lVar6 = *(long *)(param_5 + 0x18);
  bVar2 = *(byte *)(lVar4 + 0x9e7) >> 4;
  fVar11 = *(float *)(lVar6 + 0x90);
  fVar14 = *(float *)(lVar6 + 0x98);
  fVar13 = *(float *)(lVar6 + 0xa0);
  fVar15 = *(float *)(lVar6 + 0xa8);
  fVar17 = (float)param_2;
  if (bVar2 == 2) {
    fVar13 = (fVar15 + fVar17) / fVar14 + fVar13 * *param_6;
    fVar14 = 1.0;
    if (0.5 <= fVar13 - (float)(int)fVar13) {
      fVar14 = 0.0;
    }
    fVar16 = ABS(1.0 - fVar11 * fVar14);
    goto LAB_008d7a4c;
  }
  if (bVar2 == 1) {
    fVar13 = (fVar15 + fVar17) / fVar14 + fVar13 * *param_6;
    fVar16 = ABS(1.0 - fVar11 * (fVar13 - (float)(int)fVar13));
    goto LAB_008d7a4c;
  }
  fVar16 = 1.0;
  if (bVar2 != 0) goto LAB_008d7a4c;
  fVar13 = *(float *)PTR_FloatPi_047d2460 * ((fVar15 + fVar17) / fVar14 + fVar13 * *param_6);
  fVar13 = fVar13 + fVar13;
  fVar14 = 0.5;
  if (fVar13 < 0.0) {
    fVar14 = -0.5;
  }
  fVar13 = fVar13 - *(float *)PTR_Float2Pi_047d23e8 *
                    (float)(int)(*(float *)PTR_Float1Divided2Pi_047d23d0 * fVar13 + fVar14);
  if (fVar13 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (fVar13 < -*(float *)PTR_FloatPiDivided2_047d23f0) {
      fVar14 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d79e4;
    }
    fVar14 = 1.0;
  }
  else {
    fVar14 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d79e4:
    fVar13 = fVar14 - fVar13;
    fVar14 = -1.0;
  }
  fVar13 = fVar13 * fVar13;
  fVar16 = fVar11 * (fVar14 * (fVar13 * (fVar13 * (*(float *)(PTR_CosCoefficients_047d23e0 + 0xc) +
                                                  fVar13 * (fVar13 * (*(float *)(
                                                  PTR_CosCoefficients_047d23e0 + 4) -
                                                  *(float *)PTR_CosCoefficients_047d23e0 * fVar13) -
                                                  *(float *)(PTR_CosCoefficients_047d23e0 + 8))) -
                                        *(float *)(PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0) +
                    1.0) * -0.5 + 1.0;
LAB_008d7a4c:
  fVar16 = fVar16 * fVar10;
  fVar16 = (float)((uint)fVar16 ^ (uint)fVar16 & -(uint)(fVar16 < 0.0));
  param_4[2] = fVar9;
  param_4[3] = fVar16;
  *param_4 = fVar7;
  param_4[1] = fVar8;
  if (1.0 < fVar16) {
    param_4[2] = fVar9;
    param_4[3] = 1.0;
    *param_4 = fVar7;
    param_4[1] = fVar8;
  }
  return;
}


