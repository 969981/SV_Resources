/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b0a60; name: FUN_010b0a60
 */


void FUN_010b0a60(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *local_18;
  
  FUN_010b0e7c(&local_18,param_1,0,param_2[1]);
  if (local_18 != (long *)0x0) {
    plVar6 = local_18 + 5;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_010b0e54;
    plVar6 = (long *)param_2[6];
    param_2[6] = local_18;
    if (plVar6 != (long *)0x0) {
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
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
    plVar6 = local_18;
    FUN_019b7db4(*param_2,local_18);
    if (plVar6 != (long *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
  }
  FUN_010b0e7c(&local_18,param_1,1,param_2[2]);
  if (local_18 != (long *)0x0) {
    plVar6 = local_18 + 5;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_010b0e54;
    plVar6 = (long *)param_2[7];
    param_2[7] = local_18;
    if (plVar6 != (long *)0x0) {
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
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
    plVar6 = local_18;
    FUN_019b7db4(*param_2,local_18);
    if (plVar6 != (long *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
  }
  FUN_010b0e7c(&local_18,param_1,2,param_2[3]);
  if (local_18 != (long *)0x0) {
    plVar6 = local_18 + 5;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_010b0e54;
    plVar6 = (long *)param_2[8];
    param_2[8] = local_18;
    if (plVar6 != (long *)0x0) {
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
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
    plVar6 = local_18;
    FUN_019b7db4(*param_2,local_18);
    if (plVar6 != (long *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
  }
  FUN_010b0e7c(&local_18,param_1,3,param_2[4]);
  if (local_18 != (long *)0x0) {
    plVar6 = local_18 + 5;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_010b0e54;
    plVar6 = (long *)param_2[9];
    param_2[9] = local_18;
    if (plVar6 != (long *)0x0) {
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
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
    plVar6 = local_18;
    FUN_019b7db4(*param_2,local_18);
    if (plVar6 != (long *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
  }
  FUN_010b0e7c(&local_18,param_1,4,param_2[5]);
  if (local_18 != (long *)0x0) {
    plVar6 = local_18 + 5;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_010b0e54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar6 = (long *)param_2[10];
    param_2[10] = local_18;
    if (plVar6 != (long *)0x0) {
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
      }
      else if ((int)lVar5 == 0) goto LAB_010b0d78;
    }
    FUN_019b7db4(*param_2,local_18);
    if (local_18 != (long *)0x0) {
      plVar6 = local_18 + 5;
      do {
        lVar5 = *plVar6;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
      else if ((int)lVar5 == 0) {
LAB_010b0d78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


