/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02714398; name: FUN_02714398
 */


bool FUN_02714398(long param_1,undefined8 *param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  
  lVar12 = *(long *)(param_1 + 0x38);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar13 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar11 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    bVar5 = *param_3;
    puVar13 = &DAT_cbf29ce484222645;
    if (bVar5 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)0x0;
      do {
        param_3 = param_3 + 1;
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *param_3;
      } while (bVar5 != 0);
    }
  }
  puVar3 = *(undefined8 **)(lVar12 + 0x108);
  puVar4 = *(undefined8 **)(lVar12 + 0x110);
  puVar10 = puVar3;
  if ((puVar3 != puVar4) && ((undefined1 *)*puVar3 != puVar13)) {
    do {
      puVar10 = puVar10 + 4;
      if (puVar4 == puVar10) {
        puVar10 = puVar4;
        goto LAB_0271442c;
      }
    } while ((undefined1 *)*puVar10 != puVar13);
  }
LAB_0271442c:
  uVar9 = (uint)((ulong)((long)puVar10 - (long)puVar3) >> 5);
  if (puVar4 == puVar10) {
    uVar9 = 0xffffffff;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (-1 < (int)uVar9) {
    piVar7 = *(int **)(*(long *)(param_1 + 0x38) + 0x90);
    puVar8 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (0x12 - (long)*piVar7)));
    puVar8 = (uint *)((long)puVar8 + (ulong)uVar9 * 4 + (ulong)*puVar8 + 4);
    piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar3 = (undefined8 *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (6 - (long)*piVar7)));
    uVar1 = *(undefined4 *)(puVar3 + 1);
    uVar2 = *(undefined4 *)((long)puVar3 + 0xc);
    *param_2 = *puVar3;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((long)param_2 + 0xc) = uVar2;
  }
  return -1 < (int)uVar9;
}


