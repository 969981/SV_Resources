/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da58b8; name: FUN_00da58b8
 */


int * FUN_00da58b8(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  long lVar12;
  undefined1 *puVar13;
  
  puVar4 = PTR_DAT_047d3e30;
  if (param_1 != (uint *)0x0) {
    puVar11 = param_1 + 1;
    if (*param_1 != 0) {
      puVar1 = puVar11 + *param_1;
      lVar12 = (long)param_1 + 9;
      do {
        piVar2 = (int *)((long)puVar11 + (ulong)*puVar11);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,puVar4,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar13 = *(undefined1 **)puVar4;
          plVar10 = *(long **)(puVar4 + 0x18);
          if (plVar10 == (long *)0x0) goto LAB_00da59a0;
          (**(code **)(*plVar10 + 0x18))(plVar10);
          puVar7 = (undefined1 *)*param_2;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
        else {
          uVar9 = (ulong)*(uint *)((long)piVar2 + uVar8);
          bVar3 = *(byte *)((long)((long)piVar2 + uVar8) + uVar9 + 4);
          if (bVar3 == 0) {
            puVar13 = &DAT_cbf29ce484222645;
          }
          else {
            puVar13 = &DAT_cbf29ce484222645;
            pbVar6 = (byte *)(lVar12 + uVar9 + uVar8 + (ulong)*puVar11);
            do {
              puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
              bVar3 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar3 != 0);
          }
LAB_00da59a0:
          puVar7 = (undefined1 *)*param_2;
        }
        if (puVar13 == puVar7) {
          return piVar2;
        }
        puVar11 = puVar11 + 1;
        lVar12 = lVar12 + 4;
      } while (puVar11 != puVar1);
    }
  }
  return (int *)0x0;
}


