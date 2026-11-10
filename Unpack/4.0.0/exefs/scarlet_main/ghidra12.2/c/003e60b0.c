/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e60b0; name: FUN_003e60b0
 */


undefined8 FUN_003e60b0(ulong param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 < param_2) {
    uVar4 = 0x67;
    uVar5 = 0x142;
  }
  else {
    uVar4 = FUN_00446030(0x100,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar4 = FUN_00445eb0(1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    plVar2 = (long *)FUN_00452ce0(0x18,"external/openssl/crypto/async/async.c",0x14c);
    if (plVar2 != (long *)0x0) {
      lVar3 = FUN_0047dcf0(0,param_2 & 0xffffffff);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        FUN_004806c0(0x33,0x65,0x41,"external/openssl/crypto/async/async.c",0x154);
        uVar4 = 0x155;
      }
      else {
        plVar2[2] = param_1;
        if (param_2 != 0) {
          lVar3 = FUN_00452ce0(0x28,"external/openssl/crypto/async/async.c",0x52);
          if (lVar3 == 0) {
            FUN_004806c0(0x33,0x66,0x41,"external/openssl/crypto/async/async.c",0x54);
          }
          else {
            *(undefined4 *)(lVar3 + 0x1c) = 0;
            FUN_00452f80(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",0x60)
            ;
            FUN_00452f80(lVar3,"external/openssl/crypto/async/async.c",0x62);
          }
        }
        plVar2[1] = 0;
        iVar1 = FUN_0049e5f0(&DAT_047f1810,plVar2);
        if (iVar1 != 0) {
          return 1;
        }
        FUN_004806c0(0x33,0x65,0x65,"external/openssl/crypto/async/async.c",0x16d);
        if ((*plVar2 != 0) && (lVar3 = FUN_0047e380(), lVar3 != 0)) {
          FUN_00452f80(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",0x60);
          FUN_00452f80(lVar3,"external/openssl/crypto/async/async.c",0x62);
          lVar3 = FUN_0047e380(*plVar2);
          if (lVar3 != 0) {
            do {
              FUN_00452f80(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",
                           0x60);
              FUN_00452f80(lVar3,"external/openssl/crypto/async/async.c",0x62);
              lVar3 = FUN_0047e380(*plVar2);
            } while (lVar3 != 0);
          }
        }
        FUN_0047db00(*plVar2);
        uVar4 = 0x175;
      }
      FUN_00452f80(plVar2,"external/openssl/crypto/async/async.c",uVar4);
      return 0;
    }
    uVar4 = 0x41;
    uVar5 = 0x14e;
  }
  FUN_004806c0(0x33,0x65,uVar4,"external/openssl/crypto/async/async.c",uVar5);
  return 0;
}


