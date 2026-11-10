/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01924c38; name: FUN_01924c38
 */


void FUN_01924c38(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01924c80();
  while ((uVar1 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar1 = FUN_01924c80(param_1);
  }
  FUN_01924cf0(param_1);
  return;
}


