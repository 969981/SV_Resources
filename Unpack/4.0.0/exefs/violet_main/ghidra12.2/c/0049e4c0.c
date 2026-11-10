/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049e4c0; name: FUN_0049e4c0
 */


undefined8 FUN_0049e4c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_18);
  if ((int)uVar1 == 0) {
    *param_1 = local_18;
    return uVar1;
  }
  *param_1 = 0;
  return 1;
}


