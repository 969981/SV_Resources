/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01802f4c; name: FUN_01802f4c
 */


void FUN_01802f4c(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0xc0) = param_1;
  FUN_018030ac();
  FUN_018032e8(*(undefined4 *)(param_2 + 0xc0),uVar1,param_2);
  return;
}


