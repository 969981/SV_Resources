/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119543c; name: FUN_0119543c
 */


void FUN_0119543c(long param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x27c) = param_2;
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_0119544c();
  return;
}


