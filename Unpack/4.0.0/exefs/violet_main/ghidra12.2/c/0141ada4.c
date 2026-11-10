/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0141ada4; name: FUN_0141ada4
 */


void FUN_0141ada4(undefined8 param_1,undefined8 param_2,long param_3,int *param_4)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  
  if (((param_4 != (int *)0x0) && (4 < *(ushort *)((long)param_4 - (long)*param_4))) &&
     (uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar8 != 0)) {
    puVar2 = (uint *)((long)param_4 + uVar8);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    puVar10 = puVar2 + 1;
    uVar8 = (ulong)*puVar2;
    if (uVar8 != 0) {
      puVar2 = puVar10 + uVar8;
      do {
        uVar4 = *puVar10;
        plVar9 = *(long **)(param_3 + 0x48);
        if (plVar9 == (long *)0x0) {
          FUN_0141af6c(param_1,param_2,0,(long)puVar10 + (ulong)uVar4);
        }
        else {
          lVar11 = plVar9[6];
          if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            *(undefined8 *)(lVar11 + 8) = uVar7;
            *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          FUN_0141af6c(param_1,param_2,plVar9,(long)puVar10 + (ulong)uVar4);
          lVar11 = plVar9[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar2);
    }
  }
  return;
}


