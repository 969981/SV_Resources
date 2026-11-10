/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f5f860; name: FUN_02f5f860
 */


void FUN_02f5f860(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar6;
  int *piVar5;
  int *piVar8;
  int *piVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  
  do {
    iVar1 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 0xc);
    iVar11 = param_2;
    iVar2 = param_3;
    do {
      piVar5 = (int *)(param_1 + -0xc + (long)iVar11 * 0xc);
      do {
        iVar4 = iVar11;
        piVar6 = piVar5;
        piVar5 = piVar6 + 3;
        iVar11 = iVar4 + 1;
      } while (*piVar5 < iVar1);
      piVar7 = (int *)(param_1 + 0xc + (long)iVar2 * 0xc);
      iVar2 = iVar2 + 1;
      do {
        iVar3 = iVar2;
        piVar8 = piVar7;
        piVar7 = piVar8 + -3;
        iVar2 = iVar3 + -1;
      } while (iVar1 < *piVar7);
      iVar11 = iVar4;
      if (iVar4 <= iVar2) {
        if (iVar4 != iVar2) {
          uVar9 = *(undefined8 *)piVar7;
          iVar2 = piVar8[-1];
          uVar10 = *(undefined8 *)piVar5;
          piVar8[-1] = piVar6[5];
          *(undefined8 *)piVar7 = uVar10;
          piVar6[5] = iVar2;
          *(undefined8 *)piVar5 = uVar9;
        }
        iVar2 = iVar3 + -2;
        iVar11 = iVar4 + 1;
      }
    } while (iVar11 <= iVar2);
    if (param_2 < iVar2) {
      FUN_02f5f860(param_1);
    }
    param_2 = iVar11;
  } while (iVar11 < param_3);
  return;
}


