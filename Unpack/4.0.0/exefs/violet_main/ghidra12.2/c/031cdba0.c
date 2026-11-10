/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cdba0; name: FUN_031cdba0
 */


void FUN_031cdba0(long param_1,ulong param_2,uint param_3,long *param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  uVar12 = param_2 & 0xffffffff;
  do {
    iVar4 = *(int *)(param_1 + (long)((int)((int)uVar12 + param_3) >> 1) * 4);
    uVar6 = (ulong)param_3;
    uVar13 = uVar12;
    do {
      lVar8 = *param_4;
      pfVar1 = (float *)(lVar8 + (long)iVar4 * 8);
      uVar7 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
      pfVar9 = pfVar1 + 1;
      fVar14 = *pfVar1;
      while( true ) {
        uVar2 = *(uint *)(param_1 + uVar7);
        fVar15 = *(float *)(lVar8 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar2 << 3));
        iVar11 = (int)uVar13;
        if ((fVar14 <= fVar15) &&
           ((fVar15 != fVar14 || (*pfVar9 <= *(float *)(lVar8 + (long)(int)uVar2 * 8 + 4))))) break;
        uVar7 = uVar7 + 4;
        uVar13 = (ulong)(iVar11 + 1);
      }
      uVar10 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
      while( true ) {
        uVar3 = *(uint *)(param_1 + uVar10);
        fVar15 = *(float *)(lVar8 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar3 << 3));
        iVar5 = (int)uVar6;
        if ((fVar15 <= fVar14) &&
           ((fVar14 != fVar15 || (*(float *)(lVar8 + (long)(int)uVar3 * 8 + 4) <= *pfVar9)))) break;
        uVar10 = uVar10 - 4;
        uVar6 = (ulong)(iVar5 - 1);
      }
      if (iVar11 <= iVar5) {
        if (iVar11 != iVar5) {
          *(uint *)(param_1 + uVar10) = uVar2;
          *(uint *)(param_1 + uVar7) = uVar3;
        }
        uVar6 = (ulong)(iVar5 - 1);
        uVar13 = (ulong)(iVar11 + 1);
      }
    } while ((int)uVar13 <= (int)uVar6);
    if ((int)uVar12 < (int)uVar6) {
      FUN_031cdba0(param_1,uVar12,uVar6,param_4);
    }
    uVar12 = uVar13;
  } while ((int)uVar13 < (int)param_3);
  return;
}


