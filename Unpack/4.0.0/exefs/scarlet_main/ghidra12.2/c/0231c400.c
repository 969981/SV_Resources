/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0231c400; name: FUN_0231c400
 */


void FUN_0231c400(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  
  *param_1 = 0;
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar4 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
  puVar3 = PTR_DAT_047d3e30;
  uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  param_1[1] = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[2] = uVar1;
  plVar2 = *(long **)(puVar3 + 0x18);
  param_1[3] = *(undefined8 *)(puVar3 + 0x10);
  param_1[4] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0231c458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


