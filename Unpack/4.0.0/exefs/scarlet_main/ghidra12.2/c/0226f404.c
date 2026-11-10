/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226f404; name: FUN_0226f404
 */


void FUN_0226f404(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d8840 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047db070,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  *(undefined8 *)PTR_DAT_047d8850 = *(undefined8 *)PTR_DAT_047d8848;
  FUN_0226f35c();
  lVar2 = FUN_0226f364();
                    /* WARNING: Could not recover jumptable at 0x0226f49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar2 + 0x210) + 0x38))(*(long **)(lVar2 + 0x210),param_1);
  return;
}


