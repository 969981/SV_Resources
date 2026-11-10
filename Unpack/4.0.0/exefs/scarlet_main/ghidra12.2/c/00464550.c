/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00464550; name: FUN_00464550
 */


long * FUN_00464550(int param_1,int param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = 0x30;
  if (param_2 != 0) {
    uVar1 = 0x10;
  }
  iVar2 = FUN_0047e650(&DAT_047f1a88,&LAB_00464bf0);
  plVar4 = (long *)0x0;
  if ((iVar2 != 0) && (DAT_047f1a8c != 0)) {
    plVar4 = (long *)FUN_00452ce0(0x40,"external/openssl/crypto/rand/rand_lib.c",0x1b9);
    if (plVar4 == (long *)0x0) {
      FUN_004806c0(0x24,0x74,0x41,"external/openssl/crypto/rand/rand_lib.c",0x1bb);
    }
    else {
      if (0x2fff < param_4) {
        param_4 = 0x3000;
      }
      plVar4[3] = param_3;
      plVar4[4] = param_4;
      if (uVar1 <= param_3) {
        uVar1 = param_3;
      }
      if (uVar1 <= param_4) {
        param_4 = uVar1;
      }
      plVar4[5] = param_4;
      if (param_2 == 0) {
        lVar3 = FUN_00452ce0(param_4,"external/openssl/crypto/rand/rand_lib.c",0x1c9);
        *plVar4 = lVar3;
      }
      else {
        lVar3 = thunk_FUN_00452ce0(param_4,"external/openssl/crypto/rand/rand_lib.c",0x1c7);
        *plVar4 = lVar3;
      }
      if (lVar3 == 0) {
        FUN_004806c0(0x24,0x74,0x41,"external/openssl/crypto/rand/rand_lib.c",0x1cc);
        FUN_00452f80(plVar4,"external/openssl/crypto/rand/rand_lib.c",0x1d6);
        plVar4 = (long *)0x0;
      }
      else {
        plVar4[7] = (long)param_1;
        *(int *)((long)plVar4 + 0x14) = param_2;
      }
    }
  }
  return plVar4;
}


