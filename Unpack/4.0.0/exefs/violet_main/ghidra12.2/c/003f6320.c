/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f6320; name: FUN_003f6320
 */


undefined8 FUN_003f6320(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[2];
  *param_3 = *param_2;
  uVar1 = FUN_0047e2f0(uVar3,param_3);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_004515c0(*(undefined8 *)(param_1 + 0x10),param_3);
    if (lVar2 != 0) {
      FUN_0047e0c0(uVar3,lVar2);
      FUN_00452f80(*(undefined8 *)(lVar2 + 8),"external/openssl/crypto/conf/conf_api.c",0x3f);
      FUN_00452f80(*(undefined8 *)(lVar2 + 0x10),"external/openssl/crypto/conf/conf_api.c",0x40);
      FUN_00452f80(lVar2,"external/openssl/crypto/conf/conf_api.c",0x41);
    }
    uVar1 = 1;
  }
  return uVar1;
}


