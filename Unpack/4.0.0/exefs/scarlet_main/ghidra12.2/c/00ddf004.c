/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ddf004; name: FUN_00ddf004
 */


undefined1  [16] FUN_00ddf004(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long local_28;
  
  (**(code **)(*param_1 + 0x88))(&local_28);
  plVar6 = (long *)param_1[0x3e];
  param_1[0x3e] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x3e] = local_28;
  auVar9 = FUN_00cf8cd8(param_1);
  uVar8 = auVar9._0_8_;
  uVar7 = uVar8 >> 0x28;
  if ((uVar8 >> 0x20 & 0xff) == 0) {
    uVar8 = 0;
  }
  else if (auVar9._8_4_ == 0) {
    auVar9 = (**(code **)(*param_1 + 0x80))(param_1);
    uVar8 = auVar9._0_8_ >> 0x20;
    uVar7 = auVar9._0_8_ >> 0x28;
    FUN_00cf8c04(param_1);
  }
  else {
    uVar8 = uVar8 >> 0x20;
  }
  auVar10._0_8_ = uVar7 << 0x28 | (uVar8 & 0xff) << 0x20 | auVar9._0_8_ & 0xffffffff;
  auVar10._8_8_ = auVar9._8_8_ & 0xffffffff;
  return auVar10;
}


