/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03475530; name: _INIT_2121
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2121(void)

{
  DAT_048afc90 = 0xffffffffffffffff;
  DAT_048afc98 = 0;
  _DAT_048afca0 = 0;
  DAT_048afca8 = 0;
  _DAT_048afcb0 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_048afcc0,true,0);
  FUN_00100190(&LAB_03475314,&DAT_048afcc0,&PTR_LOOP_04483000);
  return;
}


