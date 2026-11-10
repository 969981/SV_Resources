/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014274f8; name: FUN_014274f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014274f8(long *param_1,long *param_2,undefined4 param_3,ulong param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_38 [8];
  
  FUN_00d1a240(param_1,0x80058080);
  *param_1 = (long)&DAT_045dbc08;
  param_1[4] = (long)&PTR_LAB_045dbe68;
  param_1[5] = (long)&DAT_045dbf90;
  param_1[6] = (long)&PTR_LAB_045dbfe8;
  param_1[7] = (long)&PTR_LAB_045dc010;
  param_1[0x24] = (long)&PTR_LAB_045dc048;
  param_1[0x25] = (long)&PTR_LAB_045dc108;
  param_1[0x28] = (long)&PTR_LAB_045dc408;
  param_1[0x26] = (long)&PTR_LAB_045dc210;
  param_1[0x27] = (long)&PTR_LAB_045dc2f0;
  param_1[0x29] = *param_2;
  param_1[0x2a] = param_2[1];
  param_1[0x2b] = param_2[2];
  plVar7 = (long *)param_2[3];
  param_1[0x2c] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  lVar8 = FUN_01427d4c(DAT_0485a0e0,param_2);
  lVar6 = _UNK_03caaaa8;
  lVar9 = _DAT_03caaaa0;
  param_1[0x2d] = lVar8;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2f] = lVar6;
  param_1[0x2e] = lVar9;
  *(undefined8 *)((long)param_1 + 0x184) = 0x45bb80003ea3d70a;
  *(undefined8 *)((long)param_1 + 0x18c) = 0x3fe38e393f060a92;
  *(undefined8 *)((long)param_1 + 0x194) = 0x44700000c4700000;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x44070000c4070000;
  lVar8 = _DAT_03cac220;
  lVar6 = _UNK_03cabe68;
  lVar9 = _DAT_03cabe60;
  param_1[0x4b] = _UNK_03cac228;
  param_1[0x4a] = lVar8;
  param_1[0x4d] = lVar6;
  param_1[0x4c] = lVar9;
  lVar6 = _UNK_03cabe58;
  lVar9 = _DAT_03cabe50;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x55] = lVar6;
  param_1[0x54] = lVar9;
  param_1[0x57] = lVar6;
  param_1[0x56] = lVar9;
  *(undefined4 *)((long)param_1 + 0x2fc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x5e,0,1);
  param_1[0x60] = 0x41200000;
  param_1[0x5a] = param_1[0x5a] | 0x10;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  if ((param_4 & 1) != 0) {
    FUN_01522e80(param_1);
  }
  lVar9 = FUN_0142778c(auStack_38,param_1[1]);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1 = param_1 + 0x62;
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar6 = *plVar2;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *param_1 = lVar9;
  return;
}


