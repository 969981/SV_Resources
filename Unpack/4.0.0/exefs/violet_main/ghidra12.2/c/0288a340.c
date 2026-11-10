/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0288a340; name: FUN_0288a340
 */


void FUN_0288a340(undefined8 param_1,long *param_2)

{
  undefined8 local_58;
  undefined4 local_4c;
  long *local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_0177dbc8(&local_48,param_2 + 1,"+inner");
  FUN_0135d26c(auStack_40,&local_48);
  local_4c = 0;
  if (*(long *)(*param_2 + 0x40) != 0) {
    FUN_01e83db8();
  }
  local_58 = 0;
  FUN_01945a78(param_1,auStack_40,&local_4c,&local_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


