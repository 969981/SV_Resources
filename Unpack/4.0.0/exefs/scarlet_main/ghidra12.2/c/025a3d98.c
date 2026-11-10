/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025a3d98; name: FUN_025a3d98
 */


uint FUN_025a3d98(long *param_1,code *param_2,ulong param_3,char *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  lVar6 = *param_1;
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
LAB_025a3dac:
    uVar5 = 0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_025a3df8;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_025a3df8:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + -0x28);
        if (lVar6 != 0) {
          plVar2 = (long *)((long)plVar7 + ((long)param_3 >> 1));
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *plVar2);
          }
          uVar5 = (*param_2)(plVar2,*param_4 != '\0');
          lVar6 = *(long *)(lVar6 + 8);
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
            (**(code **)(*plVar7 + 0x50))(plVar7);
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
        goto LAB_025a3dac;
      }
      uVar5 = 0;
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return uVar5 & 1;
}


