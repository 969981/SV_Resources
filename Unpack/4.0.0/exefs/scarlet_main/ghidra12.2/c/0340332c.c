/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0340332c; name: FUN_0340332c
 */


void FUN_0340332c(void)

{
  DAT_048af210 = 0;
  DAT_048af1f8 = 0xffffffffffffffff;
  DAT_048af200 = 0;
  DAT_048af208 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_048af218,true,0);
  FUN_00100190(&LAB_03402abc,&DAT_048af200,&PTR_LOOP_04483000);
  return;
}


