/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02415fe0; name: FUN_02415fe0
 */


void FUN_02415fe0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = param_1[2];
  uVar2 = param_1[3];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = uVar2;
  FUN_00c43ef0(param_2 + 4,param_1 + 4);
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  plVar1 = (long *)param_1[9];
  param_2[9] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  uVar2 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar2;
  return;
}


