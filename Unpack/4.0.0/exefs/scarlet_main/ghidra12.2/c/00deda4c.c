/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00deda4c; name: FUN_00deda4c
 */


void FUN_00deda4c(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_02470620(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_00ded5e0(param_1,param_2);
  return;
}


