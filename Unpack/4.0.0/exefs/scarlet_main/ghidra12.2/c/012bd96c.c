/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bd96c; name: FUN_012bd96c
 */


void FUN_012bd96c(void)

{
  int iVar1;
  
  if (((DAT_048638f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048638f0), iVar1 != 0)) {
    FUN_00100190(&LAB_02c7be68,&DAT_048638e0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048638f0);
    return;
  }
  return;
}


