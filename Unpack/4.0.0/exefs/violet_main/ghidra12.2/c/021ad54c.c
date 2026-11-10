/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ad54c; name: FUN_021ad54c
 */


void FUN_021ad54c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  
  *param_1 = (long)&PTR_FUN_045a1f88;
  plVar6 = (long *)param_1[0x68];
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
  FUN_00ff9cb8(param_1 + 0x60);
  pcVar7 = (code *)param_1[0x51];
  if (pcVar7 != (code *)0x0) {
    param_1[0x53] = 0;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    (*pcVar7)(param_1 + 0x54);
  }
  pcVar7 = (code *)param_1[0x41];
  if (pcVar7 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar7)(param_1 + 0x44);
  }
  pcVar7 = (code *)param_1[0x31];
  if (pcVar7 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar7)(param_1 + 0x34);
  }
  pcVar7 = (code *)param_1[0x21];
  if (pcVar7 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar7)(param_1 + 0x24);
  }
  pcVar7 = (code *)param_1[0x11];
  if (pcVar7 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar7)(param_1 + 0x14);
  }
  *param_1 = (long)(PTR_DAT_047d9450 + 0x10);
  plVar6 = param_1 + 10;
  plVar1 = plVar6;
  if (param_1[0xe] != 0) {
    plVar1 = plVar6 + param_1[0xe];
  }
  if (plVar1 != plVar6) {
    (**(code **)(*(long *)param_1[10] + 8))((long *)param_1[10],param_1);
    for (plVar6 = param_1 + 0xb; plVar1 != plVar6; plVar6 = plVar6 + 1) {
      (**(code **)(*(long *)*plVar6 + 8))((long *)*plVar6,param_1);
    }
  }
  if ((long *)param_1[4] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021ad6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x20))();
  return;
}


