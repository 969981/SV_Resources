/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a0670; name: FUN_003a0670
 */


byte * FUN_003a0670(byte *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar1 = *param_1;
  if ((bVar1 == 0x2d) || (iVar7 = param_4, bVar1 == 0x2b)) {
    param_1 = param_1 + 1;
    iVar7 = -param_4;
    if (bVar1 != 0x2d) {
      iVar7 = param_4;
    }
  }
  iVar11 = 0;
  pbVar5 = param_1;
  do {
    pvVar4 = memchr("0123456789",(uint)*pbVar5,0xb);
    if (pvVar4 == (void *)0x0) goto LAB_003a074c;
    iVar6 = (int)pvVar4 + -0x3cdc2fc;
    if (iVar6 < 10) {
      if (iVar11 < 0xccccccd) {
        iVar2 = iVar11 * 10;
        iVar11 = 0;
        if (iVar2 <= 0x7fffffff - iVar6) {
          iVar11 = iVar6;
        }
        iVar11 = iVar11 + iVar2;
        if (iVar2 <= 0x7fffffff - iVar6) {
          iVar6 = 0;
          pbVar5 = pbVar5 + 1;
          goto LAB_003a06e8;
        }
      }
      iVar6 = 1;
    }
    else {
      iVar6 = 2;
    }
LAB_003a06e8:
  } while (iVar6 == 0);
  if (iVar6 == 2) {
LAB_003a074c:
    if (param_3 < iVar11) {
      return (byte *)0x0;
    }
    if (pbVar5 == param_1) {
      return (byte *)0x0;
    }
    if (iVar11 < param_2) {
      return (byte *)0x0;
    }
    if (*pbVar5 == 0x3a) {
      uVar8 = 0;
      lVar10 = 1;
      do {
        pvVar4 = memchr("0123456789",(uint)pbVar5[lVar10],0xb);
        if (pvVar4 == (void *)0x0) goto LAB_003a081c;
        iVar6 = (int)pvVar4 + -0x3cdc2fc;
        if (iVar6 < 10) {
          if ((int)uVar8 < 0xccccccd) {
            iVar3 = uVar8 * 10;
            iVar2 = 0;
            if (iVar3 <= 0x7fffffff - iVar6) {
              iVar2 = iVar6;
            }
            uVar8 = iVar2 + iVar3;
            if (iVar3 <= 0x7fffffff - iVar6) {
              iVar6 = 0;
              lVar10 = lVar10 + 1;
              goto LAB_003a0794;
            }
          }
          iVar6 = 1;
        }
        else {
          iVar6 = 2;
        }
LAB_003a0794:
      } while (iVar6 == 0);
      if (iVar6 != 2) goto LAB_003a08e0;
LAB_003a081c:
      if (lVar10 == 1) {
        return (byte *)0x0;
      }
      if (0x3b < uVar8) {
        return (byte *)0x0;
      }
      pbVar5 = pbVar5 + lVar10;
      if (*pbVar5 != 0x3a) goto LAB_003a07f4;
      uVar9 = 0;
      lVar10 = 1;
      do {
        pvVar4 = memchr("0123456789",(uint)pbVar5[lVar10],0xb);
        if (pvVar4 == (void *)0x0) goto LAB_003a08c4;
        iVar6 = (int)pvVar4 + -0x3cdc2fc;
        if (iVar6 < 10) {
          if ((int)uVar9 < 0xccccccd) {
            iVar3 = uVar9 * 10;
            iVar2 = 0;
            if (iVar3 <= 0x7fffffff - iVar6) {
              iVar2 = iVar6;
            }
            uVar9 = iVar2 + iVar3;
            if (iVar3 <= 0x7fffffff - iVar6) {
              iVar6 = 0;
              lVar10 = lVar10 + 1;
              goto LAB_003a0860;
            }
          }
          iVar6 = 1;
        }
        else {
          iVar6 = 2;
        }
LAB_003a0860:
      } while (iVar6 == 0);
      if (iVar6 != 2) goto LAB_003a08e0;
LAB_003a08c4:
      if (lVar10 == 1) {
        return (byte *)0x0;
      }
      if (0x3b < uVar9) {
        return (byte *)0x0;
      }
      pbVar5 = pbVar5 + lVar10;
    }
    else {
      uVar8 = 0;
LAB_003a07f4:
      uVar9 = 0;
    }
    *param_5 = (uVar9 + (uVar8 + iVar11 * 0x3c) * 0x3c) * iVar7;
  }
  else {
LAB_003a08e0:
    pbVar5 = (byte *)0x0;
  }
  return pbVar5;
}


