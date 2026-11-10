/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b6b28; name: FUN_027b6b28
 */


void FUN_027b6b28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_58;
  undefined4 local_4c;
  long *local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_0177dbc8(&local_48,param_2 + 1,"+inner");
  FUN_0135d26c(auStack_40,&local_48);
  local_4c = 0;
  FUN_0278e4d4(*param_2);
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


