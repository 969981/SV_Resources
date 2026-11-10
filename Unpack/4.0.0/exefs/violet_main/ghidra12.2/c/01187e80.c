/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01187e80; name: FUN_01187e80
 */


int * FUN_01187e80(int *param_1,byte *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 *puVar16;
  
  if (((param_2 != (byte *)0x0) && (10 < *(ushort *)((long)param_1 - (long)*param_1))) &&
     (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5], uVar5 != 0)) {
    uVar7 = (ulong)*(uint *)((long)param_1 + uVar5);
    puVar1 = (uint *)((long)((long)param_1 + uVar5) + uVar7);
    bVar3 = *param_2;
    puVar16 = &DAT_cbf29ce484222645;
    if (bVar3 != 0) {
      puVar16 = &DAT_cbf29ce484222645;
      do {
        param_2 = param_2 + 1;
        puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *param_2;
      } while (bVar3 != 0);
    }
    puVar15 = puVar1 + 1;
    uVar8 = (ulong)*puVar1;
    if (uVar8 != 0) {
      puVar1 = puVar15 + uVar8;
      lVar12 = (long)param_1 + uVar7 + uVar5 + 9;
      pbVar9 = PTR_DAT_047d3e28;
      puVar10 = (undefined8 *)PTR_DAT_047d3e30;
      puVar11 = PTR_LAB_047d4118;
      do {
        piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
          if (((*pbVar9 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(pbVar9), pbVar9 = PTR_DAT_047d3e28, iVar4 != 0)) {
            FUN_00100190(puVar11,puVar10,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
            pbVar9 = PTR_DAT_047d3e28;
          }
          puVar14 = (undefined1 *)*puVar10;
          plVar13 = (long *)puVar10[3];
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
            (**(code **)(*plVar13 + 0x20))(plVar13);
            pbVar9 = PTR_DAT_047d3e28;
            puVar10 = (undefined8 *)PTR_DAT_047d3e30;
            puVar11 = PTR_LAB_047d4118;
          }
        }
        else {
          uVar7 = (ulong)*(uint *)((long)piVar2 + uVar5);
          bVar3 = *(byte *)((long)((long)piVar2 + uVar5) + uVar7 + 4);
          puVar14 = &DAT_cbf29ce484222645;
          if (bVar3 != 0) {
            puVar14 = &DAT_cbf29ce484222645;
            pbVar6 = (byte *)(lVar12 + uVar7 + uVar5 + (ulong)*puVar15);
            do {
              puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar3 != 0);
          }
        }
        if (puVar16 == puVar14) {
          return piVar2;
        }
        puVar15 = puVar15 + 1;
        lVar12 = lVar12 + 4;
      } while (puVar15 != puVar1);
    }
  }
  return (int *)0x0;
}


