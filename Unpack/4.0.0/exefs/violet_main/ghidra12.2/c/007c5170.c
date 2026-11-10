/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c5170; name: FUN_007c5170
 */


undefined8 FUN_007c5170(uint *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_047d1018;
  pcVar8 = (char *)param_2[1];
  lVar10 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar8[lVar10] == cVar3) {
LAB_007c5294:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar10) {
        pcVar1 = pcVar8;
      }
      cVar4 = *pcVar1;
      goto joined_r0x007c52a4;
    }
    if (pcVar8[lVar10 + 1] == cVar3) {
      lVar10 = lVar10 + 1;
      goto LAB_007c5294;
    }
    if (pcVar8[lVar10 + 2] == cVar3) {
      lVar10 = lVar10 + 2;
      goto LAB_007c5294;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  cVar4 = *pcVar8;
joined_r0x007c52a4:
  if (cVar4 == '-') {
    iVar11 = -1;
    bVar15 = true;
    uVar13 = 1;
  }
  else if (cVar4 == '+') {
    bVar15 = false;
    iVar11 = 1;
    uVar13 = 1;
  }
  else {
    bVar15 = false;
    uVar13 = 0;
    iVar11 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c53b4;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c53b4;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c53b4;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c53b4:
    pbVar2 = puVar6;
    if ((int)uVar13 <= (int)lVar10) {
      pbVar2 = (byte *)(lVar9 + uVar13);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c5430:
      if (!bVar15) {
        bVar15 = false;
        uVar7 = 0;
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = param_2[1];
          lVar10 = 0;
          do {
            if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c5560;
            if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
              lVar10 = lVar10 + 1;
              goto LAB_007c5560;
            }
            if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
              lVar10 = lVar10 + 2;
              goto LAB_007c5560;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_007c5560:
          iVar12 = (int)uVar13;
          pbVar2 = puVar6;
          if (iVar12 <= (int)lVar10 && -1 < iVar12) {
            pbVar2 = (byte *)(lVar9 + uVar13);
          }
          uVar5 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            uVar5 = 0xffffffff;
          }
          if ((int)uVar5 < 0) goto LAB_007c55ac;
          if (0x19999999 < uVar7) {
            return 0;
          }
          if (CARRY4(uVar5,uVar7 * 10)) {
            return 0;
          }
          uVar7 = uVar7 * 10 + uVar5 * iVar11;
          uVar13 = (ulong)(iVar12 + 1);
          bVar15 = true;
        } while( true );
      }
      bVar15 = false;
      uVar7 = 0;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = param_2[1];
        lVar10 = 0;
        do {
          if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c54a4;
          if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
            lVar10 = lVar10 + 1;
            goto LAB_007c54a4;
          }
          if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
            lVar10 = lVar10 + 2;
            goto LAB_007c54a4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_007c54a4:
        iVar12 = (int)uVar13;
        pbVar2 = puVar6;
        if (iVar12 <= (int)lVar10 && -1 < iVar12) {
          pbVar2 = (byte *)(lVar9 + uVar13);
        }
        uVar5 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          uVar5 = 0xffffffff;
        }
        if ((int)uVar5 < 0) {
LAB_007c55ac:
          if (!bVar15) {
            return 0;
          }
          if (param_1 != (uint *)0x0) {
            *param_1 = uVar7;
          }
          return 1;
        }
        if (0x19999999 < uVar7) {
          return 0;
        }
        if (uVar7 * 10 < uVar5) {
          return 0;
        }
        uVar7 = uVar7 * 10 + uVar5 * iVar11;
        uVar13 = (ulong)(iVar12 + 1);
        bVar15 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c55ec;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c55ec;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c55ec;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c55ec:
    pcVar8 = (char *)(lVar9 + uVar13 + 1);
    if ((int)lVar10 <= (int)uVar13) {
      pcVar8 = puVar6;
    }
    if (*pcVar8 == 'b') {
      uVar13 = uVar13 | 2;
      param_3 = 2;
    }
    else if (*pcVar8 == 'x') {
      uVar13 = uVar13 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c5430;
  bVar15 = false;
  uVar14 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar3) goto LAB_007c532c;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar3) {
        lVar10 = lVar10 + 1;
        goto LAB_007c532c;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar3) {
        lVar10 = lVar10 + 2;
        goto LAB_007c532c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_007c532c:
    iVar12 = (int)uVar13;
    pbVar2 = puVar6;
    if (iVar12 <= (int)lVar10 && -1 < iVar12) {
      pbVar2 = (byte *)(lVar9 + uVar13);
    }
    uVar7 = tolower((uint)*pbVar2);
    uVar7 = uVar7 & 0xff;
    uVar5 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      uVar5 = 0xffffffff;
    }
    if (uVar7 < 0x3a) {
      uVar5 = uVar7 - 0x30;
    }
    if (((int)uVar5 < 0) || ((int)param_3 <= (int)uVar5)) {
      if (bVar15) {
        *param_1 = (int)uVar14 * iVar11;
        return 1;
      }
      return 0;
    }
    if (param_3 * uVar14 >> 0x20 != 0) {
      return 0;
    }
    uVar7 = (int)uVar14 * param_3;
    if (CARRY4(uVar5,uVar7)) {
      return 0;
    }
    uVar14 = (ulong)(uVar5 + uVar7);
    uVar13 = (ulong)(iVar12 + 1);
    bVar15 = true;
  } while( true );
}


