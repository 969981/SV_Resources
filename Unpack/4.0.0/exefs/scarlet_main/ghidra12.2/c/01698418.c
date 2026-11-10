/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01698418; name: FUN_01698418
 */


void FUN_01698418(void)

{
  int iVar1;
  
  if (((DAT_04840ad8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840ad8), iVar1 != 0)) {
    FUN_00100190(&LAB_02b0d008,&DAT_04840ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ad8);
  }
  DAT_04840ae0 = DAT_04840ac8;
                    /* WARNING: Could not recover jumptable at 0x01698450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_04840ac8 + 0x30) + 0xb0))();
  return;
}


