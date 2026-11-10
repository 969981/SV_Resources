/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f4a70; name: FUN_003f4a70
 */


long FUN_003f4a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_003f63c0();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      FUN_004806c0(0xe,0x6d,0x6a,"external/openssl/crypto/conf/conf_lib.c",0x10e);
    }
    else {
      FUN_004806c0(0xe,0x6d,0x6c,"external/openssl/crypto/conf/conf_lib.c",0x111);
      FUN_00481380(4,"group=",param_2," name=",param_3);
    }
  }
  return lVar1;
}


