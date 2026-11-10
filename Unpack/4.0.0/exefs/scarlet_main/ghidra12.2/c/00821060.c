/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00821060; name: FUN_00821060
 */


undefined8 FUN_00821060(int param_1,int param_2)

{
  void *pvVar1;
  
  if (param_1 != 1) {
    return 0x16;
  }
  if (DAT_044e8ac8 == 0xffffffff) {
    return 0;
  }
  pvVar1 = pthread_getspecific(DAT_044e8ac8);
  if (pvVar1 != (void *)0x0) {
    *(uint *)((long)pvVar1 + 0x24) = (uint)(param_2 != 0);
  }
  return 0;
}


