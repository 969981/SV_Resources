/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02614cb8; name: FUN_02614cb8
 */


undefined8 FUN_02614cb8(long param_1,long param_2,undefined8 *param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  byte *pbVar11;
  
  piVar4 = *(int **)(param_1 + 0x10);
  if ((((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
      (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 != 0)) &&
     (puVar5 = (uint *)((long)piVar4 + uVar6),
     piVar4 = (int *)FUN_02614e44((long)puVar5 + (ulong)*puVar5,*(undefined8 *)(param_2 + 8)),
     piVar4 != (int *)0x0)) {
    uVar7 = (ulong)*(ushort *)((long)piVar4 + (6 - (long)*piVar4));
    puVar1 = (uint *)((long)piVar4 + uVar7);
    uVar9 = (ulong)*puVar1;
    puVar1 = (uint *)((long)puVar1 + uVar9);
    puVar5 = puVar1 + 1;
    uVar6 = (ulong)*puVar1;
    if (uVar6 != 0) {
      puVar1 = puVar5 + uVar6;
      lVar8 = (long)piVar4 + uVar9 + uVar7 + 9;
      do {
        piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar10 = (ushort *)((long)piVar4 - (long)*piVar4);
        if ((4 < *puVar10) && (uVar6 = (ulong)puVar10[2], uVar6 != 0)) {
          uVar7 = (ulong)*(uint *)((long)piVar4 + uVar6);
          bVar2 = *(byte *)((long)((long)piVar4 + uVar6) + uVar7 + 4);
          puVar3 = &DAT_cbf29ce484222645;
          if (bVar2 != 0) {
            puVar3 = &DAT_cbf29ce484222645;
            pbVar11 = (byte *)(lVar8 + uVar7 + uVar6 + (ulong)*puVar5);
            do {
              puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar2) * 0x100000001b3);
              bVar2 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar2 != 0);
          }
          if ((undefined1 *)*param_3 == puVar3) {
            if ((*puVar10 < 7) || ((ulong)puVar10[3] == 0)) {
              return 0;
            }
            return *(undefined8 *)((long)piVar4 + (ulong)puVar10[3]);
          }
        }
        puVar5 = puVar5 + 1;
        lVar8 = lVar8 + 4;
        if (puVar5 == puVar1) {
          return 0xffffffffffffffff;
        }
      } while( true );
    }
  }
  return 0xffffffffffffffff;
}


