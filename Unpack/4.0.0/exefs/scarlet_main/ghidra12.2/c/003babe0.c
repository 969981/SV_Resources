/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003babe0; name: FUN_003babe0
 */


undefined8
FUN_003babe0(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  local_48 = 0;
  iVar2 = FUN_003a1e80(param_2,2);
  if ((iVar2 == 0) || (((param_3 & 0x180) != 0 && (iVar2 = FUN_003a2420(param_2,2), iVar2 == 0)))) {
    iVar2 = 0x44;
    uVar3 = 0x34f;
  }
  else {
    if ((param_3 >> 7 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_003cb8a0(param_1,auStack_44,&local_48,0);
      if (iVar2 != 0) {
        uVar3 = 0x357;
        goto LAB_003badec;
      }
      FUN_003bf5d0(*(long *)(param_1 + 0x550) + 0x1d8);
      uVar4 = local_48;
    }
    uVar3 = FUN_003bf810(param_1,param_3,param_2,param_4,param_5,uVar4);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((param_3 & 0x6080) == 0) {
      lVar5 = 0;
      do {
        iVar2 = FUN_003bab10(param_1,*(undefined4 *)((long)&DAT_044a0ddc + lVar5),param_3,local_48);
        if (iVar2 != 0) {
          ppuVar6 = &PTR_FUN_044a0e00;
          if (*(int *)(param_1 + 0x38) != 0) {
            ppuVar6 = &PTR_FUN_044a0df8;
          }
          if ((*(code **)((long)ppuVar6 + lVar5) != (code *)0x0) &&
             (uVar3 = (**(code **)((long)ppuVar6 + lVar5))(param_1,param_2,param_3,param_4,param_5),
             (int)uVar3 == 0)) {
            return uVar3;
          }
        }
        lVar5 = lVar5 + 0x38;
      } while (lVar5 != 0x620);
    }
    else {
      lVar5 = 0x6d0;
      ppuVar6 = &PTR_FUN_044a0df8;
      do {
        iVar2 = FUN_003bab10(param_1,*(undefined4 *)((long)ppuVar6 + -0x1c),param_3,local_48);
        if (iVar2 != 0) {
          ppuVar1 = ppuVar6 + 1;
          if (*(int *)(param_1 + 0x38) != 0) {
            ppuVar1 = ppuVar6;
          }
          if ((code *)*ppuVar1 != (code *)0x0) {
            uVar3 = (*(code *)*ppuVar1)(param_1,param_2,param_3,param_4,param_5);
            if ((int)uVar3 == 1) {
              *(byte *)(param_1 + lVar5) = *(byte *)(param_1 + lVar5) | 2;
            }
            else if ((int)uVar3 == 0) {
              return uVar3;
            }
          }
        }
        lVar5 = lVar5 + 1;
        ppuVar6 = ppuVar6 + 7;
      } while (lVar5 != 0x6ec);
    }
    iVar2 = FUN_003a1fe0(param_2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = 0x44;
    uVar3 = 899;
  }
LAB_003badec:
  FUN_003c3950(param_1,0x50,0x1bf,iVar2,"external/openssl/ssl/statem/extensions.c",uVar3);
  return 0;
}


