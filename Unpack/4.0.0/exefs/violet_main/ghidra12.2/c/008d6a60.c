/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d6a60; name: FUN_008d6a60
 */


void FUN_008d6a60(float param_1,undefined4 param_2,float param_3,undefined8 param_4,float *param_5,
                 long param_6,float *param_7,float *param_8,float *param_9)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_70 [2];
  float local_68;
  
  uVar2 = *(undefined8 *)(param_5 + 2);
  fVar8 = *(float *)(*(long *)(param_6 + 0x10) + 0x9a0);
  *(undefined8 *)(param_5 + 2) = uVar2;
  *(ulong *)param_5 = CONCAT44((int)((ulong)*(undefined8 *)param_5 >> 0x20),fVar8);
  fVar9 = *(float *)(*(long *)(param_6 + 0x10) + 0x9a4);
  *(undefined8 *)(param_5 + 2) = uVar2;
  *(ulong *)param_5 = CONCAT44(fVar9,fVar8);
  fVar10 = *(float *)(*(long *)(param_6 + 0x10) + 0x9a8);
  *(ulong *)(param_5 + 2) = CONCAT44((int)((ulong)uVar2 >> 0x20),fVar10);
  *(ulong *)param_5 = CONCAT44(fVar9,fVar8);
  fVar11 = *(float *)(*(long *)(param_6 + 0x10) + 0x9ac);
  *(ulong *)(param_5 + 2) = CONCAT44(fVar11,fVar10);
  *(ulong *)param_5 = CONCAT44(fVar9,fVar8);
  lVar7 = *(long *)(param_6 + 0x18);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = *(long *)(param_6 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x99c);
  if (cVar1 == '\x03') {
    uVar4 = (uint)(*param_7 * (float)*(int *)(lVar7 + 0x10));
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
    fVar8 = *(float *)(lVar7 + uVar6 + 0x370);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar11,fVar10);
    *(ulong *)param_5 = CONCAT44(fVar9,fVar8);
    fVar9 = *(float *)(*(long *)(param_6 + 0x18) + uVar6 + 0x374);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar11,fVar10);
    *(ulong *)param_5 = CONCAT44(fVar9,fVar8);
    fVar10 = *(float *)(*(long *)(param_6 + 0x18) + uVar6 + 0x378);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar11,fVar10);
    *(ulong *)param_5 = CONCAT44(fVar9,fVar8);
    lVar5 = *(long *)(param_6 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x99c);
  }
  if ((cVar1 == '\x02') && (0 < *(int *)(*(long *)(param_6 + 0x18) + 0x10))) {
    if (*(char *)(lVar5 + 0x8d8) == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)*(int *)(lVar5 + 0x8e4);
    }
    uVar13 = NEON_ucvtf((uint)*(byte *)(lVar5 + 0x8dd));
    param_4 = FUN_008d4b90(*param_7,param_3,fVar8,uVar13,param_2,param_4,local_70,
                           *(long *)(param_6 + 0x18) + 0x370);
    fVar11 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
    fVar9 = *(float *)((ulong)local_70 | 4);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar11,local_68);
    *(ulong *)param_5 = CONCAT44(fVar9,local_70[0]);
    lVar5 = *(long *)(param_6 + 0x10);
    fVar8 = local_70[0];
    fVar10 = local_68;
  }
  if ((*(char *)(lVar5 + 0x99e) == '\x02') && (0 < *(int *)(*(long *)(param_6 + 0x18) + 0x14))) {
    if (*(char *)(lVar5 + 0x8d9) == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)*(int *)(lVar5 + 0x8e8);
    }
    uVar13 = NEON_ucvtf((uint)*(byte *)(lVar5 + 0x8de));
    FUN_008d4b90(*param_7,param_3,fVar8,uVar13,param_2,param_4,local_70,
                 *(long *)(param_6 + 0x18) + 0x3f0);
    fVar10 = (float)*(undefined8 *)(param_5 + 2);
    uVar2 = *(undefined8 *)param_5;
    fVar8 = (float)uVar2;
    fVar9 = (float)((ulong)uVar2 >> 0x20);
    *(ulong *)(param_5 + 2) = CONCAT44(local_70[0],fVar10);
    *(undefined8 *)param_5 = uVar2;
    fVar11 = local_70[0];
  }
  fVar12 = *(float *)(*(long *)(param_6 + 0x18) + 0x360);
  fVar8 = fVar12 * *param_8 * *param_9 * fVar8;
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar8;
  param_5[1] = fVar9;
  fVar9 = fVar12 * param_8[1] * param_9[1] * fVar9;
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar8;
  param_5[1] = fVar9;
  fVar10 = fVar12 * param_8[2] * param_9[2] * fVar10;
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar8;
  param_5[1] = fVar9;
  fVar11 = param_8[3] * param_1 * fVar11;
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar8;
  param_5[1] = fVar9;
  if (*(char *)(*(long *)(param_6 + 0x10) + 0x9e4) == '\0') {
    return;
  }
  lVar7 = *(long *)(param_6 + 0x18);
  bVar3 = *(byte *)(*(long *)(param_6 + 0x10) + 0x9e7) >> 4;
  fVar12 = *(float *)(lVar7 + 0x90);
  fVar15 = *(float *)(lVar7 + 0x98);
  fVar14 = *(float *)(lVar7 + 0xa0);
  fVar16 = *(float *)(lVar7 + 0xa8);
  if (bVar3 == 2) {
    fVar14 = (fVar16 + param_3) / fVar15 + fVar14 * *param_7;
    fVar15 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar15 = 0.0;
    }
    fVar17 = ABS(1.0 - fVar12 * fVar15);
    goto LAB_008d6e5c;
  }
  if (bVar3 == 1) {
    fVar14 = (fVar16 + param_3) / fVar15 + fVar14 * *param_7;
    fVar17 = ABS(1.0 - fVar12 * (fVar14 - (float)(int)fVar14));
    goto LAB_008d6e5c;
  }
  fVar17 = 1.0;
  if (bVar3 != 0) goto LAB_008d6e5c;
  fVar14 = *(float *)PTR_FloatPi_047d2460 * ((fVar16 + param_3) / fVar15 + fVar14 * *param_7);
  fVar14 = fVar14 + fVar14;
  fVar15 = 0.5;
  if (fVar14 < 0.0) {
    fVar15 = -0.5;
  }
  fVar14 = fVar14 - *(float *)PTR_Float2Pi_047d23e8 *
                    (float)(int)(*(float *)PTR_Float1Divided2Pi_047d23d0 * fVar14 + fVar15);
  if (fVar14 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (fVar14 < -*(float *)PTR_FloatPiDivided2_047d23f0) {
      fVar15 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d6df4;
    }
    fVar15 = 1.0;
  }
  else {
    fVar15 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d6df4:
    fVar14 = fVar15 - fVar14;
    fVar15 = -1.0;
  }
  fVar14 = fVar14 * fVar14;
  fVar17 = fVar12 * (fVar15 * (fVar14 * (fVar14 * (*(float *)(PTR_CosCoefficients_047d23e0 + 0xc) +
                                                  fVar14 * (fVar14 * (*(float *)(
                                                  PTR_CosCoefficients_047d23e0 + 4) -
                                                  *(float *)PTR_CosCoefficients_047d23e0 * fVar14) -
                                                  *(float *)(PTR_CosCoefficients_047d23e0 + 8))) -
                                        *(float *)(PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0) +
                    1.0) * -0.5 + 1.0;
LAB_008d6e5c:
  fVar11 = fVar11 * fVar17;
  fVar11 = (float)((uint)fVar11 ^ (uint)fVar11 & -(uint)(fVar11 < 0.0));
  param_5[2] = fVar10;
  param_5[3] = fVar11;
  *param_5 = fVar8;
  param_5[1] = fVar9;
  if (1.0 < fVar11) {
    param_5[2] = fVar10;
    param_5[3] = 1.0;
    *param_5 = fVar8;
    param_5[1] = fVar9;
  }
  return;
}


