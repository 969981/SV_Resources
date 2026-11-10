/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02714550; name: FUN_02714550
 */


undefined8 FUN_02714550(long param_1,undefined4 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  
  lVar13 = *(long *)(param_1 + 0x38);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar14 = *(undefined1 **)PTR_DAT_047d3e30;
    plVar12 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  else {
    bVar3 = *param_3;
    puVar14 = &DAT_cbf29ce484222645;
    if (bVar3 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)0x0;
      do {
        param_3 = param_3 + 1;
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *param_3;
      } while (bVar3 != 0);
    }
  }
  puVar1 = *(undefined8 **)(lVar13 + 0x178);
  puVar2 = *(undefined8 **)(lVar13 + 0x180);
  puVar11 = puVar1;
  if ((puVar1 != puVar2) && ((undefined1 *)*puVar1 != puVar14)) {
    do {
      puVar11 = puVar11 + 4;
      if (puVar2 == puVar11) {
        puVar11 = puVar2;
        goto LAB_027145e4;
      }
    } while ((undefined1 *)*puVar11 != puVar14);
  }
LAB_027145e4:
  uVar9 = (uint)((ulong)((long)puVar11 - (long)puVar1) >> 5);
  if (puVar2 == puVar11) {
    uVar9 = 0xffffffff;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if ((int)uVar9 < 0) {
    uVar5 = 0;
  }
  else {
    piVar7 = *(int **)(*(long *)(param_1 + 0x38) + 0x90);
    puVar8 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (0x16 - (long)*piVar7)));
    puVar8 = (uint *)((long)puVar8 + (ulong)uVar9 * 4 + (ulong)*puVar8 + 4);
    piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
       (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar10 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar10);
    }
    uVar5 = 1;
    *param_2 = uVar6;
  }
  return uVar5;
}


