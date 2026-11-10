/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ef10; name: FUN_0078ef10
 */


void FUN_0078ef10(void *param_1,ulong param_2)

{
  nn::crypto::GenerateCryptographicallyRandomBytes(param_1,param_2 & 0xffffffff);
  return;
}


