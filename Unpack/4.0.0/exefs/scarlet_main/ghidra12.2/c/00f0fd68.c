/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0fd68; name: FUN_00f0fd68
 */


void FUN_00f0fd68(long param_1)

{
  short *psVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  short sVar10;
  int *piVar11;
  long lVar12;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  FUN_00f10384(&local_38,*(undefined8 *)(param_1 + 0x58),0);
  if (local_38 == (long *)0x0) {
    return;
  }
  piVar11 = (int *)local_38[8];
  uVar3 = *(undefined1 *)((long)piVar11 + 0x19);
  if (*(long *)(piVar11 + 2) == 0) {
    iVar2 = *piVar11;
    if (iVar2 == 0x51) {
      local_48 = local_38;
      lVar12 = local_38[6];
      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f1032c;
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar7;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar10 == -1) goto LAB_00f1034c;
      plVar8 = local_48;
      FUN_02997cec(param_1,&local_48);
      if (plVar8 != (long *)0x0) {
        lVar12 = plVar8[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar10 == 0) goto LAB_00f0ffbc;
      }
      local_50 = local_38;
      if (local_38 == (long *)0x0) {
        FUN_00f10544(param_1,&local_50);
      }
      else {
        lVar12 = local_38[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f1032c;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar7;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar10 == -1) goto LAB_00f1034c;
        plVar8 = local_50;
        FUN_00f10544(param_1,&local_50);
        if (plVar8 != (long *)0x0) {
          lVar12 = plVar8[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00f0ff84:
          if (sVar10 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            pcVar9 = *(code **)(*plVar8 + 0x50);
            goto LAB_00f100e4;
          }
LAB_00f0ff8c:
          if (sVar10 == 0) goto LAB_00f0ffbc;
        }
      }
    }
    else if (iVar2 == 0x4f) {
      local_40 = local_38;
      lVar12 = local_38[6];
      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f1032c;
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar7;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar10 == -1) goto LAB_00f1034c;
      plVar8 = local_40;
      FUN_02997b08(param_1,uVar3,&local_40);
      if (plVar8 != (long *)0x0) {
        lVar12 = plVar8[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 != 1) goto LAB_00f0ff8c;
        *(undefined8 *)(lVar12 + 0x10) = 0;
        pcVar9 = *(code **)(*plVar8 + 0x50);
LAB_00f100e4:
        (*pcVar9)(plVar8);
      }
    }
    else if ((iVar2 == 0x46) && (*(long *)(param_1 + 0x48) != 0)) {
      FUN_02997afc();
    }
  }
  else {
    local_58 = local_38;
    lVar12 = local_38[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_00f1032c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar7;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar10 == -1) goto LAB_00f1034c;
    plVar8 = local_58;
    uVar6 = FUN_00f106a4(param_1,uVar3,&local_58);
    local_60 = local_38;
    if (plVar8 != (long *)0x0) {
      lVar12 = plVar8[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
        local_60 = local_38;
      }
      else if (sVar10 == 0) goto LAB_00f0ffbc;
    }
    local_38 = local_60;
    if ((uVar6 & 1) != 0) {
      if (local_60 == (long *)0x0) {
        FUN_00f108b4(param_1,uVar3,&local_60);
      }
      else {
        lVar12 = local_60[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f1032c;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar7;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar10 == -1) goto LAB_00f1034c;
        FUN_00f108b4(param_1,uVar3,&local_60);
        if (local_60 != (long *)0x0) {
          lVar12 = local_60[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))(local_60);
          }
          else if (sVar10 == 0) goto LAB_00f0ffbc;
        }
      }
      local_68 = local_38;
      if (local_38 == (long *)0x0) {
        FUN_00f10544(param_1,&local_68);
      }
      else {
        lVar12 = local_38[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f1032c;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar7;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar10 == -1) goto LAB_00f1034c;
        plVar8 = local_68;
        FUN_00f10544(param_1,&local_68);
        if (plVar8 != (long *)0x0) {
          lVar12 = plVar8[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar10 == 0) goto LAB_00f0ffbc;
        }
      }
      local_70 = local_38;
      if (local_38 == (long *)0x0) {
        FUN_00f10d38(param_1,&local_70);
      }
      else {
        lVar12 = local_38[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f1032c;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar7;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar10 == -1) {
LAB_00f1034c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        plVar8 = local_70;
        FUN_00f10d38(param_1,&local_70);
        if (plVar8 != (long *)0x0) {
          lVar12 = plVar8[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_00f0ff84;
        }
      }
    }
  }
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar10 == 0) {
LAB_00f0ffbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


