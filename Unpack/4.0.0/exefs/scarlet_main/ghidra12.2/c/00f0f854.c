/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0f854; name: FUN_00f0f854
 */


void FUN_00f0f854(long param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  char cVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  FUN_00f0f440(&local_38,param_1,0xff);
  if (local_38 == (long *)0x0) {
    return;
  }
  plVar7 = (long *)local_38[9];
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00f0fcdc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))(*(undefined8 **)(lVar10 + 0x10));
      *(undefined8 *)(lVar10 + 8) = uVar8;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_00f0fd04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar10 = plVar7[0x11];
  uVar9 = (uint)lVar10;
  if (uVar9 != 0) {
    uVar13 = 0;
LAB_00f0f9a4:
    if (uVar13 < (uint)lVar10) {
      plVar11 = *(long **)(*(long *)(plVar7[9] +
                                    ((ulong)(plVar7[0x10] + (long)(int)uVar13) >> 6 &
                                    0x3fffffffffffff8)) +
                          (plVar7[0x10] + (long)(int)uVar13 & 0x1ffU) * 8);
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00f0fcdc;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar2 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar8;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_00f0fd04;
      }
    }
    else {
      plVar11 = (long *)0x0;
    }
    if (*(long *)((int *)plVar11[8] + 2) == 0) {
      uVar12 = 4;
LAB_00f0fa68:
      if (plVar11 != (long *)0x0) goto LAB_00f0fa6c;
    }
    else {
      iVar3 = *(int *)plVar11[8];
      cVar6 = FUN_017f814c(*(undefined8 *)(param_1 + 0x30));
      if (cVar6 == '\0') {
        if (iVar3 != 0x3f) goto LAB_00f0fab4;
        FUN_0123d184(&local_60,param_1,0xff);
        plVar5 = local_60;
        if (local_60 != (long *)0x0) {
          FUN_02997dec(&local_68,param_1);
          FUN_0123d4a0(plVar5,&local_68);
          if (local_68 != (long *)0x0) {
            lVar10 = local_68[6];
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*local_68 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00f0f934;
          }
          if (local_60 != (long *)0x0) {
            lVar10 = local_60[6];
            psVar1 = (short *)(lVar10 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar10 + 0x10) = 0;
              (**(code **)(*local_60 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00f0f934;
          }
        }
        uVar12 = 2;
        goto LAB_00f0fa68;
      }
      if (iVar3 != 2) {
LAB_00f0fab4:
        uVar12 = 0;
        goto LAB_00f0fa68;
      }
      local_58 = plVar11;
      if (plVar11 == (long *)0x0) {
        FUN_00f106a4(param_1,0xff,&local_58);
        goto LAB_00f0fa9c;
      }
      lVar10 = plVar11[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00f0fcdc;
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar8;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_00f0fd04;
      plVar5 = local_58;
      FUN_00f106a4(param_1,0xff,&local_58);
      if (plVar5 == (long *)0x0) {
        uVar12 = 0;
        goto LAB_00f0fa6c;
      }
      lVar10 = plVar5[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))(plVar5);
      }
      else if (sVar2 == 0) goto LAB_00f0f934;
      uVar12 = 0;
LAB_00f0fa6c:
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar2 == 0) goto LAB_00f0f934;
    }
    if ((uVar12 | 4) != 4) goto LAB_00f0fb34;
LAB_00f0fa9c:
    uVar13 = uVar13 + 1;
    if (uVar13 == uVar9) goto LAB_00f0fb34;
    lVar10 = plVar7[0x11];
    goto LAB_00f0f9a4;
  }
LAB_00f0f8e4:
  lVar10 = plVar7[6];
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar6 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))();
  }
  else if (sVar2 == 0) goto LAB_00f0f934;
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_00f0f934:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
LAB_00f0fb34:
  FUN_00f0f5f8(local_38[9] + 0x40);
  goto LAB_00f0f8e4;
}


