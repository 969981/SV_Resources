/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00150b60; name: FUN_00150b60
 */


int FUN_00150b60(long param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_c;
  float fStack_8;
  float local_4;
  
  fVar8 = (float)(param_2 >> 0xd & 7 | (param_2 >> 0xb & 0x1f) << 3);
  fVar9 = (float)(param_2 >> 9 & 3 | (param_2 >> 5 & 0x3f) << 2);
  fVar10 = (float)(param_2 >> 2 & 7 | (param_2 & 0x1f) << 3);
  fVar7 = (float)(param_3 >> 0xd & 7 | (param_3 >> 0xb & 0x1f) << 3) - fVar8;
  fVar12 = (float)(param_3 >> 2 & 7 | (param_3 & 0x1f) << 3) - fVar10;
  fVar11 = (float)(param_3 >> 9 & 3 | (param_3 >> 5 & 0x3f) << 2) - fVar9;
  fVar13 = (1.0 / (fVar7 * fVar7 + 0.0 + fVar11 * fVar11 + fVar12 * fVar12)) * 3.0;
  lVar4 = 0;
  iVar3 = 0;
  iVar5 = 1;
  do {
    pfVar1 = (float *)(param_1 + lVar4);
    lVar4 = lVar4 + 4;
    local_c = 3.0;
    fStack_8 = 0.0;
    iVar6 = (int)((((0.5 - fVar13 * fVar7 * fVar8) - fVar13 * fVar11 * fVar9) -
                  fVar13 * fVar12 * fVar10) +
                 *pfVar1 * fVar13 * fVar7 + 0.0 + pfVar1[0x10] * fVar13 * fVar11 +
                 pfVar1[0x20] * fVar13 * fVar12);
    pfVar1 = &local_c;
    if (iVar6 < 4) {
      pfVar1 = &local_4;
    }
    pfVar2 = &fStack_8;
    if (-1 < iVar6) {
      pfVar2 = pfVar1;
    }
    local_4 = (float)iVar6;
    iVar3 = iVar3 + iVar5 * (int)*pfVar2;
    iVar5 = iVar5 << 2;
  } while (lVar4 != 0x40);
  return iVar3;
}


