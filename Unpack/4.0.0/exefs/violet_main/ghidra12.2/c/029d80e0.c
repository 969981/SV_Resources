/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d80e0; name: FUN_029d80e0
 */


undefined4 FUN_029d80e0(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  
  piVar3 = (int *)*param_1;
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) ||
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar5 == 0)) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)((long)piVar3 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  }
  uVar5 = (ulong)*puVar4;
  if (*puVar4 != 0) {
    uVar6 = 0;
    do {
      piVar3 = (int *)((long)(puVar4 + uVar6 + 1) + (ulong)puVar4[uVar6 + 1]);
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
      if (bVar2 != 0) {
        puVar10 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)(lVar9 + 5);
        do {
          puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar2 != 0);
        if (puVar10 == (undefined1 *)0xa0eae3f3afc912a) {
          uVar5 = uVar6 & 0xffffffff;
          break;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  piVar3 = (int *)*param_1;
  uVar11 = 0;
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (0xc - (long)*piVar3)));
  puVar4 = (uint *)((long)puVar4 + uVar5 * 4 + (ulong)*puVar4 + 4);
  piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
  puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
  piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
  if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) {
    uVar11 = *(undefined4 *)((long)piVar3 + uVar5);
  }
  return uVar11;
}


