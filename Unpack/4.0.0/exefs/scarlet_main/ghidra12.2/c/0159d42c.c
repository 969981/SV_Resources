/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159d42c; name: FUN_0159d42c
 */


void FUN_0159d42c(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = 3;
    if ((*(uint *)(param_1 + 0x4c) & 0xfffffffd) != 1) {
      uVar1 = 4;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
  }
  return;
}


