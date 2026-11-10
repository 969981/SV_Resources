/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0b61c; name: FUN_01e0b61c
 */


undefined1 FUN_01e0b61c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_018f6308(param_2,param_3,*(undefined8 *)(param_1[1] + 0xc0),param_1[2]);
  *(undefined2 *)*param_1 = uVar1;
  return *(undefined1 *)*param_1;
}


