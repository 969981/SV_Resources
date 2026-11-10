/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e5e0; name: FUN_0047e5e0
 */


bool FUN_0047e5e0(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(param_1);
  return iVar1 == 0;
}


