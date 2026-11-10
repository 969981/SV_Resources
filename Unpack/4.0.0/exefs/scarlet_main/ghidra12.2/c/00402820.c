/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00402820; name: FUN_00402820
 */


long * FUN_00402820(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (DAT_047f1840 == 0) {
    DAT_047f1840 = FUN_00402d50();
  }
  plVar2 = (long *)FUN_00452ce0(0x48,"external/openssl/crypto/dso/dso_lib.c",0x1b);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(0x25,0x71,0x41,"external/openssl/crypto/dso/dso_lib.c",0x1d);
    return (long *)0x0;
  }
  lVar3 = FUN_0047dcc0();
  plVar2[1] = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(0x25,0x71,0x41,"external/openssl/crypto/dso/dso_lib.c",0x23);
    uVar4 = 0x24;
  }
  else {
    *plVar2 = DAT_047f1840;
    *(undefined4 *)(plVar2 + 2) = 1;
    lVar3 = FUN_0047e540();
    plVar2[8] = lVar3;
    if (lVar3 != 0) {
      if ((*(code **)(*plVar2 + 0x38) == (code *)0x0) ||
         (iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2), iVar1 != 0)) {
        return plVar2;
      }
      FUN_00402960(plVar2);
      return (long *)0x0;
    }
    FUN_004806c0(0x25,0x71,0x41,"external/openssl/crypto/dso/dso_lib.c",0x2b);
    FUN_0047db00(plVar2[1]);
    uVar4 = 0x2d;
  }
  FUN_00452f80(plVar2,"external/openssl/crypto/dso/dso_lib.c",uVar4);
  return (long *)0x0;
}


