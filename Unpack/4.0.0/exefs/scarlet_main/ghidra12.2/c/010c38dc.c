/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c38dc; name: FUN_010c38dc
 */


void FUN_010c38dc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *local_28;
  
  lVar8 = *(long *)(param_1 + 0xa0);
  do {
    if (lVar8 == 0) {
      return;
    }
    uVar9 = (lVar8 + *(long *)(param_1 + 0x98)) - 1;
    plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                        (uVar9 & 0x1ff) * 8);
    if (plVar13 != (long *)0x0) {
      lVar8 = plVar13[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_010c3d70;
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_010c3d98;
    }
    iVar5 = (**(code **)(*plVar13 + 0x68))(plVar13);
    if (iVar5 == 0) {
      lVar8 = plVar13[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_010c39b0:
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x010c3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x50))(plVar13);
        return;
      }
      if (sVar2 != 0) {
        return;
      }
LAB_010c3d30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    if (iVar5 == 1) {
      lVar8 = plVar13[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      if (iVar5 == 2) {
        uVar9 = (*(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0x98)) - 1;
        plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) + (uVar9 >> 6 & 0x3fffffffffffff8))
                           + (uVar9 & 0x1ff) * 8);
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[6];
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_010c3d30;
        }
        lVar11 = *(long *)(param_1 + 0xa0) + -1;
        *(long *)(param_1 + 0xa0) = lVar11;
        lVar10 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
        lVar8 = 0;
        if (lVar10 != 0) {
          lVar8 = lVar10 * 0x40 + -1;
        }
        if (0x3ff < (ulong)(lVar8 - (*(long *)(param_1 + 0x98) + lVar11))) {
          plVar6 = *(long **)(param_1 + 0xa8);
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x68) + -8);
          uVar9 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar6 + 0x18))(plVar6,uVar7,0x1000,8);
          }
          else {
            FUN_00c48fe8(plVar6,uVar7,0x1000,8);
          }
          *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -8;
        }
        plVar6 = (long *)plVar13[0xe];
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[6];
          if (*(long *)(lVar8 + 0x10) == 0) {
LAB_010c3d70:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            *(undefined8 *)(lVar8 + 8) = uVar7;
            *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_010c3d98;
          lVar8 = plVar6[6];
          local_28 = plVar6;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_010c3d70;
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            *(undefined8 *)(lVar8 + 8) = uVar7;
            *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
LAB_010c3d98:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          lVar8 = *(long *)(param_1 + 0x60);
          lVar10 = *(long *)(param_1 + 0x68);
          uVar9 = 0;
          if (lVar10 - lVar8 != 0) {
            uVar9 = (lVar10 - lVar8) * 0x40 - 1;
          }
          uVar12 = *(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0x98);
          if (uVar9 == uVar12) {
            FUN_010c444c(param_1 + 0x58);
            uVar12 = *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0xa0);
            lVar8 = *(long *)(param_1 + 0x60);
            lVar10 = *(long *)(param_1 + 0x68);
          }
          if (lVar10 == lVar8) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(lVar8 + (uVar12 >> 6 & 0x3fffffffffffff8)) + (uVar12 & 0x1ff) * 8;
          }
          FUN_010c3de0(param_1 + 0xa8,lVar8,&local_28);
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          if (local_28 != (long *)0x0) {
            lVar8 = local_28[6];
            psVar1 = (short *)(lVar8 + 0x1a);
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
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*local_28 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_010c3d30;
          }
          lVar8 = plVar6[6];
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))(plVar6);
          }
          else if (sVar2 == 0) goto LAB_010c3d30;
        }
        lVar8 = plVar13[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_010c39b0;
      }
      lVar8 = plVar13[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar2 == 0) goto LAB_010c3d30;
    lVar8 = *(long *)(param_1 + 0xa0);
  } while( true );
}


