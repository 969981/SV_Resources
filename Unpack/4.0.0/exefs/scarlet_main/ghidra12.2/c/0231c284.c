/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0231c284; name: FUN_0231c284
 */


void FUN_0231c284(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  if (lVar4 == 0) {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      if (iVar2 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
    }
    puVar1 = PTR_DAT_047d3e30;
    param_1[1] = *(long *)PTR_DAT_047d3e30;
    param_1[2] = *(long *)(puVar1 + 8);
    param_1[3] = *(long *)(puVar1 + 0x10);
    plVar3 = *(long **)(puVar1 + 0x18);
    param_1[4] = (long)plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0231c2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  else {
    FUN_0135d26c(param_1 + 1,lVar4);
  }
  return;
}


