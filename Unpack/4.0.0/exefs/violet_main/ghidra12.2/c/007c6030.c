/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c6030; name: FUN_007c6030
 */


undefined8 FUN_007c6030(short *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = PTR_DAT_047d1018;
  pcVar9 = (char *)param_2[1];
  lVar11 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar9[lVar11] == cVar3) {
LAB_007c6158:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar11) {
        pcVar1 = pcVar9;
      }
      cVar4 = *pcVar1;
      goto joined_r0x007c6168;
    }
    if (pcVar9[lVar11 + 1] == cVar3) {
      lVar11 = lVar11 + 1;
      goto LAB_007c6158;
    }
    if (pcVar9[lVar11 + 2] == cVar3) {
      lVar11 = lVar11 + 2;
      goto LAB_007c6158;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  cVar4 = *pcVar9;
joined_r0x007c6168:
  if (cVar4 == '-') {
    iVar14 = -1;
    bVar12 = true;
    uVar17 = 1;
  }
  else if (cVar4 == '+') {
    bVar12 = false;
    iVar14 = 1;
    uVar17 = 1;
  }
  else {
    bVar12 = false;
    uVar17 = 0;
    iVar14 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c6288;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
        lVar11 = lVar11 + 1;
        goto LAB_007c6288;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
        lVar11 = lVar11 + 2;
        goto LAB_007c6288;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_007c6288:
    pbVar2 = puVar7;
    if ((int)uVar17 <= (int)lVar11) {
      pbVar2 = (byte *)(lVar10 + uVar17);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c6308:
      if (!bVar12) {
        bVar12 = false;
        iVar15 = 0;
        do {
          sVar13 = (short)iVar15;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar10 = param_2[1];
          lVar11 = 0;
          do {
            if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c643c;
            if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
              lVar11 = lVar11 + 1;
              goto LAB_007c643c;
            }
            if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
              lVar11 = lVar11 + 2;
              goto LAB_007c643c;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_007c643c:
          iVar16 = (int)uVar17;
          pbVar2 = puVar7;
          if (iVar16 <= (int)lVar11 && -1 < iVar16) {
            pbVar2 = (byte *)(lVar10 + uVar17);
          }
          iVar5 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            iVar5 = -1;
          }
          if (iVar5 < 0) goto LAB_007c6490;
          if (0x1998 < (iVar15 + 0xcccU & 0xffff)) {
            return 0;
          }
          if (0x7fff - iVar5 < (int)(short)(iVar15 * 10)) {
            return 0;
          }
          iVar15 = iVar15 * 10 + iVar5 * iVar14;
          uVar17 = (ulong)(iVar16 + 1);
          bVar12 = true;
        } while( true );
      }
      bVar12 = false;
      iVar15 = 0;
      do {
        sVar13 = (short)iVar15;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar10 = param_2[1];
        lVar11 = 0;
        do {
          if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c6378;
          if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
            lVar11 = lVar11 + 1;
            goto LAB_007c6378;
          }
          if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
            lVar11 = lVar11 + 2;
            goto LAB_007c6378;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_007c6378:
        iVar16 = (int)uVar17;
        pbVar2 = puVar7;
        if (iVar16 <= (int)lVar11 && -1 < iVar16) {
          pbVar2 = (byte *)(lVar10 + uVar17);
        }
        iVar5 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar5 = -1;
        }
        if (iVar5 < 0) {
LAB_007c6490:
          if (!bVar12) {
            return 0;
          }
          if (param_1 != (short *)0x0) {
            *param_1 = sVar13;
          }
          return 1;
        }
        if (0x1998 < (iVar15 + 0xcccU & 0xffff)) {
          return 0;
        }
        if ((int)(short)(iVar15 * 10) < iVar5 + -0x8000) {
          return 0;
        }
        iVar15 = iVar15 * 10 + iVar5 * iVar14;
        uVar17 = (ulong)(iVar16 + 1);
        bVar12 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c64d4;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
        lVar11 = lVar11 + 1;
        goto LAB_007c64d4;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
        lVar11 = lVar11 + 2;
        goto LAB_007c64d4;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_007c64d4:
    pcVar9 = (char *)(lVar10 + uVar17 + 1);
    if ((int)lVar11 <= (int)uVar17) {
      pcVar9 = puVar7;
    }
    if (*pcVar9 == 'b') {
      uVar17 = uVar17 | 2;
      param_3 = 2;
    }
    else if (*pcVar9 == 'x') {
      uVar17 = uVar17 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c6308;
  uVar6 = 0;
  if (param_3 != 0) {
    uVar6 = 0xffff / param_3;
  }
  bVar12 = false;
  uVar18 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c61fc;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
        lVar11 = lVar11 + 1;
        goto LAB_007c61fc;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
        lVar11 = lVar11 + 2;
        goto LAB_007c61fc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_007c61fc:
    iVar15 = (int)uVar17;
    pbVar2 = puVar7;
    if (iVar15 <= (int)lVar11 && -1 < iVar15) {
      pbVar2 = (byte *)(lVar10 + uVar17);
    }
    uVar8 = tolower((uint)*pbVar2);
    uVar8 = uVar8 & 0xff;
    iVar16 = uVar8 - 0x57;
    if (5 < uVar8 - 0x61) {
      iVar16 = -1;
    }
    if (uVar8 < 0x3a) {
      iVar16 = uVar8 - 0x30;
    }
    if ((iVar16 < 0) || ((int)param_3 <= iVar16)) {
      if (bVar12) {
        *param_1 = (short)uVar18 * (short)iVar14;
        return 1;
      }
      return 0;
    }
    if (uVar6 < (uVar18 & 0xffff)) {
      return 0;
    }
    if (0xffff - iVar16 < (int)(uVar18 * param_3 & 0xffff)) {
      return 0;
    }
    uVar18 = uVar18 * param_3 + iVar16;
    uVar17 = (ulong)(iVar15 + 1);
    bVar12 = true;
  } while( true );
}


