/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03493348; name: FUN_03493348
 */


void FUN_03493348(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar9 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar9;
  if (uVar9 != 0) {
    lVar7 = *param_1;
    iVar8 = 0;
    do {
      iVar1 = iVar8 + (uVar9 >> 1);
      uVar2 = *(uint *)(lVar7 + (long)iVar1 * 0x30 + 0x28);
      if (uVar2 == param_2) {
        puVar10 = (undefined8 *)(lVar7 + uVar6 * 0x30 + -0x30);
        puVar3 = (undefined8 *)(lVar7 + (long)iVar1 * 0x30);
        while (puVar3 < puVar10) {
          *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar3 + 0xb);
          puVar5 = (undefined8 *)puVar3[3];
          puVar3[1] = puVar3[7];
          *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar3 + 8);
          if (puVar5 != (undefined8 *)0x0) {
            if (*(uint *)(puVar3 + 4) != 0) {
              lVar7 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
              do {
                (**(code **)*puVar5)(puVar5);
                lVar7 = lVar7 + -0x30;
                puVar5 = puVar5 + 6;
              } while (lVar7 != 0);
              puVar5 = (undefined8 *)puVar3[3];
            }
            *(undefined4 *)(puVar3 + 4) = 0;
            (**(code **)(puVar4 + 0x30))(0,puVar5);
            puVar3[3] = 0;
            *(undefined4 *)((long)puVar3 + 0x24) = 0;
          }
          puVar3[3] = puVar3[9];
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 10);
          *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)((long)puVar3 + 0x54);
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3 = puVar3 + 6;
        }
        (**(code **)*puVar10)(puVar10);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      if (uVar2 < param_2) {
        iVar8 = iVar1 + 1;
      }
      uVar9 = uVar9 - (uVar2 < param_2) >> 1;
    } while (uVar9 != 0);
  }
  return;
}


