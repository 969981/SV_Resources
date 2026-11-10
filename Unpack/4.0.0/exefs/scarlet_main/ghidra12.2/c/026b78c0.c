/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b78c0; name: FUN_026b78c0
 */


uint FUN_026b78c0(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  lVar5 = *param_1;
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
LAB_026b78d4:
    uVar4 = 0;
  }
  else {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_026b791c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026b791c:
        bVar7 = false;
      }
      if (bVar7) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)(lVar5 + -0x28 + ((long)param_3 >> 1)));
          }
          uVar4 = (*param_2)();
          lVar6 = *(long *)(lVar5 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))();
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_026b78d4;
      }
      uVar4 = 0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return uVar4 & 1;
}


