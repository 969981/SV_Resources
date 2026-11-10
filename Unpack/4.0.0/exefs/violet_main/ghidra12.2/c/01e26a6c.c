/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e26a6c; name: FUN_01e26a6c
 */


void FUN_01e26a6c(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)*param_1 = *param_2;
  puVar3 = (undefined8 *)param_1[1];
  *puVar3 = *(undefined8 *)(param_2 + 8);
  puVar3[1] = *(undefined8 *)(param_2 + 0x10);
  puVar3[2] = *(undefined8 *)(param_2 + 0x18);
  plVar2 = *(long **)(param_2 + 0x20);
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


