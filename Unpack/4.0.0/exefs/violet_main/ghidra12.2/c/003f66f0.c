/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f66f0; name: FUN_003f66f0
 */


undefined8 * FUN_003f66f0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *__dest;
  long lVar5;
  
  lVar2 = FUN_0047dcc0();
  if ((lVar2 == 0) ||
     (puVar3 = (undefined8 *)FUN_00452c30(0x18,"external/openssl/crypto/conf/conf_api.c",0xc5),
     puVar3 == (undefined8 *)0x0)) {
    FUN_0047db00(lVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    sVar4 = strlen(param_2);
    sVar4 = (size_t)((int)sVar4 + 1);
    __dest = (void *)FUN_00452c30(sVar4,"external/openssl/crypto/conf/conf_api.c",200);
    *puVar3 = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,sVar4);
      puVar3[1] = 0;
      puVar3[2] = lVar2;
      lVar5 = FUN_004515c0(*(undefined8 *)(param_1 + 0x10),puVar3);
      if ((lVar5 == 0) && (iVar1 = FUN_00451cf0(*(undefined8 *)(param_1 + 0x10)), iVar1 < 1)) {
        return puVar3;
      }
    }
    FUN_0047db00(lVar2);
    FUN_00452f80(*puVar3,"external/openssl/crypto/conf/conf_api.c",0xd7);
  }
  FUN_00452f80(puVar3,"external/openssl/crypto/conf/conf_api.c",0xd8);
  return (undefined8 *)0x0;
}


