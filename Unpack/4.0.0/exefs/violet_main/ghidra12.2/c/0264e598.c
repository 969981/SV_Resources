/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0264e598; name: FUN_0264e598
 */


void FUN_0264e598(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long local_80;
  long local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_LAB_045cc588;
  param_1[4] = &PTR_LAB_045cc6d0;
  param_1[5] = &DAT_045cc7f8;
  param_1[6] = &PTR_LAB_045cc850;
  param_1[7] = &PTR_LAB_045cc878;
  param_1[0x24] = &PTR_LAB_045cc8b0;
  uVar6 = FUN_026d5e14(param_1[1],param_2);
  FUN_02644364(auStack_70,uVar6);
  *(undefined4 *)(param_1 + 0x26) = param_5;
  param_1[0x24] = &PTR_LAB_045cc8e0;
  param_1[0x25] = &LAB_02ba6d34;
  FUN_026d5f5c(param_1 + 0x27,auStack_70);
  param_1[0x28] = param_1 + 0x29;
  FUN_02644194(auStack_70);
  *param_1 = &PTR_LAB_045cc588;
  param_1[0x24] = &PTR_LAB_045cc8b0;
  param_1[4] = &PTR_LAB_045cc6d0;
  param_1[5] = &DAT_045cc7f8;
  param_1[6] = &PTR_LAB_045cc850;
  param_1[7] = &PTR_LAB_045cc878;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_026d601c(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  lVar7 = FUN_026d6154(param_1[1]);
  local_78 = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_0264e7b8;
  }
  plVar2 = param_1 + 0x30;
  local_68 = *plVar2;
  *plVar2 = 0;
  FUN_026d627c(&local_68);
  local_78 = 0;
  *plVar2 = lVar7;
  FUN_026d627c(&local_78);
  FUN_026d5f5c(&local_68,param_1 + 0x27);
  local_80 = *plVar2;
  if (local_80 == 0) {
    lVar7 = 0;
  }
  else {
    piVar1 = (int *)(local_80 + 0x28);
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
LAB_0264e7b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar7 = local_80;
  }
  FUN_026d62e8(local_68 + 0x40,lVar7);
  FUN_026d627c(&local_80);
  FUN_02644194(&local_68);
  uVar6 = FUN_026d636c(param_1[1],param_2,plVar2);
  FUN_026d6554(&local_78,uVar6);
  local_68 = param_1[0x31];
  param_1[0x31] = 0;
  FUN_026d6610(&local_68);
  lVar7 = local_78;
  local_78 = 0;
  param_1[0x31] = lVar7;
  FUN_026d6610(&local_78);
  *(undefined1 *)(param_1 + 0x33) = param_3;
  *(undefined1 *)((long)param_1 + 0x199) = param_4;
  param_1[0x34] = *param_2;
  *(undefined1 *)(param_1 + 0x35) = 0;
  FUN_026d6688();
  FUN_026d6834();
  return;
}


