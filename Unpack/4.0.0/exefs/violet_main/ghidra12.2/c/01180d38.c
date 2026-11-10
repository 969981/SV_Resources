/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01180d38; name: FUN_01180d38
 */


ulong FUN_01180d38(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  
  piVar5 = (int *)*param_1;
  if ((0x16 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xb], uVar6 != 0)) {
    puVar1 = (uint *)((long)piVar5 + uVar6);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        piVar5 = (int *)((long)(puVar1 + uVar6 + 1) + (ulong)puVar1[uVar6 + 1]);
        if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
          lVar9 = 0;
        }
        else {
          uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
          lVar9 = 0;
          if (uVar7 != 0) {
            puVar2 = (uint *)((long)piVar5 + uVar7);
            lVar9 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        bVar4 = *(byte *)(lVar9 + 4);
        puVar10 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar10 = &DAT_cbf29ce484222645;
          pbVar8 = (byte *)(lVar9 + 5);
          do {
            puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar4 != 0);
        }
        if ((undefined1 *)*param_2 == puVar10) {
          if ((uint)uVar6 < uVar3) {
            piVar5 = (int *)((long)(puVar1 + (uVar6 & 0xffffffff) + 1) +
                            (ulong)puVar1[(uVar6 & 0xffffffff) + 1]);
            puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)))
            ;
            piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
            if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulong)*(uint *)((long)piVar5 + uVar6) << 0x20;
            }
            uVar7 = 1;
            goto LAB_01180e6c;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
  }
  uVar7 = 0;
  uVar6 = 0;
LAB_01180e6c:
  return uVar6 | uVar7;
}


