/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed5c8c; name: FUN_01ed5c8c
 */


void FUN_01ed5c8c(undefined8 *param_1,undefined8 param_2)

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
  FUN_01e7ed84(param_1 + 4,param_2);
  *param_1 = &LAB_01ed65c0;
  param_1[1] = &LAB_01ed65d4;
  param_1[2] = &LAB_01ed65d8;
  param_1[3] = &LAB_00b221e0;
  return;
}


