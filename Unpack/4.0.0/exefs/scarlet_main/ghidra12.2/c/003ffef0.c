/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ffef0; name: FUN_003ffef0
 */


long FUN_003ffef0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = FUN_00452ce0(0x90,"external/openssl/crypto/dh/dh_lib.c",0x2c);
  if (lVar2 == 0) {
    FUN_004806c0(5,0x69,0x41,"external/openssl/crypto/dh/dh_lib.c",0x2f);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x68) = 1;
  lVar3 = FUN_0047e540();
  *(long *)(lVar2 + 0x88) = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(5,0x69,0x41,"external/openssl/crypto/dh/dh_lib.c",0x36);
    FUN_00452f80(lVar2,"external/openssl/crypto/dh/dh_lib.c",0x37);
  }
  else {
    lVar3 = FUN_003ffa90();
    *(long *)(lVar2 + 0x78) = lVar3;
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
    iVar1 = FUN_00444640(6,lVar2,lVar2 + 0x70);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(lVar2 + 0x78) + 0x20);
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(lVar2), iVar1 != 0)) {
        return lVar2;
      }
      FUN_004806c0(5,0x69,0x46,"external/openssl/crypto/dh/dh_lib.c",0x55);
    }
    FUN_00400010(lVar2);
  }
  return 0;
}


