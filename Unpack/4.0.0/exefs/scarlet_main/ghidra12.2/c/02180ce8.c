/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02180ce8; name: FUN_02180ce8
 */


void FUN_02180ce8(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = *param_2;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_01161be4(param_1 + 5,param_2 + 1);
  *param_1 = &LAB_00e62780;
  param_1[1] = FUN_0217f544;
  param_1[2] = &LAB_0217f654;
  param_1[3] = &LAB_0217f674;
  return;
}


