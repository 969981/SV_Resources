/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013668d4; name: FUN_013668d4
 */


void FUN_013668d4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = (long *)*plVar3;
  *plVar3 = (long)plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined1 *)param_1[1] = *(undefined1 *)(param_2 + 1);
  return;
}


