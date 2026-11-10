/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e5000; name: thunk_FUN_003df2e0
 */


void thunk_FUN_003df2e0(long param_1)

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


