/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9e370; name: FUN_00d9e370
 */


void FUN_00d9e370(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  short sVar6;
  char cVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  bool bVar13;
  byte *pbVar14;
  long lVar15;
  short sVar16;
  undefined8 *puVar17;
  long lVar18;
  bool bVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined4 local_a1;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined7 local_80;
  undefined4 uStack_79;
  undefined5 uStack_75;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d6c50;
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  if ((*param_1 != 0) && (puVar17 = *(undefined8 **)(*param_1 + 8), puVar17 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar9 != 0)) {
      uVar20 = FUN_01cd650c();
      *(undefined8 *)puVar8 = uVar20;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    do {
      if (puVar17 == (undefined8 *)puVar8) {
        FUN_00d9f120(&local_d0,param_1);
        break;
      }
      puVar17 = (undefined8 *)*puVar17;
    } while (puVar17 != (undefined8 *)0x0);
  }
  pbVar14 = (byte *)param_1[3];
  puVar12 = &DAT_cbf29ce484222645;
  bVar5 = *pbVar14;
  while (bVar5 != 0) {
    pbVar14 = pbVar14 + 1;
    puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar5) * 0x100000001b3);
    bVar5 = *pbVar14;
  }
  FUN_00d9ec44(&local_88,2,puVar12);
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_00d9ee10(&local_c0,&local_d0);
  local_b0 = local_88;
  local_a1 = uStack_79;
  local_70 = param_3;
  if (local_c0 != (undefined8 *)0x0) {
    if (*(short *)((long)local_c0 + 0x1a) != 0) {
      if (local_c0 == (undefined8 *)0x0) goto LAB_00d9e46c;
      if (*(short *)((long)local_c0 + 0x1a) != 0) {
        psVar2 = (short *)((long)local_c0 + 0x1a);
        sVar16 = *(short *)((long)local_c0 + 0x1a);
LAB_00d9e584:
        sVar6 = *psVar2;
        if (sVar6 == sVar16) {
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar13) {
            *psVar2 = sVar16 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_00d9e5a8;
          bVar13 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d9e5a8:
          bVar13 = false;
        }
        if (!bVar13) goto code_r0x00d9e5b0;
        lVar15 = local_c0[2];
        if (lVar15 == 0) goto LAB_00d9e5b8;
        plVar3 = (long *)(lVar15 + 0x58);
        do {
          lVar18 = *plVar3;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *plVar3 = lVar18;
            *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(lVar15 + 0x60);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 == lVar18) {
          bVar19 = true;
        }
        else {
          lVar18 = nn::os::GetCurrentThread();
          do {
            lVar10 = *plVar3;
            lVar21 = *(long *)(lVar15 + 0x60);
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar13) {
              *plVar3 = lVar10;
              *(long *)(lVar15 + 0x60) = lVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            while ((lVar10 != 0 && (lVar18 != lVar10))) {
              nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x68));
              do {
                lVar10 = *plVar3;
                lVar21 = *(long *)(lVar15 + 0x60);
                cVar7 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar13) {
                  *plVar3 = lVar10;
                  *(long *)(lVar15 + 0x60) = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            do {
              lVar4 = *plVar3;
              if (lVar4 != lVar10 || *(long *)(lVar15 + 0x60) != lVar21) {
                bVar13 = false;
                ClearExclusiveLocal();
                goto LAB_00d9ec18;
              }
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar13) {
                *plVar3 = lVar10;
                *(long *)(lVar15 + 0x5c) = lVar21 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar13 = true;
LAB_00d9ec18:
            bVar19 = false;
            lVar10 = lVar4;
            lVar21 = *(long *)(lVar15 + 0x60);
          } while (!bVar13);
        }
        plVar11 = *(long **)(lVar15 + 0x188);
        if (plVar11 == (long *)0x0) {
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
        }
        else {
          (**(code **)(*plVar11 + 0x18))(&local_88);
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          if ((long *)local_88[2] == plVar11 + 5) {
            FUN_00cbc6dc(&local_98,&local_88);
          }
          puVar17 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_88 + 3);
            do {
              sVar16 = *psVar2;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar13) {
                *psVar2 = sVar16 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar16 == 1) {
              piVar1 = (int *)((long)local_88 + 0x1c);
              do {
                iVar9 = *piVar1;
                cVar7 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar13) {
                  *piVar1 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar18;
                local_68 = *puVar17;
                FUN_00c44438(lVar18 + 0x8040,&local_68);
              }
            }
            else if (sVar16 == 0) goto LAB_00d9e4b4;
          }
        }
        local_88 = (undefined8 *)CONCAT71(local_88._1_7_,2);
        local_80 = 0;
        uStack_79 = 0;
        uStack_75 = 0;
        FUN_00ca1ea4(&local_80,&local_98);
        if (((*PTR_DAT_047d6c20 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar18 = *(long *)PTR_DAT_047d6c28;
        *(long *)PTR_DAT_047d6c30 = lVar18;
        if (*(undefined8 **)(lVar15 + 0x28) == (undefined8 *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = **(undefined8 **)(lVar15 + 0x28);
        }
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x90) != -1)) {
          *(undefined8 *)(lVar18 + (long)*(int *)(lVar10 + 0x90) * 8 + 0x6a0) = uVar20;
        }
        puVar8 = PTR_DAT_047d38f8;
        lVar21 = *(long *)(lVar15 + 0xd8);
        lVar10 = *(long *)PTR_DAT_047d38f8;
        lVar18 = nn::os::GetCurrentThread();
        if (lVar18 != lVar10) {
          uVar20 = nn::os::GetCurrentThread();
LAB_00d9e80c:
          if (*(long *)puVar8 == 0) goto code_r0x00d9e814;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
          do {
            if (*(long *)puVar8 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(puVar8 + 8));
                while (*(long *)puVar8 == 0) {
                  cVar7 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                  if (bVar13) {
                    *(undefined8 *)puVar8 = uVar20;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00d9e81c;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar8,0x10);
            if (bVar13) {
              *(undefined8 *)puVar8 = uVar20;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00d9e81c:
          FUN_00d783c4(*(undefined8 *)(lVar21 + 0x70),*(undefined8 *)(lVar21 + 0x80),
                       *(undefined8 *)(lVar15 + 0x98),&local_b0,&local_88,param_2,&local_70);
          *(undefined8 *)puVar8 = 0;
          nn::os::SignalLightEvent((LightEventType *)(puVar8 + 8));
          goto LAB_00d9e714;
        }
        FUN_00d783c4(*(undefined8 *)(lVar21 + 0x70),*(undefined8 *)(lVar21 + 0x80),
                     *(undefined8 *)(lVar15 + 0x98),&local_b0,&local_88,param_2,&local_70);
LAB_00d9e714:
        FUN_00cecfd8(&local_88);
        puVar17 = local_98;
        if (local_98 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_98 + 3);
          do {
            sVar16 = *psVar2;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar13) {
              *psVar2 = sVar16 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar16 == 1) {
            piVar1 = (int *)((long)local_98 + 0x1c);
            do {
              iVar9 = *piVar1;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar13) {
                *piVar1 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_68 = *puVar17;
              FUN_00c44438(lVar18 + 0x8040,&local_68);
            }
          }
          else if (sVar16 == 0) goto LAB_00d9e4b4;
        }
        if (!bVar19) {
          do {
            lVar18 = *plVar3;
            lVar10 = *(long *)(lVar15 + 0x60);
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar13) {
              *plVar3 = lVar18;
              *(long *)(lVar15 + 0x60) = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar21 = *plVar3;
            lVar4 = *(long *)(lVar15 + 0x60);
            if (lVar21 != lVar18 || lVar4 != lVar10) {
              bVar13 = false;
              ClearExclusiveLocal();
              goto LAB_00d9e7ac;
            }
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar13) {
              *plVar3 = lVar18;
              *(long *)(lVar15 + 0x5c) = lVar10 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar13 = true;
LAB_00d9e7ac:
          if (!bVar13) {
            do {
              lVar18 = *plVar3;
              lVar10 = *(long *)(lVar15 + 0x60);
              if (lVar18 != lVar21 || lVar10 != lVar4) {
                bVar13 = false;
                ClearExclusiveLocal();
                goto joined_r0x00d9ea34;
              }
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar13) {
                *plVar3 = lVar21;
                *(long *)(lVar15 + 0x5c) = lVar4 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar13 = true;
joined_r0x00d9ea34:
            if (!bVar13) {
              do {
                lVar21 = *plVar3;
                lVar4 = *(long *)(lVar15 + 0x60);
                if (lVar21 != lVar18 || lVar4 != lVar10) {
                  bVar13 = false;
                  ClearExclusiveLocal();
                  lVar18 = lVar21;
                  lVar10 = lVar4;
                  goto joined_r0x00d9ea34;
                }
                cVar7 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar13) {
                  *plVar3 = lVar18;
                  *(long *)(lVar15 + 0x5c) = lVar10 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar13 = true;
              lVar18 = lVar21;
              lVar10 = lVar4;
              goto joined_r0x00d9ea34;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x68));
        }
        lVar18 = *(long *)(lVar15 + 8);
        psVar2 = (short *)(lVar18 + 0x1a);
        do {
          sVar16 = *psVar2;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar13) {
            *psVar2 = sVar16 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))((long *)(lVar15 + -0x28));
        }
        else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
LAB_00d9e5b8:
    puVar17 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_c0 + 3);
      do {
        sVar16 = *psVar2;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar13) {
          *psVar2 = sVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar16 == 1) {
        piVar1 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar9 = *piVar1;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_88 = (undefined8 *)*puVar17;
          FUN_00c44438(lVar15 + 0x8040,&local_88);
        }
      }
      else if (sVar16 == 0) goto LAB_00d9e4b4;
    }
  }
LAB_00d9e46c:
  puVar17 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d0 + 3);
    do {
      sVar16 = *psVar2;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar1 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar13) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_88 = (undefined8 *)*puVar17;
        FUN_00c44438(lVar15 + 0x8040,&local_88);
      }
    }
    else if (sVar16 == 0) {
LAB_00d9e4b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x00d9e5b0:
  sVar16 = sVar6;
  if (sVar6 == 0) goto LAB_00d9e5b8;
  goto LAB_00d9e584;
code_r0x00d9e814:
  cVar7 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar8,0x10);
  if (bVar13) {
    *(undefined8 *)puVar8 = uVar20;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00d9e81c;
  goto LAB_00d9e80c;
}


