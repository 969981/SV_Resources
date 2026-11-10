/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


