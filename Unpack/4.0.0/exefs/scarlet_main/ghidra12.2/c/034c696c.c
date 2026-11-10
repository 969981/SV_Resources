/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c696c; name: FUN_034c696c
 */


void FUN_034c696c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    puVar4 = *(ulong **)(param_1 + 8);
    puVar9 = puVar4;
    do {
      uVar5 = *(uint *)(param_2 + 0x18);
      if (uVar5 != 0) {
        uVar7 = *puVar9;
        iVar6 = 0;
        do {
          iVar1 = iVar6 + (uVar5 >> 1);
          uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 8);
          if (uVar8 == uVar7) {
            puVar9 = puVar9 + 3;
            goto LAB_034c6a80;
          }
          if (uVar8 < uVar7) {
            iVar6 = iVar1 + 1;
          }
          uVar5 = uVar5 - (uVar8 < uVar7) >> 1;
        } while (uVar5 != 0);
      }
      if (puVar9[1] != 0) {
        *(undefined4 *)(puVar9 + 2) = 0;
        (**(code **)(puVar2 + 0x30))(0);
        puVar9[1] = 0;
        *(undefined4 *)((long)puVar9 + 0x14) = 0;
        puVar4 = *(ulong **)(param_1 + 8);
        uVar3 = *(uint *)(param_1 + 0x10);
      }
      puVar10 = puVar9;
      if (puVar9 < puVar4 + (ulong)uVar3 * 3 + -3) {
        do {
          puVar11 = puVar10 + 3;
          *puVar10 = *puVar11;
          if (puVar10[1] != 0) {
            *(undefined4 *)(puVar10 + 2) = 0;
            (**(code **)(puVar2 + 0x30))(0);
            puVar10[1] = 0;
            *(undefined4 *)((long)puVar10 + 0x14) = 0;
          }
          *(int *)(puVar10 + 2) = (int)puVar10[5];
          *(undefined4 *)((long)puVar10 + 0x14) = *(undefined4 *)((long)puVar10 + 0x2c);
          puVar10[1] = puVar10[4];
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10 = puVar11;
        } while (puVar11 < puVar4 + (ulong)uVar3 * 3 + -3);
        uVar3 = *(uint *)(param_1 + 0x10);
        puVar4 = *(ulong **)(param_1 + 8);
      }
      uVar3 = uVar3 - 1;
      *(uint *)(param_1 + 0x10) = uVar3;
LAB_034c6a80:
    } while (puVar4 + (ulong)uVar3 * 3 != puVar9);
  }
  return;
}


