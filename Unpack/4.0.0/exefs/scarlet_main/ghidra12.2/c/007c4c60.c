/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c4c60; name: FUN_007c4c60
 */


undefined8 FUN_007c4c60(long *param_1,long *param_2,uint param_3)

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
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar8 = PTR_DAT_047d1018;
  pcVar10 = (char *)param_2[1];
  lVar13 = 0;
  cVar3 = *PTR_DAT_047d1018;
  do {
    if (pcVar10[lVar13] == cVar3) {
LAB_007c4d84:
      pcVar1 = PTR_DAT_047d1018;
      if (-1 < (int)lVar13) {
        pcVar1 = pcVar10;
      }
      cVar4 = *pcVar1;
      goto joined_r0x007c4d94;
    }
    if (pcVar10[lVar13 + 1] == cVar3) {
      lVar13 = lVar13 + 1;
      goto LAB_007c4d84;
    }
    if (pcVar10[lVar13 + 2] == cVar3) {
      lVar13 = lVar13 + 2;
      goto LAB_007c4d84;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  cVar4 = *pcVar10;
joined_r0x007c4d94:
  if (cVar4 == '-') {
    iVar14 = -1;
    bVar18 = true;
    uVar16 = 1;
  }
  else if (cVar4 == '+') {
    bVar18 = false;
    iVar14 = 1;
    uVar16 = 1;
  }
  else {
    bVar18 = false;
    uVar16 = 0;
    iVar14 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = param_2[1];
    lVar13 = 0;
    do {
      if (*(char *)(lVar11 + lVar13) == cVar3) goto LAB_007c4eb0;
      if (*(char *)(lVar11 + lVar13 + 1) == cVar3) {
        lVar13 = lVar13 + 1;
        goto LAB_007c4eb0;
      }
      if (*(char *)(lVar11 + lVar13 + 2) == cVar3) {
        lVar13 = lVar13 + 2;
        goto LAB_007c4eb0;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_007c4eb0:
    pbVar2 = puVar8;
    if ((int)uVar16 <= (int)lVar13) {
      pbVar2 = (byte *)(lVar11 + uVar16);
    }
    if (9 < *pbVar2 - 0x30) {
      return 0;
    }
    if (*pbVar2 != 0x30) {
LAB_007c4f2c:
      if (!bVar18) {
        bVar18 = false;
        lVar13 = 0;
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar12 = param_2[1];
          lVar11 = 0;
          do {
            if (*(char *)(lVar12 + lVar11) == cVar3) goto LAB_007c5084;
            if (*(char *)(lVar12 + lVar11 + 1) == cVar3) {
              lVar11 = lVar11 + 1;
              goto LAB_007c5084;
            }
            if (*(char *)(lVar12 + lVar11 + 2) == cVar3) {
              lVar11 = lVar11 + 2;
              goto LAB_007c5084;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_007c5084:
          iVar15 = (int)uVar16;
          pbVar2 = puVar8;
          if (iVar15 <= (int)lVar11 && -1 < iVar15) {
            pbVar2 = (byte *)(lVar12 + uVar16);
          }
          uVar9 = *pbVar2 - 0x30;
          if (0x39 < *pbVar2) {
            uVar9 = 0xffffffff;
          }
          if ((int)uVar9 < 0) goto LAB_007c50e0;
          if (0x1999999999999998 < lVar13 + 0xcccccccccccccccU) {
            return 0;
          }
          if ((long)((ulong)uVar9 ^ 0x7fffffffffffffff) < lVar13 * 10) {
            return 0;
          }
          uVar16 = (ulong)(iVar15 + 1);
          bVar18 = true;
          lVar13 = lVar13 * 10 + (long)(int)(uVar9 * iVar14);
        } while( true );
      }
      bVar18 = false;
      lVar13 = 0;
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar12 = param_2[1];
        lVar11 = 0;
        do {
          if (*(char *)(lVar12 + lVar11) == cVar3) goto LAB_007c4fac;
          if (*(char *)(lVar12 + lVar11 + 1) == cVar3) {
            lVar11 = lVar11 + 1;
            goto LAB_007c4fac;
          }
          if (*(char *)(lVar12 + lVar11 + 2) == cVar3) {
            lVar11 = lVar11 + 2;
            goto LAB_007c4fac;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_007c4fac:
        iVar15 = (int)uVar16;
        pbVar2 = puVar8;
        if (iVar15 <= (int)lVar11 && -1 < iVar15) {
          pbVar2 = (byte *)(lVar12 + uVar16);
        }
        uVar9 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          uVar9 = 0xffffffff;
        }
        if ((int)uVar9 < 0) {
LAB_007c50e0:
          if (!bVar18) {
            return 0;
          }
          if (param_1 != (long *)0x0) {
            *param_1 = lVar13;
          }
          return 1;
        }
        if (0x1999999999999998 < lVar13 + 0xcccccccccccccccU) {
          return 0;
        }
        if (lVar13 * 10 < (long)((ulong)uVar9 | 0x8000000000000000)) {
          return 0;
        }
        uVar16 = (ulong)(iVar15 + 1);
        bVar18 = true;
        lVar13 = lVar13 * 10 + (long)(int)(uVar9 * iVar14);
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = param_2[1];
    lVar13 = 0;
    do {
      if (*(char *)(lVar11 + lVar13) == cVar3) goto LAB_007c5120;
      if (*(char *)(lVar11 + lVar13 + 1) == cVar3) {
        lVar13 = lVar13 + 1;
        goto LAB_007c5120;
      }
      if (*(char *)(lVar11 + lVar13 + 2) == cVar3) {
        lVar13 = lVar13 + 2;
        goto LAB_007c5120;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_007c5120:
    pcVar10 = (char *)(lVar11 + uVar16 + 1);
    if ((int)lVar13 <= (int)uVar16) {
      pcVar10 = puVar8;
    }
    if (*pcVar10 == 'b') {
      uVar16 = uVar16 | 2;
      param_3 = 2;
    }
    else if (*pcVar10 == 'x') {
      uVar16 = uVar16 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_007c4f2c;
  bVar18 = false;
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = param_2[1];
    lVar13 = 0;
    do {
      if (*(char *)(lVar11 + lVar13) == cVar3) goto LAB_007c4e20;
      if (*(char *)(lVar11 + lVar13 + 1) == cVar3) {
        lVar13 = lVar13 + 1;
        goto LAB_007c4e20;
      }
      if (*(char *)(lVar11 + lVar13 + 2) == cVar3) {
        lVar13 = lVar13 + 2;
        goto LAB_007c4e20;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_007c4e20:
    iVar15 = (int)uVar16;
    pbVar2 = puVar8;
    if (iVar15 <= (int)lVar13 && -1 < iVar15) {
      pbVar2 = (byte *)(lVar11 + uVar16);
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
      if (bVar18) {
        *param_1 = uVar17 * (long)iVar14;
        return 1;
      }
      return 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,param_3);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    if (SUB168(auVar6 * auVar7,8) != 0) {
      return 0;
    }
    uVar17 = uVar17 * CONCAT44(0,param_3);
    if (CARRY8((ulong)uVar5,uVar17)) {
      return 0;
    }
    uVar17 = uVar17 + uVar5;
    uVar16 = (ulong)(iVar15 + 1);
    bVar18 = true;
  } while( true );
}


