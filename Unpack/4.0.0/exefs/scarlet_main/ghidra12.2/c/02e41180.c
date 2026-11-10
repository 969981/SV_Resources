/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e41180; name: _INIT_481
 */


void _INIT_481(void)

{
  DAT_0486ac38 = 0xffffffffffffffff;
  DAT_0486ac40 = NEON_fmov(0x3f780000,4);
  DAT_0486ac48 = 0x3f8400003f840000;
  FUN_00100190(&LAB_0185d178,&DAT_0486ac50,&PTR_LOOP_04483000);
  nn::os::InitializeMutex((MutexType *)&DAT_0486ac70,false,0);
  FUN_00100190(PTR__Mutex_047cc198,&DAT_0486ac70,&PTR_LOOP_04483000);
  return;
}


