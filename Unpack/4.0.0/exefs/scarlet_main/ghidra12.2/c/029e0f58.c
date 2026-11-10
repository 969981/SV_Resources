/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e0f58; name: FUN_029e0f58
 */


void FUN_029e0f58(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  
  if (((param_5 == 1) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) &&
     (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_029e0fbc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_029e0fbc:
        bVar6 = false;
      }
      if (bVar6) {
        lVar5 = *(long *)(lVar5 + 0x10);
        plVar2 = (long *)0x0;
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + -0x28);
        }
        if ((param_2 != 0) && (plVar2 != (long *)0x0)) {
          FUN_029dee00(plVar2);
          FUN_029df988(plVar2,param_2);
        }
        if (lVar5 == 0) {
          return;
        }
        lVar5 = plVar2[0x13];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x029e106c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x50))(plVar2);
          return;
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


