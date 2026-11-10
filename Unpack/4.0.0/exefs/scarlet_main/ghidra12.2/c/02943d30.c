/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943d30; name: FUN_02943d30
 */


void FUN_02943d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0154b6d4(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_0291b234(*(undefined8 *)(param_1 + 8));
  FUN_010e171c(param_2,uVar1,uVar2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
  return;
}


