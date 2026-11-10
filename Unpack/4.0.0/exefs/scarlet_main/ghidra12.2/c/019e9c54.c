/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e9c54; name: FUN_019e9c54
 */


void FUN_019e9c54(undefined4 param_1)

{
  int iVar1;
  
  if ((*PTR_DAT_047d38d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d38d8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_008f33ec,PTR_DAT_047d38e0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d38d8);
    }
  }
  DAT_04800900 = *(undefined8 *)PTR_DAT_047d38e0;
  FUN_019ea0c8(DAT_04800900,param_1);
  return;
}


