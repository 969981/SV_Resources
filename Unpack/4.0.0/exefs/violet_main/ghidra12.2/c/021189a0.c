/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021189a0; name: FUN_021189a0
 */


void FUN_021189a0(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_38;
  long *local_18;
  
  FUN_00f10acc(&local_18,param_1,0);
  if (local_18 != (long *)0x0) {
    FUN_00f63734(&local_38,local_18,param_2);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[8];
      uVar5 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      FUN_010a01f8(uVar5,0,*(undefined2 *)(lVar6 + 0x20));
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02118da0;
      }
    }
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02118da0;
    }
  }
  FUN_00f10acc(&local_18,param_1,1);
  if (local_18 != (long *)0x0) {
    FUN_00f63734(&local_38,local_18,param_2);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[8];
      uVar5 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      FUN_010a01f8(uVar5,1,*(undefined2 *)(lVar6 + 0x20));
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02118da0;
      }
    }
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02118da0;
    }
  }
  FUN_00f10acc(&local_18,param_1,2);
  if (local_18 != (long *)0x0) {
    FUN_00f63734(&local_38,local_18,param_2);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[8];
      uVar5 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      FUN_010a01f8(uVar5,2,*(undefined2 *)(lVar6 + 0x20));
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02118da0;
      }
    }
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02118da0;
    }
  }
  FUN_00f10acc(&local_18,param_1,3);
  if (local_18 != (long *)0x0) {
    FUN_00f63734(&local_38,local_18,param_2);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[8];
      uVar5 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      FUN_010a01f8(uVar5,3,*(undefined2 *)(lVar6 + 0x20));
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02118da0;
      }
    }
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02118da0;
    }
  }
  FUN_00f10acc(&local_18,param_1,4);
  if (local_18 != (long *)0x0) {
    FUN_00f63734(&local_38,local_18,param_2);
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[8];
      uVar5 = FUN_010a01f0(*(undefined8 *)(param_1 + 0x38));
      FUN_010a01f8(uVar5,4,*(undefined2 *)(lVar6 + 0x20));
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02118da0;
      }
    }
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_02118da0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


