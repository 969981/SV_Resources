/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ba164; name: FUN_028ba164
 */


void FUN_028ba164(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)&PTR_FUN_045e8120;
  param_1[4] = (long)&PTR_LAB_045e8160;
  plVar7 = param_1 + 0xb;
  FUN_028ba28c(plVar7,&LAB_028ba32c,param_1);
  FUN_028ba2a4(plVar7,&DAT_00003010 + *(long *)(param_1[10] + 0x30));
  FUN_028ba2e0(plVar7,&DAT_00003010 + *(long *)(param_1[10] + 0x30));
  FUN_028ba318(plVar7);
  plVar7 = (long *)param_1[10];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
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
  puVar2 = PTR_DAT_047dd2c8 + 0x50;
  *param_1 = (long)(PTR_DAT_047dd2c8 + 0x10);
  param_1[4] = (long)puVar2;
  FUN_028ba0c4(param_1 + 6,0);
  puVar2 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x028ba250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


