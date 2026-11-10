/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026957f8; name: FUN_026957f8
 */


uint FUN_026957f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  local_20 = *param_3;
  uVar1 = FUN_0269582c(param_1,&uStack_18,&local_20);
  return uVar1 & 1;
}


