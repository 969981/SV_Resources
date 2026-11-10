/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9219c; name: FUN_01f9219c
 */


uint FUN_01f9219c(long param_1)

{
  uint uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x9337fbccbebbb439;
  pcStack_38 = "TransitionPropertyHolder";
  local_30 = 0x18;
  local_28 = (long *)0x0;
  uVar1 = FUN_01f91f54(param_1 + 0x120,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1 & 1;
}


