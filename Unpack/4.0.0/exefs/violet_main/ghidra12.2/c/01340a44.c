/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01340a44; name: FUN_01340a44
 */


void FUN_01340a44(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  
  uVar3 = (uint)((ulong)param_3 >> 0x20);
  if ((char)param_3 != '\0') {
    piVar4 = (int *)*param_2;
    if ((0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb], uVar7 != 0)) {
      puVar5 = (uint *)((long)piVar4 + uVar7);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      if (uVar3 < *puVar5) {
        puVar5 = puVar5 + (ulong)uVar3 + 1;
        piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
        piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
           (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar7 == 0)) {
          lVar9 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar4 + uVar7);
          lVar9 = (long)puVar5 + (ulong)*puVar5;
        }
        puVar8 = &DAT_cbf29ce484222645;
        sVar2 = strlen((char *)(lVar9 + 4));
        bVar1 = *(byte *)(lVar9 + 4);
        if (bVar1 != 0) {
          pbVar6 = (byte *)(lVar9 + 5);
          do {
            puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar1) * 0x100000001b3);
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar1 != 0);
        }
        *(undefined1 **)(param_1 + 8) = puVar8;
        *(char **)(param_1 + 0x10) = (char *)(lVar9 + 4);
        *param_1 = 1;
        *(size_t *)(param_1 + 0x18) = sVar2;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}


