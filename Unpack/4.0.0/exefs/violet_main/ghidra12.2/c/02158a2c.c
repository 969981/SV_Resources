/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02158a2c; name: FUN_02158a2c
 */


void FUN_02158a2c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  
  *param_1 = (long)&PTR_FUN_04598a88;
  param_1[4] = (long)&PTR_LAB_04598bd8;
  param_1[5] = (long)&DAT_04598c28;
  plVar8 = (long *)param_1[0xe4];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar7 = *plVar3;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_0165d758(param_1 + 0x70);
  if ((long *)param_1[0x6f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6f] + 0x20))();
  }
  pcVar9 = (code *)param_1[0x5d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar9)(param_1 + 0x60);
  }
  pcVar9 = (code *)param_1[0x4d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar9)(param_1 + 0x50);
  }
  pcVar9 = (code *)param_1[0x3d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar9)(param_1 + 0x40);
  }
  pcVar9 = (code *)param_1[0x2d];
  if (pcVar9 != (code *)0x0) {
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    (*pcVar9)(param_1 + 0x30);
  }
  if ((long *)param_1[0x2a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x20))();
  }
  puVar1 = PTR_DAT_047dd098 + 0x160;
  puVar2 = PTR_DAT_047dd098 + 0x1b0;
  *param_1 = (long)(PTR_DAT_047dd098 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 0x20))();
  }
  FUN_0116e6b0(param_1);
  return;
}


