/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00458830; name: FUN_00458830
 */


void FUN_00458830(long param_1,void *param_2,size_t param_3)

{
  FUN_00458450(param_1,0,0);
  if (0xf < param_3) {
    param_3 = 0x10;
  }
  memcpy(param_2,(void *)(param_1 + 0x40),param_3);
  return;
}


