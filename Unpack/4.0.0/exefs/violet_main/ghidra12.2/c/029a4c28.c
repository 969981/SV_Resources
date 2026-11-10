/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a4c28; name: FUN_029a4c28
 */


ulong FUN_029a4c28(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  
  piVar3 = (int *)*param_1;
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 == 0)) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)((long)piVar3 + uVar4);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  uVar4 = (ulong)*puVar6;
  if (*puVar6 != 0) {
    uVar5 = 0;
    do {
      piVar3 = (int *)((long)(puVar6 + uVar5 + 1) + (ulong)puVar6[uVar5 + 1]);
      if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
        lVar9 = 0;
      }
      else {
        uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
        lVar9 = 0;
        if (uVar7 != 0) {
          puVar1 = (uint *)((long)piVar3 + uVar7);
          lVar9 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      bVar2 = *(byte *)(lVar9 + 4);
      puVar10 = &DAT_cbf29ce484222645;
      if (bVar2 != 0) {
        puVar10 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)(lVar9 + 5);
        do {
          puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar2 != 0);
      }
      if ((undefined1 *)*param_2 == puVar10) {
        uVar7 = 1;
        uVar4 = uVar5 & 0xffffffff;
        goto LAB_029a4d04;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  uVar7 = 0;
LAB_029a4d04:
  return uVar7 | uVar4 << 0x20;
}


