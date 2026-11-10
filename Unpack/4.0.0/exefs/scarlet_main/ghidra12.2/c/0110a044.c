/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110a044; name: FUN_0110a044
 */


void FUN_0110a044(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = (long)&DAT_045d20b0;
  param_1[4] = (long)&PTR_LAB_045d20f0;
  FUN_0110a1e4(param_1 + 0x10,&DAT_00003010 + *(long *)(param_1[6] + 0x30));
  FUN_0110a1f4((long)param_1 + 0x9c,&DAT_00003010 + *(long *)(param_1[6] + 0x30));
  FUN_0110a1ec(param_1 + 0xb,&DAT_00003010 + *(long *)(param_1[6] + 0x30));
  FUN_0110a1e0((long)param_1 + 0x9c);
  FUN_0110a1dc(param_1 + 0x10);
  FUN_0110a1d8(param_1 + 0xb);
  lVar10 = param_1[7];
  param_1[7] = 0;
  if (lVar10 != 0) {
    plVar7 = (long *)param_1[8];
    lVar3 = param_1[9];
    lVar11 = param_1[10];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar10,lVar3,lVar11);
        goto LAB_0110a0e0;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar3,lVar11);
  }
LAB_0110a0e0:
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x0110a138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


