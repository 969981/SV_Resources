/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01914394; name: FUN_01914394
 */


void FUN_01914394(byte param_1)

{
  nn::oe::SetUserInactivityDetectionTimeExtended((bool)(param_1 & 1));
  return;
}


