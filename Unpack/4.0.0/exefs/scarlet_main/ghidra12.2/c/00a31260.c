/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a31260; name: FUN_00a31260
 */


void FUN_00a31260(long param_1)

{
  undefined8 local_8;
  
  local_8 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_8);
  *(undefined8 *)(param_1 + 0x48) = local_8;
  return;
}


