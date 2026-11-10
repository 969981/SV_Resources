/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0260dde8; name: FUN_0260dde8
 */


void FUN_0260dde8(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  int *piVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  
  piVar8 = *(int **)(param_2 + 8);
  if (piVar8 == (int *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar5 = PTR_DAT_047d3e30;
    uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar2;
    plVar3 = *(long **)(puVar5 + 0x18);
    param_1[2] = *(undefined8 *)(puVar5 + 0x10);
    param_1[3] = plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0260dec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  else {
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
       (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar10 == 0)) {
      lVar12 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar8 + uVar10);
      lVar12 = (long)puVar1 + (ulong)*puVar1;
    }
    puVar11 = &DAT_cbf29ce484222645;
    sVar7 = strlen((char *)(lVar12 + 4));
    bVar4 = *(byte *)(lVar12 + 4);
    if (bVar4 != 0) {
      pbVar9 = (byte *)(lVar12 + 5);
      do {
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar4 != 0);
    }
    *param_1 = puVar11;
    param_1[1] = (char *)(lVar12 + 4);
    param_1[2] = sVar7;
    param_1[3] = 0;
  }
  return;
}


