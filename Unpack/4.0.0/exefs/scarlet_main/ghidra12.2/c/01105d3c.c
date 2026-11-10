/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01105d3c; name: FUN_01105d3c
 */


void FUN_01105d3c(undefined8 *param_1,undefined8 param_2)

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
  FUN_010764a4(param_1 + 4,param_2);
  *param_1 = &LAB_0213d400;
  param_1[1] = &LAB_0213d49c;
  param_1[2] = &LAB_0213d5ac;
  param_1[3] = &LAB_0213d5c0;
  return;
}


