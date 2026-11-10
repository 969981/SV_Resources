/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034de92c; name: FUN_034de92c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034de92c(void)

{
  DAT_048b04f8 = 0xffffffffffffffff;
  DAT_048b0500 = 0;
  _DAT_048b0508 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_048b0510,true,0);
  FUN_00100190(&LAB_034dd28c,&DAT_048b0510,&PTR_LOOP_04483000);
  DAT_048b0530 = 0;
  _DAT_048b0538 = 0;
  return;
}


