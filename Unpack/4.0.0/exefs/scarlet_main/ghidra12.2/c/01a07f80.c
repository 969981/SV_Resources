/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a07f80; name: FUN_01a07f80
 */


void FUN_01a07f80(void)

{
  int iVar1;
  
  if (((DAT_04839888 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839888), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1c558,&DAT_04839878,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839888);
  }
  DAT_04839870 = DAT_04839878;
  if (DAT_04839878 == 0) {
    return;
  }
  FUN_01a09f84();
  return;
}


