/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047e540; name: FUN_0047e540
 */


pthread_mutex_t * FUN_0047e540(void)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  pthread_mutexattr_t apStack_18 [2];
  
  __mutex = (pthread_mutex_t *)FUN_00452ce0(0x20,"external/openssl/crypto/threads_pthread.c",0x2a);
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutexattr_init(apStack_18);
    pthread_mutexattr_settype(apStack_18,1);
    iVar1 = pthread_mutex_init(__mutex,apStack_18);
    pthread_mutexattr_destroy(apStack_18);
    if (iVar1 != 0) {
      FUN_00452f80(__mutex,"external/openssl/crypto/threads_pthread.c",0x34);
      __mutex = (pthread_mutex_t *)0x0;
    }
  }
  return __mutex;
}


