/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0246a7b0; name: FUN_0246a7b0
 */


void FUN_0246a7b0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 local_38;
  long *local_18;
  
  pcVar1 = FUN_0246eef8;
  if (DAT_0484c140 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_38 = FUN_024445fc(param_3);
  FUN_0246ef24(&local_18,param_2,pcVar1,0,&local_38);
  plVar2 = local_18;
  if (local_18 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    (**(code **)(*local_18 + 0x10))(local_18);
    *param_1 = 1;
    *(long **)(param_1 + 8) = plVar2;
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x18))();
    }
  }
  return;
}


