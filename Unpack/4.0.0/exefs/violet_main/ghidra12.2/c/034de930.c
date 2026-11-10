/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034de930; name: _INIT_2126
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_2126(void)

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


