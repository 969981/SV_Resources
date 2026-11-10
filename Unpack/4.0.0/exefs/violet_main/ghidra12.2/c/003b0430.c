/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b0430; name: FUN_003b0430
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_003b0430(long param_1,undefined8 param_2,long *param_3,long *param_4,char *param_5,
                 long param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined *puVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  char *pcVar29;
  uint uVar30;
  long *local_70;
  long *local_68;
  
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_4 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_5 == (char *)0x0) {
    return 0;
  }
  iVar5 = strncmp(param_5,"SUITEB128ONLY",0xd);
  if (iVar5 == 0) {
    bVar4 = true;
    uVar15 = 0x10000;
LAB_003b0548:
    uVar19 = *(uint *)(param_6 + 0x1c);
LAB_003b0550:
    *(uint *)(param_6 + 0x1c) = uVar15 | uVar19 & 0xfffcffff;
    bVar1 = *(byte *)(*(long *)(param_1 + 0xc0) + 0x60);
joined_r0x003b0564:
    if ((bVar1 >> 4 & 1) == 0) {
      uVar12 = 0x14b;
      uVar11 = 0x9e;
      uVar13 = 0x4e2;
      goto LAB_003b0618;
    }
    if (uVar15 == 0x10000) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar15 == 0x20000) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else if ((uVar15 == 0x30000) &&
            (param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384", !bVar4)) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
  }
  else {
    iVar5 = strncmp(param_5,"SUITEB128C2",0xb);
    if (iVar5 == 0) {
      bVar4 = false;
LAB_003b0544:
      uVar15 = 0x30000;
      goto LAB_003b0548;
    }
    iVar5 = strncmp(param_5,"SUITEB128",9);
    if (iVar5 == 0) {
      bVar4 = true;
      goto LAB_003b0544;
    }
    iVar5 = strncmp(param_5,"SUITEB192",9);
    uVar19 = *(uint *)(param_6 + 0x1c);
    if (iVar5 == 0) {
      uVar15 = 0x20000;
      bVar4 = true;
      goto LAB_003b0550;
    }
    uVar15 = uVar19 & 0x30000;
    if (uVar15 != 0) {
      bVar4 = true;
      bVar1 = *(byte *)(*(long *)(param_1 + 0xc0) + 0x60);
      goto joined_r0x003b0564;
    }
  }
  uVar3 = DAT_047f1650._4_4_;
  uVar2 = (uint)DAT_047f1650;
  uVar19 = DAT_047f164c;
  uVar15 = DAT_047f1648;
  uVar6 = (**(code **)(param_1 + 0xa8))();
  plVar8 = (long *)FUN_00452c30(-(ulong)(uVar6 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar6 << 5,
                                "external/openssl/ssl/ssl_ciph.c",0x5a4);
  if (plVar8 == (long *)0x0) {
    uVar12 = 0xa6;
    uVar11 = 0x41;
    uVar13 = 0x5a6;
LAB_003b0618:
    FUN_004806c0(0x14,uVar12,uVar11,"external/openssl/ssl/ssl_ciph.c",uVar13);
    return 0;
  }
  if ((int)uVar6 < 1) {
LAB_003b0714:
    local_68 = (long *)0x0;
    local_70 = (long *)0x0;
  }
  else {
    uVar30 = 0;
    iVar5 = 0;
    do {
      piVar9 = (int *)(**(code **)(param_1 + 0xb0))(uVar30);
      if (((((piVar9 != (int *)0x0) && (*piVar9 != 0)) && ((piVar9[7] & uVar2) == 0)) &&
          (((piVar9[8] & uVar3) == 0 && ((piVar9[9] & uVar15) == 0)))) &&
         ((piVar9[10] & uVar19) == 0)) {
        if ((*(byte *)(*(long *)(param_1 + 0xc0) + 0x60) >> 3 & 1) == 0) {
          iVar7 = piVar9[0xb];
        }
        else {
          iVar7 = piVar9[0xd];
        }
        if (iVar7 != 0) {
          lVar18 = (long)iVar5;
          iVar5 = iVar5 + 1;
          plVar28 = plVar8 + lVar18 * 4;
          *plVar28 = (long)piVar9;
          *(undefined4 *)(plVar28 + 1) = 0;
          plVar28[2] = 0;
          plVar28[3] = 0;
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar6 != uVar30);
    if (iVar5 < 1) goto LAB_003b0714;
    uVar14 = 0;
    uVar30 = iVar5 - 1;
    plVar8[3] = 0;
    if (uVar30 != 0) {
      plVar8[2] = (long)(plVar8 + 4);
      uVar14 = (ulong)uVar30;
      if (2 < iVar5) {
        uVar17 = uVar14 - 1;
        if (uVar17 < 4) {
          uVar16 = 1;
        }
        else {
          uVar20 = uVar17 & 0xfffffffffffffffc;
          uVar16 = uVar20 | 1;
          uVar21 = uVar20;
          plVar28 = plVar8;
          do {
            plVar28[6] = (long)(plVar28 + 8);
            plVar28[7] = (long)plVar28;
            plVar28[10] = (long)(plVar28 + 0xc);
            plVar28[0xb] = (long)(plVar28 + 4);
            uVar21 = uVar21 - 4;
            plVar28[0xe] = (long)(plVar28 + 0x10);
            plVar28[0xf] = (long)(plVar28 + 8);
            plVar28[0x12] = (long)(plVar28 + 0x14);
            plVar28[0x13] = (long)(plVar28 + 0xc);
            plVar28 = plVar28 + 0x10;
          } while (uVar21 != 0);
          if (uVar17 == uVar20) goto LAB_003b0d1c;
        }
        uVar17 = uVar16;
        if ((uVar30 & 1) == 0) {
          uVar17 = uVar16 + 1;
          plVar8[uVar16 * 4 + 2] = (long)(plVar8 + uVar17 * 4);
          plVar8[uVar16 * 4 + 3] = (long)(plVar8 + uVar16 * 4 + -4);
        }
        if (~uVar16 + uVar14 != 0) {
          lVar18 = uVar14 - uVar17;
          plVar28 = plVar8 + uVar17 * 4;
          do {
            plVar28[2] = (long)(plVar28 + 4);
            plVar28[3] = (long)(plVar28 + -4);
            lVar18 = lVar18 + -2;
            plVar28[6] = (long)(plVar28 + 8);
            plVar28[7] = (long)plVar28;
            plVar28 = plVar28 + 8;
          } while (lVar18 != 0);
        }
      }
LAB_003b0d1c:
      plVar8[(long)(int)uVar30 * 4 + 3] = (long)(plVar8 + (ulong)(iVar5 - 2) * 4);
    }
    plVar28 = plVar8 + uVar14 * 4;
    plVar28[2] = 0;
    plVar27 = plVar8;
    plVar22 = plVar28;
    plVar26 = plVar8;
    do {
      plVar23 = (long *)plVar26[2];
      plVar24 = plVar27;
      if ((((*(byte *)(*plVar26 + 0x1c) >> 2 & 1) != 0) &&
          ((*(byte *)(*plVar26 + 0x20) >> 3 & 1) != 0)) && ((int)plVar26[1] == 0)) {
        if (plVar26 != plVar22) {
          lVar18 = plVar26[3];
          plVar24 = plVar23;
          if (plVar26 != plVar27) {
            plVar24 = plVar27;
          }
          plVar27 = plVar23;
          if (lVar18 != 0) {
            *(long **)(lVar18 + 0x10) = plVar23;
            plVar27 = (long *)plVar26[2];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[3] = lVar18;
          }
          plVar22[2] = (long)plVar26;
          plVar26[2] = 0;
          plVar26[3] = (long)plVar22;
          plVar22 = plVar26;
        }
        *(undefined4 *)(plVar26 + 1) = 1;
      }
      if (plVar26 == plVar28) break;
      plVar27 = plVar24;
      plVar26 = plVar23;
    } while (plVar23 != (long *)0x0);
    if ((plVar24 != (long *)0x0) && (plVar22 != (long *)0x0)) {
      plVar28 = plVar24;
      plVar27 = plVar22;
      plVar26 = plVar24;
      do {
        plVar23 = (long *)plVar26[2];
        plVar24 = plVar28;
        if (((*(byte *)(*plVar26 + 0x1c) >> 2 & 1) != 0) && ((int)plVar26[1] == 0)) {
          if (plVar26 != plVar27) {
            lVar18 = plVar26[3];
            plVar24 = plVar23;
            if (plVar26 != plVar28) {
              plVar24 = plVar28;
            }
            plVar28 = plVar23;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar23;
              plVar28 = (long *)plVar26[2];
            }
            if (plVar28 != (long *)0x0) {
              plVar28[3] = lVar18;
            }
            plVar27[2] = (long)plVar26;
            plVar26[2] = 0;
            plVar26[3] = (long)plVar27;
            plVar27 = plVar26;
          }
          *(undefined4 *)(plVar26 + 1) = 1;
        }
        if (plVar26 == plVar22) break;
        plVar28 = plVar24;
        plVar26 = plVar23;
      } while (plVar23 != (long *)0x0);
      plVar22 = plVar27;
    }
    plVar28 = plVar24;
    if (plVar24 != (long *)0x0) {
      plVar27 = plVar22;
      plVar26 = plVar22;
      if (plVar22 != (long *)0x0) {
        do {
          plVar23 = (long *)plVar27[3];
          plVar22 = plVar26;
          if (((*(byte *)(*plVar27 + 0x1c) >> 2 & 1) != 0) && ((int)plVar27[1] != 0)) {
            if (plVar27 != plVar28) {
              lVar18 = plVar27[2];
              plVar22 = plVar23;
              if (plVar27 != plVar26) {
                plVar22 = plVar26;
              }
              plVar26 = plVar23;
              if (lVar18 != 0) {
                *(long **)(lVar18 + 0x18) = plVar23;
                plVar26 = (long *)plVar27[3];
              }
              if (plVar26 != (long *)0x0) {
                plVar26[2] = lVar18;
              }
              plVar28[3] = (long)plVar27;
              plVar27[2] = (long)plVar28;
              plVar27[3] = 0;
              plVar28 = plVar27;
            }
            *(undefined4 *)(plVar27 + 1) = 0;
          }
          if (plVar27 == plVar24) break;
          plVar27 = plVar23;
          plVar26 = plVar22;
        } while (plVar23 != (long *)0x0);
      }
    }
    plVar26 = plVar22;
    plVar27 = plVar28;
    if ((plVar28 != (long *)0x0) && (plVar24 = plVar28, plVar22 != (long *)0x0)) {
      do {
        plVar23 = (long *)plVar24[2];
        plVar27 = plVar28;
        if (((*(byte *)(*plVar24 + 0x25) & 0x30) != 0) && ((int)plVar24[1] == 0)) {
          if (plVar24 != plVar26) {
            lVar18 = plVar24[3];
            plVar27 = plVar23;
            if (plVar24 != plVar28) {
              plVar27 = plVar28;
            }
            plVar28 = plVar23;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar23;
              plVar28 = (long *)plVar24[2];
            }
            if (plVar28 != (long *)0x0) {
              plVar28[3] = lVar18;
            }
            plVar26[2] = (long)plVar24;
            plVar24[2] = 0;
            plVar24[3] = (long)plVar26;
            plVar26 = plVar24;
          }
          *(undefined4 *)(plVar24 + 1) = 1;
        }
        if (plVar24 == plVar22) break;
        plVar28 = plVar27;
        plVar24 = plVar23;
      } while (plVar23 != (long *)0x0);
    }
    plVar22 = plVar26;
    plVar28 = plVar27;
    if ((plVar27 != (long *)0x0) && (plVar24 = plVar27, plVar26 != (long *)0x0)) {
      do {
        plVar23 = (long *)plVar24[2];
        plVar28 = plVar27;
        if (((*(byte *)(*plVar24 + 0x26) >> 3 & 1) != 0) && ((int)plVar24[1] == 0)) {
          if (plVar24 != plVar22) {
            lVar18 = plVar24[3];
            plVar28 = plVar23;
            if (plVar24 != plVar27) {
              plVar28 = plVar27;
            }
            plVar27 = plVar23;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar23;
              plVar27 = (long *)plVar24[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar18;
            }
            plVar22[2] = (long)plVar24;
            plVar24[2] = 0;
            plVar24[3] = (long)plVar22;
            plVar22 = plVar24;
          }
          *(undefined4 *)(plVar24 + 1) = 1;
        }
        if (plVar24 == plVar26) break;
        plVar27 = plVar28;
        plVar24 = plVar23;
      } while (plVar23 != (long *)0x0);
    }
    plVar26 = plVar22;
    plVar27 = plVar28;
    if ((plVar28 != (long *)0x0) && (plVar24 = plVar28, plVar22 != (long *)0x0)) {
      do {
        plVar23 = (long *)plVar24[2];
        plVar27 = plVar28;
        if (((*(uint *)(*plVar24 + 0x24) & 0x3c0c0) != 0) && ((int)plVar24[1] == 0)) {
          if (plVar24 != plVar26) {
            lVar18 = plVar24[3];
            plVar27 = plVar23;
            if (plVar24 != plVar28) {
              plVar27 = plVar28;
            }
            plVar28 = plVar23;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar23;
              plVar28 = (long *)plVar24[2];
            }
            if (plVar28 != (long *)0x0) {
              plVar28[3] = lVar18;
            }
            plVar26[2] = (long)plVar24;
            plVar24[2] = 0;
            plVar24[3] = (long)plVar26;
            plVar26 = plVar24;
          }
          *(undefined4 *)(plVar24 + 1) = 1;
        }
        if (plVar24 == plVar22) break;
        plVar28 = plVar27;
        plVar24 = plVar23;
      } while (plVar23 != (long *)0x0);
    }
    plVar28 = plVar26;
    local_68 = plVar27;
    if ((plVar27 != (long *)0x0) && (plVar22 = plVar27, plVar26 != (long *)0x0)) {
      do {
        plVar24 = (long *)plVar22[2];
        local_68 = plVar27;
        if ((int)plVar22[1] == 0) {
          if (plVar22 != plVar28) {
            lVar18 = plVar22[3];
            local_68 = plVar24;
            if (plVar22 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar24;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar24;
              plVar27 = (long *)plVar22[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar18;
            }
            plVar28[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar28;
            plVar28 = plVar22;
          }
          *(undefined4 *)(plVar22 + 1) = 1;
        }
        if (plVar22 == plVar26) break;
        plVar27 = local_68;
        plVar22 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
    plVar22 = plVar28;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar26 = local_68;
      if (plVar28 != (long *)0x0) {
        do {
          plVar24 = (long *)plVar26[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar26 + 0x28) & 1) != 0) && ((int)plVar26[1] != 0)) &&
             (plVar26 != plVar22)) {
            lVar18 = plVar26[3];
            local_68 = plVar24;
            if (plVar26 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar24;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar24;
              plVar27 = (long *)plVar26[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar18;
            }
            plVar22[2] = (long)plVar26;
            plVar26[2] = 0;
            plVar26[3] = (long)plVar22;
            plVar22 = plVar26;
          }
          if (plVar26 == plVar28) break;
          plVar27 = local_68;
          plVar26 = plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
    plVar28 = plVar22;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar26 = local_68;
      if (plVar22 != (long *)0x0) {
        do {
          plVar24 = (long *)plVar26[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar26 + 0x20) >> 2 & 1) != 0) && ((int)plVar26[1] != 0)) &&
             (plVar26 != plVar28)) {
            lVar18 = plVar26[3];
            local_68 = plVar24;
            if (plVar26 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar24;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar24;
              plVar27 = (long *)plVar26[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar18;
            }
            plVar28[2] = (long)plVar26;
            plVar26[2] = 0;
            plVar26[3] = (long)plVar28;
            plVar28 = plVar26;
          }
          if (plVar26 == plVar22) break;
          plVar27 = local_68;
          plVar26 = plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
    plVar22 = plVar28;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar26 = local_68;
      if (plVar28 != (long *)0x0) {
        do {
          plVar24 = (long *)plVar26[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar26 + 0x1c) & 1) != 0) && ((int)plVar26[1] != 0)) &&
             (plVar26 != plVar22)) {
            lVar18 = plVar26[3];
            local_68 = plVar24;
            if (plVar26 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar24;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar24;
              plVar27 = (long *)plVar26[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar18;
            }
            plVar22[2] = (long)plVar26;
            plVar26[2] = 0;
            plVar26[3] = (long)plVar22;
            plVar22 = plVar26;
          }
          if (plVar26 == plVar28) break;
          plVar27 = local_68;
          plVar26 = plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
    plVar28 = plVar22;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar26 = local_68;
      if (plVar22 != (long *)0x0) {
        do {
          plVar24 = (long *)plVar26[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar26 + 0x1c) >> 3 & 1) != 0) && ((int)plVar26[1] != 0)) &&
             (plVar26 != plVar28)) {
            lVar18 = plVar26[3];
            local_68 = plVar24;
            if (plVar26 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar24;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x10) = plVar24;
              plVar27 = (long *)plVar26[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar18;
            }
            plVar28[2] = (long)plVar26;
            plVar26[2] = 0;
            plVar26[3] = (long)plVar28;
            plVar28 = plVar26;
          }
          if (plVar26 == plVar22) break;
          plVar27 = local_68;
          plVar26 = plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
    local_70 = plVar28;
    plVar22 = local_68;
    plVar27 = local_68;
    plVar26 = plVar28;
    if (local_68 != (long *)0x0) {
      do {
        local_68 = plVar27;
        if (plVar26 == (long *)0x0) break;
        plVar26 = (long *)plVar22[2];
        if ((((*(byte *)(*plVar22 + 0x24) >> 2 & 1) != 0) && ((int)plVar22[1] != 0)) &&
           (plVar22 != local_70)) {
          lVar18 = plVar22[3];
          local_68 = plVar26;
          if (plVar22 != plVar27) {
            local_68 = plVar27;
          }
          plVar27 = plVar26;
          if (lVar18 != 0) {
            *(long **)(lVar18 + 0x10) = plVar26;
            plVar27 = (long *)plVar22[2];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[3] = lVar18;
          }
          local_70[2] = (long)plVar22;
          plVar22[2] = 0;
          plVar22[3] = (long)local_70;
          local_70 = plVar22;
        }
        bVar4 = plVar22 != plVar28;
        plVar22 = plVar26;
        plVar27 = local_68;
      } while (bVar4);
    }
  }
  iVar5 = FUN_003b15f0(&local_68,&local_70);
  if (iVar5 == 0) {
    uVar12 = 0x5e9;
    goto LAB_003b0c54;
  }
  if ((local_68 != (long *)0x0) && (local_70 != (long *)0x0)) {
    plVar28 = local_70;
    plVar22 = local_68;
    plVar27 = local_70;
    do {
      plVar26 = (long *)plVar27[3];
      local_70 = plVar28;
      if (((*(int *)(*plVar27 + 0x2c) == 0x303) && ((int)plVar27[1] != 0)) && (plVar27 != plVar22))
      {
        lVar18 = plVar27[2];
        local_70 = plVar26;
        if (plVar27 != plVar28) {
          local_70 = plVar28;
        }
        plVar28 = plVar26;
        if (lVar18 != 0) {
          *(long **)(lVar18 + 0x18) = plVar26;
          plVar28 = (long *)plVar27[3];
        }
        if (plVar28 != (long *)0x0) {
          plVar28[2] = lVar18;
        }
        plVar22[3] = (long)plVar27;
        plVar27[2] = (long)plVar22;
        plVar27[3] = 0;
        plVar22 = plVar27;
      }
      if (plVar27 == local_68) break;
      plVar28 = local_70;
      plVar27 = plVar26;
    } while (plVar26 != (long *)0x0);
    local_68 = plVar22;
  }
  plVar28 = local_68;
  if ((local_68 != (long *)0x0) && (local_70 != (long *)0x0)) {
    plVar22 = local_70;
    plVar27 = local_70;
    do {
      plVar26 = (long *)plVar27[3];
      local_70 = plVar22;
      if ((((*(byte *)(*plVar27 + 0x28) >> 6 & 1) != 0) && ((int)plVar27[1] != 0)) &&
         (plVar27 != plVar28)) {
        lVar18 = plVar27[2];
        local_70 = plVar26;
        if (plVar27 != plVar22) {
          local_70 = plVar22;
        }
        plVar22 = plVar26;
        if (lVar18 != 0) {
          *(long **)(lVar18 + 0x18) = plVar26;
          plVar22 = (long *)plVar27[3];
        }
        if (plVar22 != (long *)0x0) {
          plVar22[2] = lVar18;
        }
        plVar28[3] = (long)plVar27;
        plVar27[2] = (long)plVar28;
        plVar27[3] = 0;
        plVar28 = plVar27;
      }
      if (plVar27 == local_68) break;
      plVar22 = local_70;
      plVar27 = plVar26;
    } while (plVar26 != (long *)0x0);
  }
  plVar22 = plVar28;
  if (plVar28 != (long *)0x0) {
    plVar27 = local_70;
    plVar26 = local_70;
    if (local_70 != (long *)0x0) {
      do {
        plVar24 = (long *)plVar26[3];
        local_70 = plVar27;
        if ((((*(byte *)(*plVar26 + 0x1c) & 6) != 0) && ((int)plVar26[1] != 0)) &&
           (plVar26 != plVar22)) {
          lVar18 = plVar26[2];
          local_70 = plVar24;
          if (plVar26 != plVar27) {
            local_70 = plVar27;
          }
          plVar27 = plVar24;
          if (lVar18 != 0) {
            *(long **)(lVar18 + 0x18) = plVar24;
            plVar27 = (long *)plVar26[3];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[2] = lVar18;
          }
          plVar22[3] = (long)plVar26;
          plVar26[2] = (long)plVar22;
          plVar26[3] = 0;
          plVar22 = plVar26;
        }
        if (plVar26 == plVar28) break;
        plVar27 = local_70;
        plVar26 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  plVar28 = plVar22;
  if (plVar22 != (long *)0x0) {
    plVar27 = local_70;
    plVar26 = local_70;
    if (local_70 != (long *)0x0) {
      do {
        plVar24 = (long *)plVar26[3];
        local_70 = plVar27;
        if ((((*(byte *)(*plVar26 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar26 + 0x28) >> 6 & 1) != 0)
            ) && (((int)plVar26[1] != 0 && (plVar26 != plVar28)))) {
          lVar18 = plVar26[2];
          local_70 = plVar24;
          if (plVar26 != plVar27) {
            local_70 = plVar27;
          }
          plVar27 = plVar24;
          if (lVar18 != 0) {
            *(long **)(lVar18 + 0x18) = plVar24;
            plVar27 = (long *)plVar26[3];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[2] = lVar18;
          }
          plVar28[3] = (long)plVar26;
          plVar26[2] = (long)plVar28;
          plVar26[3] = 0;
          plVar28 = plVar26;
        }
        if (plVar26 == plVar22) break;
        plVar27 = local_70;
        plVar26 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  plVar22 = plVar28;
  if (plVar28 != (long *)0x0) {
    plVar27 = local_70;
    plVar26 = local_70;
    if (local_70 != (long *)0x0) {
      do {
        plVar24 = (long *)plVar26[3];
        local_70 = plVar27;
        if ((int)plVar26[1] != 0) {
          if (plVar26 != plVar22) {
            lVar18 = plVar26[2];
            local_70 = plVar24;
            if (plVar26 != plVar27) {
              local_70 = plVar27;
            }
            plVar27 = plVar24;
            if (lVar18 != 0) {
              *(long **)(lVar18 + 0x18) = plVar24;
              plVar27 = (long *)plVar26[3];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[2] = lVar18;
            }
            plVar22[3] = (long)plVar26;
            plVar26[2] = (long)plVar22;
            plVar26[3] = 0;
            plVar22 = plVar26;
          }
          *(undefined4 *)(plVar26 + 1) = 0;
        }
        if (plVar26 == plVar28) break;
        plVar27 = local_70;
        plVar26 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
  }
  local_68 = plVar22;
  plVar27 = (long *)FUN_00452c30(-(ulong)(uVar6 + 0x4d >> 0x1f) & 0xfffffff800000000 |
                                 (ulong)(uVar6 + 0x4d) << 3,"external/openssl/ssl/ssl_ciph.c",0x615)
  ;
  plVar28 = plVar27;
  if (plVar27 == (long *)0x0) {
    FUN_00452f80(plVar8,"external/openssl/ssl/ssl_ciph.c",0x617);
    FUN_004806c0(0x14,0xa6,0x41,"external/openssl/ssl/ssl_ciph.c",0x618);
    return 0;
  }
  for (; plVar22 != (long *)0x0; plVar22 = (long *)plVar22[2]) {
    *plVar28 = *plVar22;
    plVar28 = plVar28 + 1;
  }
  lVar18 = 0x4c;
  puVar25 = &DAT_0449bce8;
  do {
    plVar22 = plVar28;
    if (*(uint *)(puVar25 + 0x1c) == 0 || (*(uint *)(puVar25 + 0x1c) & ~uVar2) != 0) {
      if (((*(uint *)(puVar25 + 0x20) == 0) || ((*(uint *)(puVar25 + 0x20) & ~uVar3) != 0)) &&
         (((*(uint *)(puVar25 + 0x24) == 0 || ((*(uint *)(puVar25 + 0x24) & ~uVar15) != 0)) &&
          ((*(uint *)(puVar25 + 0x28) == 0 || ((*(uint *)(puVar25 + 0x28) & ~uVar19) != 0)))))) {
        plVar22 = plVar28 + 1;
        *plVar28 = (long)puVar25;
      }
    }
    lVar18 = lVar18 + -1;
    puVar25 = puVar25 + 0x50;
    plVar28 = plVar22;
  } while (lVar18 != 0);
  *plVar22 = 0;
  iVar5 = strncmp(param_5,"DEFAULT",7);
  pcVar29 = param_5;
  if (iVar5 == 0) {
    iVar5 = FUN_003b1790("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_68,&local_70,plVar27,param_6);
    pcVar29 = param_5 + 7;
    if (*pcVar29 == ':') {
      pcVar29 = param_5 + 8;
    }
    if (iVar5 != 0) goto LAB_003b0aa4;
    FUN_00452f80(plVar27,"external/openssl/ssl/ssl_ciph.c",0x630);
  }
  else {
LAB_003b0aa4:
    if (*pcVar29 == '\0') {
      FUN_00452f80(plVar27,"external/openssl/ssl/ssl_ciph.c",0x630);
LAB_003b0b2c:
      lVar18 = FUN_0047dcc0();
      if (lVar18 == 0) {
        FUN_00452f80(plVar8,"external/openssl/ssl/ssl_ciph.c",0x63c);
        return 0;
      }
      iVar5 = FUN_0047e430(param_2);
      plVar28 = local_68;
      if (0 < iVar5) {
        iVar5 = 0;
        do {
          uVar12 = FUN_0047e450(param_2,iVar5);
          iVar7 = FUN_0047e2f0(lVar18,uVar12);
          if (iVar7 == 0) goto LAB_003b0c10;
          iVar5 = iVar5 + 1;
          iVar7 = FUN_0047e430(param_2);
          plVar28 = local_68;
        } while (iVar5 < iVar7);
      }
      do {
        if (plVar28 == (long *)0x0) {
          FUN_00452f80(plVar8,"external/openssl/ssl/ssl_ciph.c",0x659);
          lVar10 = FUN_0047da00(lVar18);
          if (lVar10 != 0) {
            FUN_0047db00(*param_4);
            *param_4 = lVar10;
            FUN_0047d9e0(lVar10,PTR_LAB_047cd0a8);
            FUN_0047e4d0(*param_4);
            FUN_0047db00(*param_3);
            *param_3 = lVar18;
            return lVar18;
          }
LAB_003b0c10:
          FUN_0047db00(lVar18);
          return 0;
        }
        if (((int)plVar28[1] != 0) && (iVar5 = FUN_0047e2f0(lVar18,*plVar28), iVar5 == 0)) {
          FUN_00452f80(plVar8,"external/openssl/ssl/ssl_ciph.c",0x650);
          goto LAB_003b0c10;
        }
        plVar28 = (long *)plVar28[2];
      } while( true );
    }
    iVar5 = FUN_003b1790(pcVar29,&local_68,&local_70,plVar27,param_6);
    FUN_00452f80(plVar27,"external/openssl/ssl/ssl_ciph.c",0x630);
    if (iVar5 != 0) goto LAB_003b0b2c;
  }
  uVar12 = 0x633;
LAB_003b0c54:
  FUN_00452f80(plVar8,"external/openssl/ssl/ssl_ciph.c",uVar12);
  return 0;
}


