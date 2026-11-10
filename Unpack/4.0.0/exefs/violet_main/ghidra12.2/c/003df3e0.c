/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003df3e0; name: FUN_003df3e0
 */


void FUN_003df3e0(long param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) >> 4 & 1) == 0) {
      FUN_00452f80(*(undefined8 *)(param_1 + 8),"external/openssl/crypto/asn1/asn1_lib.c",0x15f);
    }
    if (param_2 == 0) {
      FUN_00452f80(param_1,"external/openssl/crypto/asn1/asn1_lib.c",0x161);
      return;
    }
  }
  return;
}


