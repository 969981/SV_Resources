/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029992cc; name: FUN_029992cc
 */


void FUN_029992cc(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  
  local_18[0] = param_2[2];
  uVar1 = FUN_015d9a7c(*(undefined8 *)(param_1 + 0x38),param_2[1],*param_2);
  FUN_0298da98(uVar1,local_18);
  return;
}


