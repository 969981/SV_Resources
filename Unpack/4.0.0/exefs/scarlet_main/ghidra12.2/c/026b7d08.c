/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b7d08; name: FUN_026b7d08
 */


undefined4 FUN_026b7d08(long *param_1,code *param_2,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
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
        if (cVar4 != '\0') goto LAB_026b7d64;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_026b7d64:
        bVar8 = false;
      }
      if (bVar8) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return 0;
        }
        plVar2 = (long *)(lVar7 + -0x28 + ((long)param_3 >> 1));
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar2);
        }
        uVar5 = (*param_2)(plVar2,*param_4);
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
          return uVar5;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return uVar5;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
}


