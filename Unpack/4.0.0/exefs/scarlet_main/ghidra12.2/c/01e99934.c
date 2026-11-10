/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e99934; name: FUN_01e99934
 */


void FUN_01e99934(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  
  if ((*param_2 != 0) && (lVar5 = *(long *)(*param_2 + 0x10), lVar5 != 0)) {
    FUN_01f648a0(lVar5 + -0x28);
    return;
  }
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar4 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
  puVar3 = PTR_DAT_047d3e30;
  uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[1] = uVar1;
  plVar2 = *(long **)(puVar3 + 0x18);
  param_1[2] = *(undefined8 *)(puVar3 + 0x10);
  param_1[3] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e99990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


