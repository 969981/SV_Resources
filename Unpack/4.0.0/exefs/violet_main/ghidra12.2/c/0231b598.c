/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0231b598; name: FUN_0231b598
 */


undefined8 FUN_0231b598(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  undefined4 local_4;
  
  pcVar1 = FUN_0231cdbc;
  if (DAT_04847708 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_4 = param_2;
  FUN_0231ce84(auStack_40,param_1,pcVar1,0,&local_4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


