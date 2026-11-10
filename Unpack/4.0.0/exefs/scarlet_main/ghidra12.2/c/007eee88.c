/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eee88; name: FUN_007eee88
 */


void FUN_007eee88(void *param_1,long param_2,uint param_3,uint param_4)

{
  if (0x5a0 - param_4 < param_3) {
    return;
  }
  memcpy(param_1,(void *)(param_2 + (ulong)param_4),(ulong)param_3);
  return;
}


