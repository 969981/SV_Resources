/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b166cc; name: FUN_00b166cc
 */


void FUN_00b166cc(long param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  long *plVar9;
  char *pcVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  char *pcVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  plVar9 = (long *)*param_3;
  if (plVar9 == (long *)0x0) {
    return;
  }
  cVar3 = *(char *)(*plVar9 + plVar9[2]);
  plVar9[2] = plVar9[2] + 1;
  if (cVar3 != '\x01') {
    return;
  }
  cVar3 = *(char *)(param_2 + 0xb3c);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_2 + 0xb40) = 0xffffffff;
    *(undefined1 *)(param_2 + 0xb3c) = 0;
    *(undefined8 *)(param_2 + 0xb5c) = 0xffffffffffffffff;
    *(undefined1 *)(param_2 + 0xb68) = 0;
    *(undefined8 *)(param_2 + 0xb44) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xb4c) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0xb54) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0xb64) = 0;
  }
  plVar9 = (long *)*param_3;
  bVar6 = false;
  if (plVar9 != (long *)0x0) {
    bVar4 = *(byte *)(*plVar9 + plVar9[2]);
    plVar9[2] = plVar9[2] + 1;
    if (bVar4 < 2) {
      bVar6 = bVar4 != 0;
    }
    else {
      bVar6 = false;
    }
  }
  *(bool *)(param_2 + 0xb3c) = bVar6;
  plVar9 = (long *)*param_3;
  if (plVar9 == (long *)0x0) {
LAB_00b1680c:
    uVar11 = 0;
    uVar16 = 0;
    uVar13 = 0;
  }
  else {
    lVar12 = *plVar9;
    lVar18 = plVar9[2];
    cVar7 = *(char *)(lVar12 + lVar18);
    plVar9[2] = lVar18 + 1;
    if (cVar7 != -0x44) goto LAB_00b1680c;
    bVar4 = *(byte *)(lVar12 + lVar18 + 1);
    uVar17 = (ulong)bVar4;
    lVar14 = lVar18 + 2;
    plVar9[2] = lVar14;
    if (0x83 < uVar17) goto LAB_00b1680c;
    switch(bVar4) {
    case 0x80:
      uVar17 = (ulong)*(byte *)(lVar12 + lVar14);
      lVar14 = lVar18 + 3;
      break;
    case 0x81:
      uVar17 = (ulong)*(ushort *)(lVar12 + lVar14);
      lVar14 = lVar18 + 4;
      break;
    case 0x82:
      uVar17 = (ulong)*(uint *)(lVar12 + lVar14);
      lVar14 = lVar18 + 6;
      break;
    case 0x83:
      uVar17 = *(ulong *)(lVar12 + lVar14);
      lVar14 = lVar18 + 10;
      break;
    default:
      goto switchD_00b167dc_default;
    }
    plVar9[2] = lVar14;
switchD_00b167dc_default:
    if (uVar17 != 0xc) goto LAB_00b1680c;
    puVar1 = (undefined4 *)(lVar12 + lVar14);
    uVar11 = *puVar1;
    uVar16 = puVar1[1];
    uVar13 = puVar1[2];
    plVar9[2] = lVar14 + 0xc;
  }
  *(undefined4 *)(param_2 + 0xb58) = uVar11;
  *(undefined4 *)(param_2 + 0xb5c) = uVar16;
  *(undefined4 *)(param_2 + 0xb60) = uVar13;
  local_50 = 0;
  uStack_48 = 0;
  plVar9 = (long *)*param_3;
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    lVar18 = plVar9[2];
    cVar7 = *(char *)(lVar12 + lVar18);
    plVar9[2] = lVar18 + 1;
    if (cVar7 != -0x44) goto LAB_00b168ac;
    bVar4 = *(byte *)(lVar12 + lVar18 + 1);
    uVar17 = (ulong)bVar4;
    lVar14 = lVar18 + 2;
    plVar9[2] = lVar14;
    if (0x83 < uVar17) goto LAB_00b168ac;
    switch(bVar4) {
    case 0x80:
      uVar17 = (ulong)*(byte *)(lVar12 + lVar14);
      lVar14 = lVar18 + 3;
      break;
    case 0x81:
      uVar17 = (ulong)*(ushort *)(lVar12 + lVar14);
      lVar14 = lVar18 + 4;
      break;
    case 0x82:
      uVar17 = (ulong)*(uint *)(lVar12 + lVar14);
      lVar14 = lVar18 + 6;
      break;
    case 0x83:
      uVar17 = *(ulong *)(lVar12 + lVar14);
      lVar14 = lVar18 + 10;
      break;
    default:
      goto switchD_00b16880_default;
    }
    plVar9[2] = lVar14;
switchD_00b16880_default:
    if (uVar17 == 0x10) {
      local_50 = *(undefined8 *)(lVar12 + lVar14);
      uStack_48 = ((undefined8 *)(lVar12 + lVar14))[1];
      plVar9[2] = lVar14 + 0x10;
    }
  }
LAB_00b168ac:
  if (*(long *)(param_1 + 0x48) == 0) {
    local_58 = -1;
    goto LAB_00b168b8;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  local_58 = 0;
  if (lVar12 != 0) {
    pcVar10 = *(char **)(lVar12 + 0x148);
    pcVar2 = *(char **)(lVar12 + 0x150);
    pcVar15 = pcVar10;
    if (pcVar10 == pcVar2) {
LAB_00b16968:
      if (pcVar15 != pcVar2) {
        local_58 = 0;
        if (*(long *)(pcVar15 + 8) == 0) goto LAB_00b16974;
        if (pcVar10 == pcVar2) {
LAB_00b169ac:
          if (pcVar10 == pcVar2) goto LAB_00b169b4;
          uVar8 = *(undefined8 *)(pcVar10 + 8);
        }
        else {
          do {
            if (*pcVar10 == '\0') goto LAB_00b169ac;
            pcVar10 = pcVar10 + 0x10;
          } while (pcVar2 != pcVar10);
LAB_00b169b4:
          uVar8 = 0;
        }
        uVar17 = FUN_00b0ea70(param_1,uVar8);
        if ((uVar17 & 1) != 0) {
          local_58 = 0;
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b168b8;
          lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
          if ((lVar12 != 0) && (cVar7 = FUN_00e5f3b4(lVar12 + -0x28), cVar7 == '\0')) {
            local_58 = 0;
            goto LAB_00b168b8;
          }
          local_58 = 1;
          goto LAB_00b16974;
        }
      }
      local_58 = 0;
    }
    else {
      do {
        if (*pcVar15 == '\0') goto LAB_00b16968;
        pcVar15 = pcVar15 + 0x10;
        local_58 = 0;
      } while (pcVar2 != pcVar15);
    }
  }
LAB_00b16974:
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_00b1697c:
    local_58 = local_58 + -1;
    goto LAB_00b168b8;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  if (lVar12 == 0) {
LAB_00b16aa4:
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b1697c;
    lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar12 != 0) {
      pcVar10 = *(char **)(lVar12 + 0x148);
      pcVar2 = *(char **)(lVar12 + 0x150);
      pcVar15 = pcVar10;
      if (pcVar10 == pcVar2) {
LAB_00b16ae8:
        if ((pcVar15 != pcVar2) && (*(long *)(pcVar15 + 8) != 0)) {
          if (pcVar10 == pcVar2) {
LAB_00b16b6c:
            if (pcVar10 == pcVar2) goto LAB_00b16b74;
            uVar8 = *(undefined8 *)(pcVar10 + 8);
          }
          else {
            do {
              if (*pcVar10 == '\x02') goto LAB_00b16b6c;
              pcVar10 = pcVar10 + 0x10;
            } while (pcVar2 != pcVar10);
LAB_00b16b74:
            uVar8 = 0;
          }
          uVar17 = FUN_00b0ea70(param_1,uVar8);
          if ((uVar17 & 1) != 0) {
            if (((*(long *)(param_1 + 0x48) != 0) &&
                (lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar12 != 0)) &&
               (cVar7 = FUN_00e5f3b4(lVar12 + -0x28), cVar7 == '\x02')) goto LAB_00b168b8;
            local_58 = local_58 + 1;
          }
        }
      }
      else {
        do {
          if (*pcVar15 == '\x02') goto LAB_00b16ae8;
          pcVar15 = pcVar15 + 0x10;
        } while (pcVar2 != pcVar15);
      }
    }
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b1697c;
    lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar12 != 0) {
      pcVar10 = *(char **)(lVar12 + 0x148);
      pcVar2 = *(char **)(lVar12 + 0x150);
      pcVar15 = pcVar10;
      if (pcVar10 == pcVar2) {
LAB_00b16c08:
        if ((pcVar15 != pcVar2) && (*(long *)(pcVar15 + 8) != 0)) {
          if (pcVar10 == pcVar2) {
LAB_00b16c3c:
            if (pcVar10 == pcVar2) goto LAB_00b16c44;
            uVar8 = *(undefined8 *)(pcVar10 + 8);
          }
          else {
            do {
              if (*pcVar10 == '\x03') goto LAB_00b16c3c;
              pcVar10 = pcVar10 + 0x10;
            } while (pcVar2 != pcVar10);
LAB_00b16c44:
            uVar8 = 0;
          }
          uVar17 = FUN_00b0ea70(param_1,uVar8);
          if ((uVar17 & 1) != 0) {
            if (((*(long *)(param_1 + 0x48) != 0) &&
                (lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar12 != 0)) &&
               (cVar7 = FUN_00e5f3b4(lVar12 + -0x28), cVar7 == '\x03')) goto LAB_00b168b8;
            local_58 = local_58 + 1;
          }
        }
      }
      else {
        do {
          if (*pcVar15 == '\x03') goto LAB_00b16c08;
          pcVar15 = pcVar15 + 0x10;
        } while (pcVar2 != pcVar15);
      }
    }
    iVar5 = local_58 + -1;
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      if (lVar12 != 0) {
        pcVar10 = *(char **)(lVar12 + 0x148);
        pcVar2 = *(char **)(lVar12 + 0x150);
        pcVar15 = pcVar10;
        if (pcVar10 == pcVar2) {
LAB_00b16ce0:
          if ((pcVar15 != pcVar2) && (*(long *)(pcVar15 + 8) != 0)) {
            if (pcVar10 == pcVar2) {
LAB_00b16d10:
              if (pcVar10 == pcVar2) goto LAB_00b16d18;
              uVar8 = *(undefined8 *)(pcVar10 + 8);
            }
            else {
              do {
                if (*pcVar10 == '\0') goto LAB_00b16d10;
                pcVar10 = pcVar10 + 0x10;
              } while (pcVar2 != pcVar10);
LAB_00b16d18:
              uVar8 = 0;
            }
            uVar17 = FUN_00b0ea70(param_1,uVar8);
            if ((uVar17 & 1) == 0) {
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b168b8;
              lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
              if (lVar12 == 0) {
                iVar5 = local_58;
              }
              else {
                cVar7 = FUN_00e5f3b4(lVar12 + -0x28);
                iVar5 = local_58;
                if (cVar7 == '\0') goto LAB_00b168b8;
              }
            }
          }
        }
        else {
          do {
            if (*pcVar15 == '\0') goto LAB_00b16ce0;
            pcVar15 = pcVar15 + 0x10;
          } while (pcVar2 != pcVar15);
        }
      }
      local_58 = iVar5;
      iVar5 = local_58;
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
        if (lVar12 != 0) {
          pcVar10 = *(char **)(lVar12 + 0x148);
          pcVar2 = *(char **)(lVar12 + 0x150);
          pcVar15 = pcVar10;
          if (pcVar10 == pcVar2) {
LAB_00b16dbc:
            if ((pcVar15 != pcVar2) && (*(long *)(pcVar15 + 8) != 0)) {
              if (pcVar10 == pcVar2) {
LAB_00b16df0:
                if (pcVar10 == pcVar2) goto LAB_00b16df8;
                uVar8 = *(undefined8 *)(pcVar10 + 8);
              }
              else {
                do {
                  if (*pcVar10 == '\x01') goto LAB_00b16df0;
                  pcVar10 = pcVar10 + 0x10;
                } while (pcVar2 != pcVar10);
LAB_00b16df8:
                uVar8 = 0;
              }
              uVar17 = FUN_00b0ea70(param_1,uVar8);
              if ((uVar17 & 1) == 0) {
                local_58 = local_58 + 1;
                iVar5 = local_58;
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b16ca4;
                lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
                if ((lVar12 != 0) && (cVar7 = FUN_00e5f3b4(lVar12 + -0x28), cVar7 == '\x01'))
                goto LAB_00b168b8;
              }
            }
          }
          else {
            do {
              if (*pcVar15 == '\x01') goto LAB_00b16dbc;
              pcVar15 = pcVar15 + 0x10;
            } while (pcVar2 != pcVar15);
          }
        }
        iVar5 = local_58;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
          if (lVar12 != 0) {
            pcVar10 = *(char **)(lVar12 + 0x148);
            pcVar2 = *(char **)(lVar12 + 0x150);
            pcVar15 = pcVar10;
            if (pcVar10 == pcVar2) {
LAB_00b16e90:
              if ((pcVar15 != pcVar2) && (*(long *)(pcVar15 + 8) != 0)) {
                if (pcVar10 == pcVar2) {
LAB_00b16ec4:
                  if (pcVar10 == pcVar2) goto LAB_00b16ecc;
                  uVar8 = *(undefined8 *)(pcVar10 + 8);
                }
                else {
                  do {
                    if (*pcVar10 == '\x02') goto LAB_00b16ec4;
                    pcVar10 = pcVar10 + 0x10;
                  } while (pcVar2 != pcVar10);
LAB_00b16ecc:
                  uVar8 = 0;
                }
                uVar17 = FUN_00b0ea70(param_1,uVar8);
                if ((uVar17 & 1) == 0) {
                  local_58 = local_58 + 1;
                  iVar5 = local_58;
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b16ca4;
                  lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
                  if ((lVar12 != 0) && (cVar7 = FUN_00e5f3b4(lVar12 + -0x28), cVar7 == '\x02'))
                  goto LAB_00b168b8;
                }
              }
            }
            else {
              do {
                if (*pcVar15 == '\x02') goto LAB_00b16e90;
                pcVar15 = pcVar15 + 0x10;
              } while (pcVar2 != pcVar15);
            }
          }
          iVar5 = local_58;
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar12 != 0)) {
            pcVar10 = *(char **)(lVar12 + 0x148);
            pcVar2 = *(char **)(lVar12 + 0x150);
            pcVar15 = pcVar10;
            if (pcVar10 == pcVar2) {
LAB_00b16f5c:
              if ((pcVar15 != pcVar2) && (*(long *)(pcVar15 + 8) != 0)) {
                if (pcVar10 == pcVar2) {
LAB_00b16f90:
                  if (pcVar10 == pcVar2) goto LAB_00b16f98;
                  uVar8 = *(undefined8 *)(pcVar10 + 8);
                }
                else {
                  do {
                    if (*pcVar10 == '\x03') goto LAB_00b16f90;
                    pcVar10 = pcVar10 + 0x10;
                  } while (pcVar2 != pcVar10);
LAB_00b16f98:
                  uVar8 = 0;
                }
                uVar17 = FUN_00b0ea70(param_1,uVar8);
                if ((uVar17 & 1) == 0) {
                  iVar5 = local_58 + 1;
                  if (*(long *)(param_1 + 0x48) != 0) {
                    lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
                    if (lVar12 != 0) {
                      FUN_00e5f3b4(lVar12 + -0x28);
                    }
                  }
                }
              }
            }
            else {
              do {
                if (*pcVar15 == '\x03') goto LAB_00b16f5c;
                pcVar15 = pcVar15 + 0x10;
              } while (pcVar2 != pcVar15);
            }
          }
        }
      }
    }
  }
  else {
    pcVar10 = *(char **)(lVar12 + 0x148);
    pcVar2 = *(char **)(lVar12 + 0x150);
    pcVar15 = pcVar10;
    if (pcVar10 != pcVar2) {
      do {
        if (*pcVar15 == '\x01') goto LAB_00b16a2c;
        pcVar15 = pcVar15 + 0x10;
      } while (pcVar2 != pcVar15);
      goto LAB_00b16aa4;
    }
LAB_00b16a2c:
    if ((pcVar15 == pcVar2) || (*(long *)(pcVar15 + 8) == 0)) goto LAB_00b16aa4;
    if (pcVar10 == pcVar2) {
LAB_00b16a64:
      if (pcVar10 == pcVar2) goto LAB_00b16a6c;
      uVar8 = *(undefined8 *)(pcVar10 + 8);
    }
    else {
      do {
        if (*pcVar10 == '\x01') goto LAB_00b16a64;
        pcVar10 = pcVar10 + 0x10;
      } while (pcVar2 != pcVar10);
LAB_00b16a6c:
      uVar8 = 0;
    }
    uVar17 = FUN_00b0ea70(param_1,uVar8);
    if ((uVar17 & 1) == 0) goto LAB_00b16aa4;
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar12 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar12 == 0)) {
LAB_00b16a94:
      local_58 = local_58 + 1;
      goto LAB_00b16aa4;
    }
    cVar7 = FUN_00e5f3b4(lVar12 + -0x28);
    iVar5 = local_58;
    if (cVar7 != '\x01') goto LAB_00b16a94;
  }
LAB_00b16ca4:
  local_58 = iVar5;
LAB_00b168b8:
  if (cVar3 == '\0') {
    *(undefined4 *)(param_2 + 0xb44) = *(undefined4 *)(auStack_28 + (long)local_58 * 4 + -0x28);
  }
  local_24 = 0;
  if (*param_3 != 0) {
    FUN_01e643c8(auStack_28,&local_24);
  }
  *(undefined4 *)(param_2 + 0xb40) = local_24;
  local_54 = 0;
  if (*param_3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_01e643c8(auStack_28,&local_54);
  }
  *(undefined4 *)(param_2 + 0xb64) = local_54;
  return;
}


