/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126e660; name: FUN_0126e660
 */


void FUN_0126e660(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  short sVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *local_90 [4];
  long *local_70;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar11 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0126e6dc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0126e6dc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        plVar13 = (long *)(lVar7 + 0x398);
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_0126e708;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_0126e708:
  if (*plVar13 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x3a0));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x3a0));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0126e718;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0126e718:
    lVar5 = *(long *)(lVar7 + 0x2a8);
    if (lVar5 != 0) {
      lVar12 = *(long *)(lVar7 + 0x2f0);
      uVar8 = *(long *)(lVar5 + 0x270) - *(long *)(lVar5 + 0x268) >> 5;
      uVar10 = lVar12 - *(long *)(lVar7 + 0x2e8) >> 6;
      if (uVar10 < uVar8) {
        FUN_01ab37ec((long *)(lVar7 + 0x2e8),uVar8 - uVar10);
      }
      else if (uVar8 < uVar10) {
        lVar9 = *(long *)(lVar7 + 0x2e8) + uVar8 * 0x40;
        while (lVar9 != lVar12) {
          lVar12 = lVar12 + -0x40;
          FUN_00f91cdc(lVar12);
        }
        *(long *)(lVar7 + 0x2f0) = lVar9;
      }
      lVar12 = *(long *)(lVar5 + 0x268);
      lVar5 = *(long *)(lVar5 + 0x270);
      if (lVar12 != lVar5) {
        lVar9 = 0;
        do {
          lVar14 = *(long *)(lVar7 + 0x2e8) + lVar9 * 0x40;
          FUN_00f2b7b8(local_90,lVar7 + 0x270,lVar12,&DAT_03c886bc);
          uVar8 = FUN_00cbf934(lVar14,1,local_90,0,0);
          if (((uVar8 & 1) != 0) && (plVar13 = *(long **)(lVar14 + 0x20), plVar13 != (long *)0x0)) {
            lVar14 = plVar13[6];
            if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar11 == 0) {
              uVar6 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              *(undefined8 *)(lVar14 + 8) = uVar6;
              *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
            }
            else if (sVar11 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            lVar14 = plVar13[6];
            psVar1 = (short *)(lVar14 + 0x1a);
            do {
              sVar11 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar11 == 1) {
              *(undefined8 *)(lVar14 + 0x10) = 0;
              (**(code **)(*plVar13 + 0x50))(plVar13);
            }
            else if (sVar11 == 0) goto LAB_0126e79c;
          }
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          if (local_90[0] != (long *)0x0) {
            (**(code **)(*local_90[0] + 0x20))();
          }
          lVar12 = lVar12 + 0x20;
          lVar9 = lVar9 + 1;
        } while (lVar12 != lVar5);
      }
    }
    *(undefined8 *)(lVar7 + 0x398) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x3a0));
    lVar5 = *(long *)(lVar7 + 8);
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
      return;
    }
    if (sVar11 != 0) {
      return;
    }
LAB_0126e79c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar4) {
    *plVar13 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0126e718;
  goto LAB_0126e708;
}


