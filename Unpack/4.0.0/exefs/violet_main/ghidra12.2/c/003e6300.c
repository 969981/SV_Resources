/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e6300; name: FUN_003e6300
 */


void FUN_003e6300(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_0049e5d0(&DAT_047f1810);
  if (plVar2 != (long *)0x0) {
    if ((*plVar2 != 0) && (lVar3 = FUN_0047e380(), lVar3 != 0)) {
      FUN_00452f80(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",0x60);
      FUN_00452f80(lVar3,"external/openssl/crypto/async/async.c",0x62);
      lVar3 = FUN_0047e380(*plVar2);
      if (lVar3 != 0) {
        do {
          FUN_00452f80(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",0x60);
          FUN_00452f80(lVar3,"external/openssl/crypto/async/async.c",0x62);
          lVar3 = FUN_0047e380(*plVar2);
        } while (lVar3 != 0);
      }
    }
    FUN_0047db00(*plVar2);
    FUN_00452f80(plVar2,"external/openssl/crypto/async/async.c",0x180);
    FUN_0049e5f0(&DAT_047f1810,0);
  }
  FUN_003e6470();
  uVar4 = FUN_0049e5d0(&DAT_047f1808);
  iVar1 = FUN_0049e5f0(&DAT_047f1808,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00452f80(uVar4,"external/openssl/crypto/async/async.c",0x49);
  return;
}


