/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bb328; name: FUN_007bb328
 */


void FUN_007bb328(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0078cdf4();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    do {
      FUN_00792f30(param_1,2);
      uVar1 = FUN_0078cdf4(param_1);
    } while ((uVar1 & 1) != 0);
  }
  if (*(int *)(param_1 + 0xb28) == 1) {
    FUN_0078cc00(param_1 + 0xb28);
    return;
  }
  return;
}


