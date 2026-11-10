/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078ef10; name: FUN_0078ef10
 */


void FUN_0078ef10(void *param_1,ulong param_2)

{
  nn::crypto::GenerateCryptographicallyRandomBytes(param_1,param_2 & 0xffffffff);
  return;
}


