/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e55d0; name: FUN_018e55d0
 */


uint FUN_018e55d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_018e5630(param_2,param_3,*(undefined8 *)(*param_1 + 0xc0),param_1[1],param_1[2],
                       param_1[3],param_1[4],param_1[5],param_1[6]);
  FUN_00c5db00(param_2,0);
  return uVar1 & 1;
}


