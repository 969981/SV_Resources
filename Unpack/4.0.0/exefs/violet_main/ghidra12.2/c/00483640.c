/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483640; name: FUN_00483640
 */


long FUN_00483640(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = FUN_00452ce0(0x50,"external/openssl/crypto/asn1/x_pkey.c",0x14);
  if (lVar1 != 0) {
    uVar2 = FUN_003e55a0();
    *(undefined8 *)(lVar1 + 8) = uVar2;
    lVar3 = FUN_003e4ff0();
    *(long *)(lVar1 + 0x10) = lVar3;
    if ((lVar3 != 0) && (*(long *)(lVar1 + 8) != 0)) {
      return lVar1;
    }
    FUN_003e55b0();
    thunk_FUN_003df2e0(*(undefined8 *)(lVar1 + 0x10));
    FUN_0043e1f0(*(undefined8 *)(lVar1 + 0x18));
    if (*(int *)(lVar1 + 0x30) != 0) {
      FUN_00452f80(*(undefined8 *)(lVar1 + 0x28),"external/openssl/crypto/asn1/x_pkey.c",0x2d);
    }
    FUN_00452f80(lVar1,"external/openssl/crypto/asn1/x_pkey.c",0x2e);
  }
  FUN_004806c0(0xd,0xad,0x41,"external/openssl/crypto/asn1/x_pkey.c",0x20);
  return 0;
}


