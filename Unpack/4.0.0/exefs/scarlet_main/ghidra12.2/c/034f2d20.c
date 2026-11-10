/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f2d20; name: _INIT_2128
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2128(void)

{
  DAT_048b0800 = 0xffffffffffffffff;
  DAT_048b0838 = 0;
  _DAT_048b0840 = 0;
  DAT_048b0808 = 0;
  _DAT_048b0810 = 0;
  DAT_048b0818 = 0;
  _DAT_048b0820 = 0;
  DAT_048b0828 = 0;
  _DAT_048b0830 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_048b0850,true,0);
  FUN_00100190(&LAB_034ed710,&DAT_048b0850,&PTR_LOOP_04483000);
  DAT_048b0878 = 0;
  _DAT_048b0880 = 0;
  return;
}


