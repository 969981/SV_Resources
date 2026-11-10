/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00401370; name: thunk_FUN_00401380
 */


long thunk_FUN_00401380(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = FUN_00452ce0(0x68,"external/openssl/crypto/dsa/dsa_lib.c",0x33);
  if (lVar2 == 0) {
    FUN_004806c0(10,0x67,0x41,"external/openssl/crypto/dsa/dsa_lib.c",0x36);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x40) = 1;
  lVar3 = FUN_0047e540();
  *(long *)(lVar2 + 0x60) = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(10,0x67,0x41,"external/openssl/crypto/dsa/dsa_lib.c",0x3d);
    FUN_00452f80(lVar2,"external/openssl/crypto/dsa/dsa_lib.c",0x3e);
  }
  else {
    lVar3 = FUN_004017b0();
    *(long *)(lVar2 + 0x50) = lVar3;
    *(uint *)(lVar2 + 0x30) = *(uint *)(lVar3 + 0x40) & 0xfffffbff;
    iVar1 = FUN_00444640(7,lVar2,lVar2 + 0x48);
    if (iVar1 != 0) {
      pcVar4 = *(code **)(*(long *)(lVar2 + 0x50) + 0x30);
      if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(lVar2), iVar1 != 0)) {
        return lVar2;
      }
      FUN_004806c0(10,0x67,0x46,"external/openssl/crypto/dsa/dsa_lib.c",0x5c);
    }
    FUN_004014b0(lVar2);
  }
  return 0;
}


