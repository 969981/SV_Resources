/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d7dc8; name: FUN_026d7dc8
 */


void FUN_026d7dc8(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *local_40;
  long *local_38;
  
  param_1[2] = 0;
  puVar3 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar3 = PTR_DAT_047d8c78;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar7 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar7;
  param_1[4] = (long)(puVar3 + 0x88);
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar3 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar8);
  *param_1 = (long)&PTR_FUN_045cca30;
  param_1[4] = (long)&PTR_LAB_045ccaa8;
  *plVar8 = (long)&DAT_045ccaf8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  FUN_026d8094();
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  FUN_026d81cc();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_026d601c();
  param_1[0x1e] = 0;
  FUN_013d34ec(param_1 + 9,0);
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x20,0,1);
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x23,0,1);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_026d8308(param_1 + 0x27);
  FUN_00ddaef8(param_1 + 0x2c,*(undefined8 *)(param_2 + 8),0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = -1;
  uVar6 = FUN_017ad774();
  if ((uVar6 & 1) != 0) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    *(undefined8 *)PTR_DAT_047dab50 = *(undefined8 *)PTR_DAT_047dab48;
    FUN_017ad788(&local_38);
    local_40 = param_1;
    lVar5 = FUN_026d8440(local_38,&local_40);
    param_1[0x2e] = lVar5;
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 5;
      do {
        lVar5 = *plVar8;
        iVar4 = (int)lVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *(int *)plVar8 = iVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


