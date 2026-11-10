/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c6530; name: FUN_007c6530
 */


undefined8 FUN_007c6530(char *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_047d1018;
  pcVar7 = (char *)param_2[1];
  lVar9 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar7[lVar9] == cVar3) {
LAB_007c6658:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar9) {
        pcVar1 = pcVar7;
      }
      cVar11 = *pcVar1;
      goto joined_r0x007c6668;
    }
    if (pcVar7[lVar9 + 1] == cVar3) {
      lVar9 = lVar9 + 1;
      goto LAB_007c6658;
    }
    if (pcVar7[lVar9 + 2] == cVar3) {
      lVar9 = lVar9 + 2;
      goto LAB_007c6658;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  cVar11 = *pcVar7;
joined_r0x007c6668:
  if (cVar11 == '-') {
    iVar13 = -1;
    bVar10 = true;
    uVar15 = 1;
  }
  else if (cVar11 == '+') {
    bVar10 = false;
    iVar13 = 1;
    uVar15 = 1;
  }
  else {
    bVar10 = false;
    uVar15 = 0;
    iVar13 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar3) goto LAB_007c6788;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar3) {
        lVar9 = lVar9 + 1;
        goto LAB_007c6788;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar3) {
        lVar9 = lVar9 + 2;
        goto LAB_007c6788;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_007c6788:
    pbVar2 = puVar5;
    if ((int)uVar15 <= (int)lVar9) {
      pbVar2 = (byte *)(lVar8 + uVar15);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c6808:
      if (!bVar10) {
        bVar10 = false;
        uVar12 = 0;
        do {
          cVar11 = (char)uVar12;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          lVar9 = 0;
          do {
            if (*(char *)(lVar8 + lVar9) == cVar3) goto LAB_007c6934;
            if (*(char *)(lVar8 + lVar9 + 1) == cVar3) {
              lVar9 = lVar9 + 1;
              goto LAB_007c6934;
            }
            if (*(char *)(lVar8 + lVar9 + 2) == cVar3) {
              lVar9 = lVar9 + 2;
              goto LAB_007c6934;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_007c6934:
          iVar14 = (int)uVar15;
          pbVar2 = puVar5;
          if (iVar14 <= (int)lVar9 && -1 < iVar14) {
            pbVar2 = (byte *)(lVar8 + uVar15);
          }
          iVar4 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            iVar4 = -1;
          }
          if (iVar4 < 0) goto LAB_007c698c;
          if (0x19 < (uVar12 & 0xff)) {
            return 0;
          }
          if (0xff - iVar4 < (int)(uVar12 * 10 & 0xfe)) {
            return 0;
          }
          uVar12 = uVar12 * 10 + iVar4 * iVar13;
          uVar15 = (ulong)(iVar14 + 1);
          bVar10 = true;
        } while( true );
      }
      bVar10 = false;
      uVar12 = 0;
      do {
        cVar11 = (char)uVar12;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + lVar9) == cVar3) goto LAB_007c6874;
          if (*(char *)(lVar8 + lVar9 + 1) == cVar3) {
            lVar9 = lVar9 + 1;
            goto LAB_007c6874;
          }
          if (*(char *)(lVar8 + lVar9 + 2) == cVar3) {
            lVar9 = lVar9 + 2;
            goto LAB_007c6874;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_007c6874:
        iVar14 = (int)uVar15;
        pbVar2 = puVar5;
        if (iVar14 <= (int)lVar9 && -1 < iVar14) {
          pbVar2 = (byte *)(lVar8 + uVar15);
        }
        iVar4 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar4 = -1;
        }
        if (iVar4 < 0) {
LAB_007c698c:
          if (!bVar10) {
            return 0;
          }
          if (param_1 != (char *)0x0) {
            *param_1 = cVar11;
          }
          return 1;
        }
        if (0x19 < (uVar12 & 0xff)) {
          return 0;
        }
        if ((int)(uVar12 * 10 & 0xfe) < iVar4) {
          return 0;
        }
        uVar12 = uVar12 * 10 + iVar4 * iVar13;
        uVar15 = (ulong)(iVar14 + 1);
        bVar10 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar3) goto LAB_007c69d0;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar3) {
        lVar9 = lVar9 + 1;
        goto LAB_007c69d0;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar3) {
        lVar9 = lVar9 + 2;
        goto LAB_007c69d0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_007c69d0:
    pcVar7 = (char *)(lVar8 + uVar15 + 1);
    if ((int)lVar9 <= (int)uVar15) {
      pcVar7 = puVar5;
    }
    if (*pcVar7 == 'b') {
      uVar15 = uVar15 | 2;
      param_3 = 2;
    }
    else if (*pcVar7 == 'x') {
      uVar15 = uVar15 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c6808;
  uVar12 = 0;
  if (param_3 != 0) {
    uVar12 = 0xff / param_3;
  }
  bVar10 = false;
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar3) goto LAB_007c66fc;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar3) {
        lVar9 = lVar9 + 1;
        goto LAB_007c66fc;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar3) {
        lVar9 = lVar9 + 2;
        goto LAB_007c66fc;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_007c66fc:
    iVar14 = (int)uVar15;
    pbVar2 = puVar5;
    if (iVar14 <= (int)lVar9 && -1 < iVar14) {
      pbVar2 = (byte *)(lVar8 + uVar15);
    }
    uVar6 = tolower((uint)*pbVar2);
    uVar6 = uVar6 & 0xff;
    iVar4 = uVar6 - 0x57;
    if (5 < uVar6 - 0x61) {
      iVar4 = -1;
    }
    if (uVar6 < 0x3a) {
      iVar4 = uVar6 - 0x30;
    }
    if ((iVar4 < 0) || ((int)param_3 <= iVar4)) {
      if (bVar10) {
        *param_1 = (char)uVar16 * (char)iVar13;
        return 1;
      }
      return 0;
    }
    if (uVar12 < (uVar16 & 0xff)) {
      return 0;
    }
    if (0xff - iVar4 < (int)(uVar16 * param_3 & 0xff)) {
      return 0;
    }
    uVar16 = uVar16 * param_3 + iVar4;
    uVar15 = (ulong)(iVar14 + 1);
    bVar10 = true;
  } while( true );
}


