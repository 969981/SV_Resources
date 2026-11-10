/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b7fcc; name: FUN_029b7fcc
 */


void FUN_029b7fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  *puVar5 = *param_2;
  puVar5[1] = param_2[1];
  puVar5[2] = param_2[2];
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)puVar5[3];
  puVar5[3] = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  puVar5 = (undefined8 *)param_1[1];
  *puVar5 = param_2[4];
  puVar5[1] = param_2[5];
  puVar5[2] = param_2[6];
  plVar4 = (long *)param_2[7];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = (long *)puVar5[3];
  puVar5[3] = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = param_2[8];
  uVar3 = param_2[10];
  puVar5[5] = param_2[9];
  puVar5[6] = uVar3;
  puVar5[4] = uVar1;
  return;
}


