/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01828a54; name: FUN_01828a54
 */


void FUN_01828a54(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  FUN_01828ad8(param_1,&local_18);
  if (((DAT_048383f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048383f8), iVar1 != 0)) {
    FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048383f8);
  }
  DAT_04838400 = DAT_048383e8;
  FUN_01829524();
  return;
}


