/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6cc54; name: FUN_01c6cc54
 */


void FUN_01c6cc54(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((DAT_048398e8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048398e8);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048398e8);
    }
  }
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    return;
  }
  FUN_01eb00d0(DAT_048398d8,param_1,param_2);
  return;
}


