/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fac32c; name: FUN_01fac32c
 */


uint FUN_01fac32c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_01fac380(param_2,param_3,*param_1,param_1[1],param_1[2]);
  FUN_00c5db00(param_2,0);
  return uVar1 & 1;
}


