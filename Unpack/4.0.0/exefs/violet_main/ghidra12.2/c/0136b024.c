/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


