/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01671900; name: FUN_01671900
 */


int FUN_01671900(void)

{
  int iVar1;
  ulong uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_045d0248);
  if (DAT_04859d40 == 0) {
    DAT_04859d48 = 0x1000;
    DAT_04859d50 = 0x10000;
    DAT_04859d58 = 0x40000;
    DAT_04859d60 = 0x200000;
    DAT_04859d68 = 7;
    uVar2 = time((time_t *)0x0);
    DAT_04859d40 = uVar2 & 0xfffffffffffffff0 ^ 0x55555558;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_045d0248);
  return iVar1;
}


