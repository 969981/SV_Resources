/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136b024; name: FUN_0136b024
 */


void FUN_0136b024(long param_1)

{
  undefined8 local_8;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_8,8);
  *(undefined8 *)(param_1 + 0x18) = local_8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = local_8;
  *(undefined8 *)(param_1 + 0x10) = 0x82a2b175229d6a5b;
  return;
}


