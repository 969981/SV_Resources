/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019dd9a8; name: FUN_019dd9a8
 */


void FUN_019dd9a8(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_58 [16];
  long local_48;
  undefined8 local_40;
  long local_38;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 3) = 0;
  local_40 = param_3;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar4 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar9;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar4 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  *param_1 = (long)&DAT_045cf430;
  param_1[4] = (long)&PTR_LAB_045cf4a8;
  *plVar7 = (long)&DAT_045cf4f8;
  plVar10 = param_1 + 9;
  *plVar10 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[8] = param_2;
  plVar7 = (long *)FUN_019de044(param_2);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7);
  }
  plVar8 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x60))();
  }
  lVar6 = param_1[8];
  param_1[9] = (long)plVar7;
  FUN_019de2d8(auStack_58,plVar7);
  lVar6 = FUN_019de434(lVar6,auStack_58,&local_40);
  local_48 = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_38 = param_1[10];
  param_1[10] = 0;
  FUN_019ddbf0(&local_38);
  local_48 = 0;
  param_1[10] = lVar6;
  FUN_019ddbf0(&local_48);
  FUN_0199e4d0(auStack_58);
  FUN_019ddd6c(auStack_58,param_1[10]);
  FUN_019df18c(param_1 + 0xb,auStack_58);
  FUN_019ddc5c(auStack_58);
  return;
}


