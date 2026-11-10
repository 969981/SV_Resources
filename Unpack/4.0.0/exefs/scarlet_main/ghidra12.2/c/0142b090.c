/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142b090; name: FUN_0142b090
 */


void FUN_0142b090(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0142b0d4(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0142ad6c(param_1,param_2);
  return;
}


