/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00484450; name: FUN_00484450
 */


undefined4 * FUN_00484450(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined4 *)FUN_00452ce0(0x98,"external/openssl/crypto/x509/x509_lu.c",0xa7);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004806c0(0xb,0x9e,0x41,"external/openssl/crypto/x509/x509_lu.c",0xaa);
    return (undefined4 *)0x0;
  }
  lVar3 = FUN_0047de20(&LAB_00484600);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0x41;
    uVar5 = 0xae;
  }
  else {
    *puVar2 = 1;
    lVar3 = FUN_0047dcc0();
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x41;
      uVar5 = 0xb3;
    }
    else {
      lVar3 = FUN_00489cf0();
      *(long *)(puVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        uVar4 = 0x41;
        uVar5 = 0xb8;
      }
      else {
        iVar1 = FUN_00444640(4,puVar2,puVar2 + 0x20);
        if (iVar1 == 0) {
          uVar4 = 0x41;
          uVar5 = 0xbc;
        }
        else {
          lVar3 = FUN_0047e540();
          *(long *)(puVar2 + 0x24) = lVar3;
          if (lVar3 == 0) {
            uVar4 = 0x41;
            uVar5 = 0xc2;
          }
          else {
            FUN_0049e3d0();
            iVar1 = FUN_0049df20(puVar2);
            if (iVar1 != 0) {
              puVar2[0x22] = 1;
              return puVar2;
            }
            uVar4 = 0x44;
            uVar5 = 0xca;
          }
        }
      }
    }
  }
  FUN_004806c0(0xb,0x9e,uVar4,"external/openssl/crypto/x509/x509_lu.c",uVar5);
  FUN_00489d50(*(undefined8 *)(puVar2 + 6));
  FUN_0047db00(*(undefined8 *)(puVar2 + 2));
  FUN_0047db00(*(undefined8 *)(puVar2 + 4));
  FUN_00452f80(puVar2,"external/openssl/crypto/x509/x509_lu.c",0xd6);
  return (undefined4 *)0x0;
}


