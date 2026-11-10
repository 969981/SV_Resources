/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027847c0; name: FUN_027847c0
 */


void FUN_027847c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40;
  long lStack_38;
  long local_30;
  undefined8 local_28;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = param_2;
  FUN_02784870(&local_48,param_2,&local_28);
  lVar2 = local_48;
  local_48 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    FUN_0278498c(param_1 + 1);
    lVar2 = *param_1;
  }
  param_1[1] = local_40;
  param_1[2] = lStack_38;
  param_1[3] = local_30;
  FUN_02784a30(&local_48,param_2,lVar2);
  lVar2 = local_48;
  local_48 = 0;
  lVar1 = param_1[4];
  param_1[4] = lVar2;
  if (lVar1 != 0) {
    FUN_02784b5c(param_1 + 5);
  }
  param_1[6] = lStack_38;
  param_1[7] = local_30;
  param_1[5] = local_40;
  return;
}


