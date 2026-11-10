/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cfbd0; name: FUN_019cfbd0
 */


void FUN_019cfbd0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 local_40 [3];
  long *local_28;
  
  puVar1 = &LAB_01947c9c;
  if (DAT_0484c138 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_40[0] = param_2;
  FUN_019cfc68(&local_28,param_3,puVar1,0,local_40);
  plVar2 = local_28;
  if (local_28 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    (**(code **)(*local_28 + 0x10))(local_28);
    *param_1 = 1;
    *(long **)(param_1 + 8) = plVar2;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
  }
  return;
}


