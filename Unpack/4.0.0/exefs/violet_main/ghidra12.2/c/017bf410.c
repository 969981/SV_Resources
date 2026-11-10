/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017bf410; name: FUN_017bf410
 */


void FUN_017bf410(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar11 = (long *)*param_2;
      plVar9 = (long *)param_2[3];
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)param_2[4];
        plVar8 = plVar9;
        if (plVar10 != plVar9) {
          do {
            plVar10 = plVar10 + -1;
            plVar8 = (long *)*plVar10;
            if (plVar8 != (long *)0x0) {
              lVar6 = plVar8[6];
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
                (**(code **)(*plVar8 + 0x50))();
              }
              else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          } while (plVar10 != plVar9);
          plVar8 = (long *)param_2[3];
        }
        lVar6 = param_2[5];
        plVar10 = (long *)param_2[6];
        param_2[4] = (long)plVar9;
        uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,plVar8,lVar6 - (long)plVar8,8);
        }
        else {
          FUN_00c48fe8(plVar10,plVar8,lVar6 - (long)plVar8,8);
        }
      }
      plVar9 = *(long **)(param_1 + 0x38);
      uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,param_2,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar9,param_2,0x50,8);
      }
      param_2 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  return;
}


