/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b4610; name: FUN_008b4610
 */


float FUN_008b4610(float param_1,float *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_3 == 1) || (param_1 <= *param_2)) {
    return param_2[1];
  }
  uVar5 = (long)param_3 - 1;
  if (param_1 < param_2[uVar5 * 3]) {
    uVar9 = 0;
    uVar7 = uVar5 & 0xffffffff;
    if ((param_3 != 2) && ((uint)uVar5 != 0)) {
      uVar7 = uVar5 & 0xffffffff;
      uVar6 = 0;
      do {
        iVar1 = uVar6 + (uint)uVar7;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        uVar3 = (uint)uVar7;
        if (param_1 <= param_2[(long)(int)uVar2 * 3]) {
          uVar3 = uVar2;
        }
        uVar7 = (ulong)uVar3;
        if (param_1 <= param_2[(long)(int)uVar2 * 3]) {
          uVar2 = uVar6;
        }
        uVar6 = uVar2;
      } while (uVar2 != uVar3 - 1 && uVar2 != uVar3);
      uVar9 = (ulong)uVar2;
    }
    fVar10 = param_2[uVar7 * 3];
    fVar11 = param_1 - fVar10;
    bVar4 = false;
    if ((-0.001 < fVar11) && (bVar4 = false, !NAN(fVar11))) {
      bVar4 = fVar11 < 0.001;
    }
    if (!bVar4) {
      pfVar8 = param_2 + uVar9 * 3;
      param_1 = param_1 - *pfVar8;
      fVar10 = 1.0 / (fVar10 - *pfVar8);
      fVar11 = param_1 * param_1 * fVar10;
      fVar13 = param_1 * fVar10 * fVar11;
      fVar12 = fVar10 * fVar11 * 3.0;
      fVar10 = fVar10 * fVar13 + fVar10 * fVar13;
      return param_2[uVar7 * 3 + 2] * (fVar13 - fVar11) +
             pfVar8[2] * (param_1 + (fVar13 - (fVar11 + fVar11))) +
             param_2[uVar7 * 3 + 1] * (fVar12 - fVar10) + pfVar8[1] * ((fVar10 - fVar12) + 1.0);
    }
    if (((uint)uVar5 <= (uint)uVar7) ||
       (uVar5 = (ulong)((uint)uVar7 + 1), fVar10 != param_2[uVar5 * 3])) {
      return param_2[uVar7 * 3 + 1];
    }
  }
  return param_2[uVar5 * 3 + 1];
}


