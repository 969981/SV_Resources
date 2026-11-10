/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027141c0; name: FUN_027141c0
 */


bool FUN_027141c0(long param_1,undefined8 *param_2,byte *param_3,long *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)(param_1 + 0x38);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar11 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar9 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    bVar2 = *param_3;
    puVar11 = &DAT_cbf29ce484222645;
    if (bVar2 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)0x0;
      do {
        param_3 = param_3 + 1;
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *param_3;
      } while (bVar2 != 0);
    }
  }
  puVar6 = *(undefined8 **)(lVar10 + 0xd0);
  puVar1 = *(undefined8 **)(lVar10 + 0xd8);
  puVar8 = puVar6;
  if ((puVar6 != puVar1) && ((undefined1 *)*puVar6 != puVar11)) {
    do {
      puVar8 = puVar8 + 4;
      if (puVar1 == puVar8) {
        puVar8 = puVar1;
        goto LAB_02714258;
      }
    } while ((undefined1 *)*puVar8 != puVar11);
  }
LAB_02714258:
  uVar7 = (uint)((ulong)((long)puVar8 - (long)puVar6) >> 5);
  if (puVar1 == puVar8) {
    uVar7 = 0xffffffff;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (-1 < (int)uVar7) {
    piVar4 = *(int **)(*(long *)(param_1 + 0x38) + 0x90);
    puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (0x10 - (long)*piVar4)));
    puVar5 = (uint *)((long)puVar5 + (ulong)uVar7 * 4 + (ulong)*puVar5 + 4);
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar6 = (undefined8 *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (6 - (long)*piVar4)));
    uVar12 = *puVar6;
    param_2[1] = (ulong)*(uint *)(puVar6 + 1);
    *param_2 = uVar12;
    uVar12 = ((undefined8 *)*param_4)[1];
    puVar6 = *(undefined8 **)param_4[1];
    *puVar6 = *(undefined8 *)*param_4;
    *(int *)(puVar6 + 1) = (int)uVar12;
  }
  return -1 < (int)uVar7;
}


