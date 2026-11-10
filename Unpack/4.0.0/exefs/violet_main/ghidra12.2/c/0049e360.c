/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


