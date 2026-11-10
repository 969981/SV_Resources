/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e9b90; name: FUN_008e9b90
 */


void FUN_008e9b90(float *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
LAB_008e9bc0:
  pfVar12 = param_2 + -2;
  pfVar14 = param_2 + -4;
LAB_008e9bc8:
  lVar10 = (long)param_2 - (long)param_1;
  uVar6 = lVar10 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    fVar15 = param_2[-2];
    fVar16 = *param_1;
    if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
      if (fVar15 <= fVar16) {
        return;
      }
    }
    else if (fVar16 <= fVar15) {
      return;
    }
    uVar11 = *(undefined8 *)param_1;
    break;
  case 3:
    fVar15 = param_1[2];
    fVar16 = *param_1;
    if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
      bVar2 = fVar16 < fVar15;
    }
    else {
      bVar2 = fVar15 < fVar16;
    }
    fVar16 = param_2[-2];
    if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
      bVar3 = fVar15 < fVar16;
    }
    else {
      bVar3 = fVar16 < fVar15;
    }
    if (!bVar2) {
      if (!bVar3) {
        return;
      }
      uVar11 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar11;
      fVar15 = param_1[2];
      fVar16 = *param_1;
      if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
        if (fVar15 <= fVar16) {
          return;
        }
      }
      else if (fVar16 <= fVar15) {
        return;
      }
      uVar11 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar11;
      return;
    }
    uVar11 = *(undefined8 *)param_1;
    if (!bVar3) {
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = uVar11;
      fVar15 = (float)uVar11;
      fVar16 = param_2[-2];
      if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
        if (fVar16 <= fVar15) {
          return;
        }
      }
      else if (fVar15 <= fVar16) {
        return;
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      goto LAB_008ea290;
    }
    break;
  case 4:
    FUN_008ea2e0(param_1,param_1 + 2,param_1 + 4,pfVar12,param_3);
    return;
  case 5:
    FUN_008ea520(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar12,param_3);
    return;
  default:
    if (lVar10 < 0xf8) {
      FUN_008ea670(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    pfVar8 = param_1 + (uVar5 & 0x3ffffffffffffffe);
    if (lVar10 < 0x1f39) {
      fVar15 = *pfVar8;
      fVar16 = *param_1;
      if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
        bVar2 = fVar16 < fVar15;
        fVar16 = *pfVar12;
        if (fVar15 < 0.0) goto LAB_008e9e20;
LAB_008e9e6c:
        bVar3 = fVar15 < fVar16;
        if (bVar2) goto LAB_008e9e78;
LAB_008e9e34:
        if (!bVar3) {
          iVar4 = 0;
          goto LAB_008e9c2c;
        }
        uVar11 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar12;
        *(undefined8 *)pfVar12 = uVar11;
        fVar15 = *pfVar8;
        fVar16 = *param_1;
        if ((fVar15 < 0.0) && (fVar16 < 0.0)) {
          if (fVar15 < fVar16) goto LAB_008ea094;
          goto LAB_008ea0c4;
        }
        if (fVar15 <= fVar16) goto LAB_008ea0c4;
LAB_008ea094:
        uVar11 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = uVar11;
      }
      else {
        bVar2 = fVar15 < fVar16;
        fVar16 = *pfVar12;
        if (0.0 <= fVar15) goto LAB_008e9e6c;
LAB_008e9e20:
        if (0.0 <= fVar16) goto LAB_008e9e6c;
        bVar3 = fVar16 < fVar15;
        if (!bVar2) goto LAB_008e9e34;
LAB_008e9e78:
        uVar11 = *(undefined8 *)param_1;
        if (bVar3) {
          *(undefined8 *)param_1 = *(undefined8 *)pfVar12;
          *(undefined8 *)pfVar12 = uVar11;
          iVar4 = 1;
          goto LAB_008e9c2c;
        }
        *(undefined8 *)param_1 = *(undefined8 *)pfVar8;
        fVar15 = (float)uVar11;
        *(undefined8 *)pfVar8 = uVar11;
        fVar16 = *pfVar12;
        if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
          if (fVar16 <= fVar15) goto LAB_008ea0c4;
        }
        else if (fVar15 <= fVar16) {
LAB_008ea0c4:
          iVar4 = 1;
          goto LAB_008e9c2c;
        }
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar12;
        *(undefined8 *)pfVar12 = uVar11;
      }
      iVar4 = 2;
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar10 = (uVar5 & 0x7ffffffffffffffc) * 2;
      iVar4 = FUN_008ea520(param_1,(long)param_1 + lVar10,pfVar8,(long)pfVar8 + lVar10,pfVar12,
                           param_3);
    }
LAB_008e9c2c:
    fVar15 = *param_1;
    fVar16 = *pfVar8;
    if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
      if (fVar15 <= fVar16) goto LAB_008e9c98;
    }
    else if (fVar16 <= fVar15) {
LAB_008e9c98:
      if (param_1 != pfVar14) {
        pfVar7 = pfVar14;
        if (0.0 <= fVar16) {
          do {
            if (fVar16 < *pfVar7) goto LAB_008e9d18;
            pfVar7 = pfVar7 + -2;
          } while (param_1 != pfVar7);
        }
        else {
          do {
            fVar17 = *pfVar7;
            if (fVar17 < 0.0) {
              if (fVar17 < fVar16) goto LAB_008e9d18;
            }
            else if (fVar16 < fVar17) goto LAB_008e9d18;
            pfVar7 = pfVar7 + -2;
          } while (param_1 != pfVar7);
        }
      }
      fVar16 = *pfVar12;
      pfVar8 = param_1 + 2;
      if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
        if (fVar16 < fVar15) goto LAB_008e9f88;
      }
      else if (fVar15 < fVar16) goto LAB_008e9f88;
      if (pfVar8 == pfVar12) {
        return;
      }
      pfVar8 = param_1 + 4;
      if (fVar15 < 0.0) {
        do {
          fVar16 = pfVar8[-2];
          if (fVar16 < 0.0) {
            if (fVar15 < fVar16) goto LAB_008e9f78;
          }
          else if (fVar16 < fVar15) goto LAB_008e9f78;
          pfVar8 = pfVar8 + 2;
          if (param_2 == pfVar8) {
            return;
          }
        } while( true );
      }
      while (fVar15 <= pfVar8[-2]) {
        pfVar8 = pfVar8 + 2;
        if (param_2 == pfVar8) {
          return;
        }
      }
LAB_008e9f78:
      uVar11 = *(undefined8 *)(pfVar8 + -2);
      *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)pfVar12;
      *(undefined8 *)pfVar12 = uVar11;
LAB_008e9f88:
      if (pfVar8 == pfVar12) {
        return;
      }
      fVar15 = *param_1;
      pfVar7 = pfVar12;
      do {
        if (fVar15 < 0.0) {
          do {
            fVar16 = *pfVar8;
            if (fVar16 < 0.0) {
              if (fVar15 < fVar16) goto LAB_008e9ff4;
            }
            else if (fVar16 < fVar15) goto LAB_008e9ff4;
            pfVar8 = pfVar8 + 2;
          } while( true );
        }
        pfVar8 = pfVar8 + -2;
        do {
          pfVar8 = pfVar8 + 2;
        } while (fVar15 <= *pfVar8);
LAB_008e9ff4:
        if (fVar15 < 0.0) {
          do {
            while( true ) {
              pfVar7 = pfVar7 + -2;
              fVar16 = *pfVar7;
              if (0.0 <= fVar16) break;
              if (fVar16 <= fVar15) goto LAB_008ea028;
            }
          } while (fVar16 < fVar15);
        }
        else {
          do {
            pfVar7 = pfVar7 + -2;
          } while (*pfVar7 < fVar15);
        }
LAB_008ea028:
        if (pfVar7 <= pfVar8) goto code_r0x008ea030;
        uVar11 = *(undefined8 *)pfVar8;
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
        *(undefined8 *)pfVar7 = uVar11;
        fVar15 = *param_1;
        pfVar8 = pfVar8 + 2;
      } while( true );
    }
    pfVar13 = param_1 + 2;
    pfVar7 = pfVar12;
    if (pfVar13 < pfVar12) goto LAB_008e9d38;
    goto LAB_008e9de0;
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
LAB_008ea290:
  *(undefined8 *)(param_2 + -2) = uVar11;
  return;
LAB_008e9d18:
  uVar11 = *(undefined8 *)param_1;
  iVar4 = iVar4 + 1;
  *(undefined8 *)param_1 = *(undefined8 *)pfVar7;
  *(undefined8 *)pfVar7 = uVar11;
  pfVar13 = param_1 + 2;
  if (pfVar13 < pfVar7) {
LAB_008e9d38:
    fVar15 = *pfVar8;
    pfVar13 = param_1;
    do {
      pfVar13 = pfVar13 + 2;
      if (fVar15 < 0.0) {
        do {
          fVar16 = *pfVar13;
          if (fVar16 < 0.0) {
            if (fVar15 <= fVar16) goto LAB_008e9d78;
          }
          else if (fVar16 <= fVar15) goto LAB_008e9d78;
          pfVar13 = pfVar13 + 2;
        } while( true );
      }
      pfVar13 = pfVar13 + -2;
      do {
        pfVar13 = pfVar13 + 2;
      } while (fVar15 < *pfVar13);
LAB_008e9d78:
      if (fVar15 < 0.0) {
        do {
          while( true ) {
            pfVar7 = pfVar7 + -2;
            fVar16 = *pfVar7;
            if (0.0 <= fVar16) break;
            if (fVar16 < fVar15) goto LAB_008e9dac;
          }
        } while (fVar16 <= fVar15);
      }
      else {
        do {
          pfVar7 = pfVar7 + -2;
        } while (*pfVar7 <= fVar15);
      }
LAB_008e9dac:
      if (pfVar7 < pfVar13) break;
      uVar11 = *(undefined8 *)pfVar13;
      iVar4 = iVar4 + 1;
      pfVar1 = pfVar7;
      if (pfVar8 != pfVar13) {
        pfVar1 = pfVar8;
      }
      *(undefined8 *)pfVar13 = *(undefined8 *)pfVar7;
      *(undefined8 *)pfVar7 = uVar11;
      fVar15 = *pfVar1;
      pfVar8 = pfVar1;
    } while( true );
  }
LAB_008e9de0:
  if (pfVar13 != pfVar8) {
    fVar15 = *pfVar8;
    fVar16 = *pfVar13;
    if ((0.0 <= fVar15) || (0.0 <= fVar16)) {
      if (fVar16 < fVar15) goto LAB_008e9e9c;
    }
    else if (fVar15 < fVar16) {
LAB_008e9e9c:
      uVar11 = *(undefined8 *)pfVar13;
      iVar4 = iVar4 + 1;
      *(undefined8 *)pfVar13 = *(undefined8 *)pfVar8;
      *(undefined8 *)pfVar8 = uVar11;
    }
  }
  if (iVar4 == 0) {
    uVar6 = FUN_008ea890(param_1,pfVar13,param_3);
    pfVar8 = pfVar13 + 2;
    uVar5 = FUN_008ea890(pfVar8,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      param_2 = pfVar13;
      if ((uVar6 & 1) != 0) {
        return;
      }
      goto LAB_008e9bc0;
    }
    if ((uVar6 & 1) != 0) {
      uVar9 = 2;
LAB_008ea038:
      if (4 < uVar9) {
        return;
      }
      param_1 = pfVar8;
      if ((1 << (ulong)uVar9 & 0x15U) == 0) {
        return;
      }
      goto LAB_008e9bc8;
    }
  }
  if ((long)pfVar13 - (long)param_1 < (long)param_2 - (long)pfVar13) {
    FUN_008e9b90(param_1,pfVar13,param_3);
    param_1 = pfVar13 + 2;
    goto LAB_008e9bc8;
  }
  FUN_008e9b90(pfVar13 + 2,param_2,param_3);
  param_2 = pfVar13;
  goto LAB_008e9bc0;
code_r0x008ea030:
  uVar9 = 4;
  goto LAB_008ea038;
}


