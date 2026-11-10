/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f4750; name: FUN_003f4750
 */


undefined8 *
FUN_003f4750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_047f1818 != 0) || (DAT_047f1818 = FUN_0047dcc0(), DAT_047f1818 != 0)) {
    puVar2 = (undefined8 *)FUN_00452ce0(0x30,"external/openssl/crypto/conf/conf_mod.c",0xee);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_004806c0(0xe,0x7a,0x41,"external/openssl/crypto/conf/conf_mod.c",0xef);
      return (undefined8 *)0x0;
    }
    *puVar2 = param_1;
    lVar3 = FUN_0045abd0(param_2,"external/openssl/crypto/conf/conf_mod.c",0xf4);
    puVar2[1] = lVar3;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    if (lVar3 == 0) {
      uVar4 = 0xf8;
    }
    else {
      iVar1 = FUN_0047e2f0(DAT_047f1818,puVar2);
      if (iVar1 != 0) {
        return puVar2;
      }
      FUN_00452f80(puVar2[1],"external/openssl/crypto/conf/conf_mod.c",0xfd);
      uVar4 = 0xfe;
    }
    FUN_00452f80(puVar2,"external/openssl/crypto/conf/conf_mod.c",uVar4);
  }
  return (undefined8 *)0x0;
}


