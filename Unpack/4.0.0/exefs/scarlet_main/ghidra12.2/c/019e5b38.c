/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e5b38; name: FUN_019e5b38
 */


uint FUN_019e5b38(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0174f730(param_2,param_3,*(undefined8 *)(*param_1 + 0xc0),param_1[1],0,param_1[2],
                       param_1[3],param_1[4]);
  FUN_00c5db00(param_2,0);
  return uVar1 & 1;
}


