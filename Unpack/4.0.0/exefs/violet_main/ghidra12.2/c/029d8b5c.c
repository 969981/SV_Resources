/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d8b5c; name: FUN_029d8b5c
 */


void FUN_029d8b5c(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *local_28;
  
  piVar7 = (int *)0x0;
  if (*(long *)(param_2 + 0x10) != 0) {
    if ((*(byte *)(*(long *)(param_2 + 0x10) + 0x1e8) & 1) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar5 = (uint *)(**(code **)(**(long **)(param_2 + 0x10) + 0x70))();
      piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    }
  }
  if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
      (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar8 == 0)) ||
     (puVar5 = (uint *)((long)piVar7 + uVar8), piVar7 = (int *)((long)puVar5 + (ulong)*puVar5),
     *piVar7 <= (int)param_3)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar3 = PTR_DAT_047d3e30;
    lVar9 = *(long *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(long *)PTR_DAT_047d3e30;
    param_1[1] = lVar9;
    plVar2 = *(long **)(puVar3 + 0x18);
    param_1[2] = *(long *)(puVar3 + 0x10);
    param_1[3] = (long)plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x029d8ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    puVar5 = (uint *)(piVar7 + (ulong)param_3 + 1);
    piVar7 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar8 == 0)) {
      lVar9 = 0;
    }
    else {
      puVar5 = (uint *)((long)piVar7 + uVar8);
      lVar9 = (long)puVar5 + (ulong)*puVar5;
    }
    if (*(char *)(lVar9 + 4) == '\0') {
      local_28 = (long *)FUN_00d44228();
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))(local_28);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar6 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar6;
      FUN_00cf9884(&local_28,uVar6,(char *)(lVar9 + 4));
    }
    plVar2 = (long *)PTR_DAT_047d8b70;
    if (local_28 != (long *)0x0) {
      plVar2 = local_28 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 7;
    }
    lVar9 = *plVar1;
    if (local_28 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = local_28[8];
    }
    *param_1 = *plVar2;
    param_1[1] = lVar9;
    param_1[2] = lVar10;
    param_1[3] = 0;
    if (local_28 == (long *)0x0) {
      param_1[3] = 0;
    }
    else {
      (**(code **)(*local_28 + 0x18))(local_28);
      param_1[3] = (long)local_28;
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


