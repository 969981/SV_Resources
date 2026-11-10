/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019eb358; name: FUN_019eb358
 */


void FUN_019eb358(undefined8 *param_1,undefined8 param_2)

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
  FUN_019eb5d4(param_1 + 4,param_2);
  *param_1 = &LAB_01a3c924;
  param_1[1] = &LAB_018ea8b0;
  param_1[2] = &LAB_01eeb738;
  param_1[3] = &LAB_01eeb748;
  return;
}


