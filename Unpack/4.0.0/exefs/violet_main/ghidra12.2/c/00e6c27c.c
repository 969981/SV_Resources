/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e6c27c; name: FUN_00e6c27c
 */


void FUN_00e6c27c(long param_1)

{
  int *piVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *local_60;
  long *local_58;
  long local_38;
  
  *(undefined1 *)(param_1 + 0x194) = 1;
  if (*(long *)(param_1 + 0x198) == 0) {
    lVar19 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)(param_1 + 0x198) + 0x10);
    lVar19 = 0;
    if (lVar15 != 0) {
      lVar19 = lVar15 + -0x28;
    }
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar16 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x10);
    lVar15 = 0;
    if (lVar16 != 0) {
      lVar15 = lVar16 + -0x28;
    }
    if ((lVar19 != 0) && (lVar16 != 0)) {
      FUN_00fe4300(&local_60,lVar19,lVar15 + 0x368);
      plVar23 = local_60;
      if (local_60 != (long *)0x0) {
        sVar4 = *(short *)((long)local_60 + 0x1a);
        if (local_60 != (long *)0x0) {
          plVar10 = local_60 + 3;
          do {
            sVar5 = (short)*plVar10;
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar21) {
              *(short *)plVar10 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            piVar1 = (int *)((long)local_60 + 0x1c);
            do {
              iVar9 = *piVar1;
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar21) {
                *piVar1 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar16;
              local_38 = *plVar23;
              FUN_00c44438(lVar16 + 0x8040,&local_38);
            }
          }
          else if (sVar5 == 0) goto LAB_00e6c44c;
        }
        if (sVar4 != 0) goto LAB_00e6c2dc;
      }
      FUN_00c9e664(&local_60,param_1 + 0xe8);
      if (local_58 != (long *)0x0) {
        if (local_58[9] == lVar19) {
          FUN_00e6cc10(lVar15,&local_60);
        }
        else if (local_58[9] == lVar15) {
          lVar16 = nn::os::GetCurrentThread();
          puVar7 = PTR_DAT_047d94d0;
          do {
            lVar18 = *(long *)puVar7;
            lVar20 = *(long *)(puVar7 + 8);
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar21) {
              *(long *)puVar7 = lVar18;
              *(long *)(puVar7 + 8) = lVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            while ((lVar18 != 0 && (lVar16 != lVar18))) {
              nn::os::WaitLightEvent((LightEventType *)(puVar7 + 0x10));
              do {
                lVar18 = *(long *)puVar7;
                lVar20 = *(long *)(puVar7 + 8);
                cVar6 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                if (bVar21) {
                  *(long *)puVar7 = lVar18;
                  *(long *)(puVar7 + 8) = lVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            do {
              lVar3 = *(long *)puVar7;
              if (lVar3 != lVar18 || *(long *)(puVar7 + 8) != lVar20) {
                bVar21 = false;
                ClearExclusiveLocal();
                goto LAB_00e6c56c;
              }
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *(long *)puVar7 = lVar18;
                *(long *)(puVar7 + 4) = lVar20 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar21 = true;
LAB_00e6c56c:
            lVar18 = lVar3;
            lVar20 = *(long *)(puVar7 + 8);
          } while (!bVar21);
          plVar23 = *(long **)(lVar15 + 0x460);
          if (plVar23 == (long *)0x0) goto LAB_00e6c744;
          lVar16 = plVar23[6];
          if (*(long *)(lVar16 + 0x10) == 0) goto LAB_00e6cb7c;
          psVar2 = (short *)(lVar16 + 0x1a);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar21) {
              *psVar2 = sVar4 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 != 0) {
            if (sVar4 != -1) goto LAB_00e6c744;
LAB_00e6cb9c:
            pcVar11 = "count != 0";
            pcVar12 = "AddReference";
            pcVar13 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
            ;
            pcVar14 = "Reference counter overflows.";
            goto LAB_00e6cbbc;
          }
          uVar17 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          *(undefined8 *)(lVar16 + 8) = uVar17;
          *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
LAB_00e6c744:
          plVar10 = *(long **)(lVar19 + 0x460);
          if (plVar10 != (long *)0x0) {
            lVar16 = plVar10[6];
            if (*(long *)(lVar16 + 0x10) == 0) {
LAB_00e6cb7c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar2 = (short *)(lVar16 + 0x1a);
            do {
              sVar4 = *psVar2;
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar21) {
                *psVar2 = sVar4 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 0) {
              uVar17 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
              *(undefined8 *)(lVar16 + 8) = uVar17;
              *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
            }
            else if (sVar4 == -1) goto LAB_00e6cb9c;
          }
          if (plVar23 == plVar10) {
            FUN_010ca4a4(*(undefined8 *)(lVar15 + 0x460),*(undefined4 *)(lVar15 + 0x468),
                         *(undefined4 *)(lVar19 + 0x468));
          }
          if (plVar10 != (long *)0x0) {
            lVar19 = plVar10[6];
            psVar2 = (short *)(lVar19 + 0x1a);
            do {
              sVar4 = *psVar2;
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar21) {
                *psVar2 = sVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 1) {
              *(undefined8 *)(lVar19 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))(plVar10);
            }
            else if (sVar4 == 0) goto LAB_00e6cbc4;
          }
          if (plVar23 != (long *)0x0) {
            lVar19 = plVar23[6];
            psVar2 = (short *)(lVar19 + 0x1a);
            do {
              sVar4 = *psVar2;
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar21) {
                *psVar2 = sVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar4 == 1) {
              *(undefined8 *)(lVar19 + 0x10) = 0;
              (**(code **)(*plVar23 + 0x50))(plVar23);
            }
            else if (sVar4 == 0) {
LAB_00e6cbc4:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          do {
            lVar19 = *(long *)puVar7;
            lVar15 = *(long *)(puVar7 + 8);
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar21) {
              *(long *)puVar7 = lVar19;
              *(long *)(puVar7 + 8) = lVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar16 = *(long *)puVar7;
            lVar18 = *(long *)(puVar7 + 8);
            if (lVar16 != lVar19 || lVar18 != lVar15) {
              bVar21 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e6c844;
            }
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar21) {
              *(long *)puVar7 = lVar19;
              *(long *)(puVar7 + 4) = lVar15 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar21 = true;
joined_r0x00e6c844:
          if (!bVar21) {
            do {
              lVar19 = *(long *)puVar7;
              lVar15 = *(long *)(puVar7 + 8);
              if (lVar19 != lVar16 || lVar15 != lVar18) {
                bVar21 = false;
                ClearExclusiveLocal();
                lVar16 = lVar19;
                lVar18 = lVar15;
                goto joined_r0x00e6c844;
              }
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *(long *)puVar7 = lVar16;
                *(long *)(puVar7 + 4) = lVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar21 = true;
            lVar16 = lVar19;
            lVar18 = lVar15;
            goto joined_r0x00e6c844;
          }
          nn::os::SignalLightEvent((LightEventType *)(puVar7 + 0x10));
        }
        if (local_58 != (long *)0x0) {
          plVar23 = local_58 + 5;
          do {
            lVar19 = *plVar23;
            iVar9 = (int)lVar19 + -1;
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar21) {
              *(int *)plVar23 = iVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_58 + 0x10))();
          }
          else if ((int)lVar19 == 0) {
            pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
            pcVar12 = "DecrementReferenceInternal";
            pcVar13 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            pcVar14 = "Reference counter underflows.";
LAB_00e6cbbc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
          }
        }
      }
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x60))();
      }
    }
  }
LAB_00e6c2dc:
  puVar22 = *(undefined8 **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (puVar22 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar22 + 3);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)puVar22 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar21) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_60 = (long *)*puVar22;
        FUN_00c44438(lVar19 + 0x8040,&local_60);
      }
    }
    else if (sVar4 == 0) goto LAB_00e6c44c;
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  puVar22 = *(undefined8 **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (puVar22 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar22 + 3);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)puVar22 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar21) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_60 = (long *)*puVar22;
        FUN_00c44438(lVar19 + 0x8040,&local_60);
      }
    }
    else if (sVar4 == 0) goto LAB_00e6c44c;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  puVar7 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar8 = PTR_DAT_047d3e30;
  uVar17 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)PTR_DAT_047d3e30;
  *(undefined8 *)(param_1 + 0x1f0) = uVar17;
  plVar23 = *(long **)(puVar8 + 0x18);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(puVar8 + 0x10);
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  plVar10 = *(long **)(param_1 + 0x200);
  *(long **)(param_1 + 0x200) = plVar23;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  puVar22 = *(undefined8 **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (puVar22 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar22 + 3);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)puVar22 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar21) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_60 = (long *)*puVar22;
        FUN_00c44438(lVar19 + 0x8040,&local_60);
      }
    }
    else if (sVar4 == 0) goto LAB_00e6c44c;
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  puVar22 = *(undefined8 **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (puVar22 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar22 + 3);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar1 = (int *)((long)puVar22 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar21) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_60 = (long *)*puVar22;
        FUN_00c44438(lVar19 + 0x8040,&local_60);
      }
    }
    else if (sVar4 == 0) {
LAB_00e6c44c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(puVar8 + 8);
  plVar23 = *(long **)(puVar8 + 0x18);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(puVar8 + 0x10);
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  plVar10 = *(long **)(param_1 + 0x220);
  *(long **)(param_1 + 0x220) = plVar23;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x22d) = 0;
  return;
}


