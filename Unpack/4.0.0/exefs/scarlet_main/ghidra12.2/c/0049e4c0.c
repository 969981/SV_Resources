/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


