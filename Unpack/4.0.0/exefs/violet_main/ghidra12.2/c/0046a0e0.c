/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046a0e0; name: FUN_0046a0e0
 */


long FUN_0046a0e0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = FUN_00452ce0(0xb0,"external/openssl/crypto/rsa/rsa_lib.c",0x34);
  if (lVar2 == 0) {
    FUN_004806c0(4,0x6a,0x41,"external/openssl/crypto/rsa/rsa_lib.c",0x37);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x70) = 1;
  lVar3 = FUN_0047e540();
  *(long *)(lVar2 + 0xa8) = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(4,0x6a,0x41,"external/openssl/crypto/rsa/rsa_lib.c",0x3e);
    FUN_00452f80(lVar2,"external/openssl/crypto/rsa/rsa_lib.c",0x3f);
  }
  else {
    lVar3 = FUN_0046a600();
    *(long *)(lVar2 + 8) = lVar3;
    *(uint *)(lVar2 + 0x74) = *(uint *)(lVar3 + 0x48) & 0xfffffbff;
    iVar1 = FUN_00444640(9,lVar2,lVar2 + 0x68);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(lVar2 + 8) + 0x38);
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(lVar2), iVar1 != 0)) {
        return lVar2;
      }
      FUN_004806c0(4,0x6a,0x46,"external/openssl/crypto/rsa/rsa_lib.c",0x5e);
    }
    FUN_0046a210(lVar2);
  }
  return 0;
}


