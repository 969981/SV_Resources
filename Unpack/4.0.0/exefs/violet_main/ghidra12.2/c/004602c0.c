/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004602c0; name: FUN_004602c0
 */


long FUN_004602c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  long lVar1;
  int local_2c;
  undefined8 local_28;
  undefined8 local_18;
  
  lVar1 = FUN_00460100(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_18,
                       &local_2c,0);
  if (lVar1 == 0) {
    FUN_004806c0(0x23,0x6a,0x75,"external/openssl/crypto/pkcs12/p12_decr.c",0x5e);
    lVar1 = 0;
  }
  else {
    local_28 = local_18;
    lVar1 = FUN_003e1880(0,&local_28,(long)local_2c,param_2);
    if (param_6 != 0) {
      FUN_00453300(local_18,(long)local_2c);
    }
    if (lVar1 == 0) {
      FUN_004806c0(0x23,0x6a,0x65,"external/openssl/crypto/pkcs12/p12_decr.c",0x72);
    }
    FUN_00452f80(local_18,"external/openssl/crypto/pkcs12/p12_decr.c",0x73);
  }
  return lVar1;
}


