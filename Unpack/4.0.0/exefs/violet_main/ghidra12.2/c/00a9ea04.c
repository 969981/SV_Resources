/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a9ea04; name: FUN_00a9ea04
 */


void FUN_00a9ea04(undefined8 *param_1,undefined2 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *(undefined2 *)*param_1 = *param_2;
  puVar3 = (undefined8 *)param_1[1];
  *puVar3 = *(undefined8 *)(param_2 + 4);
  puVar3[1] = *(undefined8 *)(param_2 + 8);
  puVar3[2] = *(undefined8 *)(param_2 + 0xc);
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)puVar3[3];
  puVar3[3] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  return;
}


