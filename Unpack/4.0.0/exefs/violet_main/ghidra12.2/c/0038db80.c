/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


