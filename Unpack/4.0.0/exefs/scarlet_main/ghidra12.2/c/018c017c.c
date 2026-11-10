/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c017c; name: FUN_018c017c
 */


void FUN_018c017c(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = (long)param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,param_2 * 0x18,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*param_4 + 0xe8))();
    }
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x18;
  return;
}


