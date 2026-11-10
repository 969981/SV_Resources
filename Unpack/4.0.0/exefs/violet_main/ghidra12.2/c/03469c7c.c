/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03469c7c; name: FUN_03469c7c
 */


void FUN_03469c7c(void)

{
  DAT_048afc68 = 0xffffffffffffffff;
  nn::os::InitializeMutex((MutexType *)&DAT_048afc70,true,0);
  FUN_00100190(&LAB_03469b1c,&DAT_048afc70,&PTR_LOOP_04483000);
  return;
}


