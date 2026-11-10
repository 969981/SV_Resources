/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00484810; name: FUN_00484810
 */


long FUN_00484810(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  iVar1 = FUN_0047e430(uVar5);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = FUN_0047e450(uVar5,iVar1);
      if (*(long *)(lVar3 + 8) == param_2) {
        return lVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(uVar5);
    } while (iVar1 < iVar2);
  }
  lVar3 = FUN_00452ce0(0x20,"external/openssl/crypto/x509/x509_lu.c",0x19);
  if (lVar3 == 0) {
    FUN_004806c0(0xb,0x9b,0x41,"external/openssl/crypto/x509/x509_lu.c",0x1c);
  }
  else {
    *(long *)(lVar3 + 8) = param_2;
    if ((*(code **)(param_2 + 8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_2 + 8))(lVar3), iVar1 != 0)) {
      *(long *)(lVar3 + 0x18) = param_1;
      iVar1 = FUN_0047e2f0(*(undefined8 *)(param_1 + 0x10),lVar3);
      if (iVar1 != 0) {
        return lVar3;
      }
      FUN_004806c0(0xb,0x9d,0x41,"external/openssl/crypto/x509/x509_lu.c",0x123);
      if ((*(long *)(lVar3 + 8) != 0) &&
         (pcVar4 = *(code **)(*(long *)(lVar3 + 8) + 0x10), pcVar4 != (code *)0x0)) {
        (*pcVar4)(lVar3);
      }
      FUN_00452f80(lVar3,"external/openssl/crypto/x509/x509_lu.c",0x2e);
      return 0;
    }
    FUN_00452f80(lVar3,"external/openssl/crypto/x509/x509_lu.c",0x22);
  }
  FUN_004806c0(0xb,0x9d,0x41,"external/openssl/crypto/x509/x509_lu.c",0x11b);
  return 0;
}


