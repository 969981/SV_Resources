/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf5044; name: FUN_00cf5044
 */


void FUN_00cf5044(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_047d89b0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d89b0);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89b0);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d89b8;
  *(undefined8 *)PTR_DAT_047d89c0 = uVar2;
  FUN_00cf50d0(uVar2,param_1);
  return;
}


