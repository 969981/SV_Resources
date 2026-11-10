/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019f44a8; name: FUN_019f44a8
 */


uint FUN_019f44a8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_019f4510(param_2,param_3,*(undefined8 *)(*param_1 + 0xc0),param_1[1],param_1[2],
                       param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9])
  ;
  FUN_00c5db00(param_2,0);
  return uVar1 & 1;
}


