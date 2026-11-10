/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01588114; name: FUN_01588114
 */


void FUN_01588114(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  undefined4 uVar9;
  
  plVar5 = (long *)FUN_01400aa8();
  if ((((*plVar5 != 0) && (*(short *)(*plVar5 + 0x1a) != 0)) && (lVar6 = *plVar5, lVar6 != 0)) &&
     (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0158818c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0158818c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        if (*(char *)(lVar6 + 0x130) == '\0') {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(lVar6 + 0x138);
        }
        *(undefined4 *)(param_1 + (long)param_2 * 4 + 0xb8) = uVar9;
        lVar7 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01588220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
          return;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


