/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02df6fd0; name: FUN_02df6fd0
 */


void FUN_02df6fd0(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    uVar5 = *param_1;
    if (*(short *)(lVar7 + 0x1a) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02df7028;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02df7028:
          bVar8 = false;
        }
        if (bVar8) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)param_1[3];
          }
          FUN_0236cff8(uVar5,param_1[1],uVar4,param_1[2],param_1 + 6);
          lVar6 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02df70d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
            return;
          }
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
  }
  return;
}


