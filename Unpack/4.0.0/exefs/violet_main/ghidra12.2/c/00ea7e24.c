/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea7e24; name: FUN_00ea7e24
 */


void FUN_00ea7e24(long param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  bool bVar21;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  long *local_68 [2];
  long local_58;
  
  if (*(char *)(param_1 + 0x332) == '\0') {
    if (*(char *)(param_1 + 0x333) != '\0') {
      return;
    }
    plVar1 = (long *)(param_1 + 0x2c0);
    do {
      lVar12 = *plVar1;
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *plVar1 = lVar12;
        *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar12) {
      lVar12 = nn::os::GetCurrentThread();
LAB_00ea844c:
      if (*plVar1 == 0 && *(long *)(param_1 + 0x2c8) == 0) goto code_r0x00ea8458;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
      do {
        if (*plVar1 != 0 || *(long *)(param_1 + 0x2c8) != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
            while (*plVar1 == 0 && *(long *)(param_1 + 0x2c8) == 0) {
              cVar7 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar21) {
                *plVar1 = lVar12;
                *(undefined8 *)(param_1 + 0x2c8) = 0;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00ea8460;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar21) {
          *plVar1 = lVar12;
          *(undefined8 *)(param_1 + 0x2c8) = 0;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00ea8460:
      bVar21 = false;
      goto LAB_00ea8464;
    }
    bVar21 = true;
LAB_00ea8464:
    plVar14 = *(long **)(param_1 + 0x2e0);
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x2e0) = 0;
LAB_00ea8488:
      *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
      if (*(long *)(param_1 + 0x120) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x120) + 0x211) = 0;
      }
      if (bVar21) {
        return;
      }
      do {
        lVar12 = *plVar1;
        lVar11 = *(long *)(param_1 + 0x2c8);
        cVar7 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar21) {
          *plVar1 = lVar12;
          *(long *)(param_1 + 0x2c8) = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x2c8);
        if (lVar4 != lVar12 || lVar5 != lVar11) {
          bVar21 = false;
          ClearExclusiveLocal();
          goto LAB_00ea853c;
        }
        cVar7 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar21) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x2c4) = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar21 = true;
LAB_00ea853c:
      if (!bVar21) {
        do {
          lVar12 = *plVar1;
          lVar11 = *(long *)(param_1 + 0x2c8);
          if (lVar12 != lVar4 || lVar11 != lVar5) {
            bVar21 = false;
            ClearExclusiveLocal();
            goto joined_r0x00ea87e4;
          }
          cVar7 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar21) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x2c4) = lVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar21 = true;
joined_r0x00ea87e4:
        if (!bVar21) {
          do {
            lVar4 = *plVar1;
            lVar5 = *(long *)(param_1 + 0x2c8);
            if (lVar4 != lVar12 || lVar5 != lVar11) {
              bVar21 = false;
              ClearExclusiveLocal();
              lVar12 = lVar4;
              lVar11 = lVar5;
              goto joined_r0x00ea87e4;
            }
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar21) {
              *plVar1 = 0;
              *(long *)(param_1 + 0x2c4) = lVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar21 = true;
          lVar12 = lVar4;
          lVar11 = lVar5;
          goto joined_r0x00ea87e4;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d0));
      return;
    }
    if (*(long *)(param_1 + 0x2e8) == -1) {
      *(undefined8 *)(param_1 + 0x2e0) = 0;
    }
    else {
      FUN_00ed45e8();
      plVar14 = *(long **)(param_1 + 0x2e0);
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      if (plVar14 == (long *)0x0) goto LAB_00ea8488;
    }
    lVar12 = plVar14[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
      goto LAB_00ea8488;
    }
    if (sVar6 != 0) goto LAB_00ea8488;
    goto LAB_00ea8244;
  }
  plVar1 = (long *)(param_1 + 0x2c0);
  do {
    lVar12 = *plVar1;
    cVar7 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar21) {
      *plVar1 = lVar12;
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar12) {
    lVar12 = nn::os::GetCurrentThread();
LAB_00ea7e70:
    if (*plVar1 == 0 && *(long *)(param_1 + 0x2c8) == 0) goto code_r0x00ea7e7c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x2c8) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
          while (*plVar1 == 0 && *(long *)(param_1 + 0x2c8) == 0) {
            cVar7 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar21) {
              *plVar1 = lVar12;
              *(undefined8 *)(param_1 + 0x2c8) = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00ea7e84;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *plVar1 = lVar12;
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00ea7e84:
    bVar21 = false;
    goto LAB_00ea7e88;
  }
  bVar21 = true;
LAB_00ea7e88:
  if (*(long *)(param_1 + 0x2e0) != 0) {
    FUN_00c94f60(*(long *)(param_1 + 0x2e0),param_1 + 0x1e0);
    if (*(char *)(*(long *)(param_1 + 0x2e0) + 0x69) == '\0') {
      bVar9 = *(char *)(*(long *)(param_1 + 0x2e0) + 0x6a) != '\0';
    }
    else {
      bVar9 = true;
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      *(char *)(*(long *)(param_1 + 0x120) + 0x211) = bVar9 & *(char *)(param_1 + 0x332) != '\0';
    }
    goto LAB_00ea7ec4;
  }
  plVar14 = (long *)(param_1 + 0x2e0);
  FUN_00c9e664(&local_78,param_1 + 0xe8);
  if (local_78 != (long *)0x0) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    lVar12 = *(long *)PTR_DAT_047d88d8;
    *(long *)PTR_DAT_047d88e0 = lVar12;
    if (*(char *)(param_1 + 0x333) == '\0') {
      if (local_70 == (long *)0x0) {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = (long *)local_70[9];
      }
      (**(code **)(*plVar19 + 0x18))(local_68,plVar19);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      plVar20 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 5;
      }
      if ((long *)local_68[0][2] == plVar20) {
        FUN_00c9ea00(&local_88,local_68);
      }
      plVar19 = local_68[0];
      if (local_68[0] != (long *)0x0) {
        plVar20 = local_68[0] + 3;
        do {
          sVar6 = (short)*plVar20;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *(short *)plVar20 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar3 = (int *)((long)local_68[0] + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_58 = *plVar19;
            FUN_00c44438(lVar11 + 0x8040,&local_58);
          }
        }
        else if (sVar6 == 0) goto LAB_00ea8788;
      }
      FUN_00ea8824(&local_58,lVar12,&local_88);
      plVar19 = (long *)*plVar14;
      *plVar14 = 0;
      if (plVar19 != (long *)0x0) {
        lVar11 = plVar19[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar6 = *psVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar19 + 0x50))();
        }
        else if (sVar6 == 0) goto LAB_00ea8244;
      }
      lVar11 = local_58;
      puVar8 = local_88;
      local_58 = 0;
      *plVar14 = lVar11;
      if (local_88 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_88 + 3);
        do {
          sVar6 = *psVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar3 = (int *)((long)local_88 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_68[0] = (long *)*puVar8;
            FUN_00c44438(lVar11 + 0x8040,local_68);
          }
        }
        else if (sVar6 == 0) {
LAB_00ea8788:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        lVar11 = *plVar14;
      }
      if (lVar11 != 0) {
        FUN_00c94f60(lVar11,param_1 + 0x1e0);
      }
    }
    plVar19 = *(long **)(local_70[9] + 0x460);
    if (plVar19 != (long *)0x0) {
      lVar11 = plVar19[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00ea86e8;
      psVar2 = (short *)(lVar11 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) {
        pcVar15 = "count != 0";
        pcVar16 = "AddReference";
        pcVar17 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar18 = "Reference counter overflows.";
        goto LAB_00ea8710;
      }
      plVar20 = *(long **)(lVar12 + 0xe8);
      if (plVar20 != (long *)0x0) {
        lVar11 = plVar20[6];
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00ea86e8;
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar6 = *psVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar13;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
LAB_00ea8094:
          FUN_00e21f0c(plVar20);
          lVar11 = plVar20[6];
          psVar2 = (short *)(lVar11 + 0x1a);
          do {
            sVar6 = *psVar2;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar9) {
              *psVar2 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))(plVar20);
          }
          else if (sVar6 == 0) goto LAB_00ea8244;
          goto LAB_00ea80c0;
        }
        if (sVar6 != -1) goto LAB_00ea8094;
LAB_00ea86f0:
        pcVar15 = "count != 0";
        pcVar16 = "AddReference";
        pcVar17 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar18 = "Reference counter overflows.";
        goto LAB_00ea8710;
      }
      FUN_00e21f0c(0);
LAB_00ea80c0:
      plVar20 = *(long **)(lVar12 + 0xd0);
      if (plVar20 == (long *)0x0) {
        FUN_00e21f0c(0);
      }
      else {
        lVar12 = plVar20[6];
        if (*(long *)(lVar12 + 0x10) == 0) {
LAB_00ea86e8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar6 = *psVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar6 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar13;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar6 == -1) goto LAB_00ea86f0;
        FUN_00e21f0c(plVar20);
        lVar12 = plVar20[6];
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar6 = *psVar2;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar20 + 0x50))(plVar20);
        }
        else if (sVar6 == 0) goto LAB_00ea8244;
      }
      lVar12 = plVar19[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))(plVar19);
      }
      else if (sVar6 == 0) {
LAB_00ea8244:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_70 != (long *)0x0) {
    plVar19 = local_70 + 5;
    do {
      lVar12 = *plVar19;
      iVar10 = (int)lVar12 + -1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar9) {
        *(int *)plVar19 = iVar10;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
      pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar16 = "DecrementReferenceInternal";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar18 = "Reference counter underflows.";
LAB_00ea8710:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
    }
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x60))();
  }
  if (*plVar14 == 0) {
    if (*(long *)(param_1 + 0x120) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x120) + 0x211) = 0;
    }
  }
  else {
    FUN_00ed155c(param_1,plVar14);
  }
LAB_00ea7ec4:
  if (!bVar21) {
    do {
      lVar12 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x2c8);
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *plVar1 = lVar12;
        *(long *)(param_1 + 0x2c8) = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar4 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x2c8);
      if (lVar4 != lVar12 || lVar5 != lVar11) {
        bVar21 = false;
        ClearExclusiveLocal();
        goto LAB_00ea819c;
      }
      cVar7 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar21) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x2c4) = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar21 = true;
LAB_00ea819c:
    if (!bVar21) {
      do {
        lVar12 = *plVar1;
        lVar11 = *(long *)(param_1 + 0x2c8);
        if (lVar12 != lVar4 || lVar11 != lVar5) {
          bVar21 = false;
          ClearExclusiveLocal();
          goto joined_r0x00ea8618;
        }
        cVar7 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar21) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x2c4) = lVar5;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar21 = true;
joined_r0x00ea8618:
      if (!bVar21) {
        do {
          lVar4 = *plVar1;
          lVar5 = *(long *)(param_1 + 0x2c8);
          if (lVar4 != lVar12 || lVar5 != lVar11) {
            bVar21 = false;
            ClearExclusiveLocal();
            lVar12 = lVar4;
            lVar11 = lVar5;
            goto joined_r0x00ea8618;
          }
          cVar7 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar21) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x2c4) = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar21 = true;
        lVar12 = lVar4;
        lVar11 = lVar5;
        goto joined_r0x00ea8618;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d0));
  }
  return;
code_r0x00ea8458:
  cVar7 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar21) {
    *plVar1 = lVar12;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ea8460;
  goto LAB_00ea844c;
code_r0x00ea7e7c:
  cVar7 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar21) {
    *plVar1 = lVar12;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ea7e84;
  goto LAB_00ea7e70;
}


