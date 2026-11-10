/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01315eac; name: FUN_01315eac
 */


void FUN_01315eac(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int *piVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  
  piVar6 = (int *)*param_2;
  if ((0x16 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xb], uVar8 != 0)) {
    puVar1 = (uint *)((long)piVar6 + uVar8);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      uVar8 = 0;
      puVar11 = &DAT_cbf29ce484222645;
      do {
        piVar6 = (int *)((long)(puVar1 + uVar8 + 1) + (ulong)puVar1[uVar8 + 1]);
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
          lVar12 = 0;
        }
        else {
          uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
          lVar12 = 0;
          if (uVar9 != 0) {
            puVar2 = (uint *)((long)piVar6 + uVar9);
            lVar12 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        bVar4 = *(byte *)(lVar12 + 4);
        puVar10 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar10 = &DAT_cbf29ce484222645;
          pbVar7 = (byte *)(lVar12 + 5);
          do {
            puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar4 != 0);
        }
        if ((undefined1 *)*param_3 == puVar10) {
          if ((uint)uVar8 < uVar3) {
            piVar6 = (int *)((long)(puVar1 + (uVar8 & 0xffffffff) + 1) +
                            (ulong)puVar1[(uVar8 & 0xffffffff) + 1]);
            puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (8 - (long)*piVar6)))
            ;
            piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
            if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
               (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar8 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar1 = (uint *)((long)piVar6 + uVar8);
              lVar12 = (long)puVar1 + (ulong)*puVar1;
            }
            sVar5 = strlen((char *)(lVar12 + 4));
            bVar4 = *(byte *)(lVar12 + 4);
            if (bVar4 != 0) {
              pbVar7 = (byte *)(lVar12 + 5);
              do {
                puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar7;
                pbVar7 = pbVar7 + 1;
              } while (bVar4 != 0);
            }
            *(undefined1 **)(param_1 + 8) = puVar11;
            *(char **)(param_1 + 0x10) = (char *)(lVar12 + 4);
            *param_1 = 1;
            *(size_t *)(param_1 + 0x18) = sVar5;
            *(undefined8 *)(param_1 + 0x20) = 0;
            return;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar3);
    }
  }
  *param_1 = 0;
  return;
}


