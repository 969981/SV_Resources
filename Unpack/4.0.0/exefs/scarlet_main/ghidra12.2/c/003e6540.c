/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e6540; name: FUN_003e6540
 */


int FUN_003e6540(code *param_1,undefined8 param_2,long param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  byte abStack_184 [292];
  
  if (0x3f < (int)param_5) {
    param_5 = 0x40;
  }
  param_5 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_5;
  if (-1 < (int)(param_5 - 3)) {
    uVar3 = param_5 - 3;
  }
  uVar2 = 0x10;
  if (5 < (int)param_5) {
    uVar2 = 0x10 - ((int)uVar3 >> 2);
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_4 / (int)uVar2;
  }
  if ((int)(uVar3 * uVar2) < param_4) {
    uVar3 = uVar3 + 1;
  }
  if ((int)uVar3 < 1) {
    iVar15 = 0;
  }
  else if ((int)uVar2 < 1) {
    iVar5 = 0;
    iVar15 = 0;
    uVar13 = (ulong)uVar3;
    do {
      iVar6 = FUN_003e7390(abStack_184,0x121,"%*s%04x - ",param_5,&DAT_03c886bc,iVar5);
      uVar14 = (ulong)iVar6;
      if (2 < 0x121 - uVar14) {
        iVar6 = iVar6 + 2;
        pbVar1 = abStack_184 + uVar14;
        abStack_184[uVar14 + 2] = 0;
        uVar14 = (ulong)iVar6;
        pbVar1[0] = 0x20;
        pbVar1[1] = 0x20;
      }
      if ((uVar14 & 0xfffffffffffffffe) != 0x120) {
        abStack_184[uVar14] = 10;
        uVar14 = (long)iVar6 + 1;
        abStack_184[(long)iVar6 + 1] = 0;
      }
      iVar6 = (*param_1)(abStack_184,uVar14,param_2);
      iVar15 = iVar6 + iVar15;
      iVar5 = iVar5 + uVar2;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  else {
    lVar16 = 0;
    uVar13 = 0;
    iVar15 = 0;
    uVar14 = (ulong)uVar2;
    do {
      uVar7 = FUN_003e7390(abStack_184,0x121,"%*s%04x - ",param_5,&DAT_03c886bc,
                           uVar13 * uVar14 & 0xffffffff);
      uVar17 = uVar7 & 0xffffffff;
      uVar10 = (ulong)(int)uVar7;
      uVar7 = 0;
      uVar11 = 0x121 - uVar10;
      do {
        if (3 < uVar11) {
          if ((int)lVar16 + (int)uVar7 < param_4) {
            uVar9 = 0x2d;
            if (uVar7 != 7) {
              uVar9 = 0x20;
            }
            FUN_003e7390(abStack_184 + uVar10,4,"%02x%c",*(undefined1 *)(param_3 + uVar7),uVar9);
          }
          else {
            pbVar1 = abStack_184 + uVar10;
            pbVar1[0] = 0x20;
            pbVar1[1] = 0x20;
            pbVar1[2] = 0x20;
            pbVar1[3] = 0;
          }
          uVar17 = (ulong)((int)uVar17 + 3);
        }
        uVar7 = uVar7 + 1;
        uVar10 = (ulong)(int)uVar17;
        uVar11 = 0x121 - uVar10;
      } while (uVar14 != uVar7);
      if (2 < uVar11) {
        abStack_184[uVar10 + 2] = 0;
        uVar2 = (int)uVar17 + 2;
        uVar17 = (ulong)uVar2;
        (abStack_184 + uVar10)[0] = 0x20;
        (abStack_184 + uVar10)[1] = 0x20;
        uVar10 = (ulong)(int)uVar2;
      }
      iVar5 = (int)uVar17;
      bVar4 = (uVar10 & 0xfffffffffffffffe) == 0x120;
      if ((long)(uVar13 * uVar14) < (long)param_4) {
        uVar7 = uVar10;
        uVar11 = 0;
        do {
          iVar5 = (int)uVar17;
          if (bVar4) {
            uVar10 = (ulong)iVar5;
          }
          else {
            bVar12 = *(byte *)(param_3 + uVar11);
            uVar10 = (long)iVar5 + 1;
            if (0x5e < bVar12 - 0x20) {
              bVar12 = 0x2e;
            }
            abStack_184[uVar7] = bVar12;
            abStack_184[(long)iVar5 + 1] = 0;
            uVar17 = uVar10;
          }
          iVar5 = (int)uVar17;
          bVar4 = (uVar10 & 0xfffffffffffffffe) == 0x120;
        } while ((uVar11 + 1 < uVar14) &&
                (iVar6 = (int)uVar11, uVar7 = uVar10, uVar11 = uVar11 + 1,
                (int)lVar16 + iVar6 + 1 < param_4));
      }
      if (bVar4) {
        lVar8 = (long)iVar5;
      }
      else {
        lVar8 = (long)iVar5 + 1;
        abStack_184[uVar10] = 10;
        abStack_184[(long)iVar5 + 1] = 0;
      }
      iVar5 = (*param_1)(abStack_184,lVar8,param_2);
      uVar13 = uVar13 + 1;
      iVar15 = iVar5 + iVar15;
      param_3 = param_3 + uVar14;
      lVar16 = lVar16 + uVar14;
    } while (uVar13 != uVar3);
  }
  return iVar15;
}


