/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f5deb0; name: FUN_01f5deb0
 */


void FUN_01f5deb0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  param_1[4] = *param_3;
  *(undefined1 *)(param_1 + 5) = *param_4;
  FUN_00ddaef8(param_1 + 6,*(undefined8 *)(param_2 + 8),0);
  FUN_0135d26c(&local_40,param_1 + 6);
  plVar1 = (long *)param_1[3];
  *param_1 = local_40;
  param_1[1] = local_38;
  param_1[2] = local_30;
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[3] = local_28;
  return;
}


