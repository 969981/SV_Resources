/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034292bc; name: FUN_034292bc
 */


undefined8 FUN_034292bc(long param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *(uint *)(param_1 + 0xe8);
  pfVar1 = (float *)(param_1 + (ulong)(uVar2 - 1) * 0x10);
  fVar5 = *pfVar1 - *param_2;
  fVar3 = pfVar1[1] - param_2[1];
  fVar6 = pfVar1[2] - param_2[2];
  fVar9 = *param_2 - *param_3;
  fVar8 = param_2[1] - param_3[1];
  fVar10 = param_2[2] - param_3[2];
  fVar11 = SQRT((fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10) *
                (fVar5 * fVar5 + fVar3 * fVar3 + fVar6 * fVar6));
  if (0.001 < fVar11) {
    fVar3 = (float)NEON_fminnm((fVar9 * fVar5 + fVar3 * fVar8 + fVar6 * fVar10) / fVar11,0x3f800000)
    ;
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    fVar3 = acosf(fVar3);
    fVar3 = fVar3 * 0.63661975;
    if (0.002 < fVar3) {
      fVar5 = *(float *)(param_1 + 0xe0) + fVar3;
      uVar7 = NEON_fminnm(fVar5,0x3f800000);
      *(undefined4 *)(param_1 + 0xe0) = uVar7;
      if (7 < uVar2) {
        return 0;
      }
      if (1.0 < fVar5) {
        return 0;
      }
      *(float *)(param_1 + (ulong)uVar2 * 4 + 0xc0) = fVar3;
      auVar4 = NEON_fmov(0x3f800000,4);
      fVar3 = *param_2;
      fVar5 = param_2[1];
      pfVar1 = (float *)(param_1 + (ulong)*(uint *)(param_1 + 0xe8) * 0x10);
      pfVar1[2] = param_2[2];
      pfVar1[3] = auVar4._12_4_;
      *pfVar1 = fVar3;
      pfVar1[1] = fVar5;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    }
  }
  return 1;
}


