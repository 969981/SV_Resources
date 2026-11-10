/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034931fc; name: FUN_034931fc
 */


void FUN_034931fc(long *param_1,ulong param_2)

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
      uVar9 = *(ulong *)(lVar6 + (long)iVar1 * 0x30 + 0x28);
      if (uVar9 == param_2) {
        puVar10 = (undefined8 *)(lVar6 + uVar5 * 0x30 + -0x30);
        puVar2 = (undefined8 *)(lVar6 + (long)iVar1 * 0x30);
        while (puVar2 < puVar10) {
          puVar2[5] = puVar2[0xb];
          puVar4 = (undefined8 *)puVar2[3];
          puVar2[1] = puVar2[7];
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar2 + 8);
          if (puVar4 != (undefined8 *)0x0) {
            if (*(uint *)(puVar2 + 4) != 0) {
              lVar6 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
              do {
                (**(code **)*puVar4)(puVar4);
                lVar6 = lVar6 + -0x30;
                puVar4 = puVar4 + 6;
              } while (lVar6 != 0);
              puVar4 = (undefined8 *)puVar2[3];
            }
            *(undefined4 *)(puVar2 + 4) = 0;
            (**(code **)(puVar3 + 0x30))(0,puVar4);
            puVar2[3] = 0;
            *(undefined4 *)((long)puVar2 + 0x24) = 0;
          }
          puVar2[3] = puVar2[9];
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 10);
          *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)((long)puVar2 + 0x54);
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2 = puVar2 + 6;
        }
        (**(code **)*puVar10)(puVar10);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      if (uVar9 < param_2) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar9 < param_2) >> 1;
    } while (uVar8 != 0);
  }
  return;
}


