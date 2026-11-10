/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0176fa10; name: FUN_0176fa10
 */


void FUN_0176fa10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = *param_3;
  param_1[7] = &LAB_02b2d91c;
  param_1[8] = uVar2;
  param_1[6] = &LAB_02b2d910;
  param_1[4] = &LAB_0165a9b8;
  param_1[5] = &LAB_02b2d90c;
  return;
}


