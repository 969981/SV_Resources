/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0c448; name: FUN_00b0c448
 */


void FUN_00b0c448(long param_1)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  int local_44;
  undefined4 local_40 [4];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar1 = *(long **)(lVar8 + 0x1c8);
  plVar3 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar3 == plVar1) {
      return;
    }
    lVar8 = *plVar3;
    uVar6 = FUN_00a371b8(lVar8 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar6 & 1) == 0);
  if (*(long *)(param_1 + 0x48) == 0) {
    local_44 = -1;
    goto LAB_00b0c4c0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  local_44 = 0;
  if (lVar9 != 0) {
    pcVar10 = *(char **)(lVar9 + 0x148);
    pcVar2 = *(char **)(lVar9 + 0x150);
    pcVar11 = pcVar10;
    if (pcVar10 == pcVar2) {
LAB_00b0c530:
      if (pcVar11 != pcVar2) {
        local_44 = 0;
        if (*(long *)(pcVar11 + 8) == 0) goto LAB_00b0c53c;
        if (pcVar10 == pcVar2) {
LAB_00b0c574:
          if (pcVar10 == pcVar2) goto LAB_00b0c57c;
          uVar7 = *(undefined8 *)(pcVar10 + 8);
        }
        else {
          do {
            if (*pcVar10 == '\0') goto LAB_00b0c574;
            pcVar10 = pcVar10 + 0x10;
          } while (pcVar2 != pcVar10);
LAB_00b0c57c:
          uVar7 = 0;
        }
        uVar6 = FUN_00b0ea70(param_1,uVar7);
        if ((uVar6 & 1) != 0) {
          local_44 = 0;
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b0c4c0;
          lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
          if ((lVar9 != 0) && (cVar4 = FUN_00e5f3b4(lVar9 + -0x28), cVar4 == '\0')) {
            local_44 = 0;
            goto LAB_00b0c4c0;
          }
          local_44 = 1;
          goto LAB_00b0c53c;
        }
      }
      local_44 = 0;
    }
    else {
      do {
        if (*pcVar11 == '\0') goto LAB_00b0c530;
        pcVar11 = pcVar11 + 0x10;
        local_44 = 0;
      } while (pcVar2 != pcVar11);
    }
  }
LAB_00b0c53c:
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_00b0c544:
    local_44 = local_44 + -1;
    goto LAB_00b0c4c0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  if (lVar9 == 0) {
LAB_00b0c664:
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b0c544;
    lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar9 != 0) {
      pcVar10 = *(char **)(lVar9 + 0x148);
      pcVar2 = *(char **)(lVar9 + 0x150);
      pcVar11 = pcVar10;
      if (pcVar10 == pcVar2) {
LAB_00b0c6a8:
        if ((pcVar11 != pcVar2) && (*(long *)(pcVar11 + 8) != 0)) {
          if (pcVar10 == pcVar2) {
LAB_00b0c6e4:
            if (pcVar10 == pcVar2) goto LAB_00b0c6ec;
            uVar7 = *(undefined8 *)(pcVar10 + 8);
          }
          else {
            do {
              if (*pcVar10 == '\x02') goto LAB_00b0c6e4;
              pcVar10 = pcVar10 + 0x10;
            } while (pcVar2 != pcVar10);
LAB_00b0c6ec:
            uVar7 = 0;
          }
          uVar6 = FUN_00b0ea70(param_1,uVar7);
          if ((uVar6 & 1) != 0) {
            if (((*(long *)(param_1 + 0x48) != 0) &&
                (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 != 0)) &&
               (cVar4 = FUN_00e5f3b4(lVar9 + -0x28), cVar4 == '\x02')) goto LAB_00b0c4c0;
            local_44 = local_44 + 1;
          }
        }
      }
      else {
        do {
          if (*pcVar11 == '\x02') goto LAB_00b0c6a8;
          pcVar11 = pcVar11 + 0x10;
        } while (pcVar2 != pcVar11);
      }
    }
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b0c544;
    lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
    if (lVar9 != 0) {
      pcVar10 = *(char **)(lVar9 + 0x148);
      pcVar2 = *(char **)(lVar9 + 0x150);
      pcVar11 = pcVar10;
      if (pcVar10 == pcVar2) {
LAB_00b0c7bc:
        if ((pcVar11 != pcVar2) && (*(long *)(pcVar11 + 8) != 0)) {
          if (pcVar10 == pcVar2) {
LAB_00b0c7f0:
            if (pcVar10 == pcVar2) goto LAB_00b0c7f8;
            uVar7 = *(undefined8 *)(pcVar10 + 8);
          }
          else {
            do {
              if (*pcVar10 == '\x03') goto LAB_00b0c7f0;
              pcVar10 = pcVar10 + 0x10;
            } while (pcVar2 != pcVar10);
LAB_00b0c7f8:
            uVar7 = 0;
          }
          uVar6 = FUN_00b0ea70(param_1,uVar7);
          if ((uVar6 & 1) != 0) {
            if (((*(long *)(param_1 + 0x48) != 0) &&
                (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 != 0)) &&
               (cVar4 = FUN_00e5f3b4(lVar9 + -0x28), cVar4 == '\x03')) goto LAB_00b0c4c0;
            local_44 = local_44 + 1;
          }
        }
      }
      else {
        do {
          if (*pcVar11 == '\x03') goto LAB_00b0c7bc;
          pcVar11 = pcVar11 + 0x10;
        } while (pcVar2 != pcVar11);
      }
    }
    iVar5 = local_44 + -1;
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      if (lVar9 != 0) {
        pcVar10 = *(char **)(lVar9 + 0x148);
        pcVar2 = *(char **)(lVar9 + 0x150);
        pcVar11 = pcVar10;
        if (pcVar10 == pcVar2) {
LAB_00b0c894:
          if ((pcVar11 != pcVar2) && (*(long *)(pcVar11 + 8) != 0)) {
            if (pcVar10 == pcVar2) {
LAB_00b0c8c4:
              if (pcVar10 == pcVar2) goto LAB_00b0c8cc;
              uVar7 = *(undefined8 *)(pcVar10 + 8);
            }
            else {
              do {
                if (*pcVar10 == '\0') goto LAB_00b0c8c4;
                pcVar10 = pcVar10 + 0x10;
              } while (pcVar2 != pcVar10);
LAB_00b0c8cc:
              uVar7 = 0;
            }
            uVar6 = FUN_00b0ea70(param_1,uVar7);
            if ((uVar6 & 1) == 0) {
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b0c4c0;
              lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
              if (lVar9 == 0) {
                iVar5 = local_44;
              }
              else {
                cVar4 = FUN_00e5f3b4(lVar9 + -0x28);
                iVar5 = local_44;
                if (cVar4 == '\0') goto LAB_00b0c4c0;
              }
            }
          }
        }
        else {
          do {
            if (*pcVar11 == '\0') goto LAB_00b0c894;
            pcVar11 = pcVar11 + 0x10;
          } while (pcVar2 != pcVar11);
        }
      }
      local_44 = iVar5;
      iVar5 = local_44;
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
        if (lVar9 != 0) {
          pcVar10 = *(char **)(lVar9 + 0x148);
          pcVar2 = *(char **)(lVar9 + 0x150);
          pcVar11 = pcVar10;
          if (pcVar10 == pcVar2) {
LAB_00b0c970:
            if ((pcVar11 != pcVar2) && (*(long *)(pcVar11 + 8) != 0)) {
              if (pcVar10 == pcVar2) {
LAB_00b0c9a4:
                if (pcVar10 == pcVar2) goto LAB_00b0c9ac;
                uVar7 = *(undefined8 *)(pcVar10 + 8);
              }
              else {
                do {
                  if (*pcVar10 == '\x01') goto LAB_00b0c9a4;
                  pcVar10 = pcVar10 + 0x10;
                } while (pcVar2 != pcVar10);
LAB_00b0c9ac:
                uVar7 = 0;
              }
              uVar6 = FUN_00b0ea70(param_1,uVar7);
              if ((uVar6 & 1) == 0) {
                local_44 = local_44 + 1;
                iVar5 = local_44;
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b0c858;
                lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
                if ((lVar9 != 0) && (cVar4 = FUN_00e5f3b4(lVar9 + -0x28), cVar4 == '\x01'))
                goto LAB_00b0c4c0;
              }
            }
          }
          else {
            do {
              if (*pcVar11 == '\x01') goto LAB_00b0c970;
              pcVar11 = pcVar11 + 0x10;
            } while (pcVar2 != pcVar11);
          }
        }
        iVar5 = local_44;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
          if (lVar9 != 0) {
            pcVar10 = *(char **)(lVar9 + 0x148);
            pcVar2 = *(char **)(lVar9 + 0x150);
            pcVar11 = pcVar10;
            if (pcVar10 == pcVar2) {
LAB_00b0ca44:
              if ((pcVar11 != pcVar2) && (*(long *)(pcVar11 + 8) != 0)) {
                if (pcVar10 == pcVar2) {
LAB_00b0ca78:
                  if (pcVar10 == pcVar2) goto LAB_00b0ca80;
                  uVar7 = *(undefined8 *)(pcVar10 + 8);
                }
                else {
                  do {
                    if (*pcVar10 == '\x02') goto LAB_00b0ca78;
                    pcVar10 = pcVar10 + 0x10;
                  } while (pcVar2 != pcVar10);
LAB_00b0ca80:
                  uVar7 = 0;
                }
                uVar6 = FUN_00b0ea70(param_1,uVar7);
                if ((uVar6 & 1) == 0) {
                  local_44 = local_44 + 1;
                  iVar5 = local_44;
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00b0c858;
                  lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
                  if ((lVar9 != 0) && (cVar4 = FUN_00e5f3b4(lVar9 + -0x28), cVar4 == '\x02'))
                  goto LAB_00b0c4c0;
                }
              }
            }
            else {
              do {
                if (*pcVar11 == '\x02') goto LAB_00b0ca44;
                pcVar11 = pcVar11 + 0x10;
              } while (pcVar2 != pcVar11);
            }
          }
          iVar5 = local_44;
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 != 0)) {
            pcVar10 = *(char **)(lVar9 + 0x148);
            pcVar2 = *(char **)(lVar9 + 0x150);
            pcVar11 = pcVar10;
            if (pcVar10 == pcVar2) {
LAB_00b0cb10:
              if ((pcVar11 != pcVar2) && (*(long *)(pcVar11 + 8) != 0)) {
                if (pcVar10 == pcVar2) {
LAB_00b0cb44:
                  if (pcVar10 == pcVar2) goto LAB_00b0cb4c;
                  uVar7 = *(undefined8 *)(pcVar10 + 8);
                }
                else {
                  do {
                    if (*pcVar10 == '\x03') goto LAB_00b0cb44;
                    pcVar10 = pcVar10 + 0x10;
                  } while (pcVar2 != pcVar10);
LAB_00b0cb4c:
                  uVar7 = 0;
                }
                uVar6 = FUN_00b0ea70(param_1,uVar7);
                if ((uVar6 & 1) == 0) {
                  iVar5 = local_44 + 1;
                  if (*(long *)(param_1 + 0x48) != 0) {
                    lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
                    if (lVar9 != 0) {
                      FUN_00e5f3b4(lVar9 + -0x28);
                    }
                  }
                }
              }
            }
            else {
              do {
                if (*pcVar11 == '\x03') goto LAB_00b0cb10;
                pcVar11 = pcVar11 + 0x10;
              } while (pcVar2 != pcVar11);
            }
          }
        }
      }
    }
  }
  else {
    pcVar10 = *(char **)(lVar9 + 0x148);
    pcVar2 = *(char **)(lVar9 + 0x150);
    pcVar11 = pcVar10;
    if (pcVar10 != pcVar2) {
      do {
        if (*pcVar11 == '\x01') goto LAB_00b0c5f4;
        pcVar11 = pcVar11 + 0x10;
      } while (pcVar2 != pcVar11);
      goto LAB_00b0c664;
    }
LAB_00b0c5f4:
    if ((pcVar11 == pcVar2) || (*(long *)(pcVar11 + 8) == 0)) goto LAB_00b0c664;
    if (pcVar10 == pcVar2) {
LAB_00b0c62c:
      if (pcVar10 == pcVar2) goto LAB_00b0c634;
      uVar7 = *(undefined8 *)(pcVar10 + 8);
    }
    else {
      do {
        if (*pcVar10 == '\x01') goto LAB_00b0c62c;
        pcVar10 = pcVar10 + 0x10;
      } while (pcVar2 != pcVar10);
LAB_00b0c634:
      uVar7 = 0;
    }
    uVar6 = FUN_00b0ea70(param_1,uVar7);
    if ((uVar6 & 1) == 0) goto LAB_00b0c664;
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar9 == 0)) {
LAB_00b0c654:
      local_44 = local_44 + 1;
      goto LAB_00b0c664;
    }
    cVar4 = FUN_00e5f3b4(lVar9 + -0x28);
    iVar5 = local_44;
    if (cVar4 != '\x01') goto LAB_00b0c654;
  }
LAB_00b0c858:
  local_44 = iVar5;
LAB_00b0c4c0:
  local_40[0] = *(undefined4 *)(lVar8 + 0xb44);
  local_40[1] = *(undefined4 *)(lVar8 + 0xb48);
  local_40[2] = *(undefined4 *)(lVar8 + 0xb4c);
  local_40[3] = *(undefined4 *)(lVar8 + 0xb50);
  *(undefined4 *)(lVar8 + 0xb54) = local_40[local_44];
  return;
}


