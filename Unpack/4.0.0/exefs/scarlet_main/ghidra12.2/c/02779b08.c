/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02779b08; name: FUN_02779b08
 */


void FUN_02779b08(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[7] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  memcpy(param_1 + 8,param_2 + 4,0x40);
  *param_1 = &LAB_02779fd4;
  param_1[1] = &LAB_02bd7c38;
  param_1[2] = &LAB_02bd7c50;
  param_1[3] = &LAB_02bd7cac;
  return;
}


