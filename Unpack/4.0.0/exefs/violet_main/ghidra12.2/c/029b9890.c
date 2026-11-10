/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b9890; name: FUN_029b9890
 */


void FUN_029b9890(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_010cb714(*param_1);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  plVar3 = (long *)param_3[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar2 = (long *)puVar1[3];
  puVar1[3] = plVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  FUN_029b9924(puVar1 + 4,param_3 + 4);
  FUN_029b9964(puVar1 + 0x11,param_3 + 0x11);
  return;
}


