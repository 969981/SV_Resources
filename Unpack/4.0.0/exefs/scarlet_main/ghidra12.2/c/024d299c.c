/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d299c; name: FUN_024d299c
 */


void FUN_024d299c(float param_1,void *param_2,void *param_3)

{
  memcpy(param_2,param_3,0x24);
  *(float *)((long)param_2 + 0x30) = ABS(param_1);
  return;
}


