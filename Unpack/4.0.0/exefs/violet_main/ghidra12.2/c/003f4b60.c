/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f4b60; name: FUN_003f4b60
 */


long FUN_003f4b60(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003f4c20();
    lVar1 = (**(code **)(lVar1 + 8))();
  }
  else {
    lVar1 = (**(code **)(param_1 + 8))();
  }
  if (lVar1 == 0) {
    FUN_004806c0(0xe,0x6f,0x41,"external/openssl/crypto/conf/conf_lib.c",0xba);
    return 0;
  }
  return lVar1;
}


