/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f01ac; name: FUN_008f01ac
 */


float * FUN_008f01ac(long param_1)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_SinCosSampleTable_047d2398;
  pfVar4 = *(float **)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    iVar5 = 0;
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    fVar10 = *(float *)PTR_FloatPi_047d23a0;
    fVar8 = *(float *)PTR_Float2Pi_047d23e8;
    do {
      uVar7 = (ulong)(((fVar8 * (float)iVar5) / (float)iVar6) * (fVar9 / fVar10));
      pfVar1 = (float *)(puVar3 + (uVar7 >> 0x18 & 0xff) * 0x10);
      fVar11 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
      uVar2 = *(uint *)(param_1 + 0x18);
      fVar12 = *pfVar1 + pfVar1[2] * fVar11;
      fVar11 = pfVar1[1] + pfVar1[3] * fVar11;
      pfVar1 = pfVar4;
      if ((uVar2 & 1) != 0) {
        *pfVar4 = fVar12;
        pfVar4[1] = fVar11;
        pfVar4[2] = 0.0;
        uVar2 = *(uint *)(param_1 + 0x18);
        pfVar1 = pfVar4 + 3;
      }
      if ((uVar2 >> 1 & 1) != 0) {
        pfVar1[0] = 0.0;
        pfVar1[1] = 0.0;
        pfVar1[2] = 1.0;
        uVar2 = *(uint *)(param_1 + 0x18);
        pfVar1 = pfVar1 + 3;
      }
      pfVar4 = pfVar1;
      if ((uVar2 >> 2 & 1) != 0) {
        pfVar4 = pfVar1 + 2;
        *pfVar1 = fVar12 * 0.5 + 0.5;
        pfVar1[1] = 1.0 - (fVar11 * 0.5 + 0.5);
      }
      iVar6 = *(int *)(param_1 + 0x40);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    pfVar4[0] = 0.0;
    pfVar4[1] = 0.0;
    pfVar4[2] = 0.0;
    uVar2 = *(uint *)(param_1 + 0x18);
    pfVar4 = pfVar4 + 3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pfVar4[0] = 0.0;
    pfVar4[1] = 0.0;
    pfVar4[2] = 1.0;
    uVar2 = *(uint *)(param_1 + 0x18);
    pfVar4 = pfVar4 + 3;
  }
  if ((uVar2 >> 2 & 1) == 0) {
    return pfVar4;
  }
  pfVar4[0] = 0.5;
  pfVar4[1] = 0.5;
  return pfVar4 + 2;
}


