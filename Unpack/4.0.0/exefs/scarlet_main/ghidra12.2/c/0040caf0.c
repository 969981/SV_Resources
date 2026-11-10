/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040caf0; name: FUN_0040caf0
 */


void FUN_0040caf0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  FUN_00452f80(param_1,"external/openssl/crypto/ec/ec_lib.c",0x2af);
  return;
}


