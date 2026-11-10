/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00489cf0; name: FUN_00489cf0
 */


long FUN_00489cf0(void)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x70,"external/openssl/crypto/x509/x509_vpm.c",0x56);
  if (lVar1 == 0) {
    FUN_004806c0(0xb,0x9f,0x41,"external/openssl/crypto/x509/x509_vpm.c",0x58);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x24) = 0xffffffff00000000;
  return lVar1;
}


