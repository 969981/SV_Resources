/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fef20; name: FUN_003fef20
 */


void FUN_003fef20(long param_1)

{
  if (param_1 != 0) {
    FUN_003eb520();
    FUN_003eb520(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_00452f80(param_1,"external/openssl/crypto/bn/bn_recp.c",0x2a);
      return;
    }
  }
  return;
}


