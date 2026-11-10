/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f1cbc; name: FUN_008f1cbc
 */


uint FUN_008f1cbc(long param_1,uint param_2,uint param_3,char *param_4)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  
  lVar10 = *(long *)(param_1 + 0xd8);
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar10 + 0x110);
    uVar14 = (ulong)*(uint *)(*(long *)(lVar10 + 0x188) + 4);
    uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x68);
    uVar3 = FUN_008f1398(param_2);
    if (5 < param_3) {
      return 0xffffffff;
    }
    lVar11 = lVar13 + uVar14;
    lVar8 = lVar11 + (ulong)uVar2;
    switch(param_3) {
    case 1:
      uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x44);
      uVar14 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return 0xffffffff;
      }
      puVar12 = (uint *)(lVar11 + (ulong)*(uint *)(*(long *)(lVar10 + 0x188) + 0x48));
      while ((((puVar12[0xe] & 1 << (ulong)(uVar3 & 0x1f)) == 0 ||
              (iVar4 = strncmp(param_4,(char *)(lVar8 + (ulong)*puVar12),(ulong)puVar12[1]),
              iVar4 != 0)) || ((int)puVar12[0xc] < 0))) {
        puVar12 = puVar12 + 0x17;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          return 0xffffffff;
        }
      }
      return puVar12[0xc];
    case 2:
      uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x34);
      uVar14 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return 0xffffffff;
      }
      puVar12 = (uint *)(lVar11 + (ulong)*(uint *)(*(long *)(lVar10 + 0x188) + 0x38));
      while (((((char)puVar12[0x19] != '\0' || ((puVar12[0x11] & 1 << (ulong)(uVar3 & 0x1f)) == 0))
              || (iVar4 = strncmp(param_4,(char *)(lVar8 + (ulong)*puVar12),(ulong)puVar12[1]),
                 iVar4 != 0)) || ((int)puVar12[(ulong)uVar3 + 0x12] < 0))) {
        puVar12 = puVar12 + 0x29;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          return 0xffffffff;
        }
      }
      return puVar12[(ulong)uVar3 + 0x12];
    case 3:
      uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x2c);
      uVar14 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return 0xffffffff;
      }
      puVar12 = (uint *)(lVar11 + (ulong)*(uint *)(*(long *)(lVar10 + 0x188) + 0x30));
      while ((((puVar12[0xc] & 1 << (ulong)(uVar3 & 0x1f)) == 0 ||
              (iVar4 = strncmp(param_4,(char *)(lVar8 + (ulong)*puVar12),(ulong)puVar12[1]),
              iVar4 != 0)) || ((int)puVar12[(ulong)uVar3 + 0xd] < 0))) {
        puVar12 = puVar12 + 0x1b;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          return 0xffffffff;
        }
      }
      return puVar12[(ulong)uVar3 + 0xd];
    case 4:
      uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x4c);
      uVar14 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return 0xffffffff;
      }
      puVar12 = (uint *)(lVar11 + (ulong)*(uint *)(*(long *)(lVar10 + 0x188) + 0x50));
      while ((((puVar12[0x12] & 1 << (ulong)(uVar3 & 0x1f)) == 0 ||
              (iVar4 = strncmp(param_4,(char *)(lVar8 + (ulong)*puVar12),(ulong)puVar12[1]),
              iVar4 != 0)) || ((int)puVar12[(ulong)uVar3 + 0xc] < 0))) {
        puVar12 = puVar12 + 0x1b;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          return 0xffffffff;
        }
      }
      return puVar12[(ulong)uVar3 + 0xc];
    case 5:
      uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x34);
      uVar14 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        return 0xffffffff;
      }
      puVar12 = (uint *)(lVar11 + (ulong)*(uint *)(*(long *)(lVar10 + 0x188) + 0x38));
      while (((((char)puVar12[0x19] != '\0' || ((puVar12[0x11] & 1 << (ulong)(uVar3 & 0x1f)) == 0))
              || (iVar4 = strncmp(param_4,(char *)(lVar8 + (ulong)*puVar12),(ulong)puVar12[1]),
                 iVar4 != 0)) || ((int)puVar12[(ulong)uVar3 + 0x12] < 0))) {
        puVar12 = puVar12 + 0x29;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          return 0xffffffff;
        }
      }
      return puVar12[(ulong)uVar3 + 0x12];
    }
    uVar2 = *(uint *)(*(long *)(lVar10 + 0x188) + 0x3c);
    uVar9 = (ulong)uVar2;
    if ((int)uVar2 < 1) {
      return 0xffffffff;
    }
    puVar12 = (uint *)(*(uint *)(*(long *)(lVar10 + 0x188) + 0x40) + uVar14 + lVar13 + 0x34);
    while ((((*puVar12 & 1 << (ulong)(uVar3 & 0x1f)) == 0 ||
            (iVar4 = strncmp(param_4,(char *)(lVar8 + (ulong)puVar12[-0xd]),(ulong)puVar12[-0xc]),
            iVar4 != 0)) || ((int)puVar12[-1] < 0))) {
      puVar12 = puVar12 + 0x17;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0xffffffff;
      }
    }
    return puVar12[-1];
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0xd0) + *(long *)(&DAT_03d2e8a8 + (ulong)param_2 * 8));
  if (lVar10 == 0) {
    return 0xffffffff;
  }
  if ((int)param_3 < 6) {
    lVar11 = *(long *)(lVar10 + *(long *)(&DAT_03d2e8d8 + (ulong)param_3 * 8));
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(lVar10 + *(long *)(&DAT_03d2e908 + (ulong)param_3 * 8));
    }
  }
  else {
    lVar13 = *(long *)(lVar10 + 0x58);
    if (lVar13 == 0) {
      return 0xffffffff;
    }
    lVar8 = (ulong)(param_3 - 6) * 8;
    lVar11 = *(long *)(lVar13 + *(long *)(&DAT_03cab370 + lVar8));
    iVar4 = *(int *)(lVar13 + *(long *)(&DAT_03cab760 + lVar8));
  }
  if (lVar11 == 0) {
    return 0xffffffff;
  }
  if (param_4 == (char *)0x0) {
    sVar6 = 0;
  }
  else {
    sVar6 = strlen(param_4);
  }
  uVar14 = (ulong)*(ushort *)(lVar11 + 0xc);
  puVar12 = (uint *)((int *)(lVar11 + 8) + uVar14 * 4);
  iVar7 = *(int *)(lVar11 + 8);
  while (uVar2 = *puVar12, iVar7 < (int)uVar2) {
    uVar9 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    if (uVar9 < sVar6) {
      uVar9 = (ulong)((byte)param_4[sVar6 + ~uVar9] >> ((ulong)uVar2 & 7)) & 1;
    }
    else {
      uVar9 = 0;
    }
    piVar1 = (int *)(lVar11 + 8 + uVar14 * 0x10);
    uVar14 = (ulong)*(ushort *)((long)piVar1 + uVar9 * 2 + 4);
    puVar12 = (uint *)(lVar11 + 8 + uVar14 * 0x10);
    iVar7 = *piVar1;
  }
  uVar14 = (ulong)**(ushort **)(puVar12 + 2);
  __n = sVar6;
  if (uVar14 <= sVar6) {
    __n = uVar14;
  }
  if (__n == 0) {
    if (sVar6 < uVar14) {
      return 0xffffffff;
    }
  }
  else {
    iVar5 = memcmp(*(ushort **)(puVar12 + 2) + 1,param_4,__n);
    iVar7 = iVar5;
    if (iVar5 == 0) {
      iVar7 = 1;
    }
    if (sVar6 < uVar14 || iVar5 != 0) {
      if (iVar7 != 0) {
        return 0xffffffff;
      }
      goto LAB_008f2128;
    }
  }
  if (uVar14 < sVar6) {
    return 0xffffffff;
  }
LAB_008f2128:
  iVar7 = (int)((ulong)((long)puVar12 + (-0x18 - lVar11)) >> 4);
  if (iVar7 < 0) {
    return 0xffffffff;
  }
  return *(uint *)(*(long *)(lVar10 + 0x38) + (long)(iVar4 + iVar7) * 4);
}


