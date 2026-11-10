/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349372c; name: FUN_0349372c
 */


void FUN_0349372c(long *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  uVar8 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar8;
  if (uVar8 != 0) {
    lVar4 = *param_1;
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar8 >> 1);
      bVar2 = *(byte *)(lVar4 + (long)iVar1 * 0x30 + 0x28);
      if (bVar2 == param_2) {
        puVar9 = (undefined8 *)(lVar4 + uVar6 * 0x30 + -0x30);
        if ((undefined8 *)(lVar4 + (long)iVar1 * 0x30) < puVar9) {
          puVar10 = (undefined8 *)(lVar4 + (long)iVar1 * 0x30 + 0x38);
          do {
            *(undefined1 *)(puVar10 + -2) = *(undefined1 *)(puVar10 + 4);
            puVar10[-6] = *puVar10;
            *(undefined1 *)(puVar10 + -5) = *(undefined1 *)(puVar10 + 1);
            if (puVar10[-4] != 0) {
              *(undefined4 *)(puVar10 + -3) = 0;
              (**(code **)(puVar3 + 0x30))(0);
              puVar10[-4] = 0;
              *(undefined4 *)((long)puVar10 + -0x14) = 0;
            }
            puVar10[-4] = puVar10[2];
            *(undefined4 *)(puVar10 + -3) = *(undefined4 *)(puVar10 + 3);
            *(undefined4 *)((long)puVar10 + -0x14) = *(undefined4 *)((long)puVar10 + 0x1c);
            puVar5 = puVar10 + -1;
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10 = puVar10 + 6;
          } while (puVar5 < puVar9);
        }
        (**(code **)*puVar9)(puVar9);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      if (bVar2 < param_2) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar8 - (bVar2 < param_2) >> 1;
    } while (uVar8 != 0);
  }
  return;
}


