/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122260; name: FUN_00122260
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00122260(long param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  size_t sVar8;
  double *pdVar9;
  double *pdVar10;
  long *plVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  char *__s1;
  char *__s2;
  size_t sVar15;
  size_t sVar16;
  double dVar17;
  double dVar18;
  
  plVar11 = *(long **)(param_1 + 0x20);
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 != 0xfff0b9d8) {
        if (((char)((long *)*plVar11)[1] == '\x16') ||
           (lVar12 = *(long *)*plVar11,
           (int)(uint)*(byte *)(lVar12 + 10) < (int)(-0xf4628 - param_2))) goto LAB_00122280;
        pdVar9 = (double *)(lVar12 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
        goto joined_r0x00122338;
      }
      pdVar9 = (double *)(*(long *)(param_1 + 0x18) + 0x40);
    }
    else {
      pdVar9 = (double *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
    }
joined_r0x001222bc:
    if (0 < (int)param_3) goto LAB_001222d4;
LAB_0012233c:
    if (-0xf4628 < (int)param_3) {
      pdVar10 = (double *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 0x10);
      goto LAB_00122378;
    }
    if (param_3 != 0xfff0b9d8) {
      if (((char)((long *)*plVar11)[1] != '\x16') &&
         (lVar12 = *(long *)*plVar11, (int)(-0xf4628 - param_3) <= (int)(uint)*(byte *)(lVar12 + 10)
         )) {
        pdVar10 = (double *)(lVar12 + (ulong)(~param_3 - 0xf4628) * 0x10 + 0x20);
        bVar1 = *(byte *)(pdVar9 + 1);
        goto joined_r0x00122368;
      }
      goto LAB_001222e8;
    }
    pdVar10 = (double *)(*(long *)(param_1 + 0x18) + 0x40);
    bVar1 = *(byte *)(pdVar9 + 1);
  }
  else {
    pdVar9 = (double *)(*plVar11 + (ulong)param_2 * 0x10);
    if (pdVar9 < *(double **)(param_1 + 0x10)) goto joined_r0x001222bc;
LAB_00122280:
    pdVar9 = (double *)(*(long *)(param_1 + 0x18) + 0x50);
joined_r0x00122338:
    if ((int)param_3 < 1) goto LAB_0012233c;
LAB_001222d4:
    pdVar10 = (double *)(*plVar11 + (ulong)param_3 * 0x10);
    if (pdVar10 < *(double **)(param_1 + 0x10)) {
LAB_00122378:
      bVar1 = *(byte *)(pdVar9 + 1);
    }
    else {
LAB_001222e8:
      pdVar10 = (double *)(*(long *)(param_1 + 0x18) + 0x50);
      bVar1 = *(byte *)(pdVar9 + 1);
    }
  }
joined_r0x00122368:
  if ((((bVar1 & 0xf) == 0) && (pdVar9 == (double *)(*(long *)(param_1 + 0x18) + 0x50U))) ||
     ((((ulong)pdVar10[1] & 0xf) == 0 && (pdVar10 == (double *)(*(long *)(param_1 + 0x18) + 0x50U)))
     )) {
    return 0;
  }
  if (param_4 == 2) {
    uVar7 = FUN_00140640();
    return uVar7;
  }
  if (param_4 != 1) {
    if (param_4 == 0) {
      uVar7 = FUN_00140890();
      return uVar7;
    }
    return 0;
  }
  bVar1 = *(byte *)(pdVar9 + 1) & 0xf;
  if (bVar1 == 4) {
    if (((ulong)pdVar10[1] & 0xf) == 4) {
      dVar14 = *pdVar9;
      __s1 = (char *)((long)dVar14 + 0x18);
      dVar13 = *pdVar10;
      if (*(char *)((long)dVar14 + 8) == '\x04') {
        sVar15 = (size_t)*(byte *)((long)dVar14 + 0xb);
        cVar2 = *(char *)((long)dVar13 + 8);
      }
      else {
        sVar15 = *(size_t *)((long)dVar14 + 0x10);
        cVar2 = *(char *)((long)dVar13 + 8);
      }
      if (cVar2 == '\x04') {
        sVar16 = (size_t)*(byte *)((long)dVar13 + 0xb);
      }
      else {
        sVar16 = *(size_t *)((long)dVar13 + 0x10);
      }
      __s2 = (char *)((long)dVar13 + 0x18);
      uVar6 = strcoll(__s1,__s2);
      if (uVar6 == 0) {
        do {
          sVar8 = strlen(__s1);
          if (sVar8 == sVar16) {
            return 0;
          }
          uVar6 = 0xffffffff;
          if (sVar8 == sVar15) break;
          lVar12 = sVar8 + 1;
          __s1 = __s1 + lVar12;
          __s2 = __s2 + lVar12;
          sVar15 = sVar15 - lVar12;
          sVar16 = sVar16 - lVar12;
          uVar6 = strcoll(__s1,__s2);
        } while (uVar6 == 0);
      }
      return (ulong)(uVar6 >> 0x1f);
    }
  }
  else if ((bVar1 == 3) && (bVar1 = *(byte *)(pdVar10 + 1), (bVar1 & 0xf) == 3)) {
    if (*(byte *)(pdVar9 + 1) != 3) {
      dVar13 = *pdVar9;
      if (bVar1 == 0x13) {
        dVar14 = *pdVar10;
      }
      else {
        dVar14 = *pdVar10;
        if (0x40000000000000 < (long)dVar14 + 0x20000000000000U) {
          dVar18 = (double)(long)dVar13;
          if ((dVar18 < -9.223372036854776e+18) || (9.223372036854776e+18 <= dVar18)) {
            return (ulong)(dVar13 < 0.0);
          }
          dVar13 = (double)(long)dVar18;
          bVar3 = SBORROW8((long)dVar14,(long)dVar13);
          bVar4 = (long)dVar14 - (long)dVar13 < 0;
          bVar5 = dVar14 == dVar13;
          goto LAB_00140608;
        }
        dVar14 = (double)(long)dVar14;
      }
      return (ulong)(dVar13 < dVar14);
    }
    dVar13 = *pdVar9;
    if (bVar1 == 3) {
      dVar14 = *pdVar10;
LAB_00140614:
      return (ulong)((long)dVar13 < (long)dVar14);
    }
    dVar14 = *pdVar10;
    if ((long)dVar13 + 0x20000000000000U < 0x40000000000001) {
      dVar13 = (double)(long)dVar13;
      bVar3 = NAN(dVar14) || NAN(dVar13);
      bVar5 = dVar14 == dVar13;
      bVar4 = dVar14 < dVar13;
    }
    else {
      dVar17 = (double)(long)dVar14;
      dVar18 = dVar17 + 1.0;
      if (dVar17 == dVar14) {
        dVar18 = dVar17;
      }
      bVar3 = false;
      if ((-9.223372036854776e+18 <= dVar18) && (bVar3 = false, !NAN(dVar18))) {
        bVar3 = dVar18 < 9.223372036854776e+18;
      }
      if (bVar3) {
        dVar14 = (double)(long)dVar18;
        goto LAB_00140614;
      }
      bVar3 = NAN(dVar14);
      bVar5 = dVar14 == 0.0;
      bVar4 = dVar14 < 0.0;
    }
LAB_00140608:
    return (ulong)(!bVar5 && bVar4 == bVar3);
  }
  uVar7 = FUN_0013e620();
  return uVar7;
}


