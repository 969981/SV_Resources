/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


