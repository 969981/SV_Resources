/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d1f7c; name: FUN_017d1f7c
 */


void FUN_017d1f7c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  plVar1 = (long *)param_3[3];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  uVar2 = FUN_017d20d0(param_2,param_3,param_4);
  FUN_017d2014(param_1 + 4,uVar2);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


