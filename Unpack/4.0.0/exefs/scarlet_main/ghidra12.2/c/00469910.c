/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00469910; name: FUN_00469910
 */


long * FUN_00469910(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  pthread_t pVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)FUN_00452ce0(0x50,"external/openssl/crypto/bn/bn_blind.c",0x24);
  if (plVar2 == (long *)0x0) {
    FUN_004806c0(3,0x66,0x41,"external/openssl/crypto/bn/bn_blind.c",0x25);
    return (long *)0x0;
  }
  lVar3 = FUN_0047e540();
  plVar2[9] = lVar3;
  if (lVar3 == 0) {
    FUN_004806c0(3,0x66,0x41,"external/openssl/crypto/bn/bn_blind.c",0x2b);
    uVar5 = 0x2c;
    goto LAB_00469a40;
  }
  pVar4 = pthread_self();
  plVar2[4] = pVar4;
  if (param_1 == 0) {
LAB_0046996c:
    if (param_2 != 0) {
      lVar3 = FUN_003eb7a0(param_2);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_004699d8;
    }
    lVar3 = FUN_003eb7a0(param_3);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_003eb510(param_3,4);
      if (iVar1 != 0) {
        FUN_003ec740(plVar2[3],4);
      }
      *(undefined4 *)(plVar2 + 5) = 0xffffffff;
      return plVar2;
    }
  }
  else {
    lVar3 = FUN_003eb7a0(param_1);
    *plVar2 = lVar3;
    if (lVar3 != 0) goto LAB_0046996c;
  }
LAB_004699d8:
  FUN_003eb520(*plVar2);
  FUN_003eb520(plVar2[1]);
  FUN_003eb520(plVar2[2]);
  FUN_003eb520(plVar2[3]);
  FUN_0047e620(plVar2[9]);
  uVar5 = 0x5a;
LAB_00469a40:
  FUN_00452f80(plVar2,"external/openssl/crypto/bn/bn_blind.c",uVar5);
  return (long *)0x0;
}


