/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01766f10; name: FUN_01766f10
 */


void FUN_01766f10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *local_20;
  undefined8 uStack_18;
  
  if ((*PTR_DAT_047e23d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047e23d8);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047e2470,PTR_DAT_047e23e0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e23d8);
    }
  }
  DAT_04863910 = *(undefined8 *)PTR_DAT_047e23e0;
  local_20 = &LAB_02c7d5f0;
  uStack_18 = param_2;
  FUN_02c7c8a8(DAT_04863910,param_1,1,0x20,&local_20);
  return;
}


