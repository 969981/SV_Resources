/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fed80; name: FUN_030fed80
 */


void FUN_030fed80(long param_1,int param_2,int param_3)

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
      FUN_030fed80(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


