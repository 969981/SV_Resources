/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278c970; name: FUN_0278c970
 */


void FUN_0278c970(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    nn::ssl::Context::Destroy();
    lVar1 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (lVar1 != 0) {
      FUN_0278c83c(param_1 + 0x58);
      return;
    }
  }
  return;
}


