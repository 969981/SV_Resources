/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029f0028; name: FUN_029f0028
 */


long FUN_029f0028(undefined8 *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  ushort *puVar9;
  byte *pbVar10;
  long lVar11;
  undefined1 *puVar12;
  
  if (param_3 == (int *)0x0) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
      return 0;
    }
    uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    if (uVar6 == 0) {
      return 0;
    }
    puVar1 = (uint *)((long)param_2 + uVar6);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    puVar7 = puVar1 + 1;
    uVar3 = *puVar1;
    if (uVar3 == 0) {
      return 0;
    }
    puVar1 = puVar7 + uVar3;
    while( true ) {
      piVar8 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
      uVar5 = *puVar9;
      if ((uVar5 < 5) || ((ulong)puVar9[2] == 0)) {
        lVar11 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar8 + (ulong)puVar9[2]);
        lVar11 = (long)puVar2 + (ulong)*puVar2;
      }
      bVar4 = *(byte *)(lVar11 + 4);
      puVar12 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar12 = &DAT_cbf29ce484222645;
        pbVar10 = (byte *)(lVar11 + 5);
        do {
          puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 != 0);
      }
      if (puVar12 == (undefined1 *)*param_1) break;
      puVar7 = puVar7 + 1;
      if (puVar7 == puVar1) {
        return 0;
      }
    }
  }
  else {
    if (*(ushort *)((long)param_3 - (long)*param_3) < 9) {
      return 0;
    }
    uVar6 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4];
    if (uVar6 == 0) {
      return 0;
    }
    puVar1 = (uint *)((long)param_3 + uVar6);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    puVar7 = puVar1 + 1;
    uVar3 = *puVar1;
    if (uVar3 == 0) {
      return 0;
    }
    puVar1 = puVar7 + uVar3;
    while( true ) {
      piVar8 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
      uVar5 = *puVar9;
      if ((uVar5 < 5) || ((ulong)puVar9[2] == 0)) {
        lVar11 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar8 + (ulong)puVar9[2]);
        lVar11 = (long)puVar2 + (ulong)*puVar2;
      }
      bVar4 = *(byte *)(lVar11 + 4);
      puVar12 = &DAT_cbf29ce484222645;
      if (bVar4 != 0) {
        puVar12 = &DAT_cbf29ce484222645;
        pbVar10 = (byte *)(lVar11 + 5);
        do {
          puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 != 0);
      }
      if (puVar12 == (undefined1 *)*param_1) break;
      puVar7 = puVar7 + 1;
      if (puVar7 == puVar1) {
        return 0;
      }
    }
  }
  if ((uVar5 < 7) || ((ulong)puVar9[3] == 0)) {
    return 0;
  }
  puVar7 = (uint *)((long)piVar8 + (ulong)puVar9[3]);
  return (long)puVar7 + (ulong)*puVar7;
}


