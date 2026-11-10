/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034af64c; name: FUN_034af64c
 */


void FUN_034af64c(long param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong local_68;
  
  uVar1 = *(uint *)(param_1 + 0xda) & 0x20000;
  uVar7 = 0;
  uVar5 = 0;
  lVar4 = 0;
  if (uVar1 != 0) {
    lVar4 = param_1;
  }
  if ((param_1 != 0) && (uVar1 == 0)) {
    if ((param_4 & 1) == 0) {
      uVar5 = 0;
      do {
        local_68 = *param_3 & (uVar5 ^ 0xffffffffffffffff);
        if (local_68 == 0) break;
        uVar6 = *(long *)(param_1 + 0xb8) << 0x11 | 0x7ffc7e3fffe0000;
        if (*(long *)(param_1 + 0x98) != 0) {
          uVar6 = *(long *)(param_1 + 0xb8) << 0x11;
        }
        local_68 = (uVar6 | 0x120df) & local_68;
        FUN_034a9bb0(param_1 + 0x38,param_2,&local_68);
        FUN_034af994(param_1 + 0x20,param_2,&local_68);
        FUN_034a9bb0(param_1 + 0x58,param_2,&local_68);
        param_1 = *(long *)(param_1 + 0x98);
        uVar5 = uVar6 | uVar5;
      } while (param_1 != 0);
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar5 = 0;
      do {
        if ((*param_3 & (uVar5 ^ 0xffffffffffffffff | 0x120df)) == 0) break;
        uVar6 = *(long *)(param_1 + 0xb8) << 0x11 | 0x7ffc7e3fffe0000;
        if (*(long *)(param_1 + 0x98) != 0) {
          uVar6 = *(long *)(param_1 + 0xb8) << 0x11;
        }
        local_68 = *param_3 & ~uVar5 & (uVar6 | 0x120df);
        FUN_034a9bb0(param_1 + 0x38,param_2,&local_68);
        FUN_034af994(param_1 + 0x20,param_2,&local_68);
        FUN_034a9bb0(param_1 + 0x58,param_2,&local_68);
        uVar6 = uVar6 | uVar5;
        uVar5 = uVar6;
        if ((lVar4 == 0) && (lVar4 = *(long *)(param_1 + 0xa0), lVar4 != 0)) {
          uVar1 = FUN_03471aac(lVar4);
          uVar5 = uVar6 | 0x380000000020;
          if ((uVar1 & 1) == 0) {
            uVar5 = uVar6;
          }
          uVar7 = uVar7 | uVar1;
        }
        param_1 = *(long *)(param_1 + 0x98);
      } while (param_1 != 0);
    }
  }
  if (lVar4 == 0) {
    return;
  }
  uVar2 = *param_3;
  uVar6 = uVar2 & ((uVar5 | 0x3800000100bf) ^ 0xffffc7fffffeff40);
  while( true ) {
    if (uVar6 == 0) {
      return;
    }
    if ((uVar7 & 1) != 0) break;
    while( true ) {
      if (*(long *)(lVar4 + 0xa0) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar4 + 0xb8);
      }
      local_68 = (uVar5 & 0xffffc7ffffffffdf ^ 0xffffffffffff00bf) & uVar2 &
                 (lVar8 << 0x11 | 0x4ffff9ffffd00bfU);
      FUN_034a9bb0(lVar4 + 0x38,param_2,&local_68);
      FUN_034af994(lVar4 + 0x20,param_2,&local_68);
      FUN_034a9bb0(lVar4 + 0x1a0,param_2,&local_68);
      FUN_034a9bb0(lVar4 + 0x58,param_2,&local_68);
      lVar4 = *(long *)(lVar4 + 0xa0);
      if (lVar4 == 0) {
        return;
      }
      uVar5 = uVar5 & 0xffffc7ffffffffdf | lVar8 << 0x11;
      uVar6 = FUN_03471aac(lVar4);
      uVar3 = uVar5 | 0x3800000100bf;
      if ((uVar6 & 1) != 0) break;
      uVar2 = *param_3;
      if ((uVar2 & (uVar3 ^ 0xffffc7fffffeff40)) == 0) {
        return;
      }
    }
    uVar5 = uVar5 | 0x380000000020;
    uVar2 = *param_3;
    uVar6 = uVar2 & (uVar3 ^ 0xffffc7fffffeff40);
    uVar7 = 1;
  }
  while( true ) {
    if (*(long *)(lVar4 + 0xa0) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar4 + 0xb8);
    }
    local_68 = (uVar5 ^ 0xffffffffffff00bf) & uVar2 & (lVar8 << 0x11 | 0x4ffff9ffffd00bfU);
    FUN_034a9bb0(lVar4 + 0x38,param_2,&local_68);
    FUN_034af994(lVar4 + 0x20,param_2,&local_68);
    FUN_034a9bb0(lVar4 + 0x1a0,param_2,&local_68);
    FUN_034a9bb0(lVar4 + 0x58,param_2,&local_68);
    lVar4 = *(long *)(lVar4 + 0xa0);
    if (lVar4 == 0) break;
    uVar5 = uVar5 | lVar8 << 0x11;
    uVar2 = *param_3;
    if ((uVar2 & ((uVar5 | 0x3800000100bf) ^ 0xffffc7fffffeff40)) == 0) {
      return;
    }
  }
  return;
}


