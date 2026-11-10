/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bb7218; name: FUN_02bb7218
 */


void FUN_02bb7218(ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x92220008;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x20004;
  }
  nn::oe::SetPerformanceConfiguration(0,uVar1);
  return;
}


