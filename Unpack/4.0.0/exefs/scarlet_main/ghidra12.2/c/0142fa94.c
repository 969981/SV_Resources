/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142fa94; name: FUN_0142fa94
 */


undefined8 FUN_0142fa94(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_48;
  undefined8 *local_40;
  char local_38;
  
  uVar9 = *param_2;
  FUN_0142fba8(&local_48);
  lVar5 = local_48;
  local_48 = 0;
  if (lVar5 != 0) {
    if ((local_38 != '\0') && (plVar6 = *(long **)(lVar5 + 0x18), plVar6 != (long *)0x0)) {
      lVar8 = plVar6[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar6 = (long *)*local_40;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar7 & 1) != 0) && (lVar8 = FUN_00c4e600(), 0 < *(int *)(lVar8 + 0x12c8))) {
      FUN_00c48fe8(plVar6,lVar5,0x20,8);
      return uVar9;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0x20,8);
  }
  return uVar9;
}


