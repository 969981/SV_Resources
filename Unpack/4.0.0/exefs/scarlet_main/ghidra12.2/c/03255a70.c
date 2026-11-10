/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03255a70; name: FUN_03255a70
 */


void FUN_03255a70(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  
  do {
    uVar2 = *(uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 0xc + 4);
    iVar12 = param_2;
    iVar4 = param_3;
    do {
      puVar1 = (undefined8 *)(param_1 + -0xc + (long)iVar12 * 0xc);
      do {
        iVar7 = iVar12;
        puVar6 = puVar1;
        puVar1 = (undefined8 *)((long)puVar6 + 0xc);
        iVar12 = iVar7 + 1;
      } while (uVar2 < *(uint *)(puVar6 + 2));
      puVar11 = (undefined8 *)(param_1 + 0xc + (long)iVar4 * 0xc);
      iVar4 = iVar4 + 1;
      do {
        iVar5 = iVar4;
        puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar10 + -0xc);
        iVar4 = iVar5 + -1;
      } while (*(uint *)(puVar10 + -1) < uVar2);
      iVar12 = iVar7;
      if (iVar7 <= iVar4) {
        if (iVar7 != iVar4) {
          uVar8 = *puVar11;
          uVar3 = *(undefined4 *)((long)puVar10 + -4);
          uVar9 = *puVar1;
          *(undefined4 *)((long)puVar10 + -4) = *(undefined4 *)((long)puVar6 + 0x14);
          *puVar11 = uVar9;
          *(undefined4 *)((long)puVar6 + 0x14) = uVar3;
          *puVar1 = uVar8;
        }
        iVar4 = iVar5 + -2;
        iVar12 = iVar7 + 1;
      }
    } while (iVar12 <= iVar4);
    if (param_2 < iVar4) {
      FUN_03255a70(param_1);
    }
    param_2 = iVar12;
  } while (iVar12 < param_3);
  return;
}


