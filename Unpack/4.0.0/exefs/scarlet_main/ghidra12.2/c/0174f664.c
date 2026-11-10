/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0174f664; name: FUN_0174f664
 */


undefined1 FUN_0174f664(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0174f6b0(param_2,param_3,*(undefined8 *)(param_1[1] + 0xc0),param_1[2],param_1[3],
                       param_1[4],param_1[5]);
  *(undefined2 *)*param_1 = uVar1;
  return *(undefined1 *)*param_1;
}


