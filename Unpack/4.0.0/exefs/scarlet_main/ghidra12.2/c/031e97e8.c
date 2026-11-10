/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e97e8; name: FUN_031e97e8
 */


uint FUN_031e97e8(long param_1,uint param_2,ulong *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong *puVar16;
  short *psVar17;
  ulong uVar18;
  
  uVar15 = *param_3;
  uVar6 = *(ulong *)(param_1 + 0x20) & uVar15;
  uVar5 = (uint)uVar6;
  uVar10 = (uint)uVar15;
  if ((((uVar5 >> 0xe & 1) != 0) &&
      (uVar7 = CONCAT44(uVar10,uVar10) & 0x3fff00003fff,
      puVar16 = (ulong *)param_3[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)))
                                 + 2], puVar16 != (ulong *)0x0)) &&
     (uVar7 = *puVar16, 0 < (int)uVar7)) {
    uVar18 = 0;
    do {
      uVar11 = *(undefined8 *)puVar16[uVar18 * 2 + 1];
      if ((((uint)uVar11 >> 3 & 1) != 0) &&
         (pbVar13 = (byte *)((undefined8 *)puVar16[uVar18 * 2 + 1])
                            [(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2], pbVar13 != (byte *)0x0))
      {
        sVar4 = strlen((char *)pbVar13);
        param_2 = ~param_2;
        if (sVar4 << 0x20 != 0) {
          lVar12 = (long)(sVar4 << 0x20) >> 0x20;
          pbVar14 = pbVar13;
          if ((sVar4 & 1) != 0) {
            pbVar14 = pbVar13 + 1;
            param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(param_2 & 0xff ^ (uint)*pbVar13) * 4) ^
                      param_2 >> 8;
            lVar12 = lVar12 + -1;
          }
          if ((int)sVar4 != 1) {
            do {
              uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)(param_2 & 0xff ^ (uint)*pbVar14) * 4) ^
                      param_2 >> 8;
              pbVar13 = pbVar14 + 1;
              pbVar14 = pbVar14 + 2;
              param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar3 & 0xff ^ (uint)*pbVar13) * 4) ^
                        uVar3 >> 8;
              lVar12 = lVar12 + -2;
            } while (lVar12 != 0);
          }
        }
        param_2 = ~param_2;
      }
      uVar2 = (uint)puVar16[uVar18 * 2 + 2];
      uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((param_2 ^ uVar2 ^ 0xffffffff) & 0xff) * 4) ^
              ~param_2 >> 8;
      uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar2 >> 8) & 0xff) * 4) ^ uVar3 >> 8;
      uVar18 = uVar18 + 1;
      uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar2 >> 0x10) & 0xff) * 4) ^ uVar3 >> 8;
      param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar3 & 0xff ^ uVar2 >> 0x18) * 4) ^
                uVar3 >> 8 ^ 0xffffffff;
    } while (uVar18 != (uVar7 & 0xffffffff));
  }
  if ((uVar6 & 1) != 0) {
    if ((uVar15 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_3[2];
    }
    uVar2 = (uint)uVar6;
    uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((param_2 ^ uVar2 ^ 0xffffffff) & 0xff) * 4) ^
            ~param_2 >> 8;
    uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar2 >> 8) & 0xff) * 4) ^ uVar3 >> 8;
    uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar2 >> 0x10) & 0xff) * 4) ^ uVar3 >> 8;
    if ((uVar6 & 0x6f) == 0x28) {
      uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar3 & 0xff ^ uVar2 >> 0x18) * 4) ^ uVar3 >> 8;
      if ((uVar10 >> 1 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_3[(ulong)(byte)POPCOUNT((byte)uVar15 & 1) + 2];
      }
      uVar2 = FUN_031e9ec4(param_1,uVar6);
      uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar2) & 0xff) * 4) ^ uVar3 >> 8;
      uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar10 ^ uVar2 >> 8) & 0xff) * 4) ^ uVar10 >> 8;
      uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar10 ^ uVar2 >> 0x10) & 0xff) * 4) ^ uVar10 >> 8
      ;
      param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar10 & 0xff ^ uVar2 >> 0x18) * 4) ^
                uVar10 >> 8 ^ 0xffffffff;
    }
    else {
      param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar3 & 0xff ^ uVar2 >> 0x18) * 4) ^
                uVar3 >> 8 ^ 0xffffffff;
    }
  }
  if ((((uVar5 >> 3 & 1) != 0) && (((uint)*param_3 >> 3 & 1) != 0)) &&
     (pbVar13 = (byte *)param_3[(ulong)(byte)POPCOUNT((byte)*param_3 & 7) + 2],
     pbVar13 != (byte *)0x0)) {
    sVar4 = strlen((char *)pbVar13);
    param_2 = ~param_2;
    if (sVar4 << 0x20 != 0) {
      lVar12 = (long)(sVar4 << 0x20) >> 0x20;
      do {
        param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(param_2 & 0xff ^ (uint)*pbVar13) * 4) ^
                  param_2 >> 8;
        lVar12 = lVar12 + -1;
        pbVar13 = pbVar13 + 1;
      } while (lVar12 != 0);
    }
    param_2 = ~param_2;
  }
  if ((uVar5 >> 0xf & 1) != 0) {
    param_2 = FUN_031e9634(param_2,param_3);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    if (((uint)*param_3 >> 4 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)param_3[(ulong)(byte)POPCOUNT((byte)*param_3 & 0xf) + 2];
    }
    uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((param_2 ^ uVar10 ^ 0xffffffff) & 0xff) * 4) ^
            ~param_2 >> 8;
    uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar10 >> 8) & 0xff) * 4) ^ uVar3 >> 8;
    uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar3 ^ uVar10 >> 0x10) & 0xff) * 4) ^ uVar3 >> 8;
    param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar3 & 0xff ^ uVar10 >> 0x18) * 4) ^
              uVar3 >> 8 ^ 0xffffffff;
  }
  uVar10 = (uint)*param_3;
  if ((uVar5 >> 0x14 & 1) != 0) {
    if ((uVar10 >> 0x14 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar10 & 0xfffff;
      uVar3 = (uint)param_3[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                                         POPCOUNT((char)(uVar3 >> 0x10))) + 2];
    }
    uVar2 = *(uint *)(&DAT_03d770a0 + (ulong)((param_2 ^ uVar3 ^ 0xffffffff) & 0xff) * 4) ^
            ~param_2 >> 8;
    uVar2 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar2 ^ uVar3 >> 8) & 0xff) * 4) ^ uVar2 >> 8;
    uVar2 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar2 ^ uVar3 >> 0x10) & 0xff) * 4) ^ uVar2 >> 8;
    param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar2 & 0xff ^ uVar3 >> 0x18) * 4) ^
              uVar2 >> 8 ^ 0xffffffff;
  }
  if ((uVar10 >> 0x15 & 1) != 0) {
    uVar3 = uVar10 & 0x1fffff;
    uVar3 = (uint)param_3[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                                       POPCOUNT((char)(uVar3 >> 0x10))) + 2];
    if (uVar3 != 0) {
      uVar2 = *(uint *)(&DAT_03d770a0 + (ulong)((param_2 ^ uVar3 ^ 0xffffffff) & 0xff) * 4) ^
              ~param_2 >> 8;
      uVar2 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar2 ^ uVar3 >> 8) & 0xff) * 4) ^ uVar2 >> 8;
      uVar2 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar2 ^ uVar3 >> 0x10) & 0xff) * 4) ^ uVar2 >> 8;
      param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar2 & 0xff ^ uVar3 >> 0x18) * 4) ^
                uVar2 >> 8 ^ 0xffffffff;
    }
  }
  if ((uVar10 >> 0x17 & 1) != 0) {
    uVar10 = uVar10 & 0x7fffff;
    psVar8 = (short *)param_3[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                           POPCOUNT((char)(uVar10 >> 0x10))) + 2];
    if ((psVar8 != (short *)0x0) && (sVar1 = *psVar8, (long)sVar1 != 0)) {
      psVar17 = psVar8 + 4;
      do {
        puVar16 = *(ulong **)psVar17;
        if (puVar16 != (ulong *)0x0) {
          puVar9 = puVar16;
          do {
            uVar10 = (uint)*puVar9;
            if ((uVar10 >> 0x10 & 1) != 0) {
              uVar10 = uVar10 & 0xffff;
              pbVar13 = (byte *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                    POPCOUNT((char)(uVar10 >> 8))) + 2];
              goto LAB_031e9cf8;
            }
          } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
        }
        pbVar13 = (byte *)0x0;
LAB_031e9cf8:
        sVar4 = strlen((char *)pbVar13);
        param_2 = ~param_2;
        if (sVar4 << 0x20 != 0) {
          lVar12 = (long)(sVar4 << 0x20) >> 0x20;
          pbVar14 = pbVar13;
          if ((sVar4 & 1) != 0) {
            pbVar14 = pbVar13 + 1;
            param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(param_2 & 0xff ^ (uint)*pbVar13) * 4) ^
                      param_2 >> 8;
            lVar12 = lVar12 + -1;
          }
          if ((int)sVar4 != 1) {
            do {
              uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)(param_2 & 0xff ^ (uint)*pbVar14) * 4) ^
                       param_2 >> 8;
              pbVar13 = pbVar14 + 1;
              pbVar14 = pbVar14 + 2;
              param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar10 & 0xff ^ (uint)*pbVar13) * 4) ^
                        uVar10 >> 8;
              lVar12 = lVar12 + -2;
            } while (lVar12 != 0);
          }
        }
        uVar10 = (uint)*puVar16;
        if ((uVar10 >> 0x11 & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar6 = CONCAT44(uVar10,uVar10) & 0x1ffff0001ffff;
          uVar10 = (uint)(ushort)puVar16[(ulong)(byte)(POPCOUNT((char)uVar6) +
                                                       POPCOUNT((char)(uVar6 >> 8)) +
                                                      POPCOUNT((char)(uVar6 >> 0x10))) + 2];
        }
        uVar3 = *(uint *)(&DAT_03d770a0 + (ulong)((param_2 ^ uVar10) & 0xff) * 4) ^ param_2 >> 8;
        uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar3 & 0xff ^ uVar10 >> 8) * 4) ^ uVar3 >> 8;
        uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar10 & 0xff) * 4) ^ uVar10 >> 8;
        uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar10 & 0xff) * 4) ^ uVar10 >> 8;
        uVar3 = FUN_031e9ec4(param_1,puVar16[1]);
        psVar17 = psVar17 + 4;
        uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar10 ^ uVar3) & 0xff) * 4) ^ uVar10 >> 8;
        uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar10 ^ uVar3 >> 8) & 0xff) * 4) ^ uVar10 >> 8;
        uVar10 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar10 ^ uVar3 >> 0x10) & 0xff) * 4) ^
                 uVar10 >> 8;
        param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar10 & 0xff ^ uVar3 >> 0x18) * 4) ^
                  uVar10 >> 8 ^ 0xffffffff;
      } while (psVar17 != psVar8 + (long)sVar1 * 4 + 4);
    }
  }
  if ((uVar5 >> 0x19 & 1) != 0) {
    if (((uint)*param_3 >> 0x19 & 1) == 0) {
      pbVar13 = (byte *)0x0;
    }
    else {
      uVar5 = (uint)*param_3 & 0x1ffffff;
      pbVar13 = (byte *)param_3[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                             POPCOUNT((char)(uVar5 >> 0x10)) +
                                             POPCOUNT((char)(uVar5 >> 0x18))) + 2];
    }
    sVar4 = strlen((char *)pbVar13);
    param_2 = ~param_2;
    if (sVar4 << 0x20 != 0) {
      lVar12 = (long)(sVar4 << 0x20) >> 0x20;
      do {
        param_2 = *(uint *)(&DAT_03d770a0 + (ulong)(param_2 & 0xff ^ (uint)*pbVar13) * 4) ^
                  param_2 >> 8;
        lVar12 = lVar12 + -1;
        pbVar13 = pbVar13 + 1;
      } while (lVar12 != 0);
    }
    param_2 = ~param_2;
  }
  return param_2;
}


