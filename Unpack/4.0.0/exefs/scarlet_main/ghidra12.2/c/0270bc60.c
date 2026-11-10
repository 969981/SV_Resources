/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270bc60; name: FUN_0270bc60
 */


undefined8 * FUN_0270bc60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 + 1 == param_2) {
    uVar3 = *param_1;
    sVar1 = (long)param_3 - (long)param_2;
    if (sVar1 != 0) {
      memmove(param_1,param_2,sVar1);
    }
    param_3 = (undefined8 *)((long)param_1 + sVar1);
    *param_3 = uVar3;
  }
  else {
    if (param_2 + 1 != param_3) {
      puVar2 = (undefined8 *)FUN_0270bd90(param_1,param_2,param_3);
      return puVar2;
    }
    uVar3 = param_3[-1];
    sVar1 = (long)(param_3 + -1) - (long)param_1;
    if (sVar1 != 0) {
      param_3 = (undefined8 *)((long)param_3 - sVar1);
      memmove(param_3,param_1,sVar1);
    }
    *param_1 = uVar3;
  }
  return param_3;
}


