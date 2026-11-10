/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fab934; name: FUN_01fab934
 */


void FUN_01fab934(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined8 local_48;
  
  *param_1 = &PTR_FUN_04569288;
  param_1[4] = &PTR_LAB_045692c0;
  plVar7 = (long *)param_1[0x16];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x120))(plVar7,1);
    plVar7 = (long *)param_1[0x16];
    param_1[0x16] = 0;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_01faba48;
    }
    plVar7 = (long *)param_1[0x15];
    param_1[0x15] = 0;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_01faba48;
    }
  }
  lVar11 = param_1[0x19];
  if (lVar11 != 0) {
    plVar7 = (long *)(lVar11 + 0x110);
    lVar10 = *plVar7;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar10) {
      lVar8 = nn::os::GetCurrentThread();
      bVar12 = false;
LAB_01fabd9c:
      if (*plVar7 == 0) goto code_r0x01fabda4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
      bVar12 = false;
      do {
        if (*plVar7 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
            while (*plVar7 == 0) {
              cVar4 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar12) {
                *plVar7 = lVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
              bVar12 = false;
              if (cVar4 == '\0') goto LAB_01fabb10;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01fabb10;
    }
    bVar12 = true;
LAB_01fabb10:
    plVar7 = (long *)FUN_013e0df0(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
    if ((*(long **)(lVar11 + 0x130) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_013e0df0(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168))
      ;
      if (*(long **)(lVar11 + 0x168) == plVar7) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*plVar7 != 0) {
          lVar8 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar8 = *plVar7 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar11 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
    }
    if (lVar8 != 0) {
      FUN_010b70f8(lVar8);
      (**(code **)(*(long *)param_1[0x19] + 0x120))((long *)param_1[0x19],1);
      plVar7 = (long *)param_1[0x19];
      param_1[0x19] = 0;
      if (plVar7 != (long *)0x0) {
        lVar11 = plVar7[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_01faba48;
      }
      plVar7 = (long *)param_1[0x18];
      param_1[0x18] = 0;
      if (plVar7 != (long *)0x0) {
        lVar11 = plVar7[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_01faba48;
      }
    }
    plVar7 = (long *)param_1[0x19];
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_01faba48;
    }
  }
  plVar7 = (long *)param_1[0x18];
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01faba48;
  }
  plVar7 = (long *)param_1[0x16];
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01faba48;
  }
  plVar7 = (long *)param_1[0x15];
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01faba48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 0x20))();
  }
  puVar9 = (undefined8 *)param_1[6];
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar9 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01fabda4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar5) {
    *plVar7 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01fabb10;
  goto LAB_01fabd9c;
}


