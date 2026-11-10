/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00469a60; name: FUN_00469a60
 */


void FUN_00469a60(long param_1)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  *(pthread_t *)(param_1 + 0x20) = pVar1;
  return;
}


