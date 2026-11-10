/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc5a98; name: FUN_00cc5a98
 */


undefined * FUN_00cc5a98(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e1c58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e1c58), iVar1 != 0))
  {
    FUN_00100190(&LAB_02bc72d0,PTR_DAT_047e1c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e1c58);
  }
  return PTR_DAT_047e1c60;
}


