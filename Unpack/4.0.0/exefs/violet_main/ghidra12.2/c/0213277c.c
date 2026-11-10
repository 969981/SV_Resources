/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213277c; name: FUN_0213277c
 */


uint FUN_0213277c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_021327d0(param_2,param_3,*param_1,param_1[1],param_1[2],param_1[3]);
  FUN_00c5db00(param_2,0);
  return uVar1 & 1;
}


