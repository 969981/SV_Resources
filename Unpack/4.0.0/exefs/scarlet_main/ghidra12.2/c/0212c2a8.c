/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212c2a8; name: FUN_0212c2a8
 */


void FUN_0212c2a8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
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
  param_1[4] = &DAT_cbf29ce484222645;
  param_1[5] = &DAT_03c886bc;
  return;
}


