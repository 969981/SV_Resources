/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f9ce0; name: FUN_011f9ce0
 */


void FUN_011f9ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_f0 [160];
  
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = *param_1;
  uVar4 = param_1[1];
  param_1[3] = 0;
  memcpy(auStack_f0,param_1 + 4,0x91);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  uVar6 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar6;
  memcpy(param_1 + 4,param_2 + 4,0x91);
  plVar5 = (long *)param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar1;
  param_2[3] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_2[3] = uVar3;
  memcpy(param_2 + 4,auStack_f0,0x91);
  return;
}


