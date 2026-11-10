/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03518d30; name: _INIT_2131
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2131(void)

{
  DAT_048d2000 = 0xffffffffffffffff;
  DAT_048d2008 = 0;
  DAT_048d2010 = 0;
  DAT_048d2018 = 0;
  _DAT_048d2020 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_048d2028,true,0);
  FUN_00100190(PTR_LAB_047e74d8,&DAT_048d2018,&PTR_LOOP_04483000);
  DAT_048d2048 = 0;
  DAT_048d2050 = 0;
  _DAT_048d2068 = 0;
  DAT_048d2058 = 0;
  DAT_048d2060 = 0;
  return;
}


