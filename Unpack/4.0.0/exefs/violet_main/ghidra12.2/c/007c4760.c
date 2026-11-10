/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c4760; name: thunk_FUN_007c4770
 */


undefined8 thunk_FUN_007c4770(ulong *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  uint uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar8 = PTR_DAT_047d1018;
  pcVar10 = (char *)param_2[1];
  lVar12 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar10[lVar12] == cVar3) {
LAB_007c4894:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar12) {
        pcVar1 = pcVar10;
      }
      cVar4 = *pcVar1;
      goto joined_r0x007c48a4;
    }
    if (pcVar10[lVar12 + 1] == cVar3) {
      lVar12 = lVar12 + 1;
      goto LAB_007c4894;
    }
    if (pcVar10[lVar12 + 2] == cVar3) {
      lVar12 = lVar12 + 2;
      goto LAB_007c4894;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  cVar4 = *pcVar10;
joined_r0x007c48a4:
  if (cVar4 == '-') {
    iVar13 = -1;
    bVar17 = true;
    uVar15 = 1;
  }
  else if (cVar4 == '+') {
    bVar17 = false;
    iVar13 = 1;
    uVar15 = 1;
  }
  else {
    bVar17 = false;
    uVar15 = 0;
    iVar13 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = param_2[1];
    lVar12 = 0;
    do {
      if (*(char *)(lVar11 + lVar12) == cVar3) goto LAB_007c49c0;
      if (*(char *)(lVar11 + lVar12 + 1) == cVar3) {
        lVar12 = lVar12 + 1;
        goto LAB_007c49c0;
      }
      if (*(char *)(lVar11 + lVar12 + 2) == cVar3) {
        lVar12 = lVar12 + 2;
        goto LAB_007c49c0;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_007c49c0:
    pbVar2 = puVar8;
    if ((int)uVar15 <= (int)lVar12) {
      pbVar2 = (byte *)(lVar11 + uVar15);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c4a3c:
      if (!bVar17) {
        bVar17 = false;
        uVar16 = 0;
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar11 = param_2[1];
          lVar12 = 0;
          do {
            if (*(char *)(lVar11 + lVar12) == cVar3) goto LAB_007c4b70;
            if (*(char *)(lVar11 + lVar12 + 1) == cVar3) {
              lVar12 = lVar12 + 1;
              goto LAB_007c4b70;
            }
            if (*(char *)(lVar11 + lVar12 + 2) == cVar3) {
              lVar12 = lVar12 + 2;
              goto LAB_007c4b70;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_007c4b70:
          iVar14 = (int)uVar15;
          pbVar2 = puVar8;
          if (iVar14 <= (int)lVar12 && -1 < iVar14) {
            pbVar2 = (byte *)(lVar11 + uVar15);
          }
          uVar9 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            uVar9 = 0xffffffff;
          }
          if ((int)uVar9 < 0) goto LAB_007c4bc4;
          if (0x1999999999999999 < uVar16) {
            return 0;
          }
          if ((ulong)(long)(int)~uVar9 < uVar16 * 10) {
            return 0;
          }
          uVar15 = (ulong)(iVar14 + 1);
          bVar17 = true;
          uVar16 = uVar16 * 10 + (long)(int)(uVar9 * iVar13);
        } while( true );
      }
      bVar17 = false;
      uVar16 = 0;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar11 = param_2[1];
        lVar12 = 0;
        do {
          if (*(char *)(lVar11 + lVar12) == cVar3) goto LAB_007c4ab0;
          if (*(char *)(lVar11 + lVar12 + 1) == cVar3) {
            lVar12 = lVar12 + 1;
            goto LAB_007c4ab0;
          }
          if (*(char *)(lVar11 + lVar12 + 2) == cVar3) {
            lVar12 = lVar12 + 2;
            goto LAB_007c4ab0;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_007c4ab0:
        iVar14 = (int)uVar15;
        pbVar2 = puVar8;
        if (iVar14 <= (int)lVar12 && -1 < iVar14) {
          pbVar2 = (byte *)(lVar11 + uVar15);
        }
        uVar9 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          uVar9 = 0xffffffff;
        }
        if ((int)uVar9 < 0) {
LAB_007c4bc4:
          if (!bVar17) {
            return 0;
          }
          if (param_1 != (ulong *)0x0) {
            *param_1 = uVar16;
          }
          return 1;
        }
        if (0x1999999999999999 < uVar16) {
          return 0;
        }
        if (uVar16 * 10 < (ulong)uVar9) {
          return 0;
        }
        uVar15 = (ulong)(iVar14 + 1);
        bVar17 = true;
        uVar16 = uVar16 * 10 + (long)(int)(uVar9 * iVar13);
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = param_2[1];
    lVar12 = 0;
    do {
      if (*(char *)(lVar11 + lVar12) == cVar3) goto LAB_007c4c04;
      if (*(char *)(lVar11 + lVar12 + 1) == cVar3) {
        lVar12 = lVar12 + 1;
        goto LAB_007c4c04;
      }
      if (*(char *)(lVar11 + lVar12 + 2) == cVar3) {
        lVar12 = lVar12 + 2;
        goto LAB_007c4c04;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_007c4c04:
    pcVar10 = (char *)(lVar11 + uVar15 + 1);
    if ((int)lVar12 <= (int)uVar15) {
      pcVar10 = puVar8;
    }
    if (*pcVar10 == 'b') {
      uVar15 = uVar15 | 2;
      param_3 = 2;
    }
    else if (*pcVar10 == 'x') {
      uVar15 = uVar15 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c4a3c;
  bVar17 = false;
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = param_2[1];
    lVar12 = 0;
    do {
      if (*(char *)(lVar11 + lVar12) == cVar3) goto LAB_007c4930;
      if (*(char *)(lVar11 + lVar12 + 1) == cVar3) {
        lVar12 = lVar12 + 1;
        goto LAB_007c4930;
      }
      if (*(char *)(lVar11 + lVar12 + 2) == cVar3) {
        lVar12 = lVar12 + 2;
        goto LAB_007c4930;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_007c4930:
    iVar14 = (int)uVar15;
    pbVar2 = puVar8;
    if (iVar14 <= (int)lVar12 && -1 < iVar14) {
      pbVar2 = (byte *)(lVar11 + uVar15);
    }
    uVar9 = tolower((uint)*pbVar2);
    uVar9 = uVar9 & 0xff;
    uVar5 = uVar9 - 0x57;
    if (5 < uVar9 - 0x61) {
      uVar5 = 0xffffffff;
    }
    if (uVar9 < 0x3a) {
      uVar5 = uVar9 - 0x30;
    }
    if (((int)uVar5 < 0) || ((int)param_3 <= (int)uVar5)) {
      if (bVar17) {
        *param_1 = uVar16 * (long)iVar13;
        return 1;
      }
      return 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,param_3);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    if (SUB168(auVar6 * auVar7,8) != 0) {
      return 0;
    }
    uVar16 = uVar16 * CONCAT44(0,param_3);
    if (CARRY8((ulong)uVar5,uVar16)) {
      return 0;
    }
    uVar16 = uVar16 + uVar5;
    uVar15 = (ulong)(iVar14 + 1);
    bVar17 = true;
  } while( true );
}


