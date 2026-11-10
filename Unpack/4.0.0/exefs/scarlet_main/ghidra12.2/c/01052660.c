/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01052660; name: FUN_01052660
 */


undefined4 FUN_01052660(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  short *psVar11;
  long lVar12;
  float *pfVar13;
  short sVar14;
  ushort uVar15;
  long lVar16;
  char *pcVar17;
  uint uVar18;
  bool bVar19;
  short *psVar20;
  ulong uVar21;
  ulong uVar22;
  char cVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  
  *param_3 = 0;
  fVar24 = (float)param_1;
  switch(*(undefined4 *)((long)param_2 + 0x8c)) {
  case 0:
    if ((int)param_2[0x14] == 0) {
      iVar8 = (int)param_2[0xc];
      if (iVar8 == 1) {
        if ((int)param_2[0x1f] != 2) {
          return 0;
        }
        uVar21 = (**(code **)(*param_2 + 0x58))(param_2);
        if ((uVar21 & 1) == 0) {
          return 0;
        }
        goto LAB_0105286c;
      }
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          if (iVar8 == 0) {
            return 0;
          }
          goto LAB_0105286c;
        }
        if (((int)param_2[0x1f] == 2) &&
           (uVar21 = (**(code **)(*param_2 + 0x58))(param_2), (uVar21 & 1) != 0)) goto LAB_0105286c;
      }
      if ((*(float *)(param_2 + 0xf) < *(float *)((long)param_2 + 0x7c)) ||
         (fVar24 = *(float *)((long)param_2 + 0x7c) + fVar24,
         *(float *)((long)param_2 + 0x7c) = fVar24, *(float *)(param_2 + 0xf) < fVar24)) {
LAB_0105286c:
        *(undefined4 *)((long)param_2 + 0x8c) = 1;
        *(undefined4 *)(param_2 + 0x1f) = 1;
        return 4;
      }
    }
    return 0;
  case 1:
    return 4;
  case 2:
    if ((int)param_2[0x14] == 2) {
      return 2;
    }
    if ((int)param_2[0x14] != 1) {
      if ((int)param_2[0x1f] != 2) {
        return 2;
      }
      uVar21 = (**(code **)(*param_2 + 0x50))(param_1,param_2);
      if ((uVar21 & 1) == 0) {
        return 2;
      }
    }
    if (*(byte *)((long)param_2 + 0x83) < *(byte *)((long)param_2 + 0x81)) {
      if (*(short *)((long)param_2 + 0xcc) == -0x41ff) {
        if ((char)param_2[0x10] != '\0') goto LAB_01052eb0;
      }
      else {
        if (*(byte *)(param_2 + 0x10) <= *(byte *)((long)param_2 + 0x84)) {
          FUN_01053528(param_2);
          uVar7 = 3;
          goto LAB_01052c9c;
        }
LAB_01052eb0:
        uVar21 = 0;
        do {
          lVar12 = param_2[6] + uVar21 * 0x90;
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar12 + 0x20);
          *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar12 + 0x28);
          *(char *)(param_2[6] + uVar21 * 0x90 + 0x82) = (char)uVar21;
          lVar12 = param_2[6];
          lVar16 = *(long *)(lVar12 + uVar21 * 0x90 + 8);
          if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
            psVar20 = (short *)(lVar16 + 0x1a);
            sVar14 = *(short *)(lVar16 + 0x1a);
LAB_01053380:
            sVar3 = *psVar20;
            if (sVar3 == sVar14) {
              cVar23 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
              if (bVar19) {
                *psVar20 = sVar14 + 1;
                cVar23 = ExclusiveMonitorsStatus();
              }
              if (cVar23 != '\0') goto LAB_010533a4;
              bVar19 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_010533a4:
              bVar19 = false;
            }
            if (!bVar19) goto code_r0x010533ac;
            lVar16 = *(long *)(lVar16 + 0x10);
            if (lVar16 != 0) {
              plVar6 = *(long **)(lVar12 + uVar21 * 0x90);
              (**(code **)(*plVar6 + 0x120))(plVar6,&DAT_03d61fe2,0);
              lVar12 = param_2[6] + uVar21 * 0x90;
              uVar26 = *(undefined8 *)(lVar12 + 0x28);
              plVar6[6] = *(long *)(lVar12 + 0x20);
              *(int *)(plVar6 + 7) = (int)uVar26;
              *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
              lVar12 = *(long *)(lVar16 + 8);
              psVar20 = (short *)(lVar12 + 0x1a);
              do {
                sVar14 = *psVar20;
                cVar23 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
                if (bVar19) {
                  *psVar20 = sVar14 + -1;
                  cVar23 = ExclusiveMonitorsStatus();
                }
              } while (cVar23 != '\0');
              if (sVar14 == 1) {
                *(undefined8 *)(lVar12 + 0x10) = 0;
                (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))((long *)(lVar16 + -0x28));
              }
              else if (sVar14 == 0) goto LAB_01053434;
            }
          }
LAB_01052eec:
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(byte *)(param_2 + 0x10));
      }
      *(undefined2 *)((long)param_2 + 0x84) = 0;
      FUN_013194d0(param_2);
      (**(code **)(*param_2 + 0x68))(param_2);
      uVar7 = 5;
LAB_01052c9c:
      *(undefined4 *)((long)param_2 + 0x8c) = uVar7;
      *(undefined4 *)(param_2 + 0x1f) = 1;
      return 2;
    }
    *(undefined2 *)((long)param_2 + 0x84) = 0;
    FUN_013194d0(param_2);
    (**(code **)(*param_2 + 0x68))(param_2);
    break;
  case 3:
    if (3 < *(byte *)((long)param_2 + 0x87)) goto LAB_01052e40;
    uVar21 = (ulong)*(byte *)((long)param_2 + 0x85);
    lVar12 = param_2[6];
    switch(*(byte *)((long)param_2 + 0x87)) {
    case 0:
      puVar5 = *(undefined8 **)(lVar12 + uVar21 * 0x90 + 0x40);
      uVar7 = *(undefined4 *)((long)param_2 + 100);
      *puVar5 = 0x437f000000000000;
      *(undefined4 *)(puVar5 + 1) = 0x437f0000;
      *(undefined4 *)((long)puVar5 + 0xc) = uVar7;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined1 *)((long)puVar5 + 0x14) = 0;
      *(char *)((long)param_2 + 0x87) = *(char *)((long)param_2 + 0x87) + '\x01';
      break;
    case 2:
      uVar21 = (ulong)*(byte *)(param_2 + 0x10);
      if (*(byte *)(param_2 + 0x10) != 0) {
        uVar22 = 0;
        cVar23 = '\0';
        do {
          pcVar17 = (char *)(lVar12 + uVar22 * 0x90 + 0x82);
          if (*pcVar17 == '\0') {
            *(char *)((long)param_2 + 0x86) = cVar23;
            *pcVar17 = (char)uVar21 + -1;
            lVar12 = param_2[6] + uVar22 * 0x90;
            lVar16 = param_2[6] + (ulong)*(byte *)(lVar12 + 0x82) * 0x90;
            uVar26 = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)(lVar12 + 0x38) = uVar26;
            lVar12 = param_2[6];
            lVar16 = *(long *)(lVar12 + uVar22 * 0x90 + 8);
            if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
              psVar20 = (short *)(lVar16 + 0x1a);
              sVar14 = *(short *)(lVar16 + 0x1a);
LAB_010532a4:
              sVar3 = *psVar20;
              if (sVar3 == sVar14) {
                cVar4 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
                if (bVar19) {
                  *psVar20 = sVar14 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_010532cc;
                bVar19 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_010532cc:
                bVar19 = false;
              }
              if (!bVar19) goto code_r0x010532d4;
              lVar16 = *(long *)(lVar16 + 0x10);
              if (lVar16 != 0) {
                plVar6 = *(long **)(lVar12 + uVar22 * 0x90);
                lVar12 = param_2[6] + uVar22 * 0x90;
                uVar26 = *(undefined8 *)(lVar12 + 0x38);
                plVar6[6] = *(long *)(lVar12 + 0x30);
                *(int *)(plVar6 + 7) = (int)uVar26;
                *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
                (**(code **)(*plVar6 + 0x120))(plVar6,&DAT_03d61fe2,0);
                lVar12 = *(long *)(lVar16 + 8);
                psVar20 = (short *)(lVar12 + 0x1a);
                do {
                  sVar14 = *psVar20;
                  cVar4 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
                  if (bVar19) {
                    *psVar20 = sVar14 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar14 == 1) {
                  *(undefined8 *)(lVar12 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))((long *)(lVar16 + -0x28));
                }
                else if (sVar14 == 0) goto LAB_01053434;
              }
            }
          }
          else {
            *pcVar17 = *pcVar17 + -1;
            lVar16 = param_2[6] + uVar22 * 0x90;
            puVar5 = *(undefined8 **)(lVar16 + 0x60);
            lVar12 = param_2[6] + (ulong)*(byte *)(lVar16 + 0x82) * 0x90;
            *(int *)(puVar5 + 6) = (int)param_2[0xd];
            puVar5[1] = *(undefined8 *)(lVar12 + 0x28);
            *puVar5 = *(undefined8 *)(lVar12 + 0x20);
            puVar5[3] = *(undefined8 *)(lVar16 + 0x38);
            puVar5[2] = *(undefined8 *)(lVar16 + 0x30);
            puVar5[5] = *(undefined8 *)(lVar16 + 0x38);
            puVar5[4] = *(undefined8 *)(lVar16 + 0x30);
            *(undefined4 *)((long)puVar5 + 0x34) = 0;
            *(undefined1 *)(puVar5 + 7) = 0;
          }
LAB_01052d6c:
          uVar21 = (ulong)*(byte *)(param_2 + 0x10);
          uVar22 = uVar22 + 1;
          if (uVar21 <= uVar22) goto LAB_01052d88;
          lVar12 = param_2[6];
          cVar23 = cVar23 + '\x01';
        } while( true );
      }
      cVar23 = '\x03';
      uVar21 = 0;
      goto LAB_01052d90;
    case 3:
      uVar21 = (ulong)*(byte *)(param_2 + 0x10);
      goto LAB_01052d94;
    }
    plVar6 = (long *)(lVar12 + uVar21 * 0x90 + 0x40);
    pfVar13 = (float *)*plVar6;
    fVar25 = pfVar13[3];
    if (pfVar13[4] < fVar25) {
      fVar24 = pfVar13[4] + fVar24;
      pfVar13[4] = fVar24;
      if (fVar25 <= fVar24) goto LAB_01052bcc;
      fVar24 = pfVar13[1] + (fVar24 / fVar25) * (*pfVar13 - pfVar13[1]);
      pfVar13[2] = fVar24;
    }
    else {
LAB_01052bcc:
      fVar24 = *pfVar13;
      *(undefined1 *)(pfVar13 + 5) = 1;
    }
    lVar16 = *(long *)(lVar12 + uVar21 * 0x90 + 8);
    if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
      psVar20 = (short *)(lVar16 + 0x1a);
      sVar14 = *(short *)(lVar16 + 0x1a);
      do {
        sVar3 = *psVar20;
        if (sVar3 == sVar14) {
          cVar23 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
          if (bVar19) {
            *psVar20 = sVar14 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
          if (cVar23 != '\0') goto LAB_010530f0;
          bVar19 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_010530f0:
          bVar19 = false;
        }
        if (bVar19) {
          lVar16 = *(long *)(lVar16 + 0x10);
          if (lVar16 != 0) {
            *(char *)(*(long *)(lVar12 + uVar21 * 0x90) + 0x59) = (char)(int)fVar24;
            lVar12 = *(long *)(lVar16 + 8);
            psVar20 = (short *)(lVar12 + 0x1a);
            do {
              sVar14 = *psVar20;
              cVar23 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
              if (bVar19) {
                *psVar20 = sVar14 + -1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
            if (sVar14 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))();
            }
            else if (sVar14 == 0) {
LAB_01053434:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar14 = sVar3;
      } while (sVar3 != 0);
    }
    if (*(char *)(*plVar6 + 0x14) != '\0') {
      *(char *)((long)param_2 + 0x87) = *(char *)((long)param_2 + 0x87) + '\x01';
    }
LAB_01052c00:
    *param_3 = 1;
    return 1;
  case 4:
    if ((int)param_2[0x1f] == 0) {
      *(undefined4 *)(param_2 + 0x1f) = 1;
    }
    if (*(char *)((long)param_2 + 0x9e) != '\0') goto LAB_0105286c;
    fVar24 = *(float *)((long)param_2 + 0x74) + fVar24;
    *(float *)((long)param_2 + 0x74) = fVar24;
    if (fVar24 <= *(float *)((long)param_2 + 0x6c)) {
      return 1;
    }
    *(undefined4 *)((long)param_2 + 0x74) = 0;
    psVar20 = *(short **)(param_2[10] + 0x30);
    iVar8 = *(int *)((long)param_2 + 0x94);
    if (iVar8 == 0) {
      if (psVar20 != (short *)0x0) goto LAB_01052748;
LAB_01052fcc:
      uVar21 = 0;
    }
    else {
      iVar10 = iVar8;
      do {
        for (; sVar14 = *psVar20, sVar14 == 0x10; psVar20 = psVar20 + lVar12) {
          lVar12 = (ulong)(ushort)psVar20[1] + 2;
LAB_01052824:
        }
        if (sVar14 != 10) {
          if (sVar14 != 0) {
            lVar12 = 1;
            goto LAB_01052824;
          }
          psVar20 = (short *)0x0;
          goto LAB_01052fcc;
        }
        psVar20 = psVar20 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
LAB_01052748:
      psVar11 = psVar20 + (int)param_2[0x12];
      if (*psVar11 == 0x10) {
        *(undefined1 *)((long)param_2 + 0x9d) = 1;
        if (*psVar11 == 0x10) {
          sVar14 = psVar11[2];
        }
        else {
          sVar14 = 0;
        }
        *(short *)((long)param_2 + 0xa4) = sVar14;
        if ((*psVar11 == 0x10) && (psVar11[1] != 0)) {
          uVar15 = psVar11[1] - 1;
        }
        else {
          uVar15 = 0;
        }
        uVar18 = (uint)uVar15;
        if (0xf < uVar18) {
          uVar18 = 0x10;
        }
        *(uint *)(param_2 + 0x15) = uVar18;
        if (uVar18 != 0) {
          if ((*psVar11 == 0x10) && (1 < (ushort)psVar11[1])) {
            sVar14 = psVar11[3];
          }
          else {
            sVar14 = 0;
          }
          *(short *)((long)param_2 + 0xac) = sVar14;
          if (uVar18 != 1) {
            if (*psVar11 == 0x10) {
              uVar15 = psVar11[1];
              if (uVar15 != 0) {
                if (uVar15 - 1 < 2) goto LAB_01052fdc;
                uVar15 = psVar11[4];
              }
            }
            else {
LAB_01052fdc:
              uVar15 = 0;
            }
            *(ushort *)((long)param_2 + 0xae) = uVar15;
            if (uVar18 != 2) {
              if (*psVar11 == 0x10) {
                uVar15 = psVar11[1];
                if (uVar15 != 0) {
                  if (uVar15 - 1 < 3) goto LAB_01052fe4;
                  uVar15 = psVar11[5];
                }
              }
              else {
LAB_01052fe4:
                uVar15 = 0;
              }
              *(ushort *)(param_2 + 0x16) = uVar15;
              if (uVar18 != 3) {
                if (*psVar11 == 0x10) {
                  uVar15 = psVar11[1];
                  if (uVar15 != 0) {
                    if (uVar15 - 1 < 4) goto LAB_01052fec;
                    uVar15 = psVar11[6];
                  }
                }
                else {
LAB_01052fec:
                  uVar15 = 0;
                }
                *(ushort *)((long)param_2 + 0xb2) = uVar15;
                if (uVar18 != 4) {
                  if (*psVar11 == 0x10) {
                    uVar15 = psVar11[1];
                    if (uVar15 != 0) {
                      if (uVar15 - 1 < 5) goto LAB_01052ffc;
                      uVar15 = psVar11[7];
                    }
                  }
                  else {
LAB_01052ffc:
                    uVar15 = 0;
                  }
                  *(ushort *)((long)param_2 + 0xb4) = uVar15;
                  if (uVar18 != 5) {
                    if (*psVar11 == 0x10) {
                      uVar15 = psVar11[1];
                      if (uVar15 != 0) {
                        if (uVar15 - 1 < 6) goto LAB_01053004;
                        uVar15 = psVar11[8];
                      }
                    }
                    else {
LAB_01053004:
                      uVar15 = 0;
                    }
                    *(ushort *)((long)param_2 + 0xb6) = uVar15;
                    if (uVar18 != 6) {
                      lVar12 = 0;
                      do {
                        if (*psVar11 == 0x10) {
                          uVar15 = psVar11[1];
                          if (uVar15 != 0) {
                            if (uVar15 - 1 <= (int)lVar12 + 6U) goto LAB_01053368;
                            uVar15 = psVar11[lVar12 + 9];
                          }
                        }
                        else {
LAB_01053368:
                          uVar15 = 0;
                        }
                        *(ushort *)((long)param_2 + lVar12 * 2 + 0xb8) = uVar15;
                        lVar12 = lVar12 + 1;
                      } while ((ulong)uVar18 - 6 != lVar12);
                    }
                  }
                }
              }
            }
          }
        }
        if (*psVar11 == 0x10) {
          psVar11 = psVar11 + (ulong)(ushort)psVar11[1] + 2;
        }
LAB_01052774:
        sVar14 = *psVar11;
      }
      else {
        *(undefined1 *)((long)param_2 + 0x9d) = 0;
        sVar14 = *psVar11;
        if ((sVar14 != 0) && (sVar14 != 10)) {
          psVar11 = psVar11 + 1;
          goto LAB_01052774;
        }
      }
      uVar21 = (ulong)((long)psVar11 - (long)psVar20) >> 1;
      if (sVar14 != 0) {
        if (sVar14 != 10) {
          *(int *)(param_2 + 0x12) = (int)uVar21;
          *(undefined1 *)((long)param_2 + 0x9c) = 0;
          goto LAB_01052794;
        }
        *(undefined4 *)(param_2 + 0x12) = 0;
        *(int *)((long)param_2 + 0x94) = iVar8 + 1;
      }
      *(undefined1 *)((long)param_2 + 0x9c) = 1;
    }
LAB_01052794:
    if (*(char *)((long)param_2 + 0x9d) == '\0') {
      (**(code **)(*param_2 + 0x40))
                (param_2,psVar20,param_2[6] + (ulong)*(byte *)((long)param_2 + 0x85) * 0x90);
      (**(code **)(*param_2 + 0x48))
                (param_2,psVar20,param_2[6] + (ulong)*(byte *)((long)param_2 + 0x85) * 0x90,
                 uVar21 & 0xffffffff);
      if (*(char *)((long)param_2 + 0x9c) == '\0') {
        return 1;
      }
    }
    else {
      memcpy((void *)((long)param_2 + 0xcc),(void *)((long)param_2 + 0xa4),0x28);
      if (*(ushort *)((long)param_2 + 0xcc) >> 1 == 0x5f00) {
        *(char *)((long)param_2 + 0x83) = *(char *)((long)param_2 + 0x83) + '\x01';
        *(char *)((long)param_2 + 0x84) = *(char *)((long)param_2 + 0x84) + '\x01';
        *param_3 = 1;
        uVar7 = 2;
        goto LAB_010527f8;
      }
      bVar2 = *(byte *)((long)param_2 + 0x85);
      lVar12 = param_2[6];
      lVar16 = *(long *)(lVar12 + (ulong)bVar2 * 0x90 + 8);
      if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
        psVar11 = (short *)(lVar16 + 0x1a);
        sVar14 = *(short *)(lVar16 + 0x1a);
LAB_0105301c:
        sVar3 = *psVar11;
        if (sVar3 == sVar14) {
          cVar23 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar11,0x10);
          if (bVar19) {
            *psVar11 = sVar14 + 1;
            cVar23 = ExclusiveMonitorsStatus();
          }
          if (cVar23 != '\0') goto LAB_01053040;
          bVar19 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01053040:
          bVar19 = false;
        }
        if (!bVar19) goto code_r0x01053048;
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 != 0) {
          plVar6 = *(long **)(lVar12 + (ulong)bVar2 * 0x90);
          (**(code **)(*plVar6 + 0x130))(plVar6,psVar20,0,uVar21 & 0xffffffff);
          lVar12 = *(long *)(lVar16 + 8);
          psVar20 = (short *)(lVar12 + 0x1a);
          do {
            sVar14 = *psVar20;
            cVar23 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
            if (bVar19) {
              *psVar20 = sVar14 + -1;
              cVar23 = ExclusiveMonitorsStatus();
            }
          } while (cVar23 != '\0');
          if (sVar14 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))((long *)(lVar16 + -0x28));
          }
          else if (sVar14 == 0) goto LAB_01053434;
        }
      }
LAB_010528fc:
      if (*(char *)((long)param_2 + 0x9c) == '\0') {
        uVar21 = (**(code **)(*param_2 + 0x70))(param_2,(void *)((long)param_2 + 0xcc));
        if ((uVar21 & 1) == 0) {
          *param_3 = 2;
switchD_010526b0_caseD_1:
          return 1;
        }
        goto LAB_01052c00;
      }
    }
    uVar7 = 6;
    *param_3 = 1;
LAB_010527f8:
    *(undefined4 *)((long)param_2 + 0x8c) = uVar7;
    *(undefined4 *)(param_2 + 0x1f) = 1;
    return 1;
  case 5:
    if ((*(byte *)((long)param_2 + 0x83) < *(byte *)((long)param_2 + 0x81)) ||
       (*(char *)((long)param_2 + 0x9c) == '\0')) goto LAB_01052e40;
    break;
  case 6:
    bVar2 = *(char *)((long)param_2 + 0x83) + 1;
    *(byte *)((long)param_2 + 0x83) = bVar2;
    bVar1 = *(char *)((long)param_2 + 0x84) + 1;
    *(byte *)((long)param_2 + 0x84) = bVar1;
    if (bVar2 < *(byte *)((long)param_2 + 0x81)) {
      if (bVar1 < *(byte *)(param_2 + 0x10)) {
        *(char *)((long)param_2 + 0x85) = *(char *)((long)param_2 + 0x85) + '\x01';
        FUN_013194d0(param_2);
        (**(code **)(*param_2 + 0x68))(param_2);
        *(undefined4 *)((long)param_2 + 0x8c) = 4;
        *(undefined4 *)(param_2 + 0x1f) = 0;
        return 1;
      }
      uVar7 = 2;
      *(undefined4 *)(param_2 + 0x1e) = 0;
      *(undefined2 *)((long)param_2 + 0xcc) = 0xbe00;
      *(undefined4 *)((long)param_2 + 0x8c) = 2;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      goto LAB_01052ae4;
    }
    break;
  default:
    goto switchD_010526b0_caseD_1;
  }
  uVar7 = 0;
  *(undefined4 *)((long)param_2 + 0x8c) = 0;
LAB_01052ae4:
  *(undefined4 *)(param_2 + 0x1f) = 1;
  return uVar7;
code_r0x01053048:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_010528fc;
  goto LAB_0105301c;
code_r0x010532d4:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_01052d6c;
  goto LAB_010532a4;
LAB_01052d88:
  cVar23 = *(char *)((long)param_2 + 0x87) + '\x01';
LAB_01052d90:
  *(char *)((long)param_2 + 0x87) = cVar23;
LAB_01052d94:
  if ((int)uVar21 == 0) {
    uVar18 = 0;
    iVar8 = 0;
  }
  else {
    uVar22 = 0;
    uVar18 = 0;
    do {
      if (uVar22 != *(byte *)((long)param_2 + 0x86)) {
        puVar5 = (undefined8 *)
                 FUN_010534e4(param_1,*(undefined8 *)(param_2[6] + uVar22 * 0x90 + 0x60));
        lVar12 = param_2[6] + uVar22 * 0x90;
        uVar26 = puVar5[1];
        *(undefined8 *)(lVar12 + 0x30) = *puVar5;
        *(undefined8 *)(lVar12 + 0x38) = uVar26;
        lVar12 = param_2[6];
        lVar16 = *(long *)(lVar12 + uVar22 * 0x90 + 8);
        if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
          psVar20 = (short *)(lVar16 + 0x1a);
          sVar14 = *(short *)(lVar16 + 0x1a);
LAB_0105315c:
          sVar3 = *psVar20;
          if (sVar3 == sVar14) {
            cVar23 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
            if (bVar19) {
              *psVar20 = sVar14 + 1;
              cVar23 = ExclusiveMonitorsStatus();
            }
            if (cVar23 != '\0') goto LAB_01053180;
            bVar19 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01053180:
            bVar19 = false;
          }
          if (!bVar19) goto code_r0x01053188;
          lVar16 = *(long *)(lVar16 + 0x10);
          if (lVar16 != 0) {
            lVar9 = *(long *)(lVar12 + uVar22 * 0x90);
            lVar12 = param_2[6] + uVar22 * 0x90;
            uVar26 = *(undefined8 *)(lVar12 + 0x38);
            *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar12 + 0x30);
            *(int *)(lVar9 + 0x38) = (int)uVar26;
            *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
            lVar12 = *(long *)(lVar16 + 8);
            psVar20 = (short *)(lVar12 + 0x1a);
            do {
              sVar14 = *psVar20;
              cVar23 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
              if (bVar19) {
                *psVar20 = sVar14 + -1;
                cVar23 = ExclusiveMonitorsStatus();
              }
            } while (cVar23 != '\0');
            if (sVar14 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))();
            }
            else if (sVar14 == 0) goto LAB_01053434;
          }
        }
LAB_01052de8:
        uVar18 = uVar18 + *(byte *)(*(long *)(param_2[6] + uVar22 * 0x90 + 0x60) + 0x38);
        uVar21 = (ulong)*(byte *)(param_2 + 0x10);
      }
      iVar8 = (int)uVar21;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar21);
  }
  if (iVar8 - 1U <= uVar18) {
    bVar2 = *(byte *)((long)param_2 + 0x86);
    lVar12 = param_2[6];
    lVar16 = *(long *)(lVar12 + (ulong)bVar2 * 0x90 + 8);
    if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
      psVar20 = (short *)(lVar16 + 0x1a);
      sVar14 = *(short *)(lVar16 + 0x1a);
LAB_0105320c:
      sVar3 = *psVar20;
      if (sVar3 == sVar14) {
        cVar23 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
        if (bVar19) {
          *psVar20 = sVar14 + 1;
          cVar23 = ExclusiveMonitorsStatus();
        }
        if (cVar23 != '\0') goto LAB_01053230;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01053230:
        bVar19 = false;
      }
      if (!bVar19) goto code_r0x01053238;
      lVar16 = *(long *)(lVar16 + 0x10);
      if (lVar16 != 0) {
        *(undefined1 *)(*(long *)(lVar12 + (ulong)bVar2 * 0x90) + 0x59) = 0xff;
        lVar12 = *(long *)(lVar16 + 8);
        psVar20 = (short *)(lVar12 + 0x1a);
        do {
          sVar14 = *psVar20;
          cVar23 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(psVar20,0x10);
          if (bVar19) {
            *psVar20 = sVar14 + -1;
            cVar23 = ExclusiveMonitorsStatus();
          }
        } while (cVar23 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*(long *)(lVar16 + -0x28) + 0x50))();
        }
        else if (sVar14 == 0) goto LAB_01053434;
      }
    }
LAB_01052e34:
    *(char *)((long)param_2 + 0x87) = *(char *)((long)param_2 + 0x87) + '\x01';
LAB_01052e40:
    *param_3 = 2;
    *(undefined4 *)((long)param_2 + 0x8c) = 4;
    *(undefined4 *)(param_2 + 0x1f) = 0;
    return 1;
  }
  goto LAB_01052c00;
code_r0x01053188:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_01052de8;
  goto LAB_0105315c;
code_r0x01053238:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_01052e34;
  goto LAB_0105320c;
code_r0x010533ac:
  sVar14 = sVar3;
  if (sVar3 == 0) goto LAB_01052eec;
  goto LAB_01053380;
}


