/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d09330; name: FUN_01d09330
 */


undefined8 FUN_01d09330(void)

{
  undefined8 local_18;
  
  local_18 = 0;
  nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_18);
  return local_18;
}


