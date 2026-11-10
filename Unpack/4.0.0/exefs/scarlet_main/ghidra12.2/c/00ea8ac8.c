/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea8ac8; name: FUN_00ea8ac8
 */


undefined8 FUN_00ea8ac8(long param_1)

{
  int *piVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  long *plVar21;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar15 = (long *)(param_1 + 0x78);
  if (*plVar15 == 0) {
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar14 = FUN_00e31554();
    lVar18 = FUN_01029d2c(&local_78,uVar13,uVar14);
    if (lVar18 != 0) {
      piVar1 = (int *)(lVar18 + 0x28);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_00ea95dc;
    }
    plVar12 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 5;
      do {
        lVar11 = *plVar17;
        iVar7 = (int)lVar11 + -1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar19) {
          *(int *)plVar17 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_00ea9124;
    }
    *plVar15 = lVar18;
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x68) + 0x120);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
    do {
      lVar18 = *plVar17;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar19) {
        *(int *)plVar17 = (int)lVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar18 == -1) goto LAB_00ea95dc;
  }
  puVar6 = PTR_DAT_047daf58;
  if (((*PTR_DAT_047daf58 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  puVar3 = (undefined8 *)PTR_DAT_047daf60;
  plVar17 = (long *)PTR_DAT_047daf60;
  if (plVar12[0x18] != 0) {
    plVar17 = (long *)(plVar12[0x18] + 0x70);
  }
  lVar18 = *plVar17;
  if ((*(char *)(param_1 + 0x81) == '\0') || (lVar18 != 0)) {
    FUN_00ea9ebc(*(undefined8 *)(param_1 + 0x70),plVar15,*(undefined1 *)(param_1 + 0x80));
    FUN_00c9e664(&local_78,*(long *)(param_1 + 0x68) + 0xe8);
    if (local_78 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      plVar15 = *(long **)(*(long *)(param_1 + 0x70) + 0x110);
      if (plVar15 != (long *)0x0) {
        plVar17 = plVar15 + 5;
        do {
          lVar11 = *plVar17;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar19) {
            *(int *)plVar17 = (int)lVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar11 == -1) goto LAB_00ea95dc;
        if (lVar18 == 0) {
          if (local_70 == (long *)0x0) {
            plVar9 = (long *)0x0;
          }
          else {
            plVar9 = (long *)local_70[9];
          }
          plVar16 = *(long **)(param_1 + 8);
          if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar18 = nn::os::GetTlsValue(DAT_04865a30);
          if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar16;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
          plVar8 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x198,8);
          if (plVar8 == (long *)0x0) {
            (**(code **)(*plVar16 + 0xe8))(plVar16);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("ptr","Create",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                       ,0x40);
          }
          FUN_00ec74e8();
          *(undefined4 *)(plVar8 + 3) = 0x80198;
          plVar8[1] = (long)plVar16;
          plVar8[2] = (long)plVar8;
          *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          (**(code **)(*plVar8 + 0x58))(plVar8);
          plVar16 = plVar8 + 4;
          (**(code **)(*plVar16 + 0xe8))(plVar16,plVar9);
          (**(code **)(*plVar16 + 0x68))(plVar16);
          local_68 = plVar8;
          FUN_00df8c30(plVar9 + 0x21,&local_68);
          if (local_68 != (long *)0x0) {
            lVar18 = local_68[0x13];
            psVar2 = (short *)(lVar18 + 0x1a);
            do {
              sVar4 = *psVar2;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar19) {
                *psVar2 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              *(undefined8 *)(lVar18 + 0x10) = 0;
              (**(code **)(*local_68 + 0x50))();
            }
            else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          (**(code **)(*plVar9 + 0x100))(plVar9,plVar16);
          plVar21 = plVar9 + 0x88;
          lVar11 = *plVar21;
          lVar18 = nn::os::GetCurrentThread();
          if (lVar18 != lVar11) {
            lVar18 = nn::os::GetCurrentThread();
LAB_00ea9028:
            if (*plVar21 == 0) goto code_r0x00ea9030;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x89));
            do {
              if (*plVar21 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x89));
                  while (*plVar21 == 0) {
                    cVar5 = '\x01';
                    bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar19) {
                      *plVar21 = lVar18;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00ea9038;
                  }
                } while( true );
              }
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar19) {
                *plVar21 = lVar18;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00ea9038:
            bVar19 = false;
            goto LAB_00ea903c;
          }
          plVar21 = (long *)0x0;
          bVar19 = true;
LAB_00ea903c:
          if ((*(byte *)(plVar9 + 0x8b) >> 2 & 1) == 0) {
            FUN_00d37964(plVar9,0,0);
          }
          else {
            (**(code **)(*plVar16 + 0xf8))(plVar16);
          }
          if (!bVar19) {
            *plVar21 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
          }
          if ((int)plVar8[0x26] == 0) {
            do {
              lVar18 = *plVar17;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *(int *)plVar17 = (int)lVar18 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar18 == -1) goto LAB_00ea95dc;
            plVar9 = (long *)plVar8[0x27];
            plVar8[0x27] = (long)plVar15;
            if (plVar9 != (long *)0x0) {
              plVar16 = plVar9 + 5;
              do {
                lVar18 = *plVar16;
                iVar7 = (int)lVar18 + -1;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar19) {
                  *(int *)plVar16 = iVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
              else if ((int)lVar18 == 0) goto LAB_00ea9124;
            }
            *(undefined4 *)(plVar8 + 0x26) = 2;
          }
          plVar9 = plVar12 + 5;
          do {
            lVar18 = *plVar9;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar19) {
              *(int *)plVar9 = (int)lVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar18 == -1) goto LAB_00ea95dc;
          plVar9 = (long *)plVar8[0x24];
          plVar8[0x24] = (long)plVar12;
          if (plVar9 != (long *)0x0) {
            plVar16 = plVar9 + 5;
            do {
              lVar18 = *plVar16;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar19) {
                *(int *)plVar16 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            else if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
          pcVar10 = *(code **)(*plVar8 + 0x130);
LAB_00ea90e8:
          (*pcVar10)(plVar8);
        }
        else {
          local_68 = (long *)plVar15[0xe];
          if (local_68 != (long *)0x0) {
            plVar8 = local_68 + 5;
            do {
              lVar18 = *plVar8;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar19) {
                *(int *)plVar8 = (int)lVar18 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar18 == -1) goto LAB_00ea95dc;
          }
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047daf58);
          }
          if (plVar12[0x18] != 0) {
            puVar3 = (undefined8 *)(plVar12[0x18] + 0x70);
          }
          plVar8 = (long *)*puVar3;
          if (plVar8 != (long *)0x0) {
            plVar9 = plVar8 + 5;
            do {
              lVar18 = *plVar9;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar19) {
                *(int *)plVar9 = (int)lVar18 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar18 == -1) goto LAB_00ea95dc;
            FUN_00edbe58(plVar8,&local_68,0,0xffff);
            FUN_00ed69e0(plVar8);
            local_80 = (long *)local_68[0x88];
            if (local_80 != (long *)0x0) {
              plVar16 = local_80 + 5;
              do {
                lVar18 = *plVar16;
                cVar5 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar19) {
                  *(int *)plVar16 = (int)lVar18 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((int)lVar18 == -1) goto LAB_00ea95dc;
              if ((local_80 != (long *)0x0) &&
                 (FUN_00edd50c(plVar8,&local_80), local_80 != (long *)0x0)) {
                plVar16 = local_80 + 5;
                do {
                  lVar18 = *plVar16;
                  iVar7 = (int)lVar18 + -1;
                  cVar5 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar19) {
                    *(int *)plVar16 = iVar7;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar7 == 0) {
                  (**(code **)(*local_80 + 0x10))();
                }
                else if ((int)lVar18 == 0) goto LAB_00ea9124;
              }
            }
            do {
              lVar18 = *plVar9;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar19) {
                *(int *)plVar9 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
          if (local_68 != (long *)0x0) {
            plVar8 = local_68 + 5;
            do {
              lVar18 = *plVar8;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar19) {
                *(int *)plVar8 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              pcVar10 = *(code **)(*local_68 + 0x10);
              plVar8 = local_68;
              goto LAB_00ea90e8;
            }
            if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
        }
        do {
          lVar18 = *plVar17;
          iVar7 = (int)lVar18 + -1;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar19) {
            *(int *)plVar17 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
        else if ((int)lVar18 == 0) goto LAB_00ea9124;
      }
      lVar18 = *(long *)(param_1 + 0x70);
      lVar11 = *(long *)(lVar18 + 0x90);
      if ((0 < (int)((ulong)(*(long *)(lVar11 + 0x218) - *(long *)(lVar11 + 0x210)) >> 5)) &&
         (lVar20 = (long)*(int *)(lVar18 + 0x158),
         *(int *)(param_1 + 0x88) < *(int *)(lVar18 + 0x158))) {
        plVar15 = plVar12 + 5;
        do {
          lVar20 = lVar20 + -1;
          plVar17 = *(long **)(*(long *)(lVar18 + 0xd0) + lVar20 * 8);
          if (plVar17 != (long *)0x0) {
            plVar8 = plVar17 + 5;
            do {
              lVar18 = *plVar8;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar19) {
                *(int *)plVar8 = (int)lVar18 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar18 == -1) goto LAB_00ea95dc;
          }
          if (local_70 == (long *)0x0) {
            lVar18 = 0;
          }
          else {
            lVar18 = local_70[9];
          }
          plVar8 = (long *)FUN_00ea96a8(lVar18,*(undefined8 *)(param_1 + 8));
          if (plVar17 != (long *)0x0) {
            plVar9 = plVar17 + 5;
            do {
              lVar18 = *plVar9;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar19) {
                *(int *)plVar9 = (int)lVar18 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar18 == -1) goto LAB_00ea95dc;
          }
          plVar9 = (long *)plVar8[0x27];
          plVar8[0x27] = (long)plVar17;
          if (plVar9 != (long *)0x0) {
            plVar16 = plVar9 + 5;
            do {
              lVar18 = *plVar16;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar19) {
                *(int *)plVar16 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            else if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
          *(undefined4 *)(plVar8 + 0x26) = 4;
          *(int *)(plVar8 + 0x28) = (int)lVar20;
          do {
            lVar18 = *plVar15;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar19) {
              *(int *)plVar15 = (int)lVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar18 == -1) goto LAB_00ea95dc;
          plVar9 = (long *)plVar8[0x24];
          plVar8[0x24] = (long)plVar12;
          if (plVar9 != (long *)0x0) {
            plVar16 = plVar9 + 5;
            do {
              lVar18 = *plVar16;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar19) {
                *(int *)plVar16 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            else if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
          (**(code **)(*plVar8 + 0x130))(plVar8);
          plVar8 = (long *)plVar12[0x18];
          if (plVar8 != (long *)0x0) {
            plVar9 = plVar8 + 5;
            do {
              lVar18 = *plVar9;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar19) {
                *(int *)plVar9 = (int)lVar18 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar18 == -1) goto LAB_00ea95dc;
            plVar16 = (long *)plVar17[0xe];
            if (plVar16 != plVar17 + 0xd) {
              do {
                FUN_00e0534c(plVar16[2],plVar8 + 0xe);
                plVar16 = (long *)plVar16[1];
              } while (plVar16 != plVar17 + 0xd);
            }
            do {
              lVar18 = *plVar9;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar19) {
                *(int *)plVar9 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            else if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
          if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
            local_68 = *(long **)(param_1 + 0x70);
            local_80 = (long *)CONCAT44(local_80._4_4_,(int)lVar20);
            (**(code **)(param_1 + 0xa0))(param_1 + 0xc0,&local_68,&local_80);
          }
          if (plVar17 != (long *)0x0) {
            plVar8 = plVar17 + 5;
            do {
              lVar18 = *plVar8;
              iVar7 = (int)lVar18 + -1;
              cVar5 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar19) {
                *(int *)plVar8 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
            else if ((int)lVar18 == 0) goto LAB_00ea9124;
          }
          lVar18 = *(long *)(param_1 + 0x70);
        } while (*(int *)(param_1 + 0x88) < lVar20);
        lVar11 = *(long *)(lVar18 + 0x90);
      }
      if (0 < (int)((ulong)(*(long *)(lVar11 + 0x270) - *(long *)(lVar11 + 0x268)) >> 5)) {
        if (local_70 == (long *)0x0) {
          lVar18 = 0;
        }
        else {
          lVar18 = local_70[9];
        }
        plVar15 = (long *)FUN_00ea9a94(lVar18,*(undefined8 *)(param_1 + 8));
        lVar18 = *(long *)(*(long *)(param_1 + 0x70) + 0x108);
        if (lVar18 != 0) {
          piVar1 = (int *)(lVar18 + 0x28);
          do {
            iVar7 = *piVar1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar19) {
              *piVar1 = iVar7 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == -1) goto LAB_00ea95dc;
        }
        plVar17 = (long *)plVar15[0x26];
        plVar15[0x26] = lVar18;
        if (plVar17 != (long *)0x0) {
          plVar8 = plVar17 + 5;
          do {
            lVar18 = *plVar8;
            iVar7 = (int)lVar18 + -1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar19) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
          else if ((int)lVar18 == 0) goto LAB_00ea9124;
        }
        *(undefined4 *)(plVar15 + 0x25) = 2;
        plVar17 = plVar12 + 5;
        do {
          lVar18 = *plVar17;
          cVar5 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar19) {
            *(int *)plVar17 = (int)lVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar18 == -1) {
LAB_00ea95dc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plVar17 = (long *)plVar15[0x24];
        plVar15[0x24] = (long)plVar12;
        if (plVar17 != (long *)0x0) {
          plVar8 = plVar17 + 5;
          do {
            lVar18 = *plVar8;
            iVar7 = (int)lVar18 + -1;
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar19) {
              *(int *)plVar8 = iVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
          else if ((int)lVar18 == 0) goto LAB_00ea9124;
        }
        (**(code **)(*plVar15 + 0x130))(plVar15);
      }
      uVar14 = 1;
    }
    if (local_70 != (long *)0x0) {
      plVar15 = local_70 + 5;
      do {
        lVar18 = *plVar15;
        iVar7 = (int)lVar18 + -1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar19) {
          *(int *)plVar15 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
      else if ((int)lVar18 == 0) goto LAB_00ea9124;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x60))();
    }
  }
  else {
    uVar14 = 0;
  }
  plVar15 = plVar12 + 5;
  do {
    lVar18 = *plVar15;
    iVar7 = (int)lVar18 + -1;
    cVar5 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar19) {
      *(int *)plVar15 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  else if ((int)lVar18 == 0) {
LAB_00ea9124:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar14;
code_r0x00ea9030:
  cVar5 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar21,0x10);
  if (bVar19) {
    *plVar21 = lVar18;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00ea9038;
  goto LAB_00ea9028;
}


