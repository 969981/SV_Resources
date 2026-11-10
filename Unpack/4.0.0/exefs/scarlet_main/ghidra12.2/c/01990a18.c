/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01990a18; name: FUN_01990a18
 */


void FUN_01990a18(void)

{
  int iVar1;
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840ed0), iVar1 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  DAT_04840ed8 = DAT_04840ec0;
  FUN_01990a84();
  return;
}


