/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a31108; name: FUN_00a31108
 */


void FUN_00a31108(long param_1)

{
  short sVar1;
  undefined8 local_8;
  
  sVar1 = *(short *)(param_1 + 0x34);
  *(short *)(param_1 + 0x34) = sVar1 + 1;
  if (sVar1 == 0) {
    local_8 = 0;
    nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_8);
    *(undefined8 *)(param_1 + 0x38) = local_8;
  }
  return;
}


