/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0132a414; name: FUN_0132a414
 */


ulong FUN_0132a414(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  
  piVar4 = (int *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e8) & 1) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar3 = (uint *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
      piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar5 == 0)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)((long)piVar4 + uVar5);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  }
  if (*puVar3 != 0) {
    uVar5 = 0;
    do {
      piVar4 = (int *)((long)(puVar3 + uVar5 + 1) + (ulong)puVar3[uVar5 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar9 = 0;
      }
      else {
        uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar9 = 0;
        if (uVar7 != 0) {
          puVar1 = (uint *)((long)piVar4 + uVar7);
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
      if (*(undefined1 **)(param_1 + 0x90) == puVar10) {
        uVar6 = uVar5 & 0xffffff00;
        uVar5 = uVar5 & 0xff;
        uVar7 = 0x100000000;
        goto LAB_0132a52c;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *puVar3);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_0132a52c:
  return uVar5 | uVar7 | uVar6;
}


