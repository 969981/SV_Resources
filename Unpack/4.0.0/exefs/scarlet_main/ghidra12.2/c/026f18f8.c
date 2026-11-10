/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f18f8; name: FUN_026f18f8
 */


void FUN_026f18f8(void)

{
  int iVar1;
  
  if (((DAT_04859308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859308), iVar1 != 0)) {
    FUN_00100190(&LAB_02ba9d5c,&DAT_048592f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04859308);
    return;
  }
  return;
}


