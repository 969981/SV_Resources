/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0122c594; name: FUN_0122c594
 */


void FUN_0122c594(undefined8 *param_1,undefined8 param_2)

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
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_0122be0c(param_1 + 4,param_2);
  *param_1 = &LAB_020e46d4;
  param_1[1] = &LAB_020e47e0;
  param_1[2] = &LAB_020e48f0;
  param_1[3] = &LAB_020e4904;
  return;
}


