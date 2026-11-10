/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284b4c0; name: FUN_0284b4c0
 */


void FUN_0284b4c0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  uVar2 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar2;
  FUN_0284b430(param_1 + 8,param_2 + 4);
  *param_1 = FUN_0284bb3c;
  param_1[1] = FUN_0284bcb8;
  param_1[2] = FUN_0284bcf8;
  param_1[3] = &LAB_0284bd50;
  return;
}


