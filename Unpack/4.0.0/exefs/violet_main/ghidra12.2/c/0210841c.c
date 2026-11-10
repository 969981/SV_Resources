/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210841c; name: FUN_0210841c
 */


void FUN_0210841c(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  
  uVar1 = FUN_00d9bf48();
  plVar2 = (long *)FUN_02107fe8(param_1,uVar1);
  local_28 = 0x783b2b1c3b4ad609;
  local_2c = uVar1;
  local_30 = (**(code **)(*plVar2 + 0xf0))();
  local_30 = local_30 & 0xffff;
  FUN_0194276c(param_1,&local_28,&local_2c,&local_30);
  return;
}


