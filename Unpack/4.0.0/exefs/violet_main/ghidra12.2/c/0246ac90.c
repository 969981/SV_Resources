/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0246ac90; name: FUN_0246ac90
 */


void FUN_0246ac90(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 local_40 [3];
  long *local_28;
  
  pcVar1 = FUN_0246f338;
  if (DAT_0484c150 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_40[0] = param_2;
  FUN_0246f3a0(&local_28,param_3,pcVar1,0,local_40);
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


