/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f7640; name: FUN_021f7640
 */


uint FUN_021f7640(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ushort local_14 [2];
  
  local_14[0] = (ushort)*param_3;
  uVar2 = FUN_00cf40ac();
  uVar1 = FUN_01df494c(uVar2,local_14,param_3 + 1,param_1,param_2);
  *param_3 = (uint)local_14[0];
  return uVar1 & 1;
}


