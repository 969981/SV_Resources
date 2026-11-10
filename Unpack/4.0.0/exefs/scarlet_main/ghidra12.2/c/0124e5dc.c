/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124e5dc; name: FUN_0124e5dc
 */


void FUN_0124e5dc(long param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0124e624();
  if (((uVar1 & 1) == 0) && (*(int *)(param_1 + 0x28) < 0x1e)) {
    *(undefined1 *)(param_1 + *(int *)(param_1 + 0x28) + 8) = param_2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}


