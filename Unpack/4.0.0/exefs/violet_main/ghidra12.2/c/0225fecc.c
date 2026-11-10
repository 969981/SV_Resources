/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225fecc; name: FUN_0225fecc
 */


void FUN_0225fecc(long *param_1,long *param_2,long param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *local_48;
  long *local_28;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar4 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar4 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_FUN_045ad530;
  param_1[4] = (long)&PTR_LAB_045ad5a8;
  *plVar9 = (long)&DAT_045ad5f8;
  lVar6 = *param_2;
  param_1[8] = lVar6;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  FUN_017ad8c8();
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  FUN_017adb38();
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_017ace30(param_1 + 0x19);
  param_1[0x1e] = 0;
  FUN_013d34ec(param_1 + 9,param_4);
  if ((ulong)(long)((float)param_4 * 0.3 + 1.0) <= param_4) {
    FUN_00d76af4(param_1 + 0x10);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x20,0,1);
  param_1[0x22] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x23,0,1);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_017ada00(param_1 + 0x27);
  FUN_00ddaef8(param_1 + 0x2c,*(undefined8 *)(param_3 + 8),0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = -1;
  uVar7 = FUN_017ad774();
  if ((uVar7 & 1) != 0) {
    if (((*PTR_DAT_047dab40 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047dab40), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047dd780,PTR_DAT_047dab48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dab40);
    }
    *(undefined8 *)PTR_DAT_047dab50 = *(undefined8 *)PTR_DAT_047dab48;
    FUN_017ad788(&local_28);
    local_48 = param_1;
    lVar6 = FUN_0226022c(local_28,&local_48);
    param_1[0x2e] = lVar6;
    if (local_28 != (long *)0x0) {
      plVar9 = local_28 + 5;
      do {
        lVar6 = *plVar9;
        iVar5 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
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


