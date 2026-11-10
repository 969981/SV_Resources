/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00462110; name: FUN_00462110
 */


long * FUN_00462110(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  iVar1 = FUN_0047e650(&DAT_047f1a5c,&LAB_00461f50);
  plVar5 = (long *)0x0;
  if (((iVar1 == 0) || (DAT_047f1a60 == 0)) ||
     (plVar5 = (long *)FUN_0049e5d0(&DAT_047f1a78), plVar5 != (long *)0x0)) {
    return plVar5;
  }
  iVar1 = FUN_00445eb0(4);
  lVar2 = DAT_047f1a68;
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  plVar5 = (long *)FUN_00461210(1,DAT_044b6238,DAT_047f1a58,DAT_047f1a68);
  if (plVar5 == (long *)0x0) goto LAB_004622b4;
  if (lVar2 == 0) {
    if ((int)plVar5[0x13] == 0) {
      if (*plVar5 != 0) goto LAB_004621a0;
      if (((long *)plVar5[1] == (long *)0x0) || (*(long *)plVar5[1] != 0)) {
        lVar2 = FUN_0047e540();
        *plVar5 = lVar2;
        if (lVar2 != 0) goto LAB_004621a0;
        uVar4 = 0x344;
        uVar3 = 0x7e;
      }
      else {
        uVar3 = 0x82;
        uVar4 = 0x33d;
      }
    }
    else {
      uVar3 = 0x81;
      uVar4 = 0x336;
    }
    FUN_004806c0(0x24,0x77,uVar3,"external/openssl/crypto/rand/drbg_lib.c",uVar4);
    if (plVar5[0x2a] != 0) {
      (**(code **)(plVar5[0x2a] + 0x18))(plVar5);
    }
    FUN_00464890(plVar5[5]);
    FUN_0047e620(*plVar5);
    FUN_00444c10(0xf,plVar5,plVar5 + 0x14);
    if ((int)plVar5[2] == 0) {
      FUN_00453260(plVar5,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    }
    else {
      FUN_00453360(plVar5,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x113);
    }
    plVar5 = (long *)0x0;
  }
  else {
LAB_004621a0:
    *(undefined4 *)(plVar5 + 0x11) = 1;
    *(undefined4 *)((long)plVar5 + 0x8c) = 1;
    FUN_00461410(plVar5,"OpenSSL NIST SP 800-90A DRBG",0x1c);
  }
LAB_004622b4:
  FUN_0049e5f0(&DAT_047f1a78,plVar5);
  return plVar5;
}


