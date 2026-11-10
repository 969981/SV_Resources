/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012548d0; name: FUN_012548d0
 */


void FUN_012548d0(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *local_58;
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  undefined1 local_40 [16];
  
  *param_2 = 0;
  FUN_01254ab4(param_1,local_44,local_48,local_4c,*param_3,*(undefined2 *)(param_3 + 1),
               *(undefined1 *)((long)param_3 + 10),*(undefined4 *)((long)param_3 + 0xc),local_40);
  if (local_48[0] != '\0') {
    uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar6 = FUN_01689a40(param_1,uVar6);
    uVar8 = FUN_0124e480(param_1);
    FUN_01254b34(uVar8,uVar6,*(undefined2 *)(param_3 + 1));
  }
  if (local_4c[0] != '\0') {
    FUN_0124e480(param_1);
    FUN_01242424(&local_58);
    (**(code **)(*local_58 + 0x48))(local_58,8,1);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 5;
      do {
        lVar4 = *plVar1;
        iVar7 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (local_44[0] == '\x02') {
    uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
    uVar6 = FUN_01689a40(param_1,uVar6);
    bVar5 = FUN_01a2db38(param_1,uVar6,local_40[0]);
    *param_2 = bVar5 & 1;
    FUN_019fb248(param_1,local_40);
  }
  else if (local_44[0] == '\0') {
    if ((local_4c[0] != '\0') && (iVar7 = FUN_0123ee04(param_1), iVar7 == 0)) {
      uVar8 = FUN_01582534(param_1);
      FUN_02988cf8(uVar8,*(undefined2 *)(param_3 + 1));
    }
  }
  else if ((local_44[0] == '\x01') && (uVar9 = FUN_02988cb8(param_1,*param_3), (uVar9 & 1) != 0)) {
    FUN_0123de68(param_1);
    uVar8 = FUN_0123de70();
    FUN_0123fa5c(uVar8,8);
  }
  uVar8 = FUN_01246e90(param_1);
  FUN_01255420(uVar8,*param_3,*(undefined2 *)(param_3 + 1));
  return;
}


