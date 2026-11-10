/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143c8f4; name: FUN_0143c8f4
 */


undefined8 FUN_0143c8f4(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *local_50;
  long *local_48;
  undefined1 auStack_28 [8];
  
  iVar1 = *(int *)(param_1 + 0x128);
  if (iVar1 == 3) {
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    if (local_48 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_48[9];
    }
    plVar4 = (long *)(lVar9 + 0x110);
    lVar7 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar7) {
      lVar3 = nn::os::GetCurrentThread();
LAB_0143c950:
      if (*plVar4 == 0) goto code_r0x0143c958;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
            while (*plVar4 == 0) {
              cVar2 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar8) {
                *plVar4 = lVar3;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0143c960;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = lVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0143c960:
      bVar8 = false;
      goto LAB_0143c964;
    }
    bVar8 = true;
LAB_0143c964:
    plVar4 = (long *)FUN_0143cdd0(*(undefined8 *)(lVar9 + 0x128),*(undefined8 *)(lVar9 + 0x130));
    if ((*(long **)(lVar9 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_0143cdd0(*(undefined8 *)(lVar9 + 0x160),*(undefined8 *)(lVar9 + 0x168));
      if (*(long **)(lVar9 + 0x168) == plVar4) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = *plVar4 + -0x20;
        }
      }
    }
    else {
      lVar3 = *plVar4 + -0x20;
    }
    if (!bVar8) {
      *(undefined8 *)(lVar9 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x118));
    }
    if (local_48 != (long *)0x0) {
      plVar4 = local_48 + 5;
      do {
        lVar9 = *plVar4;
        iVar1 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *(int *)plVar4 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_0143cd88;
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    if ((lVar3 == 0) || (*(int *)(lVar3 + 0x130) != 3)) goto LAB_0143c9e4;
    FUN_0143cdb0(lVar3,0);
    FUN_0143cea8(param_1);
    uVar6 = 1;
    uVar5 = 0;
LAB_0143ccbc:
    *(undefined4 *)(param_1 + 0x128) = uVar6;
  }
  else {
    if (iVar1 == 2) {
LAB_0143ca80:
      for (lVar9 = *(long *)(param_1 + 0x170); lVar9 != *(long *)(param_1 + 0x178);
          lVar9 = lVar9 + 0x40) {
        if ((*(long *)(lVar9 + 8) == 0) || ((*(byte *)(*(long *)(lVar9 + 8) + 0x1e8) & 1) == 0))
        goto LAB_0143c9e4;
      }
      for (lVar9 = *(long *)(param_1 + 0x1a8); lVar9 != *(long *)(param_1 + 0x1b0);
          lVar9 = lVar9 + 0x40) {
        if ((*(long *)(lVar9 + 8) == 0) || ((*(byte *)(*(long *)(lVar9 + 8) + 0x1e8) & 1) == 0))
        goto LAB_0143c9e4;
      }
      for (lVar9 = *(long *)(param_1 + 0x1e0); lVar9 != *(long *)(param_1 + 0x1e8);
          lVar9 = lVar9 + 0x40) {
        if ((*(long *)(lVar9 + 8) == 0) || ((*(byte *)(*(long *)(lVar9 + 8) + 0x1e8) & 1) == 0))
        goto LAB_0143c9e4;
      }
      *(undefined4 *)(param_1 + 0x128) = 4;
LAB_0143cb0c:
      FUN_00c9e664(&local_50,param_1 + 0xe8);
      lVar9 = 0;
      if (local_48 != (long *)0x0) {
        lVar9 = local_48[9];
      }
      lVar9 = FUN_01086108(lVar9 + 0x108,auStack_28);
      if (local_48 != (long *)0x0) {
        plVar4 = local_48 + 5;
        do {
          lVar3 = *plVar4;
          iVar1 = (int)lVar3 + -1;
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        else if ((int)lVar3 == 0) goto LAB_0143cd88;
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x60))();
      }
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x128) == 2)) {
        FUN_0143d138(param_1);
        FUN_00c9e664(&local_50,param_1 + 0xe8);
        if (local_48 == (long *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = local_48[9];
        }
        plVar4 = (long *)(lVar9 + 0x110);
        lVar7 = *plVar4;
        lVar3 = nn::os::GetCurrentThread();
        if (lVar3 != lVar7) {
          lVar3 = nn::os::GetCurrentThread();
LAB_0143cbbc:
          if (*plVar4 == 0) goto code_r0x0143cbc4;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
          do {
            if (*plVar4 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
                while (*plVar4 == 0) {
                  cVar2 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                  if (bVar8) {
                    *plVar4 = lVar3;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_0143cbcc;
                }
              } while( true );
            }
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *plVar4 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_0143cbcc:
          bVar8 = false;
          goto LAB_0143cbd0;
        }
        bVar8 = true;
LAB_0143cbd0:
        plVar4 = (long *)FUN_0143cdd0(*(undefined8 *)(lVar9 + 0x128),*(undefined8 *)(lVar9 + 0x130))
        ;
        if ((*(long **)(lVar9 + 0x130) == plVar4) || (*plVar4 == 0)) {
          plVar4 = (long *)FUN_0143cdd0(*(undefined8 *)(lVar9 + 0x160),
                                        *(undefined8 *)(lVar9 + 0x168));
          if (*(long **)(lVar9 + 0x168) == plVar4) {
            lVar3 = 0;
          }
          else {
            lVar3 = 0;
            if (*plVar4 != 0) {
              lVar3 = *plVar4 + -0x20;
            }
          }
        }
        else {
          lVar3 = *plVar4 + -0x20;
        }
        if (!bVar8) {
          *(undefined8 *)(lVar9 + 0x110) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x118));
        }
        if (local_48 != (long *)0x0) {
          plVar4 = local_48 + 5;
          do {
            lVar9 = *plVar4;
            iVar1 = (int)lVar9 + -1;
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(int *)plVar4 = iVar1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
          else if ((int)lVar9 == 0) {
LAB_0143cd88:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x60))();
        }
        if (lVar3 != 0) {
          FUN_0143cdb0(lVar3,1);
        }
        uVar6 = 5;
        uVar5 = 1;
        goto LAB_0143ccbc;
      }
    }
    else if (iVar1 == 1) {
      if ((*(long *)(param_1 + 0x138) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x138) + 0x1e8) & 1) != 0)) {
        FUN_0143d3a4(param_1);
        *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x24c);
        *(undefined4 *)(param_1 + 0x128) = 2;
        goto LAB_0143ca80;
      }
    }
    else if (iVar1 == 4) goto LAB_0143cb0c;
LAB_0143c9e4:
    uVar5 = 0;
  }
  return uVar5;
code_r0x0143c958:
  cVar2 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar8) {
    *plVar4 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0143c960;
  goto LAB_0143c950;
code_r0x0143cbc4:
  cVar2 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar8) {
    *plVar4 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0143cbcc;
  goto LAB_0143cbbc;
}


