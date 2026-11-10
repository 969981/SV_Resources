/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040fa80; name: FUN_0040fa80
 */


long FUN_0040fa80(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0040f920();
  if (lVar1 != 0) {
    lVar2 = FUN_00452c30(lVar1,"external/openssl/crypto/ec/ec_oct.c",0x8b);
    if (lVar2 == 0) {
      FUN_004806c0(0x10,0x119,0x41,"external/openssl/crypto/ec/ec_oct.c",0x8c);
    }
    else {
      lVar1 = FUN_0040f920(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar1 != 0) {
        *param_4 = lVar2;
        return lVar1;
      }
      FUN_00452f80(lVar2,"external/openssl/crypto/ec/ec_oct.c",0x91);
    }
  }
  return 0;
}


