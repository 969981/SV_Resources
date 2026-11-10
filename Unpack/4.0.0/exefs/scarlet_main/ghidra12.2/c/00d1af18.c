/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1af18; name: FUN_00d1af18
 */


void FUN_00d1af18(undefined8 *param_1)

{
  undefined8 local_8;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_8,8);
  *param_1 = local_8;
  param_1[1] = 0x82a2b175229d6a5b;
  param_1[2] = local_8;
  return;
}


