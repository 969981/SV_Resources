/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259c00; name: FUN_01259c00
 */


void FUN_01259c00(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1[3] = 0;
  param_1[4] = (long)param_4;
  if ((param_2 != 0) &&
     (lVar2 = (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,param_2 * 0x38,8), lVar2 == 0
     )) {
    (**(code **)(*(long *)*param_4 + 0xe8))();
  }
  lVar1 = lVar2 + param_3 * 0x38;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 0x38;
  return;
}


