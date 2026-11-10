/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01914394; name: FUN_01914394
 */


void FUN_01914394(byte param_1)

{
  nn::oe::SetUserInactivityDetectionTimeExtended((bool)(param_1 & 1));
  return;
}


