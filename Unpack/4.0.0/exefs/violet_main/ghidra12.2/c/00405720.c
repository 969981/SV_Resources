/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00405720; name: FUN_00405720
 */


int FUN_00405720(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00404bf0(param_1,0);
  if (lVar2 == 0) {
    FUN_004806c0(0x10,0xbf,0x78,"external/openssl/crypto/ec/ec_asn1.c",0x3d4);
    return 0;
  }
  iVar1 = FUN_003e3920(lVar2,param_2,PTR_DAT_047cd290);
  if (iVar1 == 0) {
    FUN_004806c0(0x10,0xbf,0x79,"external/openssl/crypto/ec/ec_asn1.c",0x3d8);
  }
  FUN_003e4550(lVar2,PTR_DAT_047cd290);
  return iVar1;
}


