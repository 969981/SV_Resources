/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051da90; name: FUN_0051da90
 */


void FUN_0051da90(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_80 [16];
  undefined8 local_70;
  int local_68;
  
  puVar1 = PTR_LAB_047cba48;
LAB_0051dac4:
  uVar9 = param_2 - 0x20;
LAB_0051dad0:
  lVar8 = param_2 - param_1;
  uVar7 = lVar8 >> 5;
  switch(uVar7) {
  case 0:
  case 1:
    break;
  case 2:
    uVar7 = FUN_0051e02c(param_3,uVar9,param_1);
    if ((uVar7 & 1) != 0) {
      local_68 = 0;
      FUN_004fe9d4(local_80,param_1);
                    /* try { // try from 0051df24 to 0051df3b has its CatchHandler @ 0051dfe8 */
      FUN_004fe9d4(param_1,uVar9);
      FUN_004fe9d4(uVar9,local_80);
      if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_70);
      }
    }
    break;
  case 3:
    FUN_0051e180(param_1,param_1 + 0x20,uVar9,param_3);
    break;
  case 4:
    FUN_0051e3c0(param_1,param_1 + 0x20,param_1 + 0x40,uVar9,param_3);
    break;
  case 5:
    FUN_0051e580(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,uVar9,param_3);
    break;
  default:
    if (lVar8 < 0xe0) {
      FUN_0051e7b0(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar7;
    if ((long)uVar7 < 0) {
      uVar5 = uVar7 + 1;
    }
    uVar5 = param_1 + (uVar5 & 0xffffffffffffffe) * 0x10;
    if (lVar8 < 0x7ce1) {
      iVar2 = FUN_0051e180(param_1,uVar5,uVar9,param_3);
    }
    else {
      uVar10 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar10 = uVar7;
      }
      lVar8 = (uVar10 & 0x1ffffffffffffffc) * 8;
      iVar2 = FUN_0051e580(param_1,param_1 + lVar8,uVar5,uVar5 + lVar8,uVar9,param_3);
    }
    uVar7 = FUN_0051e02c(param_3,param_1,uVar5);
    if ((uVar7 & 1) == 0) {
      uVar7 = param_2 - 0x40;
LAB_0051db84:
      uVar10 = uVar7;
      if (param_1 != uVar10) goto code_r0x0051db8c;
      uVar7 = param_1 + 0x20;
      uVar5 = FUN_0051e02c(param_3,param_1,uVar9);
      if ((uVar5 & 1) == 0) {
        if (uVar7 == uVar9) {
          return;
        }
        uVar7 = param_1 + 0x40;
        while( true ) {
          lVar8 = uVar7 - 0x20;
          uVar5 = FUN_0051e02c(param_3,param_1,lVar8);
          if ((uVar5 & 1) != 0) break;
          uVar7 = uVar7 + 0x20;
          if (param_2 == uVar7) {
            return;
          }
        }
        local_68 = 0;
        FUN_004fe9d4(local_80,lVar8);
                    /* try { // try from 0051de88 to 0051de9f has its CatchHandler @ 0051dfec */
        FUN_004fe9d4(lVar8,uVar9);
        FUN_004fe9d4(uVar9,local_80);
        if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
          FUN_0049e790(puVar1,local_70);
        }
      }
      if (uVar7 == uVar9) {
        return;
      }
      uVar5 = uVar9;
      while( true ) {
        do {
          uVar10 = uVar7;
          uVar3 = FUN_0051e02c(param_3,param_1,uVar10);
          uVar7 = uVar10 + 0x20;
        } while ((uVar3 & 1) == 0);
        do {
          uVar5 = uVar5 - 0x20;
          uVar3 = FUN_0051e02c(param_3,param_1,uVar5);
        } while ((uVar3 & 1) != 0);
        if (uVar5 <= uVar10) break;
        local_68 = 0;
        FUN_004fe9d4(local_80,uVar10);
                    /* try { // try from 0051dde0 to 0051ddf7 has its CatchHandler @ 0051dff8 */
        FUN_004fe9d4(uVar10,uVar5);
        FUN_004fe9d4(uVar5,local_80);
        if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
          FUN_0049e790(puVar1,local_70);
        }
      }
      uVar6 = 4;
      goto LAB_0051de24;
    }
    uVar7 = param_1 + 0x20;
    uVar10 = uVar9;
    if (uVar7 < uVar9) goto LAB_0051dc10;
    goto LAB_0051db74;
  }
  return;
code_r0x0051db8c:
  uVar3 = FUN_0051e02c(param_3,uVar10,uVar5);
  uVar7 = uVar10 - 0x20;
  if ((uVar3 & 1) != 0) goto code_r0x0051dba4;
  goto LAB_0051db84;
code_r0x0051dba4:
  local_68 = 0;
  FUN_004fe9d4(local_80,param_1);
                    /* try { // try from 0051dbb8 to 0051dbcf has its CatchHandler @ 0051dff4 */
  FUN_004fe9d4(param_1,uVar10);
  FUN_004fe9d4(uVar10,local_80);
  if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
    FUN_0049e790(puVar1,local_70);
  }
  iVar2 = iVar2 + 1;
  uVar7 = param_1 + 0x20;
  if (uVar7 < uVar10) {
LAB_0051dc10:
    while( true ) {
      uVar3 = uVar7 - 0x20;
      do {
        uVar7 = uVar3;
        uVar3 = uVar7 + 0x20;
        uVar4 = FUN_0051e02c(param_3,uVar3,uVar5);
      } while ((uVar4 & 1) != 0);
      uVar7 = uVar7 + 0x40;
      do {
        uVar10 = uVar10 - 0x20;
        uVar4 = FUN_0051e02c(param_3,uVar10,uVar5);
      } while ((uVar4 & 1) == 0);
      if (uVar10 < uVar3) break;
      local_68 = 0;
      FUN_004fe9d4(local_80,uVar3);
                    /* try { // try from 0051dc60 to 0051dc77 has its CatchHandler @ 0051dffc */
      FUN_004fe9d4(uVar3,uVar10);
      FUN_004fe9d4(uVar10,local_80);
      if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
        FUN_0049e790(puVar1,local_70);
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar10;
      if (uVar5 != uVar3) {
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    }
    if (uVar3 == uVar5) goto LAB_0051dd08;
  }
  else {
LAB_0051db74:
    uVar3 = param_1 + 0x20;
    if (uVar3 == uVar5) goto LAB_0051dd08;
  }
  uVar7 = FUN_0051e02c(param_3,uVar5,uVar3);
  if ((uVar7 & 1) != 0) {
    local_68 = 0;
    FUN_004fe9d4(local_80,uVar3);
                    /* try { // try from 0051dccc to 0051dce3 has its CatchHandler @ 0051dff0 */
    FUN_004fe9d4(uVar3,uVar5);
    FUN_004fe9d4(uVar5,local_80);
    if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
      FUN_0049e790(puVar1,local_70);
    }
    iVar2 = iVar2 + 1;
  }
LAB_0051dd08:
  if (iVar2 == 0) {
    uVar7 = FUN_0051e900(param_1,uVar3,param_3);
    uVar10 = uVar3 + 0x20;
    uVar5 = FUN_0051e900(uVar10,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      param_2 = uVar3;
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_0051dac4;
    }
    if ((uVar7 & 1) != 0) {
      uVar6 = 2;
LAB_0051de24:
      if (4 < uVar6) {
        return;
      }
      param_1 = uVar10;
      if ((1 << (ulong)uVar6 & 0x15U) == 0) {
        return;
      }
      goto LAB_0051dad0;
    }
  }
  if ((long)(param_2 - uVar3) <= (long)(uVar3 - param_1)) goto LAB_0051dec4;
  FUN_0051da90(param_1,uVar3,param_3);
  param_1 = uVar3 + 0x20;
  goto LAB_0051dad0;
LAB_0051dec4:
  FUN_0051da90(uVar3 + 0x20,param_2,param_3);
  param_2 = uVar3;
  goto LAB_0051dac4;
}


