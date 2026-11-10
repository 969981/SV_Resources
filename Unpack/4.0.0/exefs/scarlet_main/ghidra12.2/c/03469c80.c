/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03469c80; name: _INIT_2120
 */


void _INIT_2120(void)

{
  DAT_048afc68 = 0xffffffffffffffff;
  nn::os::InitializeMutex((MutexType *)&DAT_048afc70,true,0);
  FUN_00100190(&LAB_03469b1c,&DAT_048afc70,&PTR_LOOP_04483000);
  return;
}


