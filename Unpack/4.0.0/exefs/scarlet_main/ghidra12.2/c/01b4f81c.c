/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4f81c; name: FUN_01b4f81c
 */


void FUN_01b4f81c(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((*param_2 == 0) || (*(long *)(*param_2 + 8) == 0)) ||
     (uVar1 = FUN_01b4f86c(), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_01b4f8fc(param_1,param_2);
  return;
}


