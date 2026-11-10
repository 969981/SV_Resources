/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f91ee4; name: FUN_01f91ee4
 */


uint FUN_01f91ee4(long param_1)

{
  uint uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xe2064d31c96778af;
  pcStack_38 = "OrbitsPropertyHolder";
  local_30 = 0x14;
  local_28 = (long *)0x0;
  uVar1 = FUN_01f91f54(param_1 + 0x120,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1 & 1;
}


