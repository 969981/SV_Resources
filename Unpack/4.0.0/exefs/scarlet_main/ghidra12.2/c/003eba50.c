/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eba50; name: FUN_003eba50
 */


long * FUN_003eba50(byte *param_1,int param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_3 == (long *)0x0) {
    plVar7 = (long *)FUN_00452ce0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xf6);
    if (plVar7 == (long *)0x0) {
      FUN_004806c0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xf7);
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar7 + 0x14) = 1;
    param_3 = plVar7;
  }
  else {
    plVar7 = (long *)0x0;
  }
  if (0 < param_2) {
    do {
      if (*param_1 != 0) goto LAB_003ebac8;
      param_1 = param_1 + 1;
      iVar2 = param_2 + -1;
      bVar1 = 0 < param_2;
      param_2 = iVar2;
    } while (iVar2 != 0 && bVar1);
LAB_003ebb84:
    *(undefined4 *)(param_3 + 1) = 0;
    return param_3;
  }
  if (param_2 == 0) goto LAB_003ebb84;
LAB_003ebac8:
  uVar4 = param_2 - 1U >> 2;
  uVar5 = uVar4 + 1;
  uVar6 = (ulong)uVar5;
  if ((*(int *)((long)param_3 + 0xc) <= (int)uVar4) &&
     (lVar3 = FUN_003eb670(param_3,uVar6), lVar3 == 0)) {
    if (plVar7 != (long *)0x0) {
      if ((*(uint *)((long)plVar7 + 0x14) >> 1 & 1) == 0) {
        if ((*(uint *)((long)plVar7 + 0x14) >> 3 & 1) == 0) {
          FUN_00452f80(*plVar7,"external/openssl/crypto/bn/bn_lib.c",0xd0);
        }
        else {
          FUN_00453360(*plVar7,(long)*(int *)((long)plVar7 + 0xc) << 2,
                       "external/openssl/crypto/bn/bn_lib.c",0xcc);
        }
      }
      if ((*(byte *)((long)plVar7 + 0x14) & 1) != 0) {
        FUN_00452f80(plVar7,"external/openssl/crypto/bn/bn_lib.c",0xe7);
      }
    }
    return (long *)0x0;
  }
  *(uint *)(param_3 + 1) = uVar5;
  *(undefined4 *)(param_3 + 2) = 0;
  if (param_2 != 0) {
    uVar4 = 0;
    uVar5 = param_2 - 1U & 3;
    do {
      while( true ) {
        uVar4 = (uint)*param_1 | uVar4 << 8;
        param_2 = param_2 + -1;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
        if (param_2 == 0) goto LAB_003ebb40;
      }
      uVar6 = (ulong)((int)uVar6 - 1);
      *(uint *)(*param_3 + uVar6 * 4) = uVar4;
      uVar5 = 3;
      uVar4 = 0;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
LAB_003ebb40:
    uVar5 = *(uint *)(param_3 + 1);
    uVar6 = (ulong)uVar5;
    if ((int)uVar5 < 1) goto LAB_003ebb78;
  }
  do {
    if (*(int *)(*param_3 + -4 + uVar6 * 4) != 0) goto LAB_003ebb74;
    uVar6 = uVar6 - 1;
  } while (1 < (int)uVar6 + 1);
  uVar6 = 0;
LAB_003ebb74:
  uVar5 = (uint)uVar6;
  *(uint *)(param_3 + 1) = uVar5;
LAB_003ebb78:
  if (uVar5 == 0) {
    *(undefined4 *)(param_3 + 2) = 0;
    return param_3;
  }
  return param_3;
}


