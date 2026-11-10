/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f051c; name: FUN_021f051c
 */


void FUN_021f051c(long param_1,code *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x3a) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x3e) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x42) = uVar1;
  return;
}


