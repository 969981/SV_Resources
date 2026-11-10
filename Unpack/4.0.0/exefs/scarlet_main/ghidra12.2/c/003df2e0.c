/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003df2e0; name: FUN_003df2e0
 */


void FUN_003df2e0(long param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      FUN_00452f80(*(undefined8 *)(param_1 + 8),"external/openssl/crypto/asn1/asn1_lib.c",0x15f);
    }
    if ((uVar1 >> 7 & 1) == 0) {
      FUN_00452f80(param_1,"external/openssl/crypto/asn1/asn1_lib.c",0x161);
      return;
    }
  }
  return;
}


