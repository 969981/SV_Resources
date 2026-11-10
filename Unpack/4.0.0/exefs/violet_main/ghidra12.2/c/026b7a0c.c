/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026b7a0c; name: FUN_026b7a0c
 */


uint FUN_026b7a0c(long *param_1,code *param_2,ulong param_3,char *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  
  lVar7 = *param_1;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
LAB_026b7a20:
    uVar5 = 0;
  }
  else {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_026b7a6c;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026b7a6c:
        bVar8 = false;
      }
      if (bVar8) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar2 = (long *)(lVar7 + -0x28 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          uVar5 = (*param_2)(plVar2,*param_4 != '\0');
          lVar6 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))();
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_026b7a20;
      }
      uVar5 = 0;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return uVar5 & 1;
}


