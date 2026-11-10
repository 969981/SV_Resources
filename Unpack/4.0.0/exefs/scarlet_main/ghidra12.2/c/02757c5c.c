/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02757c5c; name: FUN_02757c5c
 */


void FUN_02757c5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = FUN_02757ccc();
  FUN_02757e8c(param_1,param_2,uVar1);
  return;
}


