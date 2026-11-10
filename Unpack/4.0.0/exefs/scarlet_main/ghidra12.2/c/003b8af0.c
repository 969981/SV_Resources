/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b8af0; name: FUN_003b8af0
 */


long FUN_003b8af0(void)

{
  int iVar1;
  long lVar2;
  time_t tVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_003b20f0(0x200000,0);
  if (iVar1 != 0) {
    lVar2 = FUN_00452ce0(0x280,"external/openssl/ssl/ssl_sess.c",0x48);
    if (lVar2 == 0) {
      FUN_004806c0(0x14,0xbd,0x41,"external/openssl/ssl/ssl_sess.c",0x4a);
      return 0;
    }
    *(undefined8 *)(lVar2 + 0x1c8) = 1;
    *(undefined4 *)(lVar2 + 0x1d0) = 1;
    *(undefined8 *)(lVar2 + 0x1d8) = 0x130;
    tVar3 = time((time_t *)0x0);
    *(time_t *)(lVar2 + 0x1e0) = tVar3;
    lVar4 = FUN_0047e540();
    *(long *)(lVar2 + 0x278) = lVar4;
    if (lVar4 == 0) {
      FUN_004806c0(0x14,0xbd,0x41,"external/openssl/ssl/ssl_sess.c",0x54);
      uVar5 = 0x55;
    }
    else {
      iVar1 = FUN_00444640(2,lVar2,lVar2 + 0x200);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_0047e620(*(undefined8 *)(lVar2 + 0x278));
      uVar5 = 0x5b;
    }
    FUN_00452f80(lVar2,"external/openssl/ssl/ssl_sess.c",uVar5);
  }
  return 0;
}


