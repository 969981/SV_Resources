/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03076780; name: FUN_03076780
 */


void FUN_03076780(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  do {
    fVar7 = *(float *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar6 = param_2;
    iVar1 = param_3;
    do {
      pfVar5 = (float *)(param_1 + (long)iVar6 * 4);
      do {
        iVar3 = iVar6;
        pfVar4 = pfVar5;
        pfVar5 = pfVar4 + 1;
        iVar6 = iVar3 + 1;
      } while (*pfVar4 < fVar7);
      pfVar5 = (float *)(param_1 + 4 + (long)iVar1 * 4);
      iVar1 = iVar1 + 1;
      do {
        iVar2 = iVar1;
        pfVar5 = pfVar5 + -1;
        fVar8 = *pfVar5;
        iVar1 = iVar2 + -1;
      } while (fVar7 < fVar8);
      iVar6 = iVar3;
      if (iVar3 <= iVar1) {
        if (iVar3 != iVar1) {
          *pfVar5 = *pfVar4;
          *pfVar4 = fVar8;
        }
        iVar1 = iVar2 + -2;
        iVar6 = iVar3 + 1;
      }
    } while (iVar6 <= iVar1);
    if (param_2 < iVar1) {
      FUN_03076780(param_1);
    }
    param_2 = iVar6;
  } while (iVar6 < param_3);
  return;
}


