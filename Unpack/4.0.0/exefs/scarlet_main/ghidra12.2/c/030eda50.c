/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030eda50; name: FUN_030eda50
 */


void FUN_030eda50(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  
  do {
    iVar2 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar8 = param_2;
    iVar3 = param_3;
    do {
      fVar9 = *(float *)(param_4 + (long)iVar2 * 8);
      piVar7 = (int *)(param_1 + (long)iVar8 * 4);
      do {
        iVar6 = iVar8;
        piVar5 = piVar7;
        piVar7 = piVar5 + 1;
        iVar8 = iVar6 + 1;
      } while (*(float *)(param_4 + (long)*piVar5 * 8) < fVar9);
      piVar7 = (int *)(param_1 + 4 + (long)iVar3 * 4);
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        piVar7 = piVar7 + -1;
        iVar1 = *piVar7;
        iVar3 = iVar4 + -1;
      } while (fVar9 < *(float *)(param_4 + (long)iVar1 * 8));
      iVar8 = iVar6;
      if (iVar6 <= iVar3) {
        if (iVar6 != iVar3) {
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
        }
        iVar3 = iVar4 + -2;
        iVar8 = iVar6 + 1;
      }
    } while (iVar8 <= iVar3);
    if (param_2 < iVar3) {
      FUN_030eda50(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


