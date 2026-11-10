/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00edb370; name: FUN_00edb370
 */


void FUN_00edb370(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  short sVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  
LAB_00edb394:
  pbVar16 = param_2 + -8;
  pbVar13 = param_1;
LAB_00edb3a0:
  param_1 = pbVar13;
  lVar12 = (long)param_2 - (long)param_1;
  uVar10 = lVar12 >> 3;
  switch(uVar10) {
  case 0:
  case 1:
    goto switchD_00edb3c8_caseD_0;
  case 2:
    if (*pbVar16 == *param_1) {
      sVar5 = *(short *)(param_2 + -2);
      sVar9 = *(short *)(param_1 + 6);
      if (sVar5 == sVar9) {
        sVar5 = *(short *)(param_2 + -6);
        sVar9 = *(short *)(param_1 + 2);
      }
      if (sVar9 <= sVar5) {
        return;
      }
    }
    else if (*param_1 <= *pbVar16) {
      return;
    }
    uVar14 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)pbVar16;
    *(undefined8 *)pbVar16 = uVar14;
    return;
  case 3:
    FUN_00edbb30(param_1,param_1 + 8,pbVar16);
    return;
  case 4:
    FUN_00edb9e0(param_1,param_1 + 8,param_1 + 0x10,pbVar16);
    return;
  case 5:
    FUN_00edbcb0(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,pbVar16);
    return;
  }
  if (lVar12 < 0xf8) {
    FUN_00edbb30(param_1,param_1 + 8,param_1 + 0x10);
    if (param_1 + 0x18 == param_2) {
      return;
    }
    lVar12 = 0;
    pbVar16 = param_1 + 0x18;
    pbVar13 = param_1 + 0x10;
    goto LAB_00edb4e0;
  }
  uVar8 = uVar10;
  if ((long)uVar10 < 0) {
    uVar8 = uVar10 + 1;
  }
  pbVar13 = param_1 + ((long)uVar8 >> 1) * 8;
  if (lVar12 < 0x1f39) {
    iVar7 = FUN_00edbb30(param_1,pbVar13,pbVar16);
  }
  else {
    uVar8 = uVar10 + 3;
    if (-1 < (long)uVar10) {
      uVar8 = uVar10;
    }
    lVar12 = (uVar8 & 0x7ffffffffffffffc) * 2;
    iVar7 = FUN_00edbcb0(param_1,param_1 + lVar12,pbVar13,pbVar13 + lVar12,pbVar16);
  }
  bVar3 = *param_1;
  bVar4 = *pbVar13;
  if (bVar3 == bVar4) {
    sVar9 = *(short *)(param_1 + 6);
    sVar5 = *(short *)(pbVar13 + 6);
    if (sVar9 == sVar5) {
      sVar9 = *(short *)(param_1 + 2);
      sVar5 = *(short *)(pbVar13 + 2);
    }
    if (sVar5 <= sVar9) goto LAB_00edb740;
  }
  else if (bVar4 <= bVar3) {
LAB_00edb740:
    if (param_1 != param_2 + -0x10) {
      pbVar11 = param_2 + -0x10;
      do {
        if (*pbVar11 == bVar4) {
          sVar9 = *(short *)(pbVar11 + 6);
          sVar5 = *(short *)(pbVar13 + 6);
          if (sVar9 == sVar5) {
            sVar9 = *(short *)(pbVar11 + 2);
            sVar5 = *(short *)(pbVar13 + 2);
          }
          if (sVar9 < sVar5) goto LAB_00edb924;
        }
        else if (*pbVar11 < bVar4) {
LAB_00edb924:
          uVar14 = *(undefined8 *)param_1;
          iVar7 = iVar7 + 1;
          *(undefined8 *)param_1 = *(undefined8 *)pbVar11;
          *(undefined8 *)pbVar11 = uVar14;
          goto LAB_00edb608;
        }
        pbVar11 = pbVar11 + -8;
      } while (param_1 != pbVar11);
    }
    pbVar11 = param_1 + 8;
    if (bVar3 == *pbVar16) {
      sVar9 = *(short *)(param_1 + 6);
      sVar5 = *(short *)(param_2 + -2);
      if (sVar9 == sVar5) {
        sVar9 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(param_2 + -6);
      }
      if (sVar5 <= sVar9) goto LAB_00edb95c;
    }
    else if (*pbVar16 <= bVar3) {
LAB_00edb95c:
      if (pbVar11 == pbVar16) {
        return;
      }
      pbVar11 = param_1 + 0x10;
      do {
        if (bVar3 == pbVar11[-8]) {
          sVar9 = *(short *)(param_1 + 6);
          sVar5 = *(short *)(pbVar11 + -2);
          if (sVar9 == sVar5) {
            sVar9 = *(short *)(param_1 + 2);
            sVar5 = *(short *)(pbVar11 + -6);
          }
          if (sVar9 < sVar5) goto LAB_00edb9b8;
        }
        else if (bVar3 < pbVar11[-8]) goto LAB_00edb9b8;
        pbVar11 = pbVar11 + 8;
        if (param_2 == pbVar11) {
          return;
        }
      } while( true );
    }
    goto LAB_00edb870;
  }
  pbVar11 = pbVar16;
LAB_00edb608:
  pbVar18 = param_1 + 8;
  pbVar17 = pbVar18;
  if (pbVar18 < pbVar11) {
LAB_00edb614:
    bVar3 = *pbVar13;
    pbVar17 = pbVar18;
    do {
      pbVar18 = pbVar11;
      if (*pbVar17 == bVar3) {
        sVar9 = *(short *)(pbVar17 + 6);
        sVar5 = *(short *)(pbVar13 + 6);
        if (sVar9 == sVar5) {
          sVar9 = *(short *)(pbVar17 + 2);
          sVar5 = *(short *)(pbVar13 + 2);
        }
        if (sVar5 <= sVar9) goto LAB_00edb66c;
      }
      else if (bVar3 <= *pbVar17) goto LAB_00edb66c;
      pbVar17 = pbVar17 + 8;
    } while( true );
  }
LAB_00edb6c8:
  if (pbVar17 != pbVar13) {
    if (*pbVar13 == *pbVar17) {
      sVar9 = *(short *)(pbVar13 + 6);
      sVar5 = *(short *)(pbVar17 + 6);
      if (sVar9 == sVar5) {
        sVar9 = *(short *)(pbVar13 + 2);
        sVar5 = *(short *)(pbVar17 + 2);
      }
      if (sVar9 < sVar5) goto LAB_00edb6e4;
    }
    else if (*pbVar13 < *pbVar17) {
LAB_00edb6e4:
      uVar14 = *(undefined8 *)pbVar17;
      iVar7 = iVar7 + 1;
      *(undefined8 *)pbVar17 = *(undefined8 *)pbVar13;
      *(undefined8 *)pbVar13 = uVar14;
    }
  }
  if (iVar7 == 0) {
    uVar10 = FUN_0271be50(param_1,pbVar17);
    uVar8 = FUN_0271be50(pbVar17 + 8,param_2);
    if ((uVar8 & 1) != 0) goto LAB_00edb820;
    pbVar13 = pbVar17 + 8;
    if ((uVar10 & 1) != 0) goto LAB_00edb3a0;
  }
  if ((long)param_2 - (long)pbVar17 <= (long)pbVar17 - (long)param_1) {
    FUN_00edb370(pbVar17 + 8,param_2);
    param_2 = pbVar17;
    goto LAB_00edb394;
  }
  FUN_00edb370(param_1,pbVar17);
  pbVar13 = pbVar17 + 8;
  goto LAB_00edb3a0;
LAB_00edb4e0:
  pbVar11 = pbVar16;
  if (*pbVar11 == *pbVar13) {
    sVar9 = *(short *)(pbVar11 + 6);
    sVar5 = *(short *)(pbVar13 + 6);
    if (sVar9 == sVar5) {
      sVar9 = *(short *)(pbVar11 + 2);
      sVar5 = *(short *)(pbVar13 + 2);
    }
    if (sVar9 < sVar5) goto LAB_00edb4fc;
  }
  else if (*pbVar11 < *pbVar13) {
LAB_00edb4fc:
    uVar14 = *(undefined8 *)pbVar11;
    *(undefined8 *)pbVar11 = *(undefined8 *)pbVar13;
    if (pbVar13 != param_1) {
      lVar15 = lVar12;
      do {
        uVar1 = (uint)uVar14 & 0xff;
        if (param_1[lVar15 + 8] == uVar1) {
          sVar9 = (short)((ulong)uVar14 >> 0x30);
          if (*(short *)(param_1 + lVar15 + 0xe) == sVar9) {
            if ((int)*(short *)(param_1 + lVar15 + 10) <= (int)(uint)uVar14 >> 0x10)
            goto LAB_00edb59c;
          }
          else if (*(short *)(param_1 + lVar15 + 0xe) <= sVar9) goto LAB_00edb59c;
        }
        else if (param_1[lVar15 + 8] <= uVar1) {
          pbVar13 = param_1 + lVar15 + 0x10;
          goto LAB_00edb59c;
        }
        pbVar13 = pbVar13 + -8;
        bVar6 = lVar15 != -8;
        *(undefined8 *)(param_1 + lVar15 + 0x10) = *(undefined8 *)(param_1 + lVar15 + 8);
        lVar15 = lVar15 + -8;
      } while (bVar6);
      pbVar13 = param_1;
    }
LAB_00edb59c:
    *(undefined8 *)pbVar13 = uVar14;
  }
  lVar12 = lVar12 + 8;
  pbVar16 = pbVar11 + 8;
  pbVar13 = pbVar11;
  if (pbVar11 + 8 == param_2) {
switchD_00edb3c8_caseD_0:
    return;
  }
  goto LAB_00edb4e0;
LAB_00edb9b8:
  uVar14 = *(undefined8 *)(pbVar11 + -8);
  *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar16;
  *(undefined8 *)pbVar16 = uVar14;
LAB_00edb870:
  if (pbVar11 == pbVar16) {
    return;
  }
  pbVar18 = pbVar16;
LAB_00edb87c:
  bVar3 = *param_1;
  pbVar13 = pbVar11;
  do {
    pbVar11 = pbVar18;
    if (bVar3 == *pbVar13) {
      sVar9 = *(short *)(param_1 + 6);
      sVar5 = *(short *)(pbVar13 + 6);
      if (sVar9 == sVar5) {
        sVar9 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(pbVar13 + 2);
      }
      if (sVar9 < sVar5) break;
    }
    else if (bVar3 < *pbVar13) break;
    pbVar13 = pbVar13 + 8;
  } while( true );
  while (pbVar11 = pbVar18, bVar3 < *pbVar18) {
LAB_00edb8d4:
    pbVar18 = pbVar11 + -8;
    if (bVar3 == *pbVar18) {
      sVar9 = *(short *)(param_1 + 6);
      sVar5 = *(short *)(pbVar11 + -2);
      if (sVar9 == sVar5) {
        sVar9 = *(short *)(param_1 + 2);
        sVar5 = *(short *)(pbVar11 + -6);
      }
      pbVar11 = pbVar18;
      if (sVar5 <= sVar9) break;
      goto LAB_00edb8d4;
    }
  }
  if (pbVar18 <= pbVar13) goto LAB_00edb3a0;
  uVar14 = *(undefined8 *)pbVar13;
  pbVar11 = pbVar13 + 8;
  *(undefined8 *)pbVar13 = *(undefined8 *)pbVar18;
  *(undefined8 *)pbVar18 = uVar14;
  goto LAB_00edb87c;
  while (pbVar18 = pbVar11, bVar3 <= *pbVar11) {
LAB_00edb66c:
    pbVar11 = pbVar18 + -8;
    if (*pbVar11 == bVar3) {
      sVar9 = *(short *)(pbVar18 + -2);
      sVar5 = *(short *)(pbVar13 + 6);
      if (sVar9 == sVar5) {
        sVar9 = *(short *)(pbVar18 + -6);
        sVar5 = *(short *)(pbVar13 + 2);
      }
      pbVar18 = pbVar11;
      if (sVar9 < sVar5) break;
      goto LAB_00edb66c;
    }
  }
  if (pbVar11 < pbVar17) goto LAB_00edb6c8;
  uVar14 = *(undefined8 *)pbVar17;
  iVar7 = iVar7 + 1;
  pbVar2 = pbVar11;
  if (pbVar13 != pbVar17) {
    pbVar2 = pbVar13;
  }
  pbVar18 = pbVar17 + 8;
  *(undefined8 *)pbVar17 = *(undefined8 *)pbVar11;
  *(undefined8 *)pbVar11 = uVar14;
  pbVar13 = pbVar2;
  goto LAB_00edb614;
LAB_00edb820:
  param_2 = pbVar17;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_00edb394;
}


