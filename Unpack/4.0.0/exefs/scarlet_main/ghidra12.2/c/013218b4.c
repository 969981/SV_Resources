/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013218b4; name: FUN_013218b4
 */


void FUN_013218b4(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *local_38;
  
  plVar12 = *(long **)(param_2 + 0x168);
  if (plVar12 == (long *)0x0) {
    plVar12 = *(long **)(param_2 + 8);
  }
  (*DAT_04859f60)(&local_38,&DAT_04859f80);
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
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x140,8);
  puVar5 = PTR_DAT_047d66f8;
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  plVar8[1] = lVar11;
  plVar13 = plVar8 + 5;
  *(int *)plVar13 = 0;
  *plVar8 = (long)&DAT_0459ba28;
  plVar8[10] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[4] = (long)&PTR_LAB_0459ba68;
  plVar8[8] = 0;
  plVar8[9] = 0;
  FUN_01321c78(plVar8 + 0xb);
  if (local_38 != (long *)0x0) {
    plVar10 = local_38 + 5;
    do {
      lVar9 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) goto LAB_01321bdc;
  }
  plVar10 = (long *)plVar8[10];
  plVar8[10] = (long)local_38;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_01321c70;
  }
  *(undefined4 *)(plVar8 + 3) = 0x80140;
  plVar8[1] = (long)plVar12;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  do {
    lVar7 = *plVar13;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *(int *)plVar13 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar7 == -1) {
LAB_01321bdc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar12 = *(long **)(param_2 + 0x1f8);
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 5;
    do {
      lVar7 = *plVar13;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_01321c70;
  }
  *(long **)(param_2 + 0x1f8) = plVar8;
  if (local_38 != (long *)0x0) {
    plVar12 = local_38 + 5;
    do {
      lVar7 = *plVar12;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_01321c70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar7 = *(long *)(param_2 + 0x1f8);
  *param_1 = lVar7;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_01321bdc;
  }
  return;
}


