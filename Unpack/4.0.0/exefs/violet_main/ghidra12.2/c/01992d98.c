/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01992d98; name: FUN_01992d98
 */


uint FUN_01992d98(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *local_8;
  
  local_8 = *(long **)(param_1 + 0x30);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x58))();
  }
  uVar1 = FUN_01992df4(&local_8,param_2);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return uVar1 & 1;
}


