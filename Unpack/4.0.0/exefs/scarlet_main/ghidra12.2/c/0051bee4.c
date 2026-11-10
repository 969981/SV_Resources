/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051bee4; name: FUN_0051bee4
 */


ulong FUN_0051bee4(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 uVar13;
  ulong uVar14;
  undefined ***local_d0;
  long *local_c8;
  byte local_c0;
  undefined8 local_b0;
  int local_a8;
  undefined **local_90;
  long *local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  int local_68;
  undefined1 auStack_60 [16];
  long local_50;
  undefined *puStack_48;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  puVar1 = PTR_LAB_047cd728;
  puVar4 = *(ulong **)(param_1 + 0x30);
  if ((puVar4 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_047cd728, local_50 = param_1, *puVar4 != 0xffffffffffffffff)) {
    local_90 = &puStack_48;
    local_88 = &local_50;
    local_d0 = &local_90;
    std::__call_once(puVar4,&local_d0,(_func_void_void_ptr *)&LAB_0051d550);
  }
  if ((*(int *)(param_1 + 0x38) == 0xb) && (uVar5 = FUN_004a64c0(param_1), (uVar5 & 1) != 0)) {
    plVar6 = (long *)FUN_004f92d8(extraout_x1,param_2,param_1);
    uVar5 = FUN_004fdddc();
    if ((uVar5 & 1) != 0) {
      FUN_004f8ac0(&local_90,param_2,param_1);
                    /* try { // try from 0051bf9c to 0051bfab has its CatchHandler @ 0051c7a0 */
      FUN_004f8ac0(&local_d0,param_2,param_1);
                    /* try { // try from 0051bfac to 0051bfb3 has its CatchHandler @ 0051c79c */
      lVar7 = FUN_004a5124(param_1);
      uVar13 = *(undefined8 *)(lVar7 + 0x28);
                    /* try { // try from 0051bfb8 to 0051bfeb has its CatchHandler @ 0051c7a8 */
      lVar7 = FUN_004a5124(param_1);
      lVar7 = *(long *)(lVar7 + 0x28);
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_90);
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_d0);
      uVar5 = 0;
      while( true ) {
                    /* try { // try from 0051c00c to 0051c017 has its CatchHandler @ 0051c7c4 */
        uVar8 = (**(code **)(*local_88 + 0x28))(local_88,&local_90,&local_d0);
        if ((uVar8 & 1) != 0) break;
                    /* try { // try from 0051c01c to 0051c037 has its CatchHandler @ 0051c7c0 */
        lVar9 = FUN_0051d170(uVar13,local_80);
        lVar10 = FUN_0051d310(lVar7 + 0x98,auStack_60);
        lVar9 = lVar9 + lVar10 + 2;
        uVar5 = lVar9 + uVar5 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
                    /* try { // try from 0051c06c to 0051c073 has its CatchHandler @ 0051c7c4 */
        (**(code **)(*local_88 + 0x90))(local_88,&local_90);
      }
                    /* try { // try from 0051c158 to 0051c163 has its CatchHandler @ 0051c788 */
      (**(code **)(*local_c8 + 0x80))(local_c8,&local_d0);
      if ((local_a8 == 9) && ((local_c0 & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
      }
                    /* try { // try from 0051c194 to 0051c19b has its CatchHandler @ 0051c774 */
      (**(code **)(*local_88 + 0x80))(local_88,&local_90);
      if (local_68 != 9) {
        return uVar5;
      }
      if (((byte)local_80[0] & 1) == 0) {
        return uVar5;
      }
      FUN_0049e790(PTR_LAB_047cba48,local_70);
      return uVar5;
    }
  }
  if (*(int *)(param_1 + 0x3c) == 3) {
    uVar5 = FUN_004f48a0(extraout_x1,param_2,param_1);
    uVar5 = uVar5 & 0xffffffff;
    puVar4 = *(ulong **)(param_1 + 0x30);
  }
  else if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    uVar5 = FUN_004f4514(extraout_x1,param_2,param_1);
    uVar5 = uVar5 & 1;
    puVar4 = *(ulong **)(param_1 + 0x30);
  }
  else {
    uVar5 = 1;
    puVar4 = *(ulong **)(param_1 + 0x30);
  }
  if ((puVar4 != (ulong *)0x0) &&
     (puStack_48 = puVar1, local_50 = param_1, *puVar4 != 0xffffffffffffffff)) {
    local_90 = &puStack_48;
    local_88 = &local_50;
    local_d0 = &local_90;
    std::__call_once(puVar4,&local_d0,(_func_void_void_ptr *)&LAB_0051d550);
  }
  puVar1 = PTR_LAB_047cba48;
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 6:
  case 0x10:
    return uVar5 << 3;
  case 2:
  case 7:
  case 0xf:
    return uVar5 << 2;
  case 3:
    if (*(int *)(param_1 + 0x3c) != 3) {
      uVar5 = FUN_004f5110(extraout_x1,param_2,param_1);
LAB_0051c6cc:
      return (LZCOUNT(uVar5 | 1) ^ 0x3fU) * 9 + 0x49 >> 6;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        uVar12 = FUN_004f52b4(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        uVar14 = uVar14 + ((LZCOUNT(uVar12 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x3c) != 3) {
      uVar5 = FUN_004f5800(extraout_x1,param_2,param_1);
      goto LAB_0051c6cc;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        uVar12 = FUN_004f59a4(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        uVar14 = uVar14 + ((LZCOUNT(uVar12 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x3c) != 3) {
      uVar3 = FUN_004f4d98(extraout_x1,param_2,param_1);
      if ((int)uVar3 < 0) {
        return 10;
      }
LAB_0051c73c:
      return (ulong)(((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        while (uVar3 = FUN_004f4f3c(extraout_x1,param_2,param_1,uVar8 & 0xffffffff), (int)uVar3 < 0)
        {
          uVar8 = uVar8 + 1;
          uVar14 = uVar14 + 10;
          if (uVar5 == uVar8) {
            return uVar14;
          }
        }
        uVar8 = uVar8 + 1;
        uVar14 = (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + uVar14;
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 8:
    return uVar5;
  case 9:
  case 0xc:
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        local_90 = (undefined **)0x0;
        local_88 = (long *)0x0;
        local_80[0] = 0;
        if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 0051c1fc to 0051c22b has its CatchHandler @ 0051c7ac */
          pbVar11 = (byte *)FUN_004f6830(extraout_x1,param_2,param_1,uVar8 & 0xffffffff,&local_90);
        }
        else {
          pbVar11 = (byte *)FUN_004f6604(extraout_x1,param_2,param_1,&local_90);
        }
        uVar12 = (ulong)(*pbVar11 >> 1);
        if ((*pbVar11 & 1) != 0) {
          uVar12 = *(ulong *)(pbVar11 + 8);
        }
        uVar14 = uVar12 + uVar14 + (ulong)(((uint)LZCOUNT((uint)uVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
        ;
        if (((ulong)local_90 & 1) != 0) {
          FUN_0049e790(puVar1,local_80[0]);
        }
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x3c) != 3) {
      plVar6 = (long *)FUN_004f72a0(extraout_x1,param_2,param_1,0);
      uVar5 = (**(code **)(*plVar6 + 0x48))();
      return uVar5;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        plVar6 = (long *)FUN_004f7c80(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        lVar7 = (**(code **)(*plVar6 + 0x48))();
        uVar8 = uVar8 + 1;
        uVar14 = lVar7 + uVar14;
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x3c) != 3) {
      plVar6 = (long *)FUN_004f72a0(extraout_x1,param_2,param_1,0);
      lVar7 = (**(code **)(*plVar6 + 0x48))();
      return lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        plVar6 = (long *)FUN_004f7c80(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        lVar7 = (**(code **)(*plVar6 + 0x48))();
        uVar8 = uVar8 + 1;
        uVar14 = lVar7 + uVar14 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x3c) != 3) {
      uVar3 = FUN_004f5488(extraout_x1,param_2,param_1);
      goto LAB_0051c73c;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        uVar3 = FUN_004f562c(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        uVar8 = uVar8 + 1;
        uVar14 = uVar14 + (((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x3c) != 3) {
      lVar7 = FUN_004f6b7c(extraout_x1,param_2,param_1);
      uVar5 = 10;
      if ((*(uint *)(lVar7 + 0x10) & 0x80000000) == 0) {
        uVar5 = (ulong)(((uint)LZCOUNT(*(uint *)(lVar7 + 0x10) | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      return uVar5;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        while( true ) {
          lVar7 = FUN_004f6f24(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
          if ((int)*(uint *)(lVar7 + 0x10) < 0) break;
          uVar8 = uVar8 + 1;
          uVar14 = (((uint)LZCOUNT(*(uint *)(lVar7 + 0x10) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + uVar14;
          if (uVar5 == uVar8) {
            return uVar14;
          }
        }
        uVar8 = uVar8 + 1;
        uVar14 = uVar14 + 10;
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 0x11:
    if (*(int *)(param_1 + 0x3c) != 3) {
      iVar2 = FUN_004f4d98(extraout_x1,param_2,param_1);
      uVar3 = iVar2 << 1 ^ iVar2 >> 0x1f;
      goto LAB_0051c73c;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        iVar2 = FUN_004f4f3c(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        uVar8 = uVar8 + 1;
        uVar14 = uVar14 + (((uint)LZCOUNT(iVar2 << 1 ^ iVar2 >> 0x1f | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar5 != uVar8);
      return uVar14;
    }
    break;
  case 0x12:
    if (*(int *)(param_1 + 0x3c) != 3) {
      lVar7 = FUN_004f5110(extraout_x1,param_2,param_1);
      uVar5 = lVar7 << 1 ^ lVar7 >> 0x3f;
      goto LAB_0051c6cc;
    }
    if (uVar5 != 0) {
      uVar8 = 0;
      uVar14 = 0;
      do {
        lVar7 = FUN_004f52b4(extraout_x1,param_2,param_1,uVar8 & 0xffffffff);
        uVar14 = uVar14 + ((LZCOUNT(lVar7 << 1 ^ lVar7 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      return uVar14;
    }
  }
  return 0;
}


