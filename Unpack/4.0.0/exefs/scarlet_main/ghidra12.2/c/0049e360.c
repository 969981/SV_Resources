/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049e360; name: _INIT_49
 */


void _INIT_49(void)

{
  nn::os::InitializeMutex((MutexType *)&DAT_047f44a0,true,0);
  FUN_00100190(PTR__Mutex_047cc198,&DAT_047f44a0,&PTR_LOOP_04483000);
  DAT_047f4498 = 0;
  DAT_047f4490 = 0;
  DAT_047f4488 = &DAT_047f4490;
  FUN_00100190(&LAB_0049d968,&DAT_047f4488,&PTR_LOOP_04483000);
  return;
}


