/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a311c0; name: FUN_00a311c0
 */


void FUN_00a311c0(long param_1)

{
  undefined8 local_8;
  
  local_8 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_8);
  *(undefined8 *)(param_1 + 0x40) = local_8;
  return;
}


