/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e8dc0; name: FUN_004e8dc0
 */


void FUN_004e8dc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_004e8df4(param_1 + 8);
  if (auVar1._0_8_ == 0) {
    return;
  }
  FUN_0052d43c(param_4,auVar1._0_8_,auVar1._8_8_);
  return;
}


