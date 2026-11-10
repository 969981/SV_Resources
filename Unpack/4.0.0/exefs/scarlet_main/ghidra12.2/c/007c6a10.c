/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c6a10; name: thunk_FUN_007c6a20
 */


undefined8 thunk_FUN_007c6a20(char *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
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
LAB_007c6b48:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar10) {
        pcVar1 = pcVar8;
      }
      cVar12 = *pcVar1;
      goto joined_r0x007c6b58;
    }
    if (pcVar8[lVar10 + 1] == cVar3) {
      lVar10 = lVar10 + 1;
      goto LAB_007c6b48;
    }
    if (pcVar8[lVar10 + 2] == cVar3) {
      lVar10 = lVar10 + 2;
      goto LAB_007c6b48;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  cVar12 = *pcVar8;
joined_r0x007c6b58:
  if (cVar12 == '-') {
    iVar13 = -1;
    bVar11 = true;
    uVar16 = 1;
  }
  else if (cVar12 == '+') {
    bVar11 = false;
    iVar13 = 1;
    uVar16 = 1;
  }
  else {
    bVar11 = false;
    uVar16 = 0;
    iVar13 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c6c78;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c6c78;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c6c78;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c6c78:
    pbVar2 = puVar6;
    if ((int)uVar16 <= (int)lVar10) {
      pbVar2 = (byte *)(lVar9 + uVar16);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c6cf8:
      if (!bVar11) {
        bVar11 = false;
        iVar14 = 0;
        do {
          cVar12 = (char)iVar14;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = param_2[1];
          lVar10 = 0;
          do {
            if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c6e28;
            if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
              lVar10 = lVar10 + 1;
              goto LAB_007c6e28;
            }
            if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
              lVar10 = lVar10 + 2;
              goto LAB_007c6e28;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_007c6e28:
          iVar15 = (int)uVar16;
          pbVar2 = puVar6;
          if (iVar15 <= (int)lVar10 && -1 < iVar15) {
            pbVar2 = (byte *)(lVar9 + uVar16);
          }
          iVar4 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            iVar4 = -1;
          }
          if (iVar4 < 0) goto LAB_007c6e80;
          if (0x18 < (iVar14 + 0xcU & 0xff)) {
            return 0;
          }
          if (0x7f - iVar4 < (int)(char)(iVar14 * 10)) {
            return 0;
          }
          iVar14 = iVar14 * 10 + iVar4 * iVar13;
          uVar16 = (ulong)(iVar15 + 1);
          bVar11 = true;
        } while( true );
      }
      bVar11 = false;
      iVar14 = 0;
      do {
        cVar12 = (char)iVar14;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = param_2[1];
        lVar10 = 0;
        do {
          if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c6d64;
          if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
            lVar10 = lVar10 + 1;
            goto LAB_007c6d64;
          }
          if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
            lVar10 = lVar10 + 2;
            goto LAB_007c6d64;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_007c6d64:
        iVar15 = (int)uVar16;
        pbVar2 = puVar6;
        if (iVar15 <= (int)lVar10 && -1 < iVar15) {
          pbVar2 = (byte *)(lVar9 + uVar16);
        }
        iVar4 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar4 = -1;
        }
        if (iVar4 < 0) {
LAB_007c6e80:
          if (!bVar11) {
            return 0;
          }
          if (param_1 != (char *)0x0) {
            *param_1 = cVar12;
          }
          return 1;
        }
        if (0x18 < (iVar14 + 0xcU & 0xff)) {
          return 0;
        }
        if ((int)(char)(iVar14 * 10) < iVar4 + -0x80) {
          return 0;
        }
        iVar14 = iVar14 * 10 + iVar4 * iVar13;
        uVar16 = (ulong)(iVar15 + 1);
        bVar11 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c6ec4;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c6ec4;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c6ec4;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c6ec4:
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
  else if (param_3 == 10) goto LAB_007c6cf8;
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = 0xff / param_3;
  }
  bVar11 = false;
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c6bec;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c6bec;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c6bec;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c6bec:
    iVar14 = (int)uVar16;
    pbVar2 = puVar6;
    if (iVar14 <= (int)lVar10 && -1 < iVar14) {
      pbVar2 = (byte *)(lVar9 + uVar16);
    }
    uVar7 = tolower((uint)*pbVar2);
    uVar7 = uVar7 & 0xff;
    iVar15 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      iVar15 = -1;
    }
    if (uVar7 < 0x3a) {
      iVar15 = uVar7 - 0x30;
    }
    if ((iVar15 < 0) || ((int)param_3 <= iVar15)) {
      if (bVar11) {
        *param_1 = (char)uVar17 * (char)iVar13;
        return 1;
      }
      return 0;
    }
    if (uVar5 < (uVar17 & 0xff)) {
      return 0;
    }
    if (0xff - iVar15 < (int)(uVar17 * param_3 & 0xff)) {
      return 0;
    }
    uVar17 = uVar17 * param_3 + iVar15;
    uVar16 = (ulong)(iVar14 + 1);
    bVar11 = true;
  } while( true );
}


