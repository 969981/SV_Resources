/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003df280; name: FUN_003df280
 */


long FUN_003df280(void)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x18,"external/openssl/crypto/asn1/asn1_lib.c",0x151);
  if (lVar1 == 0) {
    FUN_004806c0(0xd,0x82,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x153);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  return lVar1;
}


