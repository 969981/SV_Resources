/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0f040; name: FUN_00f0f040
 */


void FUN_00f0f040(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  long *local_70;
  long *local_68;
  
  iVar7 = 0;
  do {
    FUN_00f0f440(&local_68,param_1,iVar7);
    plVar9 = local_68;
    if (local_68 != (long *)0x0) {
      plVar8 = (long *)local_68[9];
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[6];
        if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00f0f390:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar5;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_00f0f3b8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      lVar11 = plVar8[0x11];
      uVar10 = (uint)lVar11;
      if (uVar10 != 0) {
        uVar12 = 0;
        while( true ) {
          if ((uVar12 < (uint)lVar11) &&
             (plVar9 = *(long **)(*(long *)(plVar8[9] +
                                           ((ulong)(plVar8[0x10] + (long)(int)uVar12) >> 6 &
                                           0x3fffffffffffff8)) +
                                 (plVar8[0x10] + (long)(int)uVar12 & 0x1ffU) * 8),
             plVar9 != (long *)0x0)) {
            lVar11 = plVar9[6];
            if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00f0f390;
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 0) {
              uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              *(undefined8 *)(lVar11 + 8) = uVar5;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) goto LAB_00f0f3b8;
            uVar5 = *(undefined8 *)(param_1 + 0x58);
            lVar11 = plVar9[6];
            local_70 = plVar9;
            if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00f0f390;
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 0) {
              uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))(*(undefined8 **)(lVar11 + 0x10))
              ;
              *(undefined8 *)(lVar11 + 8) = uVar6;
              bVar13 = false;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
            }
            else {
              if (sVar2 == -1) goto LAB_00f0f3b8;
              bVar13 = false;
            }
          }
          else {
            uVar5 = *(undefined8 *)(param_1 + 0x58);
            plVar9 = (long *)0x0;
            local_70 = (long *)0x0;
            bVar13 = true;
          }
          FUN_0123d5e0(uVar5,&local_70);
          if (local_70 != (long *)0x0) {
            lVar11 = local_70[6];
            psVar1 = (short *)(lVar11 + 0x1a);
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
              *(undefined8 *)(lVar11 + 0x10) = 0;
              (**(code **)(*local_70 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00f0f350;
          }
          if (!bVar13) {
            lVar11 = plVar9[6];
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar13) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar11 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar2 == 0) goto LAB_00f0f350;
          }
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar10) break;
          lVar11 = plVar8[0x11];
        }
        plVar9 = local_68;
      }
      FUN_00f0f5f8(plVar9[9] + 0x40);
      lVar11 = plVar8[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) goto LAB_00f0f350;
      if (local_68 != (long *)0x0) {
        lVar11 = local_68[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar13) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*local_68 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_00f0f350:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 5) {
      return;
    }
  } while( true );
}


