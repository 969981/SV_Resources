/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ebdb8; name: FUN_021ebdb8
 */


void FUN_021ebdb8(void)

{
  int iVar1;
  
  if (((DAT_04842078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04842078), iVar1 != 0)) {
    FUN_00100190(&LAB_02b6f26c,&DAT_04842068,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04842078);
  }
  FUN_012af100(&DAT_04842068,0);
  return;
}


