/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030765a0; name: FUN_030765a0
 */


void FUN_030765a0(long param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  
  do {
    iVar2 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar9 = param_2;
    iVar3 = param_3;
    do {
      lVar7 = *param_4;
      fVar10 = *(float *)(lVar7 + (long)iVar2 * 4);
      piVar8 = (int *)(param_1 + (long)iVar9 * 4);
      do {
        iVar6 = iVar9;
        piVar5 = piVar8;
        piVar8 = piVar5 + 1;
        iVar9 = iVar6 + 1;
      } while (fVar10 < *(float *)(lVar7 + (long)*piVar5 * 4));
      piVar8 = (int *)(param_1 + 4 + (long)iVar3 * 4);
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        piVar8 = piVar8 + -1;
        iVar1 = *piVar8;
        iVar3 = iVar4 + -1;
      } while (*(float *)(lVar7 + (long)iVar1 * 4) < fVar10);
      iVar9 = iVar6;
      if (iVar6 <= iVar3) {
        if (iVar6 != iVar3) {
          *piVar8 = *piVar5;
          *piVar5 = iVar1;
        }
        iVar3 = iVar4 + -2;
        iVar9 = iVar6 + 1;
      }
    } while (iVar9 <= iVar3);
    if (param_2 < iVar3) {
      FUN_030765a0(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar9;
  } while (iVar9 < param_3);
  return;
}


