/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026c810; name: FUN_0026c810
 */


/* WARNING: Removing unreachable block (ram,0x0026ccb8) */

void FUN_0026c810(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined8 *local_68;
  
  local_68 = param_2;
LAB_0026c83c:
  puVar13 = local_68 + -1;
LAB_0026c850:
  lVar14 = (long)local_68 - (long)param_1;
  uVar9 = lVar14 >> 3;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_0026d038_caseD_0;
  case 2:
    pbVar20 = (byte *)*param_1;
    pbVar18 = (byte *)local_68[-1];
    bVar4 = *pbVar20;
    uVar9 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar9 = *(ulong *)(pbVar20 + 8);
    }
    bVar5 = *pbVar18;
    uVar8 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar18 + 8);
    }
    sVar3 = uVar9;
    if (uVar8 <= uVar9) {
      sVar3 = uVar8;
    }
    if (sVar3 != 0) {
      pbVar10 = *(byte **)(pbVar18 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar18 + 1;
      }
      pbVar11 = *(byte **)(pbVar20 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar11 = pbVar20 + 1;
      }
      iVar6 = memcmp(pbVar10,pbVar11,sVar3);
      if (iVar6 != 0) {
        if (-1 < iVar6) {
          return;
        }
        goto LAB_0026d188;
      }
    }
    if (uVar9 <= uVar8) {
      return;
    }
LAB_0026d188:
    *param_1 = pbVar18;
    local_68[-1] = pbVar20;
    return;
  case 3:
    FUN_0026d1a0(param_1,param_1 + 1,puVar13,param_3);
    return;
  case 4:
    FUN_0026d3d0(param_1,param_1 + 1,param_1 + 2,puVar13,param_3);
    return;
  case 5:
    FUN_0026d590(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar13,param_3);
    return;
  }
  if (lVar14 < 0xf8) {
    FUN_0026d7d0(param_1,local_68,param_3);
    return;
  }
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = uVar9 + 1;
  }
  puVar16 = (undefined8 *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
  if (lVar14 < 0x1f39) {
    iVar6 = FUN_0026d1a0(param_1,puVar16,puVar13,param_3);
  }
  else {
    uVar8 = uVar9 + 3;
    if (-1 < (long)uVar9) {
      uVar8 = uVar9;
    }
    lVar14 = (uVar8 & 0x7ffffffffffffffc) * 2;
    iVar6 = FUN_0026d590(param_1,(long)param_1 + lVar14,puVar16,(long)puVar16 + lVar14,puVar13,
                         param_3);
  }
  pbVar18 = (byte *)*puVar16;
  pbVar20 = (byte *)*param_1;
  bVar4 = *pbVar18;
  bVar5 = *pbVar20;
  uVar9 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar9 = *(ulong *)(pbVar18 + 8);
  }
  uVar8 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar20 + 8);
  }
  sVar3 = uVar9;
  if (uVar8 <= uVar9) {
    sVar3 = uVar8;
  }
  if (sVar3 == 0) {
LAB_0026ca0c:
    if (uVar9 <= uVar8) goto LAB_0026c930;
LAB_0026ca14:
    puVar17 = param_1 + 1;
    puVar15 = puVar13;
    if (puVar17 < puVar13) goto LAB_0026ca64;
  }
  else {
    pbVar10 = *(byte **)(pbVar20 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar10 = pbVar20 + 1;
    }
    pbVar11 = *(byte **)(pbVar18 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar11 = pbVar18 + 1;
    }
    iVar7 = memcmp(pbVar10,pbVar11,sVar3);
    if (iVar7 == 0) goto LAB_0026ca0c;
    if (iVar7 < 0) goto LAB_0026ca14;
LAB_0026c930:
    puVar17 = local_68 + -2;
    if ((bVar4 & 1) == 0) {
      do {
        puVar15 = puVar17;
        if (param_1 == puVar15) goto LAB_0026cce8;
        pbVar10 = (byte *)*puVar15;
        bVar4 = *pbVar10;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar10 + 8);
        }
        sVar3 = uVar9;
        if (uVar1 <= uVar9) {
          sVar3 = uVar1;
        }
        if (sVar3 == 0) {
LAB_0026c9a8:
          iVar7 = 0;
          if (uVar1 < uVar9) break;
        }
        else {
          pbVar11 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          iVar7 = memcmp(pbVar11,pbVar18 + 1,sVar3);
          if (iVar7 == 0) goto LAB_0026c9a8;
        }
        puVar17 = puVar15 + -1;
      } while (-1 < iVar7);
    }
    else {
      do {
        puVar15 = puVar17;
        if (param_1 == puVar15) goto LAB_0026cce8;
        pbVar10 = (byte *)*puVar15;
        bVar4 = *pbVar10;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar10 + 8);
        }
        sVar3 = uVar9;
        if (uVar1 <= uVar9) {
          sVar3 = uVar1;
        }
        if (sVar3 == 0) {
LAB_0026c944:
          iVar7 = 0;
          if (uVar1 < uVar9) break;
        }
        else {
          pbVar11 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          iVar7 = memcmp(pbVar11,*(void **)(pbVar18 + 0x10),sVar3);
          if (iVar7 == 0) goto LAB_0026c944;
        }
        puVar17 = puVar15 + -1;
      } while (-1 < iVar7);
    }
    iVar6 = iVar6 + 1;
    *param_1 = *puVar15;
    *puVar15 = pbVar20;
    puVar17 = param_1 + 1;
    if (puVar17 < puVar15) {
LAB_0026ca64:
      pbVar18 = (byte *)*puVar16;
      bVar4 = *pbVar18;
      uVar9 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar9 = *(ulong *)(pbVar18 + 8);
      }
      if ((bVar4 & 1) != 0) {
        do {
          pbVar20 = (byte *)*puVar17;
          bVar5 = *pbVar20;
          uVar8 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            uVar8 = *(ulong *)(pbVar20 + 8);
          }
          sVar3 = uVar9;
          if (uVar8 <= uVar9) {
            sVar3 = uVar8;
          }
          puVar19 = puVar17;
          if (sVar3 == 0) {
LAB_0026cad8:
            if (uVar9 <= uVar8) goto LAB_0026cb24;
          }
          else {
            pbVar10 = *(byte **)(pbVar20 + 0x10);
            if ((bVar5 & 1) == 0) {
              pbVar10 = pbVar20 + 1;
            }
            iVar7 = memcmp(pbVar10,*(void **)(pbVar18 + 0x10),sVar3);
            if (iVar7 == 0) goto LAB_0026cad8;
            if (-1 < iVar7) goto LAB_0026cb24;
          }
          puVar17 = puVar17 + 1;
        } while( true );
      }
      do {
        pbVar20 = (byte *)*puVar17;
        bVar5 = *pbVar20;
        uVar8 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar8 = *(ulong *)(pbVar20 + 8);
        }
        sVar3 = uVar9;
        if (uVar8 <= uVar9) {
          sVar3 = uVar8;
        }
        puVar19 = puVar17;
        if (sVar3 == 0) {
LAB_0026ca88:
          if (uVar9 <= uVar8) goto LAB_0026cb24;
        }
        else {
          pbVar10 = *(byte **)(pbVar20 + 0x10);
          if ((bVar5 & 1) == 0) {
            pbVar10 = pbVar20 + 1;
          }
          iVar7 = memcmp(pbVar10,pbVar18 + 1,sVar3);
          if (iVar7 == 0) goto LAB_0026ca88;
          if (-1 < iVar7) goto LAB_0026cb24;
        }
        puVar17 = puVar17 + 1;
      } while( true );
    }
  }
LAB_0026cbf0:
  if (puVar17 != puVar16) {
    pbVar18 = (byte *)*puVar17;
    bVar4 = *pbVar18;
    pbVar20 = (byte *)*puVar16;
    uVar9 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar9 = *(ulong *)(pbVar18 + 8);
    }
    bVar5 = *pbVar20;
    uVar8 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar20 + 8);
    }
    sVar3 = uVar9;
    if (uVar8 <= uVar9) {
      sVar3 = uVar8;
    }
    if (sVar3 == 0) {
LAB_0026cc5c:
      if (uVar9 <= uVar8) goto LAB_0026cc70;
    }
    else {
      pbVar10 = *(byte **)(pbVar20 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar20 + 1;
      }
      pbVar11 = *(byte **)(pbVar18 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar11 = pbVar18 + 1;
      }
      iVar7 = memcmp(pbVar10,pbVar11,sVar3);
      if (iVar7 == 0) goto LAB_0026cc5c;
      if (-1 < iVar7) goto LAB_0026cc70;
    }
    iVar6 = iVar6 + 1;
    *puVar17 = pbVar20;
    *puVar16 = pbVar18;
  }
LAB_0026cc70:
  if (iVar6 == 0) {
    uVar9 = FUN_0026d960(param_1,puVar17,param_3);
    puVar15 = puVar17 + 1;
    uVar8 = FUN_0026d960(puVar15,local_68,param_3);
    if ((uVar8 & 1) == 0) {
      if ((uVar9 & 1) == 0) goto LAB_0026ccbc;
      lVar14 = 2;
      goto LAB_0026cfe8;
    }
    local_68 = puVar17;
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  else {
LAB_0026ccbc:
    if ((long)puVar17 - (long)param_1 < (long)local_68 - (long)puVar17) goto code_r0x0026ccd0;
    FUN_0026c810(puVar17 + 1,local_68,param_3);
    local_68 = puVar17;
  }
  goto LAB_0026c83c;
LAB_0026cce8:
  puVar16 = param_1 + 1;
  pbVar18 = (byte *)*puVar13;
  bVar4 = *pbVar18;
  uVar9 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar9 = *(ulong *)(pbVar18 + 8);
  }
  sVar3 = uVar9;
  if (uVar8 <= uVar9) {
    sVar3 = uVar8;
  }
  if (sVar3 != 0) {
    pbVar10 = *(byte **)(pbVar20 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar10 = pbVar20 + 1;
    }
    pbVar11 = *(byte **)(pbVar18 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar11 = pbVar18 + 1;
    }
    iVar6 = memcmp(pbVar10,pbVar11,sVar3);
    if (iVar6 != 0) {
      if (iVar6 < 0) goto LAB_0026ce30;
      goto LAB_0026cd44;
    }
  }
  if (uVar9 <= uVar8) {
LAB_0026cd44:
    if (puVar16 != puVar13) {
      if ((bVar5 & 1) != 0) {
        puVar16 = param_1 + 2;
        do {
          pbVar10 = (byte *)puVar16[-1];
          bVar4 = *pbVar10;
          uVar9 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar9 = *(ulong *)(pbVar10 + 8);
          }
          sVar3 = uVar9;
          if (uVar8 <= uVar9) {
            sVar3 = uVar8;
          }
          if (sVar3 == 0) {
LAB_0026cdc4:
            if (uVar8 < uVar9) goto LAB_0026ce1c;
          }
          else {
            pbVar11 = *(byte **)(pbVar10 + 0x10);
            if ((bVar4 & 1) == 0) {
              pbVar11 = pbVar10 + 1;
            }
            iVar6 = memcmp(*(void **)(pbVar20 + 0x10),pbVar11,sVar3);
            if (iVar6 == 0) goto LAB_0026cdc4;
            if (iVar6 < 0) goto LAB_0026ce1c;
          }
          puVar16 = puVar16 + 1;
          if (local_68 == puVar16) {
            return;
          }
        } while( true );
      }
      puVar16 = param_1 + 2;
      do {
        pbVar10 = (byte *)puVar16[-1];
        bVar4 = *pbVar10;
        uVar9 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar9 = *(ulong *)(pbVar10 + 8);
        }
        sVar3 = uVar9;
        if (uVar8 <= uVar9) {
          sVar3 = uVar8;
        }
        if (sVar3 == 0) {
LAB_0026cd60:
          if (uVar8 < uVar9) goto LAB_0026ce1c;
        }
        else {
          pbVar11 = *(byte **)(pbVar10 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar11 = pbVar10 + 1;
          }
          iVar6 = memcmp(pbVar20 + 1,pbVar11,sVar3);
          if (iVar6 == 0) goto LAB_0026cd60;
          if (iVar6 < 0) goto LAB_0026ce1c;
        }
        puVar16 = puVar16 + 1;
        if (local_68 == puVar16) {
          return;
        }
      } while( true );
    }
switchD_0026d038_caseD_0:
    return;
  }
LAB_0026ce30:
  if (puVar16 == puVar13) {
    return;
  }
  puVar17 = puVar13;
LAB_0026ce40:
  pbVar18 = (byte *)*param_1;
  bVar4 = *pbVar18;
  uVar9 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar9 = *(ulong *)(pbVar18 + 8);
  }
  if ((bVar4 & 1) != 0) {
    do {
      pbVar20 = (byte *)*puVar16;
      bVar5 = *pbVar20;
      uVar8 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar8;
      if (uVar9 <= uVar8) {
        sVar3 = uVar9;
      }
      puVar15 = puVar16;
      if (sVar3 == 0) {
LAB_0026ceb4:
        if (uVar9 < uVar8) goto LAB_0026cf00;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar6 = memcmp(*(void **)(pbVar18 + 0x10),pbVar10,sVar3);
        if (iVar6 == 0) goto LAB_0026ceb4;
        if (iVar6 < 0) goto LAB_0026cf00;
      }
      puVar16 = puVar16 + 1;
    } while( true );
  }
  do {
    pbVar20 = (byte *)*puVar16;
    bVar5 = *pbVar20;
    uVar8 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar8 = *(ulong *)(pbVar20 + 8);
    }
    sVar3 = uVar8;
    if (uVar9 <= uVar8) {
      sVar3 = uVar9;
    }
    puVar15 = puVar16;
    if (sVar3 == 0) {
LAB_0026ce64:
      if (uVar9 < uVar8) goto LAB_0026cf00;
    }
    else {
      pbVar10 = *(byte **)(pbVar20 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar20 + 1;
      }
      iVar6 = memcmp(pbVar18 + 1,pbVar10,sVar3);
      if (iVar6 == 0) goto LAB_0026ce64;
      if (iVar6 < 0) goto LAB_0026cf00;
    }
    puVar16 = puVar16 + 1;
  } while( true );
LAB_0026ce1c:
  uVar12 = puVar16[-1];
  puVar16[-1] = pbVar18;
  *puVar13 = uVar12;
  goto LAB_0026ce30;
LAB_0026cf00:
  puVar16 = puVar17 + -1;
  if ((bVar4 & 1) == 0) {
    do {
      puVar17 = puVar16;
      pbVar20 = (byte *)*puVar17;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar8;
      if (uVar9 <= uVar8) {
        sVar3 = uVar9;
      }
      if (sVar3 == 0) {
LAB_0026cf0c:
        iVar6 = -1;
        if (uVar8 <= uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar6 = memcmp(pbVar18 + 1,pbVar10,sVar3);
        if (iVar6 == 0) goto LAB_0026cf0c;
      }
      puVar16 = puVar17 + -1;
    } while (iVar6 < 0);
  }
  else {
    do {
      puVar17 = puVar16;
      pbVar20 = (byte *)*puVar17;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar8;
      if (uVar9 <= uVar8) {
        sVar3 = uVar9;
      }
      if (sVar3 == 0) {
LAB_0026cf64:
        iVar6 = -1;
        if (uVar8 <= uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar6 = memcmp(*(void **)(pbVar18 + 0x10),pbVar10,sVar3);
        if (iVar6 == 0) goto LAB_0026cf64;
      }
      puVar16 = puVar17 + -1;
    } while (iVar6 < 0);
  }
  if (puVar17 <= puVar15) goto LAB_0026cfd8;
  uVar12 = *puVar15;
  puVar16 = puVar15 + 1;
  *puVar15 = *puVar17;
  *puVar17 = uVar12;
  goto LAB_0026ce40;
LAB_0026cfd8:
  lVar14 = 4;
LAB_0026cfe8:
  param_1 = puVar15;
  if ((1 << lVar14 & 0x15U) == 0) {
    return;
  }
  goto LAB_0026c850;
LAB_0026cb24:
  puVar17 = puVar15 + -1;
  if ((bVar4 & 1) == 0) {
    do {
      puVar15 = puVar17;
      pbVar20 = (byte *)*puVar15;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar9;
      if (uVar8 <= uVar9) {
        sVar3 = uVar8;
      }
      if (sVar3 == 0) {
LAB_0026cb30:
        iVar7 = 0;
        if (uVar8 < uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar7 = memcmp(pbVar10,pbVar18 + 1,sVar3);
        if (iVar7 == 0) goto LAB_0026cb30;
      }
      puVar17 = puVar15 + -1;
    } while (-1 < iVar7);
  }
  else {
    do {
      puVar15 = puVar17;
      pbVar20 = (byte *)*puVar15;
      bVar4 = *pbVar20;
      uVar8 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar20 + 8);
      }
      sVar3 = uVar9;
      if (uVar8 <= uVar9) {
        sVar3 = uVar8;
      }
      if (sVar3 == 0) {
LAB_0026cb8c:
        iVar7 = 0;
        if (uVar8 < uVar9) break;
      }
      else {
        pbVar10 = *(byte **)(pbVar20 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar20 + 1;
        }
        iVar7 = memcmp(pbVar10,*(void **)(pbVar18 + 0x10),sVar3);
        if (iVar7 == 0) goto LAB_0026cb8c;
      }
      puVar17 = puVar15 + -1;
    } while (-1 < iVar7);
  }
  puVar17 = puVar19;
  if (puVar15 < puVar19) goto LAB_0026cbf0;
  uVar12 = *puVar19;
  iVar6 = iVar6 + 1;
  puVar2 = puVar15;
  if (puVar16 != puVar19) {
    puVar2 = puVar16;
  }
  puVar17 = puVar19 + 1;
  *puVar19 = *puVar15;
  *puVar15 = uVar12;
  puVar16 = puVar2;
  goto LAB_0026ca64;
code_r0x0026ccd0:
  FUN_0026c810(param_1,puVar17,param_3);
  param_1 = puVar17 + 1;
  goto LAB_0026c850;
}


