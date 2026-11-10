/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212bec8; name: FUN_0212bec8
 */


ulong FUN_0212bec8(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  undefined1 *puVar11;
  
  piVar5 = (int *)*param_1;
  if (0x16 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
    uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xb];
    if (uVar7 == 0) {
      uVar6 = 0;
      uVar7 = 0;
      goto LAB_0212bfb0;
    }
    puVar1 = (uint *)((long)piVar5 + uVar7);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      uVar7 = 0;
      uVar6 = 1;
      do {
        puVar2 = puVar1 + uVar7 + 1;
        piVar5 = (int *)((long)puVar2 + (ulong)*puVar2);
        if (*(ushort *)((long)piVar5 - (long)*piVar5) < 5) {
          lVar10 = 0;
        }
        else {
          uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
          lVar10 = 0;
          if (uVar8 != 0) {
            puVar2 = (uint *)((long)piVar5 + uVar8);
            lVar10 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        bVar4 = *(byte *)(lVar10 + 4);
        puVar11 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar11 = &DAT_cbf29ce484222645;
          pbVar9 = (byte *)(lVar10 + 5);
          do {
            puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar4 != 0);
        }
        if ((undefined1 *)*param_2 == puVar11) goto LAB_0212bfac;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
      uVar6 = 0;
      uVar7 = (ulong)uVar3 - 1;
LAB_0212bfac:
      uVar7 = uVar7 << 0x20;
      goto LAB_0212bfb0;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_0212bfb0:
  return uVar7 | uVar6;
}


