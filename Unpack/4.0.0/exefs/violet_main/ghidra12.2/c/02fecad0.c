/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fecad0; name: FUN_02fecad0
 */


void FUN_02fecad0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  do {
    uVar2 = *(uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar8 = param_2;
    iVar3 = param_3;
    do {
      puVar7 = (uint *)(param_1 + (long)iVar8 * 4);
      do {
        iVar5 = iVar8;
        puVar6 = puVar7;
        puVar7 = puVar6 + 1;
        iVar8 = iVar5 + 1;
      } while (*puVar6 < uVar2);
      puVar7 = (uint *)(param_1 + 4 + (long)iVar3 * 4);
      iVar3 = iVar3 + 1;
      do {
        iVar4 = iVar3;
        puVar7 = puVar7 + -1;
        uVar1 = *puVar7;
        iVar3 = iVar4 + -1;
      } while (uVar2 < uVar1);
      iVar8 = iVar5;
      if (iVar5 <= iVar3) {
        if (iVar5 != iVar3) {
          *puVar7 = *puVar6;
          *puVar6 = uVar1;
        }
        iVar3 = iVar4 + -2;
        iVar8 = iVar5 + 1;
      }
    } while (iVar8 <= iVar3);
    if (param_2 < iVar3) {
      FUN_02fecad0(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


