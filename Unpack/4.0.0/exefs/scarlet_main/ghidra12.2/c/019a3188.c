/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a3188; name: FUN_019a3188
 */


void FUN_019a3188(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *local_28;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_04530e98;
  param_1[1] = lVar6;
  param_1[4] = (long)&PTR_LAB_04530f10;
  plVar7 = param_1 + 5;
  *plVar7 = (long)&PTR_LAB_04530f60;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x46) = 0;
  puVar3 = PTR_DAT_047d67a8;
  *param_1 = (long)(PTR_DAT_047d67a8 + 0x10);
  param_1[4] = (long)(puVar3 + 0xa0);
  *plVar7 = (long)(puVar3 + 0xf0);
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 8) = 200;
  FUN_0169eee8(&local_28,param_1[1]);
  FUN_019a3338(param_1 + 10,&local_28);
  if (local_28 != (long *)0x0) {
    plVar7 = local_28 + 5;
    do {
      lVar5 = *plVar7;
      iVar4 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_0169fe68(param_1[10]);
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}


