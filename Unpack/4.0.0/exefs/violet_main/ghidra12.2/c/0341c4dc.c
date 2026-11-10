/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341c4dc; name: FUN_0341c4dc
 */


void FUN_0341c4dc(void)

{
  DAT_048af318 = 0xffffffffffffffff;
  nn::os::InitializeMutex((MutexType *)&DAT_048af320,true,0);
  FUN_00100190(&LAB_03419cb0,&DAT_048af320,&PTR_LOOP_04483000);
  return;
}


