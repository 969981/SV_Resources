/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b6cec; name: FUN_015b6cec
 */


void FUN_015b6cec(void)

{
  int iVar1;
  
  if (((DAT_04840858 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840858), iVar1 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  DAT_04840840 = DAT_04840848;
  if (*(code **)(DAT_04840848 + 0x30) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x015b6d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_04840848 + 0x30))(DAT_04840848 + 0x50);
  return;
}


