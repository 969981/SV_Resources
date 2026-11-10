/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034484fc; name: FUN_034484fc
 */


void FUN_034484fc(void)

{
  DAT_048af9d0 = 0xffffffffffffffff;
  memset(&DAT_048afa58,0,0x78);
  nn::os::InitializeMutex((MutexType *)&DAT_048afad8,true,0);
  FUN_00100190(&LAB_03448454,&DAT_048afad8,&PTR_LOOP_04483000);
  memset(&DAT_048afaf8,0,0xd0);
  return;
}


