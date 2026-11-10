/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003988b0; name: FUN_003988b0
 */


void FUN_003988b0(long param_1,char param_2,long param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  char cVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  
  param_1 = param_1 + (param_4 / 0x23ab1) * 400;
  param_4 = param_4 % 0x23ab1;
  lVar9 = param_1 + -400;
  if (-1 < param_4) {
    lVar9 = param_1;
  }
  uVar11 = lVar9 + (param_3 / 0x23ab1) * 400;
  lVar9 = param_4 + 0x23ab1;
  if (-1 < param_4) {
    lVar9 = param_4;
  }
  lVar9 = lVar9 + param_3 % 0x23ab1;
  if (lVar9 < 1) {
    if (lVar9 < -0x16c) {
      uVar7 = uVar11 - 400;
      lVar9 = lVar9 + 0x23ab1;
    }
    else {
      uVar7 = uVar11 - 1;
      uVar10 = uVar7;
      if ('\x02' < param_2) {
        uVar10 = uVar11;
      }
      if ((uVar10 & 3) == 0) {
        lVar8 = uVar10 * -0x70a3d70a3d70a3d7;
        lVar13 = 0x16d;
        if ((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7 ||
            0x28f5c28f5c28f5c < (lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e)) {
          lVar13 = 0x16e;
        }
        lVar9 = lVar13 + lVar9;
      }
      else {
        lVar9 = lVar9 + 0x16d;
      }
    }
  }
  else {
    uVar7 = uVar11;
    if (0x23ab1 < lVar9) {
      uVar7 = uVar11 + 400;
      lVar9 = lVar9 + -0x23ab1;
    }
  }
  if (0x16d < lVar9) {
    uVar11 = uVar7;
    if ('\x02' < param_2) {
      uVar11 = uVar7 + 1;
    }
    iVar12 = ((int)uVar11 +
              (SUB164(SEXT816((long)uVar11) * ZEXT816(0xa3d70a3d70a3d70b),9) -
              (SUB164(SEXT816((long)uVar11) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f)) * -400 +
             400) % 400;
    uVar10 = (ulong)('\x02' < param_2);
    lVar13 = 0x8eac;
    if (300 < iVar12 || iVar12 == 0) {
      lVar13 = 0x8ead;
    }
    if (lVar13 < lVar9) {
      do {
        lVar8 = uVar10 + uVar7;
        uVar7 = uVar7 + 100;
        lVar8 = lVar8 + 100;
        lVar9 = lVar9 - lVar13;
        auVar4 = SEXT816(lVar8) * ZEXT816(0xa3d70a3d70a3d70b);
        iVar12 = ((int)lVar8 + (auVar4._9_4_ - (auVar4._12_4_ >> 0x1f)) * -400 + 400) % 400;
        lVar13 = 0x8eac;
        if (300 < iVar12 || iVar12 == 0) {
          lVar13 = 0x8ead;
        }
      } while (lVar13 < lVar9);
      uVar11 = uVar10 + uVar7;
    }
    lVar13 = 0x5b5;
    if (((iVar12 != 0) && (iVar12 < 0x12d)) && (lVar13 = 0x5b4, (iVar12 + -1) % 100 < 0x60)) {
      lVar13 = 0x5b5;
    }
    if (lVar13 < lVar9) {
      do {
        lVar9 = lVar9 - lVar13;
        lVar13 = uVar10 + uVar7;
        uVar7 = uVar7 + 4;
        lVar13 = lVar13 + 4;
        auVar4 = SEXT816(lVar13) * ZEXT816(0xa3d70a3d70a3d70b);
        iVar12 = ((int)lVar13 + (auVar4._9_4_ - (auVar4._12_4_ >> 0x1f)) * -400 + 400) % 400;
        if (iVar12 == 0) {
          lVar13 = 0x5b5;
        }
        else {
          lVar13 = 0x5b5;
          if ((iVar12 < 0x12d) && (lVar13 = 0x5b4, (iVar12 + -1) % 100 < 0x60)) {
            lVar13 = 0x5b5;
          }
        }
      } while (lVar13 < lVar9);
      uVar11 = uVar10 + uVar7;
    }
    if ((uVar11 & 3) == 0) {
      lVar8 = uVar11 * -0x70a3d70a3d70a3d7;
      lVar13 = 0x16d;
      if ((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7 ||
          0x28f5c28f5c28f5c < (lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e)) {
        lVar13 = 0x16e;
      }
      if (lVar9 <= lVar13) goto LAB_00398ce8;
    }
    else {
      lVar13 = 0x16d;
      if (lVar9 < 0x16e) goto LAB_00398ce8;
    }
    uVar11 = uVar7;
    do {
      while( true ) {
        uVar7 = uVar11 + 1;
        uVar1 = uVar10 + 1 + uVar11;
        lVar9 = lVar9 - lVar13;
        uVar11 = uVar7;
        if ((uVar1 & 3) == 0) break;
        lVar13 = 0x16d;
        if (lVar9 < 0x16e) goto LAB_00398ce8;
      }
      lVar8 = uVar1 * -0x70a3d70a3d70a3d7;
      lVar13 = 0x16d;
      if ((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7 ||
          0x28f5c28f5c28f5c < (lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e)) {
        lVar13 = 0x16e;
      }
    } while (lVar13 < lVar9);
  }
LAB_00398ce8:
  if (0x1c < lVar9) {
    uVar11 = 0;
    if ((param_2 == '\x02') && ((uVar7 & 3) == 0)) {
      uVar6 = 1;
      if ((uVar7 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
          uVar7 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
        uVar6 = (uint)((uVar7 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                       uVar7 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
      }
      uVar11 = (ulong)uVar6;
    }
    lVar13 = uVar11 + (long)*(int *)(&DAT_03cdc1e8 + (long)param_2 * 4);
    if (lVar13 < lVar9) {
      do {
        while( true ) {
          lVar9 = lVar9 - lVar13;
          cVar3 = param_2 + '\x01';
          cVar5 = '\x01';
          if (cVar3 < '\r') {
            cVar5 = param_2 + '\x01';
          }
          param_2 = cVar5;
          lVar13 = (long)*(int *)(&DAT_03cdc1e8 + (long)param_2 * 4);
          if ('\f' < cVar3) {
            uVar7 = uVar7 + 1;
          }
          if (param_2 != '\x02') break;
          uVar6 = 1;
          if ((uVar7 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 |
              uVar7 * -0x70a3d70a3d70a3d7 << 0x3e) < 0x28f5c28f5c28f5d) {
            uVar6 = (uint)((uVar7 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                           uVar7 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
          }
          uVar2 = 0;
          if ((uVar7 & 3) == 0) {
            uVar2 = uVar6;
          }
          lVar13 = (ulong)uVar2 + lVar13;
          if (lVar9 <= lVar13) {
            return;
          }
        }
      } while (lVar13 < lVar9);
    }
  }
  return;
}


