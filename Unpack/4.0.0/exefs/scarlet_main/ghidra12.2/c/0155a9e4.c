/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155a9e4; name: FUN_0155a9e4
 */


void FUN_0155a9e4(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar3 = (long *)param_1[0x24];
  plVar8 = (long *)param_1[0x25];
  *param_1 = &DAT_0460a2e0;
  param_1[4] = &PTR_LAB_0460a428;
  param_1[5] = &DAT_0460a550;
  param_1[6] = &PTR_LAB_0460a5a8;
  param_1[7] = &PTR_LAB_0460a5d0;
  do {
    while( true ) {
      do {
        if (plVar8 == plVar3) {
          param_1[0x25] = plVar3;
          FUN_0155aab0(param_1 + 0x24);
          FUN_00e6bfa4(param_1);
          return;
        }
        plVar8 = plVar8 + -1;
        plVar6 = (long *)*plVar8;
      } while (plVar6 == (long *)0x0);
      lVar7 = plVar6[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 != 1) break;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
  } while (sVar2 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


