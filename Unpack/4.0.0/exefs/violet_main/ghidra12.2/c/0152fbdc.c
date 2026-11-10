/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152fbdc; name: FUN_0152fbdc
 */


void FUN_0152fbdc(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  plVar13 = (long *)(param_1 + 0xc30);
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc38));
        while (*plVar13 == 0) {
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar18) {
            *plVar13 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_0152fc1c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar18) {
      *plVar13 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0152fc1c:
  if (((*(char *)(param_1 + 0x11e) != '\0') || (**(char **)(param_1 + 0x140) == '\0')) ||
     (*(long *)(param_1 + 0x130) == 0)) goto LAB_0152fc24;
  FUN_00c9e664(&local_88,param_1 + 0xe8);
  if (local_80 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = local_80[9];
  }
  plVar13 = (long *)(lVar11 + 0x110);
  lVar19 = *plVar13;
  lVar12 = nn::os::GetCurrentThread();
  if (lVar12 == lVar19) {
    bVar18 = true;
  }
  else {
    lVar12 = nn::os::GetCurrentThread();
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
          while (*plVar13 == 0) {
            cVar6 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar18) {
              *plVar13 = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0152fcd8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *plVar13 = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0152fcd8:
    bVar18 = false;
  }
  plVar13 = (long *)FUN_027603e0(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
  if ((*(long **)(lVar11 + 0x130) == plVar13) || (*plVar13 == 0)) {
    plVar13 = (long *)FUN_027603e0(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168));
    if (*(long **)(lVar11 + 0x168) == plVar13) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*plVar13 != 0) {
        lVar12 = *plVar13 + -0x20;
      }
    }
  }
  else {
    lVar12 = *plVar13 + -0x20;
  }
  if (!bVar18) {
    *(undefined8 *)(lVar11 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
  }
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x11a) != '\0')) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c43ef0(&local_78,lVar12 + 0x98);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    if (local_78[2] == lVar12 + 0x28) {
      FUN_00c953a8(&local_98,&local_78);
    }
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_68 = (long *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) goto LAB_01530514;
    }
    FUN_00cacc64((long *)(param_1 + 0xc50),&local_98);
    puVar8 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_98 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_78 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_78);
        }
      }
      else if (sVar4 == 0) goto LAB_01530514;
    }
    lVar11 = *(long *)(param_1 + 0xc50);
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar4 = *psVar1;
    if (sVar4 == *(short *)(lVar11 + 0x1a)) {
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = *(short *)(lVar11 + 0x1a) + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_0152fe3c;
      bVar18 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0152fe3c:
      bVar18 = false;
    }
    while (!bVar18) {
      sVar5 = *psVar1;
      if (sVar5 == sVar4) {
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0152fe68;
        bVar18 = true;
        sVar4 = sVar5;
      }
      else {
        ClearExclusiveLocal();
LAB_0152fe68:
        bVar18 = false;
        sVar4 = sVar5;
      }
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    plVar13 = (long *)0x0;
    if (lVar11 != 0) {
      plVar13 = (long *)(lVar11 + -0x28);
    }
    local_68 = (long *)plVar13[0x24];
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 5;
      do {
        lVar12 = *plVar2;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar18) {
          *(int *)plVar2 = (int)lVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar12 == -1) {
LAB_015303cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar11 != 0) {
      (**(code **)(*plVar13 + 0x60))();
    }
    iVar10 = (int)((ulong)(local_68[0xb] - local_68[10]) >> 3) * -0x49249249;
    if (0 < iVar10) {
      uVar16 = 0;
      do {
        if (((ulong)local_68[0x34] >> (uVar16 & 0x3f) & 1) == 0) {
          if (iVar10 < 2) {
            iVar10 = 1;
          }
          iVar7 = (int)uVar16;
          if (iVar10 <= (int)uVar16) {
            iVar7 = iVar10 + -1;
          }
          *(int *)(local_68 + 0x32) = iVar7;
          plVar13 = local_68;
          goto LAB_015301c8;
        }
        uVar16 = uVar16 + 1;
      } while ((long)iVar10 != uVar16);
    }
    uVar20 = *(undefined8 *)(param_1 + 0xc60);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00c43ef0(&local_78,param_1 + 0x98);
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    lVar11 = 0;
    if (param_1 != 0) {
      lVar11 = param_1 + 0x28;
    }
    if (local_78[2] == lVar11) {
      FUN_00f4a560(&local_a8,&local_78);
    }
    puVar8 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_98 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_98);
        }
      }
      else if (sVar4 == 0) goto LAB_01530514;
    }
    FUN_013dd224(uVar20,&local_a8,&local_68);
    puVar8 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a8 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_78 = (undefined8 *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_78);
        }
      }
      else if (sVar4 == 0) {
LAB_01530514:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    plVar13 = local_68;
    if (0 < (int)((ulong)(local_68[0xb] - local_68[10]) >> 3) * -0x49249249) {
      uVar16 = 0;
      do {
        lVar11 = plVar13[10] + uVar16 * 0x38;
        lVar12 = *(long *)(lVar11 + 8);
        if (lVar12 != lVar11) {
          iVar10 = 0;
          do {
            plVar2 = (long *)(lVar12 + 0x10);
            FUN_00ff58b0(plVar13,plVar2,uVar16 & 0xffffffff);
            plVar14 = (long *)FUN_0277e158(plVar13,plVar2);
            if (*plVar14 != 0) {
              FUN_0277e500(*plVar14,DAT_0485a0d8 + 0x38);
            }
            lVar19 = *plVar2 + 0x68;
            lVar21 = *(long *)(*plVar2 + 0x70);
            if (lVar21 != lVar19) {
              do {
                lVar15 = *(long *)(lVar21 + 0x10);
                uVar17 = *(long *)(lVar15 + 0x58) - *(long *)(lVar15 + 0x50);
                if ((int)(uVar17 >> 3) != 0) {
                  uVar22 = 0;
                  while( true ) {
                    plVar13 = *(long **)(*(long *)(lVar15 + 0x50) + uVar22 * 8);
                    if (plVar13 == (long *)0x0) {
                      local_b0 = (long *)0x0;
                      uVar9 = FUN_02bcc0b0(param_1,&local_b0,iVar10,uVar16 & 0xffffffff);
                      iVar10 = iVar10 + (uVar9 & 1);
                    }
                    else {
                      plVar2 = plVar13 + 5;
                      do {
                        lVar15 = *plVar2;
                        cVar6 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar18) {
                          *(int *)plVar2 = (int)lVar15 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if ((int)lVar15 == -1) goto LAB_015303cc;
                      do {
                        lVar15 = *plVar2;
                        cVar6 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar18) {
                          *(int *)plVar2 = (int)lVar15 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      local_b0 = plVar13;
                      if ((int)lVar15 == -1) goto LAB_015303cc;
                      uVar9 = FUN_02bcc0b0(param_1,&local_b0,iVar10,uVar16 & 0xffffffff);
                      if (plVar13 != (long *)0x0) {
                        plVar14 = plVar13 + 5;
                        do {
                          lVar15 = *plVar14;
                          iVar7 = (int)lVar15 + -1;
                          cVar6 = '\x01';
                          bVar18 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                          if (bVar18) {
                            *(int *)plVar14 = iVar7;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar7 == 0) {
                          (**(code **)(*plVar13 + 0x10))(plVar13);
                        }
                        else if ((int)lVar15 == 0) goto LAB_015303f4;
                      }
                      iVar10 = iVar10 + (uVar9 & 1);
                      do {
                        lVar15 = *plVar2;
                        iVar7 = (int)lVar15 + -1;
                        cVar6 = '\x01';
                        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar18) {
                          *(int *)plVar2 = iVar7;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar7 == 0) {
                        (**(code **)(*plVar13 + 0x10))(plVar13);
                      }
                      else if ((int)lVar15 == 0) goto LAB_015303f4;
                    }
                    uVar22 = uVar22 + 1;
                    if (uVar22 == (uVar17 >> 3 & 0xffffffff)) break;
                    lVar15 = *(long *)(lVar21 + 0x10);
                  }
                }
                lVar21 = *(long *)(lVar21 + 8);
              } while (lVar21 != lVar19);
              plVar13 = local_68;
            }
            lVar12 = *(long *)(lVar12 + 8);
          } while (lVar12 != lVar11);
        }
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)((int)((ulong)(plVar13[0xb] - plVar13[10]) >> 3) * -0x49249249))
      ;
    }
    *(undefined1 *)(param_1 + 0x11e) = 1;
    if (plVar13 != (long *)0x0) {
LAB_015301c8:
      plVar2 = plVar13 + 5;
      do {
        lVar11 = *plVar2;
        iVar10 = (int)lVar11 + -1;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar18) {
          *(int *)plVar2 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
      else if ((int)lVar11 == 0) goto LAB_015303f4;
    }
  }
  if (local_80 != (long *)0x0) {
    plVar13 = local_80 + 5;
    do {
      lVar11 = *plVar13;
      iVar10 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar18) {
        *(int *)plVar13 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
LAB_015303f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x60))();
  }
LAB_0152fc24:
  *(undefined8 *)(param_1 + 0xc30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc38));
  return;
}


