/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e620; name: FUN_0047e620
 */


void FUN_0047e620(pthread_mutex_t *param_1)

{
  if (param_1 == (pthread_mutex_t *)0x0) {
    return;
  }
  pthread_mutex_destroy(param_1);
  FUN_00452f80(param_1,"external/openssl/crypto/threads_pthread.c",0x6f);
  return;
}


