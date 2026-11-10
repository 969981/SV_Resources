/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f787c4; name: FUN_01f787c4
 */


undefined8 FUN_01f787c4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01f7880c(param_1 + 400,"RulePresetNo");
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_01f65db0(param_1 + 400,"RulePresetNo");
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


