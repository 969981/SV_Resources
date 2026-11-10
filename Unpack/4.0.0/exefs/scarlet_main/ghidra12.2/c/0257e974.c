/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0257e974; name: FUN_0257e974
 */


void FUN_0257e974(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0257e9b8(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0257ea00(param_1,param_2);
  return;
}


