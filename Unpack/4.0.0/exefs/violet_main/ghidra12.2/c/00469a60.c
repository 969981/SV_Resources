/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469a60; name: FUN_00469a60
 */


void FUN_00469a60(long param_1)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  *(pthread_t *)(param_1 + 0x20) = pVar1;
  return;
}


