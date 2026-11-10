/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b0abc; name: FUN_016b0abc
 */


void FUN_016b0abc(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  size_t sVar12;
  size_t sVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  char *__s;
  long lVar25;
  char cVar26;
  char *pcVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (*(char *)(param_1 + 0x2e1) == '\0') {
    bVar11 = *(int *)(param_1 + 0x1f0) != param_3;
  }
  else {
    bVar11 = true;
  }
  plVar2 = *(long **)(param_1 + 0x1b8);
  plVar4 = *(long **)(param_1 + 0x1c0);
  *(int *)(param_1 + 0x1f0) = param_3;
  *(undefined1 *)(param_1 + 0x2e1) = 0;
  do {
    if (plVar2 == plVar4) {
      return;
    }
    plVar5 = *(long **)(*plVar2 + 0x28);
    for (plVar3 = *(long **)(*plVar2 + 0x20); plVar3 != plVar5; plVar3 = plVar3 + 4) {
      lVar24 = *plVar3;
      if ((lVar24 != 0) &&
         (!(bool)(*(char *)(*(long *)(lVar24 + 0x20) + 0x54) == '\0' & (bVar11 ^ 1U)))) {
        lVar15 = *(long *)(lVar24 + 0x28);
        if (lVar15 == 0) {
          FUN_016b11c8(lVar24,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x120));
          lVar24 = *plVar3;
          lVar15 = *(long *)(lVar24 + 0x28);
          if (lVar15 != 0) goto LAB_016b0b8c;
        }
        else {
LAB_016b0b8c:
          *(undefined1 *)(lVar15 + 0xc9) = 1;
          fVar29 = (float)(*(int *)(*plVar3 + 0x68) + *(int *)(*(long *)(*plVar3 + 0x20) + 0x4c));
          fVar30 = *(float *)(lVar15 + 0xc0);
          *(float *)(lVar15 + 0xbc) = fVar29;
          if (fVar29 < fVar30) {
            *(float *)(lVar15 + 0xbc) = fVar30;
            fVar29 = fVar30;
          }
          if (*(float *)(lVar15 + 0xc4) < fVar29) {
            *(float *)(lVar15 + 0xbc) = *(float *)(lVar15 + 0xc4);
          }
          FUN_00d1f0dc(*(undefined8 *)(lVar24 + 0x28),0);
          FUN_00d1ef30(*(undefined8 *)(lVar24 + 0x28),0);
          FUN_00d1f2c8(0,*(undefined8 *)(lVar24 + 0x28),0);
        }
        if (param_2 != 0) {
          lVar24 = *plVar2;
          pcVar27 = *(char **)(*plVar3 + 8);
          sVar12 = strlen(pcVar27);
          if (sVar12 != 0) {
            uVar16 = sVar12 - 1;
            if (2 < uVar16) {
              uVar16 = 3;
            }
            if ((*pcVar27 == 'v') &&
               (((uVar16 == 0 ||
                 ((pcVar27[1] == 'i' &&
                  ((uVar16 == 1 || ((pcVar27[2] == 's' && ((uVar16 == 2 || (pcVar27[3] == '_')))))))
                  ))) && (uVar16 == 3)))) {
              __s = *(char **)(lVar24 + 8);
              sVar13 = strlen(__s);
              do {
                if ((sVar12 == 0) || (sVar13 == 0)) {
                  if (sVar13 == 0) {
                    plVar14 = (long *)FUN_00cb7028(param_2,lVar24);
                    lVar24 = *plVar14;
                    if (lVar24 != 0) {
                      plVar14 = *(long **)(lVar24 + 0xd0);
                      plVar6 = *(long **)(lVar24 + 0xd8);
                      if (plVar14 != plVar6) {
                        iVar7 = *(int *)(*(long *)(*plVar3 + 0x20) + 0x4c);
                        do {
                          lVar24 = *plVar14 + 0x68;
                          lVar15 = *(long *)(*plVar14 + 0x70);
                          if (lVar15 != lVar24) {
LAB_016b0e24:
                            uVar16 = *(ulong *)(param_1 + 0x158);
                            if (uVar16 != 0) {
                              uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
                              uVar20 = (uVar20 & 0x3333333333333333) +
                                       (uVar20 >> 2 & 0x3333333333333333);
                              uVar18 = *(ulong *)*plVar2;
                              uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38;
                              if (uVar20 < 2) {
                                uVar19 = uVar16 - 1 & uVar18;
                              }
                              else if (uVar18 < uVar16) {
                                uVar19 = uVar18;
                              }
                              else {
                                uVar19 = 0;
                                if (uVar16 != 0) {
                                  uVar19 = uVar18 / uVar16;
                                }
                                uVar19 = uVar18 - uVar19 * uVar16;
                              }
                              plVar23 = *(long **)(*(long *)(param_1 + 0x150) + uVar19 * 8);
                              if ((plVar23 != (long *)0x0) &&
                                 (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
                                if (uVar20 < 2) {
                                  do {
                                    if (plVar23[1] == uVar18) {
                                      if (plVar23[2] == uVar18) goto LAB_016b0f24;
                                    }
                                    else if ((plVar23[1] & uVar16 - 1) != uVar19) goto LAB_016b11c4;
                                    plVar23 = (long *)*plVar23;
                                    if (plVar23 == (long *)0x0) goto LAB_016b11c4;
                                  } while( true );
                                }
                                do {
                                  uVar20 = plVar23[1];
                                  if (uVar20 == uVar18) {
                                    if (plVar23[2] == uVar18) goto LAB_016b0f24;
                                  }
                                  else {
                                    if (uVar16 <= uVar20) {
                                      uVar8 = 0;
                                      if (uVar16 != 0) {
                                        uVar8 = uVar20 / uVar16;
                                      }
                                      uVar20 = uVar20 - uVar8 * uVar16;
                                    }
                                    if (uVar20 != uVar19) break;
                                  }
                                  plVar23 = (long *)*plVar23;
                                  if (plVar23 == (long *)0x0) break;
                                } while( true );
                              }
                            }
LAB_016b11c4:
                    /* WARNING: Subroutine does not return */
                            FUN_029cab50();
                          }
LAB_016b0d5c:
                          plVar14 = plVar14 + 1;
                        } while (plVar14 != plVar6);
                      }
                    }
                  }
                  break;
                }
                lVar15 = sVar12 - 1;
                sVar12 = sVar12 - 1;
                lVar25 = sVar13 - 1;
                sVar13 = sVar13 - 1;
              } while (pcVar27[lVar15] == __s[lVar25]);
            }
          }
        }
        if (*(code **)(param_1 + 0x260) != (code *)0x0) {
          local_68 = *(undefined4 *)(*(long *)(*plVar3 + 0x20) + 0x4c);
          (**(code **)(param_1 + 0x260))(param_1 + 0x280,*plVar2,*plVar3,&local_68);
        }
      }
    }
    plVar2 = plVar2 + 4;
  } while( true );
LAB_016b0f24:
  lVar28 = *(long *)(lVar15 + 0x10);
  pcVar27 = *(char **)(lVar28 + 0x38);
  lVar25 = plVar23[3];
  sVar12 = strlen(pcVar27);
  if (sVar12 == 0) {
LAB_016b1074:
    bVar9 = false;
LAB_016b1078:
    if (!bVar9) goto LAB_016b0f70;
    FUN_00daf8b8(&local_68,lVar28 + 0x30,2);
    plVar23 = (long *)CONCAT44(uStack_64,local_68);
    puVar1 = (ulong *)PTR_DAT_047d8b70;
    if (plVar23 != (long *)0x0) {
      puVar1 = (ulong *)(plVar23 + 6);
    }
    uVar16 = *puVar1;
    if (plVar23 != (long *)0x0) {
      lVar28 = *plVar23;
LAB_016b10b4:
      (**(code **)(lVar28 + 0x18))(plVar23);
      if ((long *)CONCAT44(uStack_64,local_68) == (long *)0x0) goto LAB_016b0f7c;
      pcVar17 = *(code **)(*(long *)CONCAT44(uStack_64,local_68) + 0x20);
      goto LAB_016b0d7c;
    }
  }
  else {
    if ((((pcVar27[sVar12 - 1] == '1' && pcVar27 + (sVar12 - 1) != pcVar27) &&
         (pcVar27[sVar12 - 2] == 'd' && pcVar27 + (sVar12 - 2) != pcVar27)) &&
        (pcVar27[sVar12 - 3] == 'o' && pcVar27 + (sVar12 - 3) != pcVar27)) &&
       ((pcVar27[sVar12 - 4] == 'l' && pcVar27 + (sVar12 - 4) != pcVar27 &&
        (pcVar27[sVar12 - 5] == '_')))) {
      FUN_00daf8b8(&local_68,lVar28 + 0x30,1);
      plVar23 = (long *)CONCAT44(uStack_64,local_68);
      puVar1 = (ulong *)PTR_DAT_047d8b70;
      if (plVar23 != (long *)0x0) {
        puVar1 = (ulong *)(plVar23 + 6);
      }
      uVar16 = *puVar1;
      if (plVar23 != (long *)0x0) {
        lVar28 = *plVar23;
        goto LAB_016b10b4;
      }
      goto LAB_016b0f7c;
    }
    if (sVar12 == 0) goto LAB_016b1074;
    if (pcVar27[sVar12 - 1] == '2') {
      if (pcVar27 + (sVar12 - 1) == pcVar27) goto LAB_016b1074;
      if (pcVar27[sVar12 - 2] != 'd') goto LAB_016b0f70;
      if (pcVar27 + (sVar12 - 2) == pcVar27) goto LAB_016b1074;
      if (pcVar27[sVar12 - 3] != 'o') goto LAB_016b0f70;
      if (pcVar27 + (sVar12 - 3) == pcVar27) goto LAB_016b1074;
      if (pcVar27[sVar12 - 4] != 'l') goto LAB_016b0f70;
      if (pcVar27 + (sVar12 - 4) == pcVar27) goto LAB_016b1074;
      if (pcVar27[sVar12 - 5] != '_') goto LAB_016b0f70;
      bVar9 = true;
      goto LAB_016b1078;
    }
LAB_016b0f70:
    uVar16 = *(ulong *)(lVar28 + 0x30);
    plVar23 = *(long **)(lVar28 + 0x48);
    if (plVar23 != (long *)0x0) {
      pcVar17 = *(code **)(*plVar23 + 0x18);
LAB_016b0d7c:
      (*pcVar17)();
    }
  }
LAB_016b0f7c:
  uVar20 = *(ulong *)(lVar25 + 0x90);
  if (uVar20 != 0) {
    uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar20 - 1 & uVar16;
    }
    else {
      uVar19 = uVar16;
      if (uVar20 <= uVar16) {
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar16 / uVar20;
        }
        uVar19 = uVar16 - uVar19 * uVar20;
      }
    }
    puVar21 = *(undefined8 **)(*(long *)(lVar25 + 0x88) + uVar19 * 8);
    if ((puVar21 != (undefined8 *)0x0) && (plVar22 = (long *)*puVar21, plVar22 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar22[1] == uVar16) {
            if (plVar22[2] == uVar16) goto LAB_016b0e18;
          }
          else if ((plVar22[1] & uVar20 - 1) != uVar19) goto LAB_016b0d94;
          plVar22 = (long *)*plVar22;
          cVar26 = '\0';
          bVar10 = 1;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar22[1];
          if (uVar18 == uVar16) {
            if (plVar22[2] == uVar16) goto LAB_016b0e18;
          }
          else {
            if (uVar20 <= uVar18) {
              uVar8 = 0;
              if (uVar20 != 0) {
                uVar8 = uVar18 / uVar20;
              }
              uVar18 = uVar18 - uVar8 * uVar20;
            }
            if (uVar18 != uVar19) goto LAB_016b0d94;
          }
          plVar22 = (long *)*plVar22;
          cVar26 = '\0';
          bVar10 = 1;
        } while (plVar22 != (long *)0x0);
      }
      goto LAB_016b0ddc;
    }
  }
LAB_016b0d94:
  cVar26 = '\0';
  bVar10 = 1;
LAB_016b0ddc:
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))();
  }
  if (!(bool)(cVar26 == '\0' & (bVar10 ^ 1))) {
    *(bool *)(*(long *)(lVar15 + 0x10) + 0x240) = iVar7 != 0;
  }
  lVar15 = *(long *)(lVar15 + 8);
  if (lVar15 == lVar24) goto LAB_016b0d5c;
  goto LAB_016b0e24;
LAB_016b0e18:
  cVar26 = (char)plVar22[6];
  bVar10 = 0;
  goto LAB_016b0ddc;
}


