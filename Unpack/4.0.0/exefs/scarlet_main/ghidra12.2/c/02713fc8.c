/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02713fc8; name: FUN_02713fc8
 */


undefined8 FUN_02713fc8(long param_1,undefined4 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  
  lVar12 = *(long *)(param_1 + 0x38);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
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
    bVar3 = *param_3;
    puVar13 = &DAT_cbf29ce484222645;
    if (bVar3 == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)0x0;
      do {
        param_3 = param_3 + 1;
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *param_3;
      } while (bVar3 != 0);
    }
  }
  puVar1 = *(undefined8 **)(lVar12 + 0x98);
  puVar2 = *(undefined8 **)(lVar12 + 0xa0);
  puVar10 = puVar1;
  if ((puVar1 != puVar2) && ((undefined1 *)*puVar1 != puVar13)) {
    do {
      puVar10 = puVar10 + 4;
      if (puVar2 == puVar10) {
        puVar10 = puVar2;
        goto LAB_0271405c;
      }
    } while ((undefined1 *)*puVar10 != puVar13);
  }
LAB_0271405c:
  uVar8 = (uint)((ulong)((long)puVar10 - (long)puVar1) >> 5);
  if (puVar2 == puVar10) {
    uVar8 = 0xffffffff;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if ((int)uVar8 < 0) {
    uVar5 = 0;
  }
  else {
    uVar14 = 0;
    piVar6 = *(int **)(*(long *)(param_1 + 0x38) + 0x90);
    puVar7 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (0xc - (long)*piVar6)));
    puVar7 = (uint *)((long)puVar7 + (ulong)uVar8 * 4 + (ulong)*puVar7 + 4);
    piVar6 = (int *)((long)puVar7 + (ulong)*puVar7);
    if ((6 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar9 != 0)) {
      uVar14 = *(undefined4 *)((long)piVar6 + uVar9);
    }
    uVar5 = 1;
    *param_2 = uVar14;
  }
  return uVar5;
}


