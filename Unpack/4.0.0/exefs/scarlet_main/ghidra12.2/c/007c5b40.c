/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c5b40; name: FUN_007c5b40
 */


undefined8 FUN_007c5b40(short *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_047d1018;
  pcVar8 = (char *)param_2[1];
  lVar10 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar8[lVar10] == cVar3) {
LAB_007c5c68:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar10) {
        pcVar1 = pcVar8;
      }
      cVar4 = *pcVar1;
      goto joined_r0x007c5c78;
    }
    if (pcVar8[lVar10 + 1] == cVar3) {
      lVar10 = lVar10 + 1;
      goto LAB_007c5c68;
    }
    if (pcVar8[lVar10 + 2] == cVar3) {
      lVar10 = lVar10 + 2;
      goto LAB_007c5c68;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  cVar4 = *pcVar8;
joined_r0x007c5c78:
  if (cVar4 == '-') {
    iVar14 = -1;
    bVar11 = true;
    uVar16 = 1;
  }
  else if (cVar4 == '+') {
    bVar11 = false;
    iVar14 = 1;
    uVar16 = 1;
  }
  else {
    bVar11 = false;
    uVar16 = 0;
    iVar14 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c5d98;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c5d98;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c5d98;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c5d98:
    pbVar2 = puVar6;
    if ((int)uVar16 <= (int)lVar10) {
      pbVar2 = (byte *)(lVar9 + uVar16);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c5e18:
      if (!bVar11) {
        bVar11 = false;
        uVar13 = 0;
        do {
          sVar12 = (short)uVar13;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = param_2[1];
          lVar10 = 0;
          do {
            if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c5f44;
            if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
              lVar10 = lVar10 + 1;
              goto LAB_007c5f44;
            }
            if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
              lVar10 = lVar10 + 2;
              goto LAB_007c5f44;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_007c5f44:
          iVar15 = (int)uVar16;
          pbVar2 = puVar6;
          if (iVar15 <= (int)lVar10 && -1 < iVar15) {
            pbVar2 = (byte *)(lVar9 + uVar16);
          }
          iVar5 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            iVar5 = -1;
          }
          if (iVar5 < 0) goto LAB_007c5f9c;
          if (0xccc < (uVar13 >> 1 & 0x7fff)) {
            return 0;
          }
          if (0xffff - iVar5 < (int)(uVar13 * 10 & 0xfffe)) {
            return 0;
          }
          uVar13 = uVar13 * 10 + iVar5 * iVar14;
          uVar16 = (ulong)(iVar15 + 1);
          bVar11 = true;
        } while( true );
      }
      bVar11 = false;
      uVar13 = 0;
      do {
        sVar12 = (short)uVar13;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = param_2[1];
        lVar10 = 0;
        do {
          if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c5e84;
          if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
            lVar10 = lVar10 + 1;
            goto LAB_007c5e84;
          }
          if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
            lVar10 = lVar10 + 2;
            goto LAB_007c5e84;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_007c5e84:
        iVar15 = (int)uVar16;
        pbVar2 = puVar6;
        if (iVar15 <= (int)lVar10 && -1 < iVar15) {
          pbVar2 = (byte *)(lVar9 + uVar16);
        }
        iVar5 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar5 = -1;
        }
        if (iVar5 < 0) {
LAB_007c5f9c:
          if (!bVar11) {
            return 0;
          }
          if (param_1 != (short *)0x0) {
            *param_1 = sVar12;
          }
          return 1;
        }
        if (0xccc < (uVar13 >> 1 & 0x7fff)) {
          return 0;
        }
        if ((int)(uVar13 * 10 & 0xfffe) < iVar5) {
          return 0;
        }
        uVar13 = uVar13 * 10 + iVar5 * iVar14;
        uVar16 = (ulong)(iVar15 + 1);
        bVar11 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c5fe0;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c5fe0;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c5fe0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c5fe0:
    pcVar8 = (char *)(lVar9 + uVar16 + 1);
    if ((int)lVar10 <= (int)uVar16) {
      pcVar8 = puVar6;
    }
    if (*pcVar8 == 'b') {
      uVar16 = uVar16 | 2;
      param_3 = 2;
    }
    else if (*pcVar8 == 'x') {
      uVar16 = uVar16 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c5e18;
  uVar13 = 0;
  if (param_3 != 0) {
    uVar13 = 0xffff / param_3;
  }
  bVar11 = false;
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c5d0c;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c5d0c;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c5d0c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c5d0c:
    iVar15 = (int)uVar16;
    pbVar2 = puVar6;
    if (iVar15 <= (int)lVar10 && -1 < iVar15) {
      pbVar2 = (byte *)(lVar9 + uVar16);
    }
    uVar7 = tolower((uint)*pbVar2);
    uVar7 = uVar7 & 0xff;
    iVar5 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      iVar5 = -1;
    }
    if (uVar7 < 0x3a) {
      iVar5 = uVar7 - 0x30;
    }
    if ((iVar5 < 0) || ((int)param_3 <= iVar5)) {
      if (bVar11) {
        *param_1 = (short)uVar17 * (short)iVar14;
        return 1;
      }
      return 0;
    }
    if (uVar13 < (uVar17 & 0xffff)) {
      return 0;
    }
    if (0xffff - iVar5 < (int)(uVar17 * param_3 & 0xffff)) {
      return 0;
    }
    uVar17 = uVar17 * param_3 + iVar5;
    uVar16 = (ulong)(iVar15 + 1);
    bVar11 = true;
  } while( true );
}


