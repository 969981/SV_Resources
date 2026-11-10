/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ba22c; name: FUN_034ba22c
 */


undefined8 FUN_034ba22c(long *param_1,uint param_2)

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
      uVar2 = *(uint *)(lVar7 + (long)iVar1 * 0x28 + 0x20);
      if (uVar2 == param_2) {
        puVar10 = (undefined8 *)(lVar7 + uVar6 * 0x28 + -0x28);
        puVar3 = (undefined8 *)(lVar7 + (long)iVar1 * 0x28);
        while (puVar3 < puVar10) {
          *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 9);
          puVar5 = (undefined8 *)puVar3[2];
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar3 + 6);
          *(undefined1 *)((long)puVar3 + 0xc) = *(undefined1 *)((long)puVar3 + 0x34);
          if (puVar5 != (undefined8 *)0x0) {
            if (*(uint *)(puVar3 + 3) != 0) {
              lVar7 = (ulong)*(uint *)(puVar3 + 3) * 0x28;
              do {
                (**(code **)*puVar5)(puVar5);
                lVar7 = lVar7 + -0x28;
                puVar5 = puVar5 + 5;
              } while (lVar7 != 0);
              puVar5 = (undefined8 *)puVar3[2];
            }
            *(undefined4 *)(puVar3 + 3) = 0;
            (**(code **)(puVar4 + 0x30))(0,puVar5);
            puVar3[2] = 0;
            *(undefined4 *)((long)puVar3 + 0x1c) = 0;
          }
          puVar3[2] = puVar3[7];
          *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar3 + 8);
          *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x44);
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3 = puVar3 + 5;
        }
        (**(code **)*puVar10)(puVar10);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      if (uVar2 < param_2) {
        iVar8 = iVar1 + 1;
      }
      uVar9 = uVar9 - (uVar2 < param_2) >> 1;
    } while (uVar9 != 0);
  }
  return 0;
}


