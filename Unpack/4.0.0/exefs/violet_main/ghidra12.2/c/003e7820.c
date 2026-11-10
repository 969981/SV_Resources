/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e7820; name: FUN_003e7820
 */


undefined8
FUN_003e7820(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,uint param_7,uint param_8,int param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char local_9c [20];
  char local_88 [20];
  char local_74 [20];
  
  uVar6 = 6;
  if (-1 < (int)param_7) {
    uVar6 = param_7;
  }
  dVar22 = param_1;
  if (0.0 <= param_1) {
    if ((param_8 >> 1 & 1) != 0) {
      iVar3 = 0x2b;
      goto joined_r0x003e78b0;
    }
    uVar5 = (uint)((param_8 & 4) == 0);
    iVar3 = (param_8 & 4) << 3;
    if (param_9 != 2) goto LAB_003e7874;
LAB_003e78b4:
    if (param_1 == 0.0) {
      iVar18 = 0;
    }
    else if ((param_1 < 0.0001) || ((10.0 <= param_1 && (uVar6 == 0)))) {
      iVar18 = 1;
    }
    else {
      if ((int)uVar6 < 1) {
LAB_003e7e8c:
        iVar18 = 0;
      }
      else {
        dVar20 = 1.0;
        uVar17 = uVar6;
        for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          dVar20 = dVar20 * 10.0;
          uVar17 = uVar17 - 1;
        }
        if (2 < uVar6 - 1) {
          do {
            dVar20 = dVar20 * 10.0 * 10.0 * 10.0 * 10.0;
            uVar17 = uVar17 - 4;
          } while (uVar17 != 0);
        }
        if (param_1 < dVar20) goto LAB_003e7e8c;
        iVar18 = 1;
      }
      if (param_9 == 0) goto LAB_003e7878;
    }
LAB_003e78f4:
    if (param_1 == 0.0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      if (param_1 < 1.0) {
        do {
          dVar22 = dVar22 * 10.0;
          uVar19 = uVar19 - 1;
        } while (dVar22 < 1.0);
      }
      for (; 10.0 < dVar22; dVar22 = dVar22 / 10.0) {
        uVar19 = uVar19 + 1;
      }
    }
    if (param_9 == 2) {
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      if (iVar18 == 0) {
        uVar6 = uVar6 + ~(uint)uVar19;
        dVar22 = param_1;
        if ((int)uVar6 < 0) {
          return 0;
        }
        goto LAB_003e7974;
      }
      uVar6 = uVar6 - 1;
    }
    if (iVar18 != 1) {
      dVar22 = param_1;
    }
  }
  else {
    iVar3 = 0x2d;
joined_r0x003e78b0:
    uVar5 = 0;
    if (param_9 == 2) goto LAB_003e78b4;
LAB_003e7874:
    iVar18 = param_9;
    if (param_9 != 0) goto LAB_003e78f4;
LAB_003e7878:
    uVar19 = 0;
  }
LAB_003e7974:
  dVar20 = -dVar22;
  if (0.0 <= dVar22) {
    dVar20 = dVar22;
  }
  if (1.8446744073709552e+19 <= dVar20) {
    return 0;
  }
  uVar9 = (ulong)dVar20;
  uVar8 = uVar6;
  if (8 < (int)uVar6) {
    uVar8 = 9;
  }
  if (uVar8 == 0) {
    dVar22 = 1.0;
    uVar15 = 1;
  }
  else {
    dVar21 = 1.0;
    uVar10 = uVar8;
    for (uVar17 = uVar8 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      dVar21 = dVar21 * 10.0;
      uVar10 = uVar10 - 1;
    }
    if (2 < uVar8 - 1) {
      do {
        dVar21 = dVar21 * 10.0 * 10.0 * 10.0 * 10.0;
        uVar10 = uVar10 - 4;
      } while (uVar10 != 0);
    }
    dVar22 = 1.0;
    uVar15 = (ulong)(0.5 <= dVar21 - (double)(long)dVar21) + (long)dVar21;
    uVar10 = uVar8;
    for (uVar17 = uVar8 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      dVar22 = dVar22 * 10.0;
      uVar10 = uVar10 - 1;
    }
    if (2 < uVar8 - 1) {
      do {
        dVar22 = dVar22 * 10.0 * 10.0 * 10.0 * 10.0;
        uVar10 = uVar10 - 4;
      } while (uVar10 != 0);
    }
  }
  dVar22 = (dVar20 - (double)uVar9) * dVar22;
  lVar11 = (long)dVar22;
  uVar12 = (ulong)(0.5 <= dVar22 - (double)lVar11) + lVar11;
  uVar14 = 0;
  if (uVar15 <= uVar12) {
    uVar9 = uVar9 + 1;
  }
  uVar13 = 0;
  if (uVar15 <= uVar12) {
    uVar13 = uVar15;
  }
  do {
    local_74[uVar14] = "0123456789"[uVar9 % 10];
    uVar15 = uVar14 + 1;
    if (0x12 < uVar14) break;
    bVar1 = 9 < uVar9;
    uVar14 = uVar15;
    uVar9 = uVar9 / 10;
  } while (bVar1);
  uVar12 = uVar12 - uVar13;
  uVar10 = (uint)uVar15;
  uVar17 = uVar10 - 1;
  if (uVar10 != 0x14) {
    uVar17 = uVar10;
  }
  uVar9 = (ulong)uVar17;
  local_74[uVar9] = '\0';
  if (param_9 == 2) {
    uVar14 = (ulong)uVar8;
    uVar8 = uVar6 & (int)uVar6 >> 0x1f;
    if (0 < (int)uVar6) {
      uVar6 = 1;
    }
    do {
      uVar10 = (uint)uVar14;
      if ((int)uVar10 < 1) goto LAB_003e7bbc;
      uVar15 = 0;
      uVar13 = uVar12;
      while( true ) {
        uVar12 = uVar13 / 10;
        if (uVar15 == 0 && uVar13 % 10 == 0) break;
        local_88[uVar15] = "0123456789"[uVar13 % 10];
        uVar15 = uVar15 + 1;
        uVar13 = uVar12;
        if (uVar14 == uVar15) {
          uVar8 = uVar10;
          goto LAB_003e7bc0;
        }
      }
      uVar14 = uVar14 - 1;
    } while (1 < (int)uVar10);
    uVar14 = 0;
    uVar8 = uVar6 - 1;
  }
  else if ((int)uVar6 < 1) {
LAB_003e7bbc:
    uVar14 = 0;
  }
  else {
    uVar6 = uVar8;
    if ((int)uVar8 < 2) {
      uVar6 = 1;
    }
    uVar14 = (ulong)uVar6;
    pcVar7 = local_88;
    uVar15 = uVar14;
    do {
      uVar15 = uVar15 - 1;
      *pcVar7 = "0123456789"[uVar12 % 10];
      pcVar7 = pcVar7 + 1;
      uVar12 = uVar12 / 10;
    } while (uVar15 != 0);
  }
LAB_003e7bc0:
  uVar15 = 0;
  iVar16 = (int)uVar14 - (uint)((int)uVar14 == 0x14);
  local_88[iVar16] = '\0';
  if (iVar18 == 1) {
    uVar12 = -uVar19;
    if (-1 < (long)uVar19) {
      uVar12 = uVar19;
    }
    uVar14 = 0;
    do {
      iVar2 = (int)uVar12;
      uVar12 = (ulong)(uint)(iVar2 / 10);
      local_9c[uVar14] = "0123456789"[iVar2 % 10];
      uVar15 = uVar14 + 1;
      if (0x12 < uVar14) break;
      uVar14 = uVar15;
    } while (9 < iVar2);
    if (9 < iVar2) {
      return 0;
    }
    if ((int)uVar15 == 1) {
      uVar15 = 2;
      local_9c[1] = 0x30;
    }
  }
  iVar2 = (int)uVar15 + 2;
  if (iVar18 != 1) {
    iVar2 = 0;
  }
  uVar17 = ((param_6 - (uVar5 ^ 1)) - (uint)(0 < (int)uVar8)) - (uVar17 + uVar8 + iVar2);
  uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
  uVar6 = -uVar17;
  if ((param_8 & 1) == 0) {
    uVar6 = uVar17;
  }
  if (((param_8 >> 4 & 1) == 0) || ((int)uVar6 < 1)) {
    if (0 < (int)uVar6) {
      iVar2 = uVar6 + 1;
      do {
        uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        iVar2 = iVar2 + -1;
      } while (1 < iVar2);
      uVar6 = 0;
    }
    if ((iVar3 != 0) &&
       (uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,iVar3), (int)uVar4 == 0)) {
      return uVar4;
    }
    goto LAB_003e7d78;
  }
  uVar17 = uVar6;
  if (uVar5 == 0) {
    uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,iVar3);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar17 = uVar6 - 1;
    if (1 < (int)uVar6) goto LAB_003e7ce4;
  }
  else {
LAB_003e7ce4:
    iVar3 = uVar17 + 1;
    do {
      uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,0x30);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  uVar6 = 0;
LAB_003e7d78:
  iVar3 = uVar8 - iVar16;
  while (0 < (int)uVar9) {
    uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,local_74[(int)uVar9 - 1]);
    uVar9 = uVar9 - 1;
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  if (((param_8 >> 3 & 1) != 0) || (0 < (int)uVar8)) {
    uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,0x2e);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    while (0 < iVar16) {
      iVar2 = FUN_003e7440(param_2,param_3,param_4,param_5,local_88[iVar16 - 1]);
      iVar16 = iVar16 + -1;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  if (0 < iVar3) {
    iVar3 = iVar3 + 1;
    do {
      uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,0x30);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  if (iVar18 == 1) {
    uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,param_8 & 0x20 ^ 0x65);
    if ((int)uVar4 != 0) {
      if ((long)uVar19 < 0) {
        uVar4 = 0x2d;
      }
      else {
        uVar4 = 0x2b;
      }
      uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,uVar4);
      if ((int)uVar4 != 0) {
        uVar19 = uVar15 & 0xffffffff;
        do {
          if ((long)uVar19 < 1) goto LAB_003e7f58;
          iVar3 = FUN_003e7440(param_2,param_3,param_4,param_5,local_9c[uVar19 - 1 & 0xffffffff]);
          uVar4 = 0;
          uVar19 = uVar19 - 1;
        } while (iVar3 != 0);
      }
    }
  }
  else {
LAB_003e7f58:
    if ((int)uVar6 < 0) {
      do {
        uVar4 = FUN_003e7440(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        bVar1 = uVar6 != 0xffffffff;
        uVar6 = uVar6 + 1;
        uVar4 = 1;
      } while (bVar1);
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}


