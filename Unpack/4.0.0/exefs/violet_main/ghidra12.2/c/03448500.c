/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03448500; name: _INIT_2118
 */


void _INIT_2118(void)

{
  DAT_048af9d0 = 0xffffffffffffffff;
  memset(&DAT_048afa58,0,0x78);
  nn::os::InitializeMutex((MutexType *)&DAT_048afad8,true,0);
  FUN_00100190(&LAB_03448454,&DAT_048afad8,&PTR_LOOP_04483000);
  memset(&DAT_048afaf8,0,0xd0);
  return;
}


