/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03425e28; name: FUN_03425e28
 */


void FUN_03425e28(float *param_1,long param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = param_1[0x1e];
  pfVar1 = param_1;
  if (fVar12 != 0.0) {
    pfVar1 = param_1 + (ulong)((int)fVar12 - 1) * 3 + 3;
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    uVar7 = 0;
    pfVar9 = (float *)(param_2 + 0x14);
    fVar10 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar11 = *pfVar1;
    do {
      if (7 < (uint)(uVar7 + (uint)fVar12)) break;
      fVar2 = pfVar9[-2];
      fVar3 = pfVar9[-1];
      uVar5 = uVar7 + (uint)fVar12 & 0xffffffff;
      fVar4 = *pfVar9;
      param_1[uVar5 * 3 + 3] = fVar2;
      param_1[uVar5 * 3 + 4] = fVar3;
      param_1[uVar5 * 3 + 5] = fVar4;
      fVar12 = param_1[0x1e];
      iVar6 = (int)uVar7;
      uVar7 = uVar7 + 1;
      *(undefined8 *)(param_1 + (ulong)(uint)(iVar6 + (int)fVar12) * 2 + 0x2e) = param_4;
      param_1[0x20] =
           param_1[0x20] +
           SQRT((fVar2 - fVar11) * (fVar2 - fVar11) + (fVar3 - fVar10) * (fVar3 - fVar10) +
                (fVar4 - fVar8) * (fVar4 - fVar8));
      pfVar9 = pfVar9 + 3;
      fVar10 = fVar3;
      fVar8 = fVar4;
      fVar11 = fVar2;
    } while (uVar7 < *(uint *)(param_2 + 0x78));
  }
  param_1[0x1b] = *param_3;
  param_1[0x1c] = param_3[1];
  param_1[0x1d] = param_3[2];
  fVar12 = (float)(*(int *)(param_2 + 0x78) + (int)fVar12);
  if (7 < (uint)fVar12) {
    fVar12 = 1.12104e-44;
  }
  param_1[0x1e] = fVar12;
  fVar12 = *(float *)(param_2 + 0x84);
  if (*(float *)(param_2 + 0x84) <= param_1[0x21]) {
    fVar12 = param_1[0x21];
  }
  param_1[0x21] = fVar12;
  fVar12 = *(float *)(param_2 + 0x88);
  if (*(float *)(param_2 + 0x88) <= param_1[0x22]) {
    fVar12 = param_1[0x22];
  }
  param_1[0x22] = fVar12;
  fVar12 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x8c),param_1[0x23]);
  param_1[0x23] = fVar12;
  fVar12 = *(float *)(param_2 + 0x90);
  if (fVar12 != 0.0) {
    if (param_1[0x24] != 0.0) {
      fVar12 = (float)(((((int)param_1[0x24] * 0x1000193 ^ (uint)fVar12 & 0xff) * 0x1000193 ^
                        (uint)fVar12 >> 8 & 0xff) * 0x1000193 ^ (uint)fVar12 >> 0x10 & 0xff) *
                       0x1000193 ^ (uint)fVar12 >> 0x18);
    }
    param_1[0x24] = fVar12;
  }
  return;
}


