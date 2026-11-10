/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6d9f0; name: FUN_00c6d9f0
 */


void FUN_00c6d9f0(uint *param_1,uint *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  
LAB_00c6da10:
  puVar16 = param_2 + -1;
  puVar15 = param_2 + -2;
  puVar17 = param_1;
LAB_00c6da18:
  param_1 = puVar17;
  lVar14 = (long)param_2 - (long)param_1;
  uVar11 = lVar14 >> 2;
  if (uVar11 < 2) {
    return;
  }
  switch(uVar11) {
  case 2:
    uVar2 = *puVar16;
    lVar18 = *(long *)(*param_3 + 0x60);
    uVar3 = *param_1;
    lVar14 = *(long *)(lVar18 + (ulong)uVar2 * 8);
    lVar18 = *(long *)(lVar18 + (ulong)uVar3 * 8);
    iVar9 = *(int *)(lVar14 + 0x20);
    iVar4 = *(int *)(lVar18 + 0x20);
    if (iVar9 == iVar4) {
      fVar23 = *(float *)(lVar14 + 0x24);
      fVar24 = *(float *)(lVar18 + 0x24);
      if (fVar23 == fVar24) {
        if (uVar3 <= uVar2) {
          return;
        }
      }
      else if (*(int *)(*param_3 + 0x1e0) == 2) {
        if (fVar24 <= fVar23) {
          return;
        }
      }
      else if (fVar23 <= fVar24) {
        return;
      }
    }
    else if (iVar4 <= iVar9) {
      return;
    }
    *param_1 = uVar2;
    *puVar16 = uVar3;
    return;
  case 3:
    FUN_00c6e440(param_1,param_1 + 1,puVar16,param_3);
    return;
  case 4:
    FUN_00c6e280(param_1,param_1 + 1,param_1 + 2,puVar16,param_3);
    return;
  case 5:
    FUN_00c6e980(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
    return;
  }
  if (lVar14 < 0x7c) {
    FUN_00c6e440(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar14 = 0;
    puVar17 = param_1 + 3;
    puVar16 = param_1 + 2;
    goto LAB_00c6db9c;
  }
  uVar10 = uVar11;
  if ((long)uVar11 < 0) {
    uVar10 = uVar11 + 1;
  }
  puVar17 = (uint *)((long)param_1 + (uVar10 & 0x7ffffffffffffffe) * 2);
  if (lVar14 < 0xf9d) {
    iVar9 = FUN_00c6e440(param_1,puVar17,puVar16,param_3);
  }
  else {
    uVar10 = uVar11 + 3;
    if (-1 < (long)uVar11) {
      uVar10 = uVar11;
    }
    iVar9 = FUN_00c6e980(param_1,(long)param_1 + (uVar10 & 0xfffffffffffffffc),puVar17,
                         (long)puVar17 + (uVar10 & 0xfffffffffffffffc),puVar16,param_3);
  }
  lVar14 = *param_3;
  uVar2 = *param_1;
  lVar18 = *(long *)(lVar14 + 0x60);
  uVar3 = *puVar17;
  lVar19 = *(long *)(lVar18 + (ulong)uVar2 * 8);
  iVar4 = *(int *)(lVar19 + 0x20);
  lVar20 = *(long *)(lVar18 + (ulong)uVar3 * 8);
  iVar5 = *(int *)(lVar20 + 0x20);
  puVar12 = puVar15;
  if (iVar4 == iVar5) {
    fVar23 = *(float *)(lVar19 + 0x24);
    fVar24 = *(float *)(lVar20 + 0x24);
    if (fVar23 == fVar24) {
      if (uVar3 <= uVar2) goto joined_r0x00c6df54;
    }
    else if (*(int *)(lVar14 + 0x1e0) == 2) {
      if (fVar24 <= fVar23) goto joined_r0x00c6df54;
    }
    else if (fVar23 <= fVar24) {
joined_r0x00c6df54:
      for (; param_1 != puVar12; puVar12 = puVar12 + -1) {
        uVar7 = *puVar12;
        lVar21 = *(long *)(lVar18 + (ulong)uVar7 * 8);
        iVar6 = *(int *)(lVar21 + 0x20);
        if (iVar6 == iVar5) {
          fVar23 = *(float *)(lVar21 + 0x24);
          fVar24 = *(float *)(lVar20 + 0x24);
          if (fVar23 == fVar24) {
            if (uVar7 < uVar3) goto LAB_00c6dfc0;
          }
          else if (*(int *)(lVar14 + 0x1e0) == 2) {
            if (fVar23 < fVar24) goto LAB_00c6dfc0;
          }
          else if (fVar24 < fVar23) {
LAB_00c6dfc0:
            iVar9 = iVar9 + 1;
            *param_1 = uVar7;
            *puVar12 = uVar2;
            goto LAB_00c6dd68;
          }
        }
        else if (iVar6 < iVar5) goto LAB_00c6dfc0;
      }
      uVar3 = *puVar16;
      lVar20 = *(long *)(lVar18 + (ulong)uVar3 * 8);
      puVar12 = param_1 + 1;
      iVar9 = *(int *)(lVar20 + 0x20);
      if (iVar4 == iVar9) {
        fVar23 = *(float *)(lVar19 + 0x24);
        fVar24 = *(float *)(lVar20 + 0x24);
        if (fVar23 == fVar24) {
          if (uVar3 <= uVar2) goto LAB_00c6e1cc;
        }
        else if (*(int *)(lVar14 + 0x1e0) == 2) {
          if (fVar24 <= fVar23) goto LAB_00c6e1cc;
        }
        else if (fVar23 <= fVar24) {
LAB_00c6e1cc:
          if (puVar12 == puVar16) {
            return;
          }
          puVar12 = param_1 + 2;
          do {
            uVar7 = puVar12[-1];
            lVar20 = *(long *)(lVar18 + (ulong)uVar7 * 8);
            iVar9 = *(int *)(lVar20 + 0x20);
            if (iVar4 == iVar9) {
              fVar23 = *(float *)(lVar19 + 0x24);
              fVar24 = *(float *)(lVar20 + 0x24);
              if (fVar23 == fVar24) {
                if (uVar2 < uVar7) goto LAB_00c6e248;
              }
              else if (*(int *)(lVar14 + 0x1e0) == 2) {
                if (fVar23 < fVar24) goto LAB_00c6e248;
              }
              else if (fVar24 < fVar23) goto LAB_00c6e248;
            }
            else if (iVar4 < iVar9) goto LAB_00c6e248;
            puVar12 = puVar12 + 1;
            if (param_2 == puVar12) {
              return;
            }
          } while( true );
        }
      }
      else if (iVar9 <= iVar4) goto LAB_00c6e1cc;
      goto LAB_00c6e0d4;
    }
  }
  else if (iVar5 <= iVar4) goto joined_r0x00c6df54;
  puVar12 = puVar16;
LAB_00c6dd68:
  puVar13 = param_1 + 1;
  puVar22 = puVar13;
  if (puVar13 < puVar12) {
LAB_00c6dd78:
    lVar14 = *param_3;
    uVar2 = *puVar17;
    lVar18 = *(long *)(lVar14 + 0x60);
    lVar19 = *(long *)(lVar18 + (ulong)uVar2 * 8);
    iVar4 = *(int *)(lVar19 + 0x20);
    puVar22 = puVar13;
    do {
      uVar3 = *puVar22;
      lVar20 = *(long *)(lVar18 + (ulong)uVar3 * 8);
      iVar5 = *(int *)(lVar20 + 0x20);
      if (iVar5 == iVar4) {
        fVar23 = *(float *)(lVar20 + 0x24);
        fVar24 = *(float *)(lVar19 + 0x24);
        if (fVar23 == fVar24) {
          if (uVar2 <= uVar3) goto LAB_00c6ddd8;
        }
        else if (*(int *)(lVar14 + 0x1e0) == 2) {
          if (fVar24 <= fVar23) goto LAB_00c6ddd8;
        }
        else if (fVar23 <= fVar24) goto LAB_00c6ddd8;
      }
      else if (iVar4 <= iVar5) goto LAB_00c6ddd8;
      puVar22 = puVar22 + 1;
    } while( true );
  }
LAB_00c6de64:
  if (puVar22 != puVar17) {
    uVar2 = *puVar17;
    lVar18 = *(long *)(*param_3 + 0x60);
    uVar3 = *puVar22;
    lVar14 = *(long *)(lVar18 + (ulong)uVar2 * 8);
    iVar4 = *(int *)(lVar14 + 0x20);
    lVar18 = *(long *)(lVar18 + (ulong)uVar3 * 8);
    iVar5 = *(int *)(lVar18 + 0x20);
    if (iVar4 == iVar5) {
      fVar23 = *(float *)(lVar14 + 0x24);
      fVar24 = *(float *)(lVar18 + 0x24);
      if (fVar23 == fVar24) {
        if (uVar2 < uVar3) goto LAB_00c6debc;
      }
      else if (*(int *)(*param_3 + 0x1e0) == 2) {
        if (fVar23 < fVar24) goto LAB_00c6debc;
      }
      else if (fVar24 < fVar23) {
LAB_00c6debc:
        iVar9 = iVar9 + 1;
        *puVar22 = uVar2;
        *puVar17 = uVar3;
      }
    }
    else if (iVar4 < iVar5) goto LAB_00c6debc;
  }
  if (iVar9 == 0) {
    uVar11 = FUN_0270bea0(param_1,puVar22,param_3);
    uVar10 = FUN_0270bea0(puVar22 + 1,param_2,param_3);
    if ((uVar10 & 1) != 0) goto code_r0x00c6e028;
    puVar17 = puVar22 + 1;
    if ((uVar11 & 1) != 0) goto LAB_00c6da18;
  }
  if ((long)param_2 - (long)puVar22 <= (long)puVar22 - (long)param_1) {
    FUN_00c6d9f0(puVar22 + 1,param_2,param_3);
    param_2 = puVar22;
    goto LAB_00c6da10;
  }
  FUN_00c6d9f0(param_1,puVar22,param_3);
  puVar17 = puVar22 + 1;
  goto LAB_00c6da18;
LAB_00c6db9c:
  puVar15 = puVar17;
  uVar2 = *puVar15;
  uVar3 = *puVar16;
  lVar19 = *(long *)(*param_3 + 0x60);
  lVar18 = *(long *)(lVar19 + (ulong)uVar2 * 8);
  iVar9 = *(int *)(lVar18 + 0x20);
  lVar19 = *(long *)(lVar19 + (ulong)uVar3 * 8);
  iVar4 = *(int *)(lVar19 + 0x20);
  if (iVar9 == iVar4) {
    fVar23 = *(float *)(lVar18 + 0x24);
    fVar24 = *(float *)(lVar19 + 0x24);
    if (fVar23 == fVar24) {
      if (uVar2 < uVar3) goto LAB_00c6dbf0;
    }
    else if (*(int *)(*param_3 + 0x1e0) == 2) {
      if (fVar23 < fVar24) goto LAB_00c6dbf0;
    }
    else if (fVar24 < fVar23) {
LAB_00c6dbf0:
      *puVar15 = uVar3;
      puVar17 = param_1;
      if (puVar16 != param_1) {
        lVar18 = lVar14;
        do {
          uVar3 = *(uint *)((long)param_1 + lVar18 + 4);
          lVar20 = *(long *)(*param_3 + 0x60);
          lVar19 = *(long *)(lVar20 + (ulong)uVar2 * 8);
          iVar9 = *(int *)(lVar19 + 0x20);
          lVar20 = *(long *)(lVar20 + (ulong)uVar3 * 8);
          iVar4 = *(int *)(lVar20 + 0x20);
          if (iVar9 == iVar4) {
            fVar23 = *(float *)(lVar19 + 0x24);
            fVar24 = *(float *)(lVar20 + 0x24);
            if (fVar23 == fVar24) {
              if (uVar3 <= uVar2) goto LAB_00c6dc84;
            }
            else if (*(int *)(*param_3 + 0x1e0) == 2) {
              if (fVar24 <= fVar23) goto LAB_00c6dc84;
            }
            else if (fVar23 <= fVar24) {
LAB_00c6dc84:
              puVar17 = puVar16;
              break;
            }
          }
          else if (iVar4 <= iVar9) {
            puVar17 = (uint *)((long)param_1 + lVar18 + 8);
            break;
          }
          puVar16 = puVar16 + -1;
          *(uint *)((long)param_1 + lVar18 + 8) = uVar3;
          bVar8 = lVar18 != -4;
          lVar18 = lVar18 + -4;
        } while (bVar8);
      }
      *puVar17 = uVar2;
    }
  }
  else if (iVar9 < iVar4) goto LAB_00c6dbf0;
  lVar14 = lVar14 + 4;
  puVar17 = puVar15 + 1;
  puVar16 = puVar15;
  if (puVar15 + 1 == param_2) {
    return;
  }
  goto LAB_00c6db9c;
LAB_00c6e248:
  puVar12[-1] = uVar3;
  *puVar16 = uVar7;
LAB_00c6e0d4:
  puVar13 = puVar16;
  if (puVar12 == puVar16) {
    return;
  }
LAB_00c6e0e0:
  lVar14 = *param_3;
  uVar2 = *param_1;
  lVar18 = *(long *)(lVar14 + 0x60);
  lVar19 = *(long *)(lVar18 + (ulong)uVar2 * 8);
  iVar9 = *(int *)(lVar19 + 0x20);
  puVar17 = puVar12;
  do {
    uVar3 = *puVar17;
    lVar20 = *(long *)(lVar18 + (ulong)uVar3 * 8);
    iVar4 = *(int *)(lVar20 + 0x20);
    if (iVar9 == iVar4) {
      fVar23 = *(float *)(lVar19 + 0x24);
      fVar24 = *(float *)(lVar20 + 0x24);
      if (fVar23 == fVar24) {
        if (uVar2 < uVar3) break;
      }
      else if (*(int *)(lVar14 + 0x1e0) == 2) {
        if (fVar23 < fVar24) break;
      }
      else if (fVar24 < fVar23) break;
    }
    else if (iVar9 < iVar4) break;
    puVar17 = puVar17 + 1;
  } while( true );
  while (iVar9 < iVar4) {
LAB_00c6e144:
    puVar13 = puVar13 + -1;
    uVar7 = *puVar13;
    lVar20 = *(long *)(lVar18 + (ulong)uVar7 * 8);
    iVar4 = *(int *)(lVar20 + 0x20);
    if (iVar9 == iVar4) {
      fVar23 = *(float *)(lVar19 + 0x24);
      fVar24 = *(float *)(lVar20 + 0x24);
      if (fVar23 == fVar24) {
        if (uVar7 <= uVar2) break;
      }
      else if (*(int *)(lVar14 + 0x1e0) == 2) {
        if (fVar24 <= fVar23) break;
      }
      else if (fVar23 <= fVar24) break;
      goto LAB_00c6e144;
    }
  }
  if (puVar13 <= puVar17) goto LAB_00c6da18;
  puVar12 = puVar17 + 1;
  *puVar17 = uVar7;
  *puVar13 = uVar3;
  goto LAB_00c6e0e0;
  while (uVar2 <= uVar7) {
LAB_00c6ddd8:
    puVar12 = puVar12 + -1;
    uVar7 = *puVar12;
    lVar20 = *(long *)(lVar18 + (ulong)uVar7 * 8);
    iVar5 = *(int *)(lVar20 + 0x20);
    if (iVar5 != iVar4) {
      if (iVar5 < iVar4) break;
      goto LAB_00c6ddd8;
    }
    fVar23 = *(float *)(lVar20 + 0x24);
    fVar24 = *(float *)(lVar19 + 0x24);
    if (fVar23 != fVar24) {
      if (*(int *)(lVar14 + 0x1e0) == 2) {
        if (fVar23 < fVar24) break;
      }
      else if (fVar24 < fVar23) break;
      goto LAB_00c6ddd8;
    }
  }
  if (puVar12 < puVar22) goto LAB_00c6de64;
  iVar9 = iVar9 + 1;
  puVar1 = puVar12;
  if (puVar17 != puVar22) {
    puVar1 = puVar17;
  }
  puVar13 = puVar22 + 1;
  *puVar22 = uVar7;
  *puVar12 = uVar3;
  puVar17 = puVar1;
  goto LAB_00c6dd78;
code_r0x00c6e028:
  param_2 = puVar22;
  if ((uVar11 & 1) != 0) {
    return;
  }
  goto LAB_00c6da10;
}


