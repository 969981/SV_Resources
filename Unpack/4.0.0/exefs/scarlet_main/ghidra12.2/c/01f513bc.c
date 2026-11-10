/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f513bc; name: FUN_01f513bc
 */


void FUN_01f513bc(long param_1,int param_2)

{
  if (param_2 == 1) {
    nn::oe::SetUserInactivityDetectionTimeExtended(true);
    nn::oe::SetFocusHandlingMode(1);
  }
  *(int *)(param_1 + 0x40) = param_2;
  return;
}


