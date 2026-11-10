/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01945a78; name: FUN_01945a78
 */


void FUN_01945a78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  if ((*PTR_DAT_047da868 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da868);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00ae377c,PTR_DAT_047da870,&PTR_LOOP_04483000,param_4);
      __cxa_guard_release(PTR_DAT_047da868);
    }
  }
  lVar2 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar2;
  FUN_01945b34(param_1,*(undefined8 *)(lVar2 + 0x28),param_2,param_3,param_4);
  FUN_015d209c(*param_1);
  return;
}


