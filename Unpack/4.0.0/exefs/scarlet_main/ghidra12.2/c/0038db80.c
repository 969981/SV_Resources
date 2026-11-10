/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038db80; name: FUN_0038db80
 */


void FUN_0038db80(pthread_cond_t *param_1)

{
  int iVar1;
  pthread_condattr_t apStack_18 [2];
  
  iVar1 = pthread_condattr_init(apStack_18);
  if ((iVar1 != 0) || (iVar1 = pthread_cond_init(param_1,apStack_18), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


