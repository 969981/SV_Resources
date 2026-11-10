/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01deabd4; name: FUN_01deabd4
 */


void FUN_01deabd4(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x9e693910c85ea812;
  pcStack_38 = "L_window_marking_00/out";
  local_30 = 0x17;
  local_28 = (long *)0x0;
  lVar1 = FUN_00e895ec(*(undefined8 *)(param_1 + 0x38),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 != 0) {
    FUN_00dfcea4(lVar1);
  }
  return;
}


