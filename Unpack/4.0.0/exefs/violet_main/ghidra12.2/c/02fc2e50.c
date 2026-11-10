/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fc2e50; name: FUN_02fc2e50
 */


void FUN_02fc2e50(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  
  do {
    uVar4 = *(undefined8 *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    iVar9 = param_2;
    iVar1 = param_3;
    do {
      piVar6 = (int *)(param_1 + -8 + (long)iVar9 * 8);
      do {
        iVar5 = iVar9;
        piVar6 = piVar6 + 2;
        iVar3 = (int)uVar4;
        iVar9 = iVar5 + 1;
      } while (iVar3 < *piVar6);
      piVar8 = (int *)(param_1 + 8 + (long)iVar1 * 8);
      iVar1 = iVar1 + 1;
      do {
        iVar2 = iVar1;
        piVar8 = piVar8 + -2;
        iVar1 = iVar2 + -1;
      } while (*piVar8 < iVar3);
      iVar9 = iVar5;
      if (iVar5 <= iVar1) {
        if (iVar5 != iVar1) {
          uVar7 = *(undefined8 *)piVar8;
          *(undefined8 *)piVar8 = *(undefined8 *)piVar6;
          *(undefined8 *)piVar6 = uVar7;
        }
        iVar1 = iVar2 + -2;
        iVar9 = iVar5 + 1;
      }
    } while (iVar9 <= iVar1);
    if (param_2 < iVar1) {
      FUN_02fc2e50(param_1);
    }
    param_2 = iVar9;
  } while (iVar9 < param_3);
  return;
}


