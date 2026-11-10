/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03429a44; name: FUN_03429a44
 */


void FUN_03429a44(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  
  puVar3 = PTR_DAT_047e2fd0;
  uVar10 = *(uint *)(param_1 + 0x20);
  uVar7 = (ulong)uVar10;
  if (uVar10 != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    iVar9 = 0;
    do {
      iVar1 = iVar9 + (uVar10 >> 1);
      uVar2 = *(uint *)(lVar4 + (long)iVar1 * 0x50);
      if (uVar2 == param_2) {
        lVar8 = lVar4 + uVar7 * 0x50;
        if ((undefined1 *)(lVar4 + (long)iVar1 * 0x50) < (undefined1 *)(lVar8 + -0x50)) {
          puVar11 = (undefined1 *)(lVar4 + (long)iVar1 * 0x50 + 0x98);
          do {
            *(undefined4 *)(puVar11 + -0x98) = *(undefined4 *)(puVar11 + -0x48);
            *(undefined8 *)(puVar11 + -0x90) = *(undefined8 *)(puVar11 + -0x40);
            *(undefined8 *)(puVar11 + -0x88) = *(undefined8 *)(puVar11 + -0x38);
            *(undefined8 *)(puVar11 + -0x80) = *(undefined8 *)(puVar11 + -0x30);
            *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x28);
            *(undefined2 *)(puVar11 + -0x70) = *(undefined2 *)(puVar11 + -0x20);
            *(undefined8 *)(puVar11 + -0x6c) = *(undefined8 *)(puVar11 + -0x1c);
            *(undefined8 *)(puVar11 + -100) = *(undefined8 *)(puVar11 + -0x14);
            *(undefined4 *)(puVar11 + -0x5c) = *(undefined4 *)(puVar11 + -0xc);
            if ((*(long *)(puVar11 + -0x58) != 0) && (puVar11[-0x50] != '\0')) {
              (**(code **)(puVar3 + 0x30))(9);
              puVar11[-0x50] = 0;
            }
            uVar5 = *(undefined8 *)(puVar11 + -8);
            *(undefined8 *)(puVar11 + -8) = 0;
            *(undefined8 *)(puVar11 + -0x58) = uVar5;
            puVar6 = puVar11 + -0x48;
            puVar11[-0x50] = *puVar11;
            *puVar11 = 0;
            puVar11 = puVar11 + 0x50;
          } while (puVar6 < (undefined1 *)(lVar8 + -0x50));
        }
        if ((*(long *)(lVar8 + -0x10) != 0) && (*(char *)(lVar8 + -8) != '\0')) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          *(undefined1 *)(lVar8 + -8) = 0;
        }
        *(undefined8 *)(lVar8 + -0x10) = 0;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        return;
      }
      if (uVar2 < param_2) {
        iVar9 = iVar1 + 1;
      }
      uVar10 = uVar10 - (uVar2 < param_2) >> 1;
    } while (uVar10 != 0);
  }
  return;
}


