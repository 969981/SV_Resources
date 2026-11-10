/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013e9e0; name: FUN_0013e9e0
 */


void FUN_0013e9e0(undefined8 param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  double *pdVar1;
  double *pdVar2;
  double local_20;
  undefined1 local_18;
  
  if (param_5 == 0) {
    local_20 = (double)(long)param_3;
    local_18 = 3;
  }
  else {
    local_20 = (double)param_3;
    local_18 = 0x13;
  }
  pdVar1 = (double *)param_2;
  pdVar2 = &local_20;
  if (param_4 != 0) {
    pdVar1 = &local_20;
    pdVar2 = (double *)param_2;
  }
  FUN_0013e620(param_1,pdVar1,pdVar2,param_6);
  return;
}


