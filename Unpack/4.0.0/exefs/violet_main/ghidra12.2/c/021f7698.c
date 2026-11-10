/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f7698; name: FUN_021f7698
 */


uint FUN_021f7698(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ushort local_34 [2];
  
  local_34[0] = (ushort)*param_4;
  uVar2 = FUN_00cf40ac();
  uVar1 = FUN_021f7700(uVar2,local_34,param_4 + 1,param_1,param_3,param_2);
  *param_4 = (uint)local_34[0];
  return uVar1 & 1;
}


