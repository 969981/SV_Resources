/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c5630; name: thunk_FUN_007c5640
 */


undefined8 thunk_FUN_007c5640(int *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = PTR_DAT_047d1018;
  pcVar9 = (char *)param_2[1];
  lVar11 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar9[lVar11] == cVar3) {
LAB_007c5768:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar11) {
        pcVar1 = pcVar9;
      }
      cVar4 = *pcVar1;
      goto joined_r0x007c5778;
    }
    if (pcVar9[lVar11 + 1] == cVar3) {
      lVar11 = lVar11 + 1;
      goto LAB_007c5768;
    }
    if (pcVar9[lVar11 + 2] == cVar3) {
      lVar11 = lVar11 + 2;
      goto LAB_007c5768;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  cVar4 = *pcVar9;
joined_r0x007c5778:
  if (cVar4 == '-') {
    iVar13 = -1;
    bVar12 = true;
    uVar16 = 1;
  }
  else if (cVar4 == '+') {
    bVar12 = false;
    iVar13 = 1;
    uVar16 = 1;
  }
  else {
    bVar12 = false;
    uVar16 = 0;
    iVar13 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c5888;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
        lVar11 = lVar11 + 1;
        goto LAB_007c5888;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
        lVar11 = lVar11 + 2;
        goto LAB_007c5888;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_007c5888:
    pbVar2 = puVar7;
    if ((int)uVar16 <= (int)lVar11) {
      pbVar2 = (byte *)(lVar10 + uVar16);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c5904:
      if (!bVar12) {
        bVar12 = false;
        iVar14 = 0;
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar10 = param_2[1];
          lVar11 = 0;
          do {
            if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c5a54;
            if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
              lVar11 = lVar11 + 1;
              goto LAB_007c5a54;
            }
            if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
              lVar11 = lVar11 + 2;
              goto LAB_007c5a54;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_007c5a54:
          iVar15 = (int)uVar16;
          pbVar2 = puVar7;
          if (iVar15 <= (int)lVar11 && -1 < iVar15) {
            pbVar2 = (byte *)(lVar10 + uVar16);
          }
          iVar6 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            iVar6 = -1;
          }
          if (iVar6 < 0) goto LAB_007c5aac;
          if (0x19999998 < iVar14 + 0xcccccccU) {
            return 0;
          }
          if (0x7fffffff - iVar6 < iVar14 * 10) {
            return 0;
          }
          iVar14 = iVar14 * 10 + iVar6 * iVar13;
          uVar16 = (ulong)(iVar15 + 1);
          bVar12 = true;
        } while( true );
      }
      bVar12 = false;
      iVar14 = 0;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar10 = param_2[1];
        lVar11 = 0;
        do {
          if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c5980;
          if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
            lVar11 = lVar11 + 1;
            goto LAB_007c5980;
          }
          if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
            lVar11 = lVar11 + 2;
            goto LAB_007c5980;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_007c5980:
        iVar15 = (int)uVar16;
        pbVar2 = puVar7;
        if (iVar15 <= (int)lVar11 && -1 < iVar15) {
          pbVar2 = (byte *)(lVar10 + uVar16);
        }
        uVar8 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          uVar8 = 0xffffffff;
        }
        if ((int)uVar8 < 0) {
LAB_007c5aac:
          if (!bVar12) {
            return 0;
          }
          if (param_1 != (int *)0x0) {
            *param_1 = iVar14;
          }
          return 1;
        }
        if (0x19999998 < iVar14 + 0xcccccccU) {
          return 0;
        }
        if (iVar14 * 10 < (int)(uVar8 | 0x80000000)) {
          return 0;
        }
        iVar14 = iVar14 * 10 + uVar8 * iVar13;
        uVar16 = (ulong)(iVar15 + 1);
        bVar12 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c5af0;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
        lVar11 = lVar11 + 1;
        goto LAB_007c5af0;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
        lVar11 = lVar11 + 2;
        goto LAB_007c5af0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_007c5af0:
    pcVar9 = (char *)(lVar10 + uVar16 + 1);
    if ((int)lVar11 <= (int)uVar16) {
      pcVar9 = puVar7;
    }
    if (*pcVar9 == 'b') {
      uVar16 = uVar16 | 2;
      param_3 = 2;
    }
    else if (*pcVar9 == 'x') {
      uVar16 = uVar16 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c5904;
  bVar12 = false;
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar3) goto LAB_007c5800;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar3) {
        lVar11 = lVar11 + 1;
        goto LAB_007c5800;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar3) {
        lVar11 = lVar11 + 2;
        goto LAB_007c5800;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_007c5800:
    iVar14 = (int)uVar16;
    pbVar2 = puVar7;
    if (iVar14 <= (int)lVar11 && -1 < iVar14) {
      pbVar2 = (byte *)(lVar10 + uVar16);
    }
    uVar8 = tolower((uint)*pbVar2);
    uVar8 = uVar8 & 0xff;
    uVar5 = uVar8 - 0x57;
    if (5 < uVar8 - 0x61) {
      uVar5 = 0xffffffff;
    }
    if (uVar8 < 0x3a) {
      uVar5 = uVar8 - 0x30;
    }
    if (((int)uVar5 < 0) || ((int)param_3 <= (int)uVar5)) {
      if (bVar12) {
        *param_1 = (int)uVar17 * iVar13;
        return 1;
      }
      return 0;
    }
    if (param_3 * uVar17 >> 0x20 != 0) {
      return 0;
    }
    uVar8 = (int)uVar17 * param_3;
    if (CARRY4(uVar5,uVar8)) {
      return 0;
    }
    uVar17 = (ulong)(uVar5 + uVar8);
    uVar16 = (ulong)(iVar14 + 1);
    bVar12 = true;
  } while( true );
}


