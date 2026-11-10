/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc8274; name: FUN_00dc8274
 */


undefined1  [16] FUN_00dc8274(long param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((*(long *)(param_1 + 0x148) != 0) && (*(char *)(param_1 + 0xa8) != '\0')) {
    uVar5 = FUN_00dc83dc(param_1 + 0x148,*(undefined8 *)(param_1 + 0xa0),param_2,
                         *(undefined8 *)(param_1 + 8));
    plVar6 = *(long **)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x17c) = 3;
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (plVar6 != (long *)0x0) {
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
      else if (sVar2 == 0) goto LAB_00dc8384;
    }
    plVar6 = *(long **)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (plVar6 != (long *)0x0) {
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
LAB_00dc8384:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      uVar7 = 0x100000003;
      goto LAB_00dc82e8;
    }
  }
  auVar9 = FUN_00dc8f28(param_1 + 0xb0,param_2,param_3);
  uVar7 = auVar9._0_8_;
  *(undefined4 *)(param_1 + 0x17c) = 1;
  uVar5 = auVar9._8_8_ & 0xffffffff;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0xb8);
LAB_00dc82e8:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar7;
  return auVar9;
}


