/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ee398; name: FUN_026ee398
 */


void FUN_026ee398(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_2 + 0x350);
  plVar5 = *(long **)(param_2 + 0x358);
  if (plVar4 == plVar5) {
LAB_026ee408:
    if (plVar4 != plVar5) {
      *param_1 = *plVar4;
      param_1[1] = plVar4[1];
      param_1[2] = plVar4[2];
      plVar4 = (long *)plVar4[3];
      goto LAB_026ee3f4;
    }
  }
  else {
    do {
      if (*plVar4 == param_3) goto LAB_026ee408;
      plVar4 = plVar4 + 4;
    } while (plVar5 != plVar4);
  }
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
  puVar2 = PTR_DAT_047d3e30;
  lVar1 = *(long *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(long *)PTR_DAT_047d3e30;
  param_1[1] = lVar1;
  plVar4 = *(long **)(puVar2 + 0x18);
  param_1[2] = *(long *)(puVar2 + 0x10);
LAB_026ee3f4:
  param_1[3] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x026ee440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
}


