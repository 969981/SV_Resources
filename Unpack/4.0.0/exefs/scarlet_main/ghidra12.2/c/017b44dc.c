/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b44dc; name: FUN_017b44dc
 */


void FUN_017b44dc(void)

{
  int iVar1;
  
  if (((DAT_04840c68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840c68), iVar1 != 0)) {
    FUN_00100190(&LAB_02b1bf44,&DAT_04840c58,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840c68);
    return;
  }
  return;
}


