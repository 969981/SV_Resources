/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193b0e8; name: FUN_0193b0e8
 */


void FUN_0193b0e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *local_38;
  
  if (((DAT_0483ac50 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0483ac50), iVar6 != 0)) {
    FUN_00100190(&LAB_02a16748,&DAT_0483ac40,&PTR_LOOP_04483000,param_3);
    __cxa_guard_release(&DAT_0483ac50);
  }
  lVar5 = DAT_0483ac40;
  DAT_0483ac58 = DAT_0483ac40;
  FUN_0193b578(&local_38,*(undefined8 *)(DAT_0483ac40 + 8),param_1,param_2,param_3);
  FUN_0193b3e4(local_38,param_1,param_2,param_3);
  lVar10 = *(long *)(lVar5 + 0x38);
  lVar9 = lVar5 + 0x30;
  do {
    if (lVar9 == lVar10) goto LAB_0193b1d8;
    plVar11 = *(long **)(lVar10 + 0x10);
    if (plVar11 == (long *)0x0) {
      uVar7 = FUN_0193b3f4(0,&local_38);
      if ((uVar7 & 1) != 0) {
        FUN_01f7ec50(lVar9,lVar10);
        goto LAB_0193b1d8;
      }
    }
    else {
      lVar12 = plVar11[6];
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar12 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar8;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      uVar7 = FUN_0193b3f4(plVar11,&local_38);
      if ((uVar7 & 1) != 0) {
        FUN_01f7ec50(lVar9,lVar10);
        lVar10 = plVar11[6];
        psVar1 = (short *)(lVar10 + 0x1a);
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
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) goto LAB_0193b2f0;
LAB_0193b1d8:
        if (2 < *(ulong *)(lVar5 + 0x40)) {
          FUN_0193b94c(lVar9);
        }
        FUN_0193b438(lVar9,&local_38);
        if (local_38 != (long *)0x0) {
          lVar9 = local_38[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_38 + 0x50))();
          }
          else if (sVar2 == 0) {
LAB_0193b2f0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        return;
      }
      lVar12 = plVar11[6];
      psVar1 = (short *)(lVar12 + 0x1a);
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
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar2 == 0) goto LAB_0193b2f0;
    }
    lVar10 = *(long *)(lVar10 + 8);
  } while( true );
}


