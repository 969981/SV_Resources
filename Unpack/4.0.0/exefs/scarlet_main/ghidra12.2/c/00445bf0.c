/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00445bf0; name: FUN_00445bf0
 */


void FUN_00445bf0(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_0042bb10(param_1[2]);
  FUN_0042bb10(param_1[3]);
  FUN_0042bb10(param_1[1]);
  *param_1 = 0;
  FUN_0042bbe0(param_1[2]);
  FUN_0042bbe0(param_1[3]);
  FUN_0042bbe0(param_1[1]);
  FUN_00452f80(param_1,"external/openssl/crypto/hmac/hmac.c",0xa3);
  return;
}


