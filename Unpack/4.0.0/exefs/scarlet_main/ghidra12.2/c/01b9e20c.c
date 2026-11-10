/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9e20c; name: FUN_01b9e20c
 */


void FUN_01b9e20c(undefined8 *param_1,long param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
  uVar1 = (*param_3)();
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e76888(param_1,uVar1);
  return;
}


