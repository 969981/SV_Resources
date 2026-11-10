/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01638350; name: FUN_01638350
 */


void FUN_01638350(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *local_68;
  
  lVar10 = *param_2;
  if (param_2[1] != lVar10) {
    uVar12 = 0;
    do {
      plVar9 = *(long **)(lVar10 + uVar12 * 8);
      if (plVar9 == (long *)0x0) {
        local_68 = (long *)0x0;
        FUN_01638590(*param_1,param_1[1],param_1[2],&local_68);
      }
      else {
        lVar10 = plVar9[6];
        if (*(long *)(lVar10 + 0x10) == 0) {
LAB_01638520:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar7;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_01638540;
        uVar7 = *param_1;
        uVar3 = param_1[1];
        uVar11 = param_1[2];
        lVar10 = plVar9[6];
        local_68 = plVar9;
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_01638520;
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar8;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_01638540:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        plVar6 = local_68;
        FUN_01638590(uVar7,uVar3,uVar11,&local_68);
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))(plVar6);
          }
          else if (sVar2 == 0) goto LAB_01638568;
        }
        lVar10 = plVar9[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar2 == 0) {
LAB_01638568:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar10 = *param_2;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)(param_2[1] - lVar10 >> 3));
  }
  return;
}


