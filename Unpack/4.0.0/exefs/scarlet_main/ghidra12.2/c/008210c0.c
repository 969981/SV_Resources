/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008210c0; name: _FINI_0
 */


int _FINI_0(void)

{
  int iVar1;
  
  FUN_00821060(1,1);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_044e8b10);
  FUN_00821060(1,0);
  DAT_047fb968 = 1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_044e8b10);
  pthread_cond_broadcast((pthread_cond_t *)&DAT_044e8afc);
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_044e8b04);
  return iVar1;
}


