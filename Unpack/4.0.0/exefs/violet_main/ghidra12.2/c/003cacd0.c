/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cacd0; name: FUN_003cacd0
 */


long FUN_003cacd0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00452c30(0x68,"external/openssl/ssl/statem/statem_dtls.c",0x3e);
  if (lVar1 == 0) {
    FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x3f);
    return 0;
  }
  if (param_1 == 0) {
    lVar2 = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    if (param_2 != 0) goto LAB_003cad28;
LAB_003cadb0:
    lVar3 = 0;
LAB_003cadb4:
    *(long *)(lVar1 + 0x60) = lVar3;
  }
  else {
    lVar2 = FUN_00452c30(param_1,"external/openssl/ssl/statem/statem_dtls.c",0x44);
    if (lVar2 == 0) {
      FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x45);
      uVar4 = 0x46;
    }
    else {
      *(long *)(lVar1 + 0x58) = lVar2;
      if (param_2 == 0) goto LAB_003cadb0;
LAB_003cad28:
      lVar3 = FUN_00452ce0(param_1 + 7U >> 3,"external/openssl/ssl/statem/statem_dtls.c",0x50);
      if (lVar3 != 0) goto LAB_003cadb4;
      FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x52);
      FUN_00452f80(lVar2,"external/openssl/ssl/statem/statem_dtls.c",0x53);
      uVar4 = 0x54;
    }
    FUN_00452f80(lVar1,"external/openssl/ssl/statem/statem_dtls.c",uVar4);
    lVar1 = 0;
  }
  return lVar1;
}


