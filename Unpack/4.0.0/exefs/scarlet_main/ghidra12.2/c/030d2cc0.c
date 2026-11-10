/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d2cc0; name: FUN_030d2cc0
 */


void FUN_030d2cc0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  
  do {
    iVar4 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x10 + 0xc);
    iVar12 = param_2;
    iVar6 = param_3;
    do {
      puVar5 = (undefined8 *)(param_1 + -0x10 + (long)iVar12 * 0x10);
      do {
        iVar9 = iVar12;
        puVar8 = puVar5;
        puVar5 = puVar8 + 2;
        iVar12 = iVar9 + 1;
      } while (iVar4 < *(int *)((long)puVar8 + 0x1c));
      puVar11 = (undefined8 *)(param_1 + 0x10 + (long)iVar6 * 0x10);
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar6;
        puVar10 = puVar11;
        puVar11 = puVar10 + -2;
        iVar6 = iVar7 + -1;
      } while (*(int *)((long)puVar10 + -4) < iVar4);
      iVar12 = iVar9;
      if (iVar9 <= iVar6) {
        if (iVar9 != iVar6) {
          uVar1 = *puVar11;
          uVar2 = puVar10[-1];
          uVar3 = puVar8[3];
          *puVar11 = *puVar5;
          puVar10[-1] = uVar3;
          *puVar5 = uVar1;
          puVar8[3] = uVar2;
        }
        iVar6 = iVar7 + -2;
        iVar12 = iVar9 + 1;
      }
    } while (iVar12 <= iVar6);
    if (param_2 < iVar6) {
      FUN_030d2cc0(param_1);
    }
    param_2 = iVar12;
  } while (iVar12 < param_3);
  return;
}


