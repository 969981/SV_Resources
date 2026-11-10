/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030785b0; name: _INIT_829
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_829(void)

{
  DAT_048731b8 = 0xff00;
  nn::os::InitializeMutex((MutexType *)&DAT_048731c0,true,0);
  nn::os::InitializeMutex((MutexType *)&DAT_048731e0,true,0);
  nn::os::InitializeSemaphore((SemaphoreType *)&DAT_04873200,0,1);
  DAT_04873230 = 0;
  _DAT_04873228 = 0;
  FUN_00100190(PTR_FUN_047e4f60,&DAT_048731c0,&PTR_LOOP_04483000);
  return;
}


