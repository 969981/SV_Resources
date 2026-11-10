/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d09330; name: FUN_01d09330
 */


undefined8 FUN_01d09330(void)

{
  undefined8 local_18;
  
  local_18 = 0;
  nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
  return local_18;
}


