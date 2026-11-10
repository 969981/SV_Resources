/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5be78; name: FUN_00e5be78
 */


void FUN_00e5be78(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = param_1[0xb];
  *param_1 = (long)&DAT_045d3808;
  param_1[4] = (long)&PTR_LAB_045d3848;
  if (lVar7 != 0) {
    if (0 < *(int *)(*(long *)(lVar7 + 0x38) + 4)) {
      lVar8 = **(long **)(lVar7 + 0x28);
      lVar7 = *(long *)(param_1[10] + 0x30);
      FUN_00e5c0b4(*(undefined8 *)(lVar8 + 0x80),&DAT_00003010 + lVar7);
      FUN_00e5c070(*(undefined8 *)(lVar8 + 0x88),&DAT_00003010 + lVar7);
      lVar7 = param_1[0xb];
      if (1 < *(int *)(*(long *)(lVar7 + 0x38) + 4)) {
        lVar8 = *(long *)(*(long *)(lVar7 + 0x28) + 8);
        lVar7 = *(long *)(param_1[10] + 0x30);
        FUN_00e5c0b4(*(undefined8 *)(lVar8 + 0x80),&DAT_00003010 + lVar7);
        FUN_00e5c070(*(undefined8 *)(lVar8 + 0x88),&DAT_00003010 + lVar7);
        lVar7 = param_1[0xb];
        if (2 < *(int *)(*(long *)(lVar7 + 0x38) + 4)) {
          lVar8 = 2;
          do {
            lVar9 = *(long *)(*(long *)(lVar7 + 0x28) + lVar8 * 8);
            lVar7 = *(long *)(param_1[10] + 0x30);
            FUN_00e5c0b4(*(undefined8 *)(lVar9 + 0x80),&DAT_00003010 + lVar7);
            FUN_00e5c070(*(undefined8 *)(lVar9 + 0x88),&DAT_00003010 + lVar7);
            lVar7 = param_1[0xb];
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(*(long *)(lVar7 + 0x38) + 4));
        }
      }
    }
    if (*(long *)(lVar7 + 0x48) == *(long *)(lVar7 + 0x40)) {
      FUN_00e5c07c(*(long *)(lVar7 + 0x48),&DAT_00003010 + *(long *)(param_1[10] + 0x30));
    }
    *(undefined8 *)(lVar7 + 0x48) = 0;
  }
  plVar6 = (long *)param_1[10];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
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
  FUN_00e5c0ec(param_1 + 6,0);
  puVar2 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00e5bfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


