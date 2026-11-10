/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034badf8; name: FUN_034badf8
 */


undefined8 FUN_034badf8(long *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar8 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar8;
  if (uVar8 != 0) {
    lVar6 = *param_1;
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar8 >> 1);
      bVar2 = *(byte *)(lVar6 + (long)iVar1 * 0x28 + 0x20);
      if (bVar2 == param_2) {
        puVar9 = (undefined8 *)(lVar6 + uVar5 * 0x28 + -0x28);
        puVar3 = (undefined8 *)(lVar6 + (long)iVar1 * 0x28);
        while (puVar3 < puVar9) {
          *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar3 + 9);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar3 + 6);
          *(undefined1 *)((long)puVar3 + 0xc) = *(undefined1 *)((long)puVar3 + 0x34);
          if (puVar3[2] != 0) {
            *(undefined4 *)(puVar3 + 3) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            puVar3[2] = 0;
            *(undefined4 *)((long)puVar3 + 0x1c) = 0;
          }
          *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar3 + 8);
          *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x44);
          puVar3[2] = puVar3[7];
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3 = puVar3 + 5;
        }
        (**(code **)*puVar9)(puVar9);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      if (bVar2 < param_2) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar8 - (bVar2 < param_2) >> 1;
    } while (uVar8 != 0);
  }
  return 0;
}


