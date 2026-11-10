/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f830a8; name: FUN_00f830a8
 */


void FUN_00f830a8(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (param_3 < (ulong)(*(long *)(param_2 + 0x170) - *(long *)(param_2 + 0x168) >> 3)) {
    plVar7 = *(long **)(*(long *)(*(long *)(param_2 + 0x168) + param_3 * 8) + 0x40);
    plVar2 = (long *)PTR_DAT_047d8b70;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 6;
    }
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 7;
    }
    lVar5 = *plVar1;
    if (plVar7 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = plVar7[8];
    }
    *param_1 = *plVar2;
    param_1[1] = lVar5;
    param_1[2] = lVar6;
    param_1[3] = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    param_1[3] = (long)plVar7;
  }
  else {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar3 = PTR_DAT_047d3e30;
    lVar5 = *(long *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(long *)PTR_DAT_047d3e30;
    param_1[1] = lVar5;
    plVar2 = *(long **)(puVar3 + 0x18);
    param_1[2] = *(long *)(puVar3 + 0x10);
    param_1[3] = (long)plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f83178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


