/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01167908; name: FUN_01167908
 */


void FUN_01167908(long *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_58;
  undefined1 local_50 [8];
  undefined1 auStack_48 [8];
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_0459dc40;
  param_1[1] = lVar7;
  param_1[4] = (long)&PTR_LAB_0459dc78;
  plVar11 = param_1 + 6;
  *plVar11 = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar7 = FUN_01167c8c(auStack_48);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == -1) goto LAB_01167c1c;
  }
  plVar8 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar4 = *plVar9;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_01167b24;
  }
  param_1[7] = lVar7;
  plVar8 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x1f0,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_01167e70(plVar9,param_2,&DAT_0485a0a0);
  *(undefined4 *)(plVar9 + 3) = 0x1001f0;
  plVar9[1] = (long)plVar8;
  plVar9[2] = (long)plVar9;
  plVar8 = plVar9 + 5;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  do {
    lVar7 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = (int)lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar7 != -1) {
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 5;
      do {
        lVar7 = *plVar11;
        iVar6 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_01167b24;
    }
    param_1[6] = (long)plVar9;
    local_50[0] = 1;
    lVar7 = param_1[7];
    do {
      lVar4 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_58 = plVar9;
    if ((int)lVar4 != -1) {
      FUN_011686e0(lVar7,&local_58,local_50);
      if (local_58 != (long *)0x0) {
        plVar11 = local_58 + 5;
        do {
          lVar7 = *plVar11;
          iVar6 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_01167b24:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      return;
    }
  }
LAB_01167c1c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


