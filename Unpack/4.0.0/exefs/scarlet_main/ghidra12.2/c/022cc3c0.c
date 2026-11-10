/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022cc3c0; name: FUN_022cc3c0
 */


void FUN_022cc3c0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_022cc404(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_022cc4ac(param_1,param_2);
  return;
}


