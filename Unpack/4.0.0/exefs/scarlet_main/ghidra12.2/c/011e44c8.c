/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e44c8; name: FUN_011e44c8
 */


void FUN_011e44c8(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char acStack_80 [64];
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar1 = PTR_DAT_047d3e30;
    uVar5 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)PTR_DAT_047d3e30;
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    plVar3 = *(long **)(puVar1 + 0x18);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(puVar1 + 0x10);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar4 = *(long **)(param_1 + 0xa8);
    *(long **)(param_1 + 0xa8) = plVar3;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011e4608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))();
      return;
    }
  }
  else {
    snprintf(acStack_80,0x40,"_unique%d",*(int *)(param_1 + 0xe8));
    FUN_01343c78(&local_28,acStack_80);
    plVar4 = local_28;
    plVar3 = (long *)PTR_DAT_047d8b70;
    if (local_28 != (long *)0x0) {
      plVar3 = local_28 + 6;
    }
    lVar6 = *plVar3;
    plVar3 = (long *)PTR_PTR_047d4508;
    if (local_28 != (long *)0x0) {
      plVar3 = local_28 + 7;
    }
    lVar7 = *plVar3;
    if (local_28 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = local_28[8];
      (**(code **)(*local_28 + 0x18))(local_28);
    }
    plVar3 = *(long **)(param_1 + 0xa8);
    *(long *)(param_1 + 0x90) = lVar6;
    *(long *)(param_1 + 0x98) = lVar7;
    *(long *)(param_1 + 0xa0) = lVar8;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *(long **)(param_1 + 0xa8) = plVar4;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


