/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b9e0c; name: FUN_034b9e0c
 */


undefined8 FUN_034b9e0c(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  uVar8 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar8;
  if (uVar8 != 0) {
    lVar6 = *param_1;
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar8 >> 1);
      uVar9 = *(ulong *)(lVar6 + (long)iVar1 * 0x28 + 0x20);
      if (uVar9 == param_2) {
        puVar10 = (undefined8 *)(lVar6 + uVar5 * 0x28 + -0x28);
        puVar2 = (undefined8 *)(lVar6 + (long)iVar1 * 0x28);
        while (puVar2 < puVar10) {
          puVar2[4] = puVar2[9];
          puVar4 = (undefined8 *)puVar2[2];
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + 6);
          *(undefined1 *)((long)puVar2 + 0xc) = *(undefined1 *)((long)puVar2 + 0x34);
          if (puVar4 != (undefined8 *)0x0) {
            if (*(uint *)(puVar2 + 3) != 0) {
              lVar6 = (ulong)*(uint *)(puVar2 + 3) * 0x28;
              do {
                (**(code **)*puVar4)(puVar4);
                lVar6 = lVar6 + -0x28;
                puVar4 = puVar4 + 5;
              } while (lVar6 != 0);
              puVar4 = (undefined8 *)puVar2[2];
            }
            *(undefined4 *)(puVar2 + 3) = 0;
            (**(code **)(puVar3 + 0x30))(0,puVar4);
            puVar2[2] = 0;
            *(undefined4 *)((long)puVar2 + 0x1c) = 0;
          }
          puVar2[2] = puVar2[7];
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar2 + 8);
          *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x44);
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2 = puVar2 + 5;
        }
        (**(code **)*puVar10)(puVar10);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      if (uVar9 < param_2) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar9 < param_2) >> 1;
    } while (uVar8 != 0);
  }
  return 0;
}


