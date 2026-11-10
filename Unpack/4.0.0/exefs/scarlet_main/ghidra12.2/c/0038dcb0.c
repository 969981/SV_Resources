/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038dcb0; name: FUN_0038dcb0
 */


void FUN_0038dcb0(pthread_cond_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


