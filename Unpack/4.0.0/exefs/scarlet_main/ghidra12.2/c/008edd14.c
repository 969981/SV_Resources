/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008edd14; name: FUN_008edd14
 */


undefined8 FUN_008edd14(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008f1cbc(param_2,0,2,param_3);
  param_1[1] = uVar1;
  uVar1 = FUN_008f1cbc(param_2,4,2,param_3);
  *param_1 = uVar1;
  return 1;
}


