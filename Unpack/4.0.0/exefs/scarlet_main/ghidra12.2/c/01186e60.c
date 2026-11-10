/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01186e60; name: FUN_01186e60
 */


int * FUN_01186e60(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  long *plVar13;
  uint *puVar14;
  undefined1 *puVar15;
  
  if (((param_1 != (int *)0x0) && (6 < *(ushort *)((long)param_1 - (long)*param_1))) &&
     (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[3], uVar5 != 0)) {
    uVar7 = (ulong)*(uint *)((long)param_1 + uVar5);
    puVar1 = (uint *)((long)((long)param_1 + uVar5) + uVar7);
    puVar14 = puVar1 + 1;
    uVar8 = (ulong)*puVar1;
    if (uVar8 != 0) {
      puVar1 = puVar14 + uVar8;
      lVar10 = (long)param_1 + uVar7 + uVar5 + 9;
      puVar9 = (undefined8 *)PTR_DAT_047d3e30;
      pbVar11 = PTR_DAT_047d3e28;
      do {
        piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
          if (((*pbVar11 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar11), iVar4 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar11);
          }
          puVar15 = (undefined1 *)*puVar9;
          plVar13 = (long *)puVar9[3];
          if (plVar13 == (long *)0x0) goto LAB_01186f58;
          (**(code **)(*plVar13 + 0x18))(plVar13);
          puVar12 = (undefined1 *)*param_2;
          (**(code **)(*plVar13 + 0x20))(plVar13);
          puVar9 = (undefined8 *)PTR_DAT_047d3e30;
          pbVar11 = PTR_DAT_047d3e28;
          if (puVar12 == puVar15) {
            return piVar2;
          }
        }
        else {
          uVar7 = (ulong)*(uint *)((long)piVar2 + uVar5);
          bVar3 = *(byte *)((long)((long)piVar2 + uVar5) + uVar7 + 4);
          puVar15 = &DAT_cbf29ce484222645;
          if (bVar3 != 0) {
            puVar15 = &DAT_cbf29ce484222645;
            pbVar6 = (byte *)(lVar10 + uVar7 + uVar5 + (ulong)*puVar14);
            do {
              puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar3 != 0);
          }
LAB_01186f58:
          if ((undefined1 *)*param_2 == puVar15) {
            return piVar2;
          }
        }
        puVar14 = puVar14 + 1;
        lVar10 = lVar10 + 4;
      } while (puVar14 != puVar1);
    }
  }
  return (int *)0x0;
}


