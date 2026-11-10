/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049aa90; name: FUN_0049aa90
 */


long FUN_0049aa90(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_003e1350(param_2,0);
  if ((lVar1 == 0) || (lVar2 = FUN_0049ab10(lVar1), lVar2 == 0)) {
    FUN_004806c0(0x22,0x79,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0xb0);
    lVar2 = 0;
  }
  FUN_003eb520(lVar1);
  return lVar2;
}


