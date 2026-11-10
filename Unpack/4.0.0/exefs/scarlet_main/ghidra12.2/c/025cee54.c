/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025cee54; name: FUN_025cee54
 */


void FUN_025cee54(float param_1,long param_2)

{
  if (1.0 < param_1) {
    param_1 = 1.0;
  }
  *(float *)(param_2 + 0x58) = param_1;
  return;
}


