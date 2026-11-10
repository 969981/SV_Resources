/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


