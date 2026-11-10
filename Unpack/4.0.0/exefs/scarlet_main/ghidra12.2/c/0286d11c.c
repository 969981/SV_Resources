/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0286d11c; name: FUN_0286d11c
 */


void FUN_0286d11c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  FUN_0286d338(param_1 + 4,param_2);
  *param_1 = &LAB_0286d4e0;
  param_1[1] = &LAB_0286da18;
  param_1[2] = &LAB_0286dc28;
  param_1[3] = &LAB_0286dc38;
  return;
}


