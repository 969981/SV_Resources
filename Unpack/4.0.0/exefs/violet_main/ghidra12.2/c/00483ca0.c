/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483ca0; name: FUN_00483ca0
 */


bool FUN_00483ca0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (((param_1 == 0) || (lVar2 = FUN_0048c550(*(undefined8 *)(param_1 + 0x50)), lVar2 == 0)) ||
     (iVar1 = FUN_0043de60(lVar2,param_2), iVar1 == -2)) {
    FUN_004806c0(0xb,0x80,0x75,"external/openssl/crypto/x509/x509_cmp.c",0x135);
    return false;
  }
  if (iVar1 == -1) {
    FUN_004806c0(0xb,0x80,0x73,"external/openssl/crypto/x509/x509_cmp.c",0x132);
    return false;
  }
  if (iVar1 == 0) {
    FUN_004806c0(0xb,0x80,0x74,"external/openssl/crypto/x509/x509_cmp.c",0x12f);
    iVar1 = 0;
  }
  return 0 < iVar1;
}


