/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0112ae94; name: FUN_0112ae94
 */


void FUN_0112ae94(long *param_1,long *param_2,int param_3)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  *param_1 = 0;
  if (param_3 == 0) {
    plVar12 = (long *)param_2[1];
    (**(code **)(*param_2 + 0x18))(&local_50,param_2);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    plVar8 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 5;
    }
    if ((long *)local_50[2] == plVar8) {
      FUN_0112c10c(&local_70,&local_50);
    }
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_50 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar6 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar6;
          local_60 = (undefined8 *)*local_50;
          FUN_00c44438(lVar6 + 0x8040,&local_60);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0112bc80:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x68,8);
    if (lVar7 == 0) {
LAB_0112bc84:
      (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_0112bdf8(&local_50,param_2 + 0xb);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_0112c430(&local_60,&local_70);
    FUN_0112c754(lVar7,&local_50,&local_60);
    puVar11 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_60 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    puVar11 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_50 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    *(undefined4 *)(lVar7 + 0x18) = 0x80068;
    *(long **)(lVar7 + 8) = plVar12;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
LAB_0112bc58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar8 = (long *)*param_1;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar6 = *plVar12;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
LAB_0112b18c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *param_1 = lVar7;
    if (local_70 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_70 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          puVar11 = local_70;
        } while (cVar3 != '\0');
        goto LAB_0112b674;
      }
      goto LAB_0112b144;
    }
  }
  else if (param_3 == 3) {
    plVar12 = (long *)param_2[1];
    (**(code **)(*param_2 + 0x18))(&local_50,param_2);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    plVar8 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 5;
    }
    if ((long *)local_50[2] == plVar8) {
      FUN_0112c10c(&local_70,&local_50);
    }
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_50 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar6 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar6;
          local_60 = (undefined8 *)*local_50;
          FUN_00c44438(lVar6 + 0x8040,&local_60);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0112bc80;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x68,8);
    if (lVar7 == 0) goto LAB_0112bc84;
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_0112bdf8(&local_50,param_2 + 0xb);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_0112c430(&local_60,&local_70);
    FUN_0112cf54(lVar7,&local_50,&local_60);
    puVar11 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_60 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    puVar11 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_50 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    *(undefined4 *)(lVar7 + 0x18) = 0x80068;
    *(long **)(lVar7 + 8) = plVar12;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) goto LAB_0112bc58;
    plVar8 = (long *)*param_1;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar6 = *plVar12;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_0112b18c;
    }
    *param_1 = lVar7;
    if (local_70 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_70 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          puVar11 = local_70;
        } while (cVar3 != '\0');
        goto LAB_0112b674;
      }
      goto LAB_0112b144;
    }
  }
  else if (param_3 == 2) {
    lVar6 = param_2[1];
    (**(code **)(*param_2 + 0x18))(&local_50,param_2);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    plVar8 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 5;
    }
    if ((long *)local_50[2] == plVar8) {
      FUN_0112c10c(&local_60,&local_50);
    }
    puVar11 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_50 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_70 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar7 + 0x8040,&local_70);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    lVar6 = FUN_0112d3dc(lVar6,param_2 + 0xb,&local_60);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) goto LAB_0112bc58;
    }
    plVar8 = (long *)*param_1;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar7 = *plVar12;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0112b18c;
    }
    *param_1 = lVar6;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_60 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          puVar11 = local_60;
        } while (cVar3 != '\0');
LAB_0112b674:
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar6 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar6;
          local_50 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar6 + 0x8040,&local_50);
        }
      }
      else {
LAB_0112b144:
        if (sVar9 == 0) goto LAB_0112b148;
      }
    }
  }
  else if (param_3 == 1) {
    lVar6 = param_2[1];
    (**(code **)(*param_2 + 0x18))(&local_50,param_2);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    plVar8 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar8 = param_2 + 5;
    }
    if ((long *)local_50[2] == plVar8) {
      FUN_0112c10c(&local_60,&local_50);
    }
    puVar11 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_50 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_50 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_70 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar7 + 0x8040,&local_70);
        }
      }
      else if (sVar9 == 0) goto LAB_0112b148;
    }
    lVar6 = FUN_0112d6fc(lVar6,param_2 + 0xb,&local_60);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) goto LAB_0112bc58;
    }
    plVar8 = (long *)*param_1;
    *param_1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar12 = plVar8 + 5;
      do {
        lVar7 = *plVar12;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_0112b18c;
    }
    *param_1 = lVar6;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar9 = *psVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        piVar1 = (int *)((long)local_60 + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          puVar11 = local_60;
        } while (cVar3 != '\0');
        goto LAB_0112b674;
      }
      goto LAB_0112b144;
    }
  }
  lVar6 = *param_1;
  (**(code **)(*param_2 + 0x18))(&local_50,param_2);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  plVar8 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar8 = param_2 + 5;
  }
  if ((long *)local_50[2] == plVar8) {
    FUN_0112c10c(&local_60,&local_50);
  }
  puVar11 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50 + 3);
    do {
      sVar9 = *psVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar4) {
        *psVar2 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      piVar1 = (int *)((long)local_50 + 0x1c);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_70 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar7 + 0x8040,&local_70);
      }
    }
    else if (sVar9 == 0) goto LAB_0112b148;
  }
  FUN_0112bdf8(lVar6 + 0x30,param_2 + 0xb);
  FUN_0112ccf0(lVar6 + 0x40,&local_60);
  puVar11 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_60 + 3);
    do {
      sVar9 = *psVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar4) {
        *psVar2 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      piVar1 = (int *)((long)local_60 + 0x1c);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar6 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar6;
        local_50 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar6 + 0x8040,&local_50);
      }
    }
    else if (sVar9 == 0) {
LAB_0112b148:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


