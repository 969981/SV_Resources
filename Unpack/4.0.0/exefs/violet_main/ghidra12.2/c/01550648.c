/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01550648; name: FUN_01550648
 */


void FUN_01550648(long param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long *local_70;
  long local_68;
  
  plVar11 = *(long **)(param_1 + 0x270);
  plVar12 = *(long **)(param_1 + 0x278);
  if (plVar11 != plVar12) {
    do {
      lVar8 = *plVar11;
      lVar4 = plVar11[1];
      lVar3 = plVar11[2];
      plVar5 = (long *)plVar11[3];
      if (plVar5 == (long *)0x0) {
        local_68 = 0;
        local_70 = (long *)0x0;
        local_90 = &local_68;
        local_88 = lVar8;
        local_80 = lVar4;
        lStack_78 = lVar3;
      }
      else {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        local_68 = 0;
        local_90 = &local_68;
        local_88 = lVar8;
        local_80 = lVar4;
        lStack_78 = lVar3;
        local_70 = plVar5;
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      lVar8 = FUN_01550cb8(param_1 + 0x28);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x40) == local_88)) && (*local_90 == 0)) {
        *local_90 = lVar8;
      }
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 != (long *)0x0) {
        lVar8 = plVar10[6];
        if (*(long *)(lVar8 + 0x10) == 0) {
LAB_015508ec:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar2 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          *(undefined8 *)(lVar8 + 8) = uVar9;
          *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0155090c;
        lVar8 = plVar10[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar2 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar2 == 0) goto LAB_01550934;
        plVar10 = *(long **)(param_1 + 0x78);
        if (plVar10 == (long *)0x0) {
          FUN_0155095c(0,&local_90);
        }
        else {
          lVar8 = plVar10[6];
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_015508ec;
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar2 == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            *(undefined8 *)(lVar8 + 8) = uVar9;
            *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
LAB_0155090c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          FUN_0155095c(plVar10,&local_90);
          lVar8 = plVar10[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar2 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar2 == 0) {
LAB_01550934:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      lVar8 = local_68;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (lVar8 != 0) {
        if (*(int *)(param_1 + 0x2f4) == (int)plVar11[4]) {
          FUN_01550dd8(lVar8,1);
          FUN_01550e9c(lVar8);
        }
        else {
          FUN_01550dd8(lVar8,0);
        }
      }
      plVar11 = plVar11 + 5;
    } while (plVar11 != plVar12);
  }
  return;
}


