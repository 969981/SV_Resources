/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01188090; name: FUN_01188090
 */


void FUN_01188090(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x180) == *(long *)(param_1 + 0x178)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
LAB_01188160:
      plVar8 = (long *)(param_1 + 0x140);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
            while (*plVar8 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0118817c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0118817c:
      plVar8 = (long *)(param_1 + 0x158);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
            while (*plVar8 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01188198;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01188198:
      FUN_01236b8c(*(undefined8 *)(param_1 + 0x170));
      plVar8 = *(long **)(param_1 + 0x178);
      plVar7 = *(long **)(param_1 + 0x180);
      do {
        while( true ) {
          do {
            if (plVar7 == plVar8) {
              *(long **)(param_1 + 0x180) = plVar8;
              plVar8 = *(long **)(param_1 + 0x1b0);
              plVar7 = *(long **)(param_1 + 0x1b8);
              goto LAB_011881ec;
            }
            plVar7 = plVar7 + -1;
            plVar6 = (long *)*plVar7;
          } while (plVar6 == (long *)0x0);
          plVar1 = plVar6 + 5;
          do {
            lVar5 = *plVar1;
            iVar4 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 != 0) break;
          (**(code **)(*plVar6 + 0x10))();
        }
      } while ((int)lVar5 != 0);
      goto LAB_01188608;
    }
    plVar7 = *(long **)(param_1 + 0x180);
    for (plVar8 = *(long **)(param_1 + 0x178); plVar8 != plVar7; plVar8 = plVar8 + 1) {
      lVar9 = *plVar8;
      plVar6 = (long *)(lVar9 + 0x60);
      lVar5 = nn::os::GetCurrentThread();
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x68));
            while (*plVar6 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01188114;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01188114:
      cVar2 = *(char *)(lVar9 + 0xeb);
      *(undefined8 *)(lVar9 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x68));
      if (cVar2 == '\0') goto LAB_01188160;
    }
  }
LAB_011882b0:
  plVar8 = (long *)(param_1 + 0x140);
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_011882d0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_011882d0:
  plVar8 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x200,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_029e531c(plVar7,param_1,param_3,param_4);
  *(undefined4 *)(plVar7 + 3) = 0x80200;
  plVar7[1] = (long)plVar8;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  plVar8 = plVar7 + 5;
  do {
    lVar5 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = (int)lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_68 = plVar7;
  if ((int)lVar5 == -1) {
LAB_011885e0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  plVar6 = (long *)plVar7[7];
  plVar7[7] = (long)plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  plVar8 = (long *)(param_1 + 0x158);
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      FUN_011c7314(param_1 + 0x1b0,&local_68);
      *(undefined1 *)(param_1 + 0x247) = 1;
      goto LAB_01188480;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_70 = local_68;
  if (local_68 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = local_68 + 5;
    do {
      lVar5 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_011885e0;
    plVar8 = local_68;
  }
  FUN_011c7314(param_1 + 0x178,&local_70);
  FUN_01698b60(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x180));
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 5;
    do {
      lVar5 = *plVar7;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar5 == 0) goto LAB_01188608;
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x160));
LAB_01188480:
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 5;
    do {
      lVar5 = *plVar8;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01188608;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return;
  while ((int)lVar5 != 0) {
LAB_011881ec:
    do {
      if (plVar7 == plVar8) {
        *(long **)(param_1 + 0x1b8) = plVar8;
        plVar8 = *(long **)(param_1 + 0x1e8);
        plVar7 = *(long **)(param_1 + 0x1f0);
        goto LAB_01188234;
      }
      plVar7 = plVar7 + -1;
      plVar6 = (long *)*plVar7;
    } while (plVar6 == (long *)0x0);
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      goto LAB_011881ec;
    }
  }
  goto LAB_01188608;
  while ((int)lVar5 != 0) {
LAB_01188234:
    do {
      if (plVar7 == plVar8) {
        *(long **)(param_1 + 0x1f0) = plVar8;
        *(undefined2 *)(param_1 + 0x247) = 0;
        *(undefined1 *)(param_1 + 0x249) = 0;
        *(undefined1 *)(param_1 + 0x278) = 0;
        *(undefined4 *)(param_1 + 0x240) = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x160));
        *(undefined8 *)(param_1 + 0x140) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
        goto LAB_011882b0;
      }
      plVar7 = plVar7 + -1;
      plVar6 = (long *)*plVar7;
    } while (plVar6 == (long *)0x0);
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      goto LAB_01188234;
    }
  }
LAB_01188608:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


