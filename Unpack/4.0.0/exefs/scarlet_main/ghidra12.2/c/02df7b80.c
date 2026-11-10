/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02df7b80; name: FUN_02df7b80
 */


void FUN_02df7b80(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    uVar6 = *param_1;
    if (*(short *)(lVar8 + 0x1a) != 0) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_02df7bd8;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02df7bd8:
          bVar4 = false;
        }
        if (bVar4) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return;
          }
          if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)param_1[3];
          }
          FUN_00dc21b8(uVar6,param_1[1],uVar5,param_1[2],param_1 + 6);
          lVar7 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02df7c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
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


