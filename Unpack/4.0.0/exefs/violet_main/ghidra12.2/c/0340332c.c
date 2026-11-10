/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0340332c; name: FUN_0340332c
 */


void FUN_0340332c(void)

{
  DAT_048af210 = 0;
  DAT_048af1f8 = 0xffffffffffffffff;
  DAT_048af200 = 0;
  DAT_048af208 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_048af218,true,0);
  FUN_00100190(&LAB_03402abc,&DAT_048af200,&PTR_LOOP_04483000);
  return;
}


